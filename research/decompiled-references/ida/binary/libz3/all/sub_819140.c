__int64 __fastcall sub_819140(_QWORD *a1, unsigned int a2, unsigned __int64 a3)
{
  char **v3; // rbp
  char **exception; // rbp
  __int64 v7; // rbp
  unsigned int v8; // eax
  __int64 v9; // rax
  __int64 v10; // r14
  _QWORD *v11; // rcx
  _QWORD *v12; // rdx
  _QWORD *v13; // r15
  unsigned int v14; // eax
  __int64 v15; // rcx
  int v16; // eax
  unsigned __int64 *v17; // rcx
  _QWORD *v18; // rax
  _QWORD *v19; // rdx
  _QWORD *v20; // rcx
  unsigned int v21; // eax
  __int64 v22; // rsi
  int v23; // eax
  _QWORD *v24; // rsi
  __int64 *v25; // rbp
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  unsigned int v31; // r8d
  size_t v32; // rsi
  unsigned int *v33; // rax
  __int64 v34; // rcx
  unsigned int v35; // r15d
  size_t v36; // rsi
  unsigned int *v37; // rax
  __int64 v38; // rsi
  _QWORD *v39; // rax
  _QWORD *v40; // rax
  _QWORD *v41; // [rsp+0h] [rbp-78h]
  unsigned int v42; // [rsp+Ch] [rbp-6Ch]
  __int64 v43; // [rsp+20h] [rbp-58h] BYREF
  __m128i v44; // [rsp+28h] [rbp-50h]

  do
  {
    v7 = a2;
    v8 = a2;
    a2 = *(_DWORD *)(a1[43] + 4LL * a2);
  }
  while ( v8 != a2 );
  v9 = a1[23];
  v10 = a1[10];
  v11 = *(_QWORD **)(v9 + 8 * v7);
  v12 = (_QWORD *)v11[3];
  v13 = v11 + 3;
  if ( v12 )
  {
    v14 = *((_DWORD *)v12 - 1);
    if ( v14 == *((_DWORD *)v12 - 2) )
    {
      v31 = (3 * v14 + 1) >> 1;
      v32 = 8 * v31 + 8;
      if ( 8 * v14 + 8 >= (unsigned int)v32 || v14 >= v31 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(&v43, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, &v43);
        sub_233E40((__int64)&v43);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v42 = (3 * v14 + 1) >> 1;
      v41 = v11;
      v33 = (unsigned int *)sub_186B300(v12 - 1, v32);
      v12 = v33 + 2;
      v41[3] = v33 + 2;
      v34 = v33[1];
      *v33 = v42;
      LODWORD(v33) = v34;
      v17 = &v12[v34];
      v16 = (_DWORD)v33 + 1;
    }
    else
    {
      v15 = v14;
      v16 = v14 + 1;
      v17 = &v12[v15];
    }
  }
  else
  {
    v41 = *(_QWORD **)(v9 + 8 * v7);
    v40 = (_QWORD *)sub_186B270(0x18u);
    v12 = v40 + 1;
    *v40 = 2;
    v16 = 1;
    v41[3] = v12;
    v17 = v12;
  }
  *v17 = a3;
  *((_DWORD *)v12 - 1) = v16;
  v18 = (_QWORD *)sub_180C100(v10 + 2144, 16);
  v19 = *(_QWORD **)(v10 + 2128);
  v20 = v18;
  *v18 = off_1C54F38;
  v18[1] = v13;
  if ( v19 )
  {
    v21 = *((_DWORD *)v19 - 1);
    if ( v21 == *((_DWORD *)v19 - 2) )
    {
      v35 = (3 * v21 + 1) >> 1;
      v36 = 8 * v35 + 8;
      if ( 8 * v21 + 8 >= (unsigned int)v36 || v21 >= v35 )
      {
        v3 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(&v43, "Overflow encountered when expanding vector");
        *v3 = (char *)off_1C63128;
        sub_2333C0(v3 + 1, &v43);
        sub_233E40((__int64)&v43);
        __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v41 = v20;
      v37 = (unsigned int *)sub_186B300(v19 - 1, v36);
      v20 = v41;
      v38 = v37[1];
      v19 = v37 + 2;
      *(_QWORD *)(v10 + 2128) = v37 + 2;
      *v37 = v35;
      LODWORD(v37) = v38;
      v24 = &v19[v38];
      v23 = (_DWORD)v37 + 1;
    }
    else
    {
      v22 = v21;
      v23 = v21 + 1;
      v24 = &v19[v22];
    }
  }
  else
  {
    v41 = v18;
    v39 = (_QWORD *)sub_186B270(0x18u);
    v20 = v41;
    v19 = v39 + 1;
    *v39 = 2;
    v23 = 1;
    *(_QWORD *)(v10 + 2128) = v19;
    v24 = v19;
  }
  *v24 = v20;
  *((_DWORD *)v19 - 1) = v23;
  v25 = *(__int64 **)(a1[11] + 8 * v7);
  if ( (unsigned __int8)sub_818210((__int64)a1, *v25) )
  {
    v43 = 1;
    v44 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v25, (__m128i)a3);
    sub_865240(a1, &v43, v26, v27, v28, v29, v41);
  }
  return sub_817F60((__int64)a1, a2);
}

