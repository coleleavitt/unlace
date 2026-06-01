__int64 __fastcall sub_644270(__int64 a1, __int64 a2)
{
  __m128i *exception; // rbx
  char *v3; // rax
  _QWORD *v6; // rdi
  unsigned int v7; // eax
  __int64 v8; // rdx
  __int64 result; // rax
  _QWORD *v10; // rdx
  unsigned int v11; // r12d
  size_t v12; // rsi
  unsigned int *v13; // rax
  __int64 v14; // rdx
  _QWORD *v15; // rax

  v6 = *(_QWORD **)(a1 + 24);
  if ( v6 )
  {
    v7 = *((_DWORD *)v6 - 1);
    if ( v7 == *((_DWORD *)v6 - 2) )
    {
      v11 = (3 * v7 + 1) >> 1;
      v12 = 8 * v11 + 8;
      if ( 8 * v7 + 8 >= (unsigned int)v12 || v7 >= v11 )
      {
        exception = (__m128i *)__cxa_allocate_exception(0x28u);
        v3 = (char *)operator new(0x2Bu);
        strcpy(v3, "Overflow encountered when expanding vector");
        exception->m128i_i64[1] = (__int64)v3;
        exception->m128i_i64[0] = (__int64)off_1C63128;
        exception[1] = _mm_unpacklo_epi64((__m128i)0x2AuLL, (__m128i)0x2AuLL);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v13 = (unsigned int *)sub_186B300(v6 - 1, v12);
      v14 = v13[1];
      v6 = v13 + 2;
      *v13 = v11;
      *(_QWORD *)(a1 + 24) = v13 + 2;
      LODWORD(v13) = v14;
      v10 = &v6[v14];
      result = (unsigned int)((_DWORD)v13 + 1);
    }
    else
    {
      v8 = v7;
      result = v7 + 1;
      v10 = &v6[v8];
    }
  }
  else
  {
    v15 = (_QWORD *)sub_186B270(0x18u);
    v6 = v15 + 1;
    *v15 = 2;
    result = 1;
    *(_QWORD *)(a1 + 24) = v6;
    v10 = v6;
  }
  *v10 = a2;
  *((_DWORD *)v6 - 1) = result;
  *(_QWORD *)(a2 + 16) = a1;
  *(_BYTE *)(a1 + 16) = 1;
  return result;
}

