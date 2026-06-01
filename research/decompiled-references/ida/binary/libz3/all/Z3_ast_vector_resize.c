char __fastcall Z3_ast_vector_resize(__int64 a1, __int64 a2, unsigned int a3)
{
  __m128i *exception; // r12
  char *v4; // rax
  char *v7; // rax
  char v8; // r13
  _QWORD *v9; // rdx
  __int64 v10; // r12
  unsigned int v11; // ecx
  size_t v12; // rsi
  unsigned int v13; // r15d
  unsigned int *v14; // rax
  __int64 v15; // r12
  _QWORD *v16; // rdi
  __int64 v17; // rdx
  unsigned __int64 v18; // r15
  __int64 *v19; // r12
  __int64 v20; // rsi
  __int64 v21; // rdi
  _QWORD *v23; // rax
  _QWORD v25[2]; // [rsp+0h] [rbp-58h] BYREF
  __int64 v26; // [rsp+10h] [rbp-48h] BYREF

  v7 = &byte_1C7EBA0;
  v8 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v8 )
  {
    sub_29E970();
    *(_DWORD *)(a1 + 1520) = 0;
    v9 = *(_QWORD **)(a2 + 32);
    if ( v9 )
    {
      v10 = *((unsigned int *)v9 - 1);
      if ( a3 < (unsigned int)v10 )
      {
LABEL_19:
        LOBYTE(v7) = a3;
        v18 = (unsigned __int64)&v9[v10];
        v19 = &v9[a3];
        if ( (unsigned __int64)v19 >= v18 )
          goto LABEL_27;
        do
        {
          while ( 1 )
          {
            v20 = *v19;
            if ( *v19 )
            {
              v21 = *(_QWORD *)(a2 + 24);
              if ( (*(_DWORD *)(v20 + 8))-- == 1 )
                break;
            }
            if ( (unsigned __int64)++v19 >= v18 )
              goto LABEL_25;
          }
          LOBYTE(v7) = sub_15D7BC0(v21, v20);
          ++v19;
        }
        while ( (unsigned __int64)v19 < v18 );
LABEL_25:
        v9 = *(_QWORD **)(a2 + 32);
        if ( v9 )
        {
          v10 = *((unsigned int *)v9 - 1);
          if ( (unsigned int)v10 < a3 )
            goto LABEL_14;
LABEL_27:
          *((_DWORD *)v9 - 1) = a3;
          goto LABEL_17;
        }
        if ( !a3 )
          goto LABEL_17;
LABEL_29:
        v23 = (_QWORD *)sub_186B270(0x18u);
        v9 = v23 + 1;
        *v23 = 2;
        v10 = 0;
        *(_QWORD *)(a2 + 32) = v23 + 1;
        goto LABEL_14;
      }
      if ( (unsigned int)v10 < a3 )
        goto LABEL_14;
      *((_DWORD *)v9 - 1) = a3;
    }
    else if ( a3 )
    {
      goto LABEL_29;
    }
LABEL_10:
    LOBYTE(v7) = byte_1C7EBA0;
    byte_1C7EBA0 = 1;
    return (char)v7;
  }
  *(_DWORD *)(a1 + 1520) = 0;
  v9 = *(_QWORD **)(a2 + 32);
  if ( !v9 )
  {
    if ( !a3 )
      return (char)v7;
    goto LABEL_29;
  }
  v10 = *((unsigned int *)v9 - 1);
  if ( a3 < (unsigned int)v10 )
    goto LABEL_19;
  if ( (unsigned int)v10 < a3 )
  {
LABEL_14:
    while ( 1 )
    {
      LODWORD(v7) = *((_DWORD *)v9 - 2);
      if ( (unsigned int)v7 >= a3 )
        break;
      v11 = (unsigned int)(3 * (_DWORD)v7 + 1) >> 1;
      v12 = 8 * v11 + 8;
      v13 = v11;
      if ( 8 * (int)v7 + 8 >= (unsigned int)v12 || (unsigned int)v7 >= v11 )
      {
        exception = (__m128i *)__cxa_allocate_exception(0x28u);
        v4 = (char *)operator new(0x2Bu);
        strcpy(v4, "Overflow encountered when expanding vector");
        exception->m128i_i64[1] = (__int64)v4;
        exception->m128i_i64[0] = (__int64)off_1C63128;
        v25[0] = &v26;
        exception[1] = _mm_unpacklo_epi64((__m128i)0x2AuLL, (__m128i)0x2AuLL);
        v25[1] = 0;
        v26 = 0;
        sub_233E40((__int64)v25);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v14 = (unsigned int *)sub_186B300(v9 - 1, v12);
      v9 = v14 + 2;
      *v14 = v13;
      *(_QWORD *)(a2 + 32) = v14 + 2;
    }
    v15 = 8 * v10;
    *((_DWORD *)v9 - 1) = a3;
    v16 = &v9[(unsigned __int64)v15 / 8];
    v17 = 8LL * a3;
    if ( v15 != v17 )
      LOBYTE(v7) = (unsigned __int8)memset(v16, 0, v17 - v15);
LABEL_17:
    if ( !v8 )
      return (char)v7;
    goto LABEL_10;
  }
  *((_DWORD *)v9 - 1) = a3;
  return (char)v7;
}

