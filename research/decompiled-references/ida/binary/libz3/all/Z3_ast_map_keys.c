_QWORD *__fastcall Z3_ast_map_keys(__int64 a1, __int64 a2)
{
  __m128i *exception; // r15
  char *v3; // rax
  char v4; // bp
  __int64 v5; // rax
  __int64 v6; // r15
  _QWORD *v7; // rbx
  __int64 *v8; // r15
  __int64 v9; // rdx
  __int64 *v10; // r13
  __int64 v11; // r14
  _QWORD *v12; // rcx
  unsigned int v13; // eax
  __int64 v14; // rsi
  int v15; // eax
  _QWORD *v16; // rsi
  __int64 *i; // rax
  unsigned int v18; // r8d
  size_t v19; // rsi
  unsigned int v20; // r12d
  unsigned int *v21; // rax
  __int64 v22; // rsi
  _QWORD *v24; // rax
  _QWORD v25[2]; // [rsp+10h] [rbp-58h] BYREF
  __int64 v26; // [rsp+20h] [rbp-48h] BYREF

  v4 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v4 )
    sub_29ECA0(a1);
  *(_DWORD *)(a1 + 1520) = 0;
  v5 = sub_186B270(0x28u);
  v6 = *(_QWORD *)(a2 + 24);
  v7 = (_QWORD *)v5;
  sub_2518F0(v5, a1);
  v7[3] = v6;
  *v7 = &off_1C4CA20;
  v7[4] = 0;
  sub_24FBE0(a1, (__int64)v7);
  v8 = *(__int64 **)(a2 + 32);
  v9 = 2LL * *(unsigned int *)(a2 + 40);
  v10 = &v8[v9];
  if ( v8 != &v8[v9] )
  {
    while ( (unsigned __int64)*v8 <= 1 )
    {
      v8 += 2;
      if ( v10 == v8 )
        goto LABEL_22;
    }
    if ( v10 != v8 )
    {
      v11 = *v8;
      v12 = (_QWORD *)v7[4];
      if ( *v8 )
        ++*(_DWORD *)(v11 + 8);
      if ( v12 )
      {
        v13 = *((_DWORD *)v12 - 1);
        if ( v13 == *((_DWORD *)v12 - 2) )
          goto LABEL_19;
LABEL_12:
        v14 = v13;
        v15 = v13 + 1;
        v16 = &v12[v14];
      }
      else
      {
        v24 = (_QWORD *)sub_186B270(0x18u);
        v12 = v24 + 1;
        *v24 = 2;
        v15 = 1;
        v7[4] = v12;
        v16 = v12;
      }
      *v16 = v11;
      *((_DWORD *)v12 - 1) = v15;
      for ( i = v8 + 2; v10 != v8 + 2; i = v8 + 2 )
      {
        while ( 1 )
        {
          v11 = *i;
          v8 = i;
          if ( (unsigned __int64)*i > 1 )
            break;
          i += 2;
          if ( v10 == i )
            goto LABEL_22;
        }
        if ( v10 == i )
          break;
        ++*(_DWORD *)(v11 + 8);
        v13 = *((_DWORD *)v12 - 1);
        if ( v13 != *((_DWORD *)v12 - 2) )
          goto LABEL_12;
LABEL_19:
        v18 = (3 * v13 + 1) >> 1;
        v19 = 8 * v18 + 8;
        v20 = v18;
        if ( 8 * v13 + 8 >= (unsigned int)v19 || v13 >= v18 )
        {
          exception = (__m128i *)__cxa_allocate_exception(0x28u);
          v3 = (char *)operator new(0x2Bu);
          strcpy(v3, "Overflow encountered when expanding vector");
          exception->m128i_i64[1] = (__int64)v3;
          exception->m128i_i64[0] = (__int64)off_1C63128;
          v25[0] = &v26;
          exception[1] = _mm_unpacklo_epi64((__m128i)0x2AuLL, (__m128i)0x2AuLL);
          v25[1] = 0;
          v26 = 0;
          sub_233E40((__int64)v25);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v21 = (unsigned int *)sub_186B300(v12 - 1, v19);
        v22 = v21[1];
        v12 = v21 + 2;
        *v21 = v20;
        v7[4] = v21 + 2;
        *(_QWORD *)&v21[2 * v22 + 2] = v11;
        v21[1] = v22 + 1;
      }
    }
  }
LABEL_22:
  if ( v4 )
  {
    sub_2BB620(v7);
    byte_1C7EBA0 = 1;
  }
  return v7;
}

