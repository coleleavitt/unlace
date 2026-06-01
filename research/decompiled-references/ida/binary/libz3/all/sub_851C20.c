__int64 __fastcall sub_851C20(__int64 a1, unsigned int *a2)
{
  __m128i *exception; // rbx
  char *v3; // rax
  __int64 v6; // rdi
  __int64 (__fastcall *v7)(__int64, unsigned int *); // rax
  __int64 v8; // rax
  char *v9; // rdx
  _QWORD *v11; // rdx
  __int64 v12; // rax
  unsigned int **v13; // rax
  unsigned int v14; // r12d
  size_t v15; // rsi
  unsigned int *v16; // rax
  __int64 v17; // rax
  _QWORD *v18; // rax
  _QWORD v19[2]; // [rsp+0h] [rbp-38h] BYREF
  __int64 v20; // [rsp+10h] [rbp-28h] BYREF

  v6 = a1 - 48;
  v7 = *(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)(a1 - 48) + 584LL);
  if ( v7 == sub_851360 )
  {
    v8 = sub_7E4F00(v6, a2);
    if ( v8 )
    {
      v9 = (char *)(v8 + 88);
      if ( *(int *)(v8 + 88) >> 8 != -1 )
      {
        while ( *(_DWORD *)(a1 - 36) != *v9 )
        {
          v9 = *((char **)v9 + 1);
          if ( !v9 )
            goto LABEL_10;
        }
        if ( *(int *)v9 >> 8 != -1 )
          return 1;
      }
    }
  }
  else if ( ((unsigned __int8 (__fastcall *)(__int64))v7)(v6) )
  {
    return 1;
  }
LABEL_10:
  v11 = *(_QWORD **)(a1 + 16);
  if ( v11 )
  {
    v12 = *((unsigned int *)v11 - 1);
    if ( (_DWORD)v12 == *((_DWORD *)v11 - 2) )
    {
      v14 = (unsigned int)(3 * v12 + 1) >> 1;
      v15 = 16 * v14 + 8;
      if ( 16 * (int)v12 + 8 >= (unsigned int)v15 || (unsigned int)v12 >= v14 )
      {
        exception = (__m128i *)__cxa_allocate_exception(0x28u);
        v3 = (char *)operator new(0x2Bu);
        strcpy(v3, "Overflow encountered when expanding vector");
        exception->m128i_i64[1] = (__int64)v3;
        exception->m128i_i64[0] = (__int64)off_1C63128;
        v19[0] = &v20;
        exception[1] = _mm_unpacklo_epi64((__m128i)0x2AuLL, (__m128i)0x2AuLL);
        v19[1] = 0;
        v20 = 0;
        sub_233E40((__int64)v19);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v16 = (unsigned int *)sub_186B300(v11 - 1, v15);
      v11 = v16 + 2;
      *v16 = v14;
      v17 = v16[1];
      *(_QWORD *)(a1 + 16) = v11;
      v13 = (unsigned int **)&v11[2 * v17];
    }
    else
    {
      v13 = (unsigned int **)&v11[2 * v12];
    }
  }
  else
  {
    v18 = (_QWORD *)sub_186B270(0x28u);
    v11 = v18 + 1;
    *v18 = 2;
    *(_QWORD *)(a1 + 16) = v18 + 1;
    v13 = (unsigned int **)(v18 + 1);
  }
  *v13 = a2;
  *((_DWORD *)v13 + 2) = 0;
  ++*((_DWORD *)v11 - 1);
  return 0;
}

