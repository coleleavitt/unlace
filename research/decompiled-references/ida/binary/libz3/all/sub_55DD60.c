_QWORD *__fastcall sub_55DD60(__int64 a1, __int64 a2, int a3, int *a4)
{
  __m128i *exception; // rbx
  char *v5; // rax
  _QWORD *v8; // r12
  int *v9; // rbp
  _QWORD *v10; // rax
  _DWORD *v11; // rax
  _DWORD *v12; // rdx
  int v13; // ecx
  int v14; // edi
  __int64 v15; // rax
  unsigned int v16; // ecx
  unsigned int v18; // r13d
  size_t v19; // rsi
  unsigned int *v20; // rax
  __int64 v21; // rax
  _QWORD v22[2]; // [rsp+0h] [rbp-48h] BYREF
  __int64 v23; // [rsp+10h] [rbp-38h] BYREF

  if ( *(_QWORD *)(a2 + 8) != a1 )
    return nullptr;
  v8 = (_QWORD *)sub_186B270(0x10u);
  *v8 = &off_1C50D58;
  v8[1] = 0;
  if ( a3 )
  {
    v9 = &a4[a3];
    v10 = (_QWORD *)sub_186B270(0x10u);
    *v10 = 2;
    v11 = v10 + 1;
    v8[1] = v11;
    v12 = v11;
    while ( 1 )
    {
      v13 = *a4++;
      *v11 = v13;
      v14 = *(v12 - 1);
      v15 = (unsigned int)(v14 + 1);
      *(v12 - 1) = v15;
      if ( v9 == a4 )
        break;
      v16 = *(v12 - 2);
      if ( v16 == (_DWORD)v15 )
      {
        v18 = (3 * v16 + 1) >> 1;
        v19 = 4 * v18 + 8;
        if ( 4 * v14 + 12 >= (unsigned int)v19 || v16 >= v18 )
        {
          exception = (__m128i *)__cxa_allocate_exception(0x28u);
          v5 = (char *)operator new(0x2Bu);
          strcpy(v5, "Overflow encountered when expanding vector");
          exception->m128i_i64[1] = (__int64)v5;
          exception->m128i_i64[0] = (__int64)off_1C63128;
          v22[0] = &v23;
          exception[1] = _mm_unpacklo_epi64((__m128i)0x2AuLL, (__m128i)0x2AuLL);
          v22[1] = 0;
          v23 = 0;
          sub_233E40((__int64)v22);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v20 = (unsigned int *)sub_186B300(v12 - 2, v19);
        v12 = v20 + 2;
        *v20 = v18;
        v21 = v20[1];
        v8[1] = v12;
        v11 = &v12[v21];
      }
      else
      {
        v11 = &v12[v15];
      }
    }
  }
  return v8;
}

