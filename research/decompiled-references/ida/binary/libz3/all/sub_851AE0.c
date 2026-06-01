__int64 __fastcall sub_851AE0(__int64 a1, unsigned int *a2)
{
  __m128i *exception; // rbx
  char *v3; // rax
  unsigned __int8 (*v5)(void); // rax
  __int64 v6; // rax
  char *v7; // rdx
  _QWORD *v9; // rdx
  __int64 v10; // rax
  unsigned int **v11; // rax
  unsigned int v12; // r12d
  size_t v13; // rsi
  unsigned int *v14; // rax
  __int64 v15; // rax
  _QWORD *v16; // rax
  _QWORD v17[2]; // [rsp+0h] [rbp-38h] BYREF
  __int64 v18; // [rsp+10h] [rbp-28h] BYREF

  v5 = *(unsigned __int8 (**)(void))(*(_QWORD *)a1 + 584LL);
  if ( (char *)v5 == (char *)sub_851360 )
  {
    v6 = sub_7E4F00(a1, a2);
    if ( v6 )
    {
      v7 = (char *)(v6 + 88);
      if ( *(int *)(v6 + 88) >> 8 != -1 )
      {
        while ( *(_DWORD *)(a1 + 12) != *v7 )
        {
          v7 = *((char **)v7 + 1);
          if ( !v7 )
            goto LABEL_10;
        }
        if ( *(int *)v7 >> 8 != -1 )
          return 1;
      }
    }
  }
  else if ( v5() )
  {
    return 1;
  }
LABEL_10:
  v9 = *(_QWORD **)(a1 + 64);
  if ( v9 )
  {
    v10 = *((unsigned int *)v9 - 1);
    if ( (_DWORD)v10 == *((_DWORD *)v9 - 2) )
    {
      v12 = (unsigned int)(3 * v10 + 1) >> 1;
      v13 = 16 * v12 + 8;
      if ( 16 * (int)v10 + 8 >= (unsigned int)v13 || (unsigned int)v10 >= v12 )
      {
        exception = (__m128i *)__cxa_allocate_exception(0x28u);
        v3 = (char *)operator new(0x2Bu);
        strcpy(v3, "Overflow encountered when expanding vector");
        exception->m128i_i64[1] = (__int64)v3;
        exception->m128i_i64[0] = (__int64)off_1C63128;
        v17[0] = &v18;
        exception[1] = _mm_unpacklo_epi64((__m128i)0x2AuLL, (__m128i)0x2AuLL);
        v17[1] = 0;
        v18 = 0;
        sub_233E40((__int64)v17);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v14 = (unsigned int *)sub_186B300(v9 - 1, v13);
      v9 = v14 + 2;
      *v14 = v12;
      v15 = v14[1];
      *(_QWORD *)(a1 + 64) = v9;
      v11 = (unsigned int **)&v9[2 * v15];
    }
    else
    {
      v11 = (unsigned int **)&v9[2 * v10];
    }
  }
  else
  {
    v16 = (_QWORD *)sub_186B270(0x28u);
    v9 = v16 + 1;
    *v16 = 2;
    *(_QWORD *)(a1 + 64) = v16 + 1;
    v11 = (unsigned int **)(v16 + 1);
  }
  *v11 = a2;
  *((_DWORD *)v11 + 2) = 0;
  ++*((_DWORD *)v9 - 1);
  return 0;
}

