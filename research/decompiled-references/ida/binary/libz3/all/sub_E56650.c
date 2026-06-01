void __fastcall sub_E56650(_QWORD *a1, unsigned __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  void (__fastcall ***v6)(void *); // rbp
  bool v7; // zf
  void (__fastcall ***v8)(void *); // rbp
  unsigned __int64 v9; // rbp
  __int64 v10; // r12
  _QWORD *v11; // r14
  unsigned int v12; // edx
  __int64 v13; // rax
  int v14; // edx
  unsigned __int64 *v15; // rax
  unsigned int v16; // r14d
  size_t v17; // rdi
  __int64 v18; // rax
  __int64 *v19; // rdi
  __int64 v20; // r15
  __int64 v21; // rdx
  int v22; // r10d
  __int64 *v23; // rax
  __int64 *v24; // r9
  __int64 v25; // r8
  __int64 v26; // r8
  __int64 v27; // r8
  __int64 v28; // r8
  __int64 *v29; // r15
  __int64 v30; // rax
  _QWORD *v31; // rax
  char **exception; // rbp
  _DWORD *v33; // [rsp+10h] [rbp-98h]
  unsigned int v34; // [rsp+1Ch] [rbp-8Ch]
  __m256i v35; // [rsp+30h] [rbp-78h] BYREF
  __int64 v36[11]; // [rsp+50h] [rbp-58h] BYREF

  v6 = (void (__fastcall ***)(void *))a1[78];
  if ( v6 )
  {
    v7 = (*((_DWORD *)v6 + 4))-- == 1;
    if ( v7 )
    {
      (**v6)(v6);
      sub_186B220(v6);
    }
  }
  v8 = (void (__fastcall ***)(void *))a1[81];
  a1[78] = 0;
  if ( v8 )
  {
    v7 = (*((_DWORD *)v8 + 2))-- == 1;
    if ( v7 )
    {
      (**v8)(v8);
      sub_186B220(v8);
    }
  }
  a1[81] = 0;
  v9 = a1[12];
  if ( !*(_DWORD *)(v9 + 712) )
  {
    *(__m128i *)v35.m256i_i8 = _mm_unpacklo_epi64((__m128i)v9, (__m128i)a2);
    *(_OWORD *)&v35.m256i_u64[2] = 0;
    if ( a2 )
      ++*(_DWORD *)(a2 + 8);
    v10 = 0;
    goto LABEL_11;
  }
  v30 = sub_15DE060(a1[12], a2, a3, a4, a5);
  v9 = a1[12];
  *(_OWORD *)&v35.m256i_u64[2] = (unsigned __int64)v30;
  v10 = v30;
  *(__m128i *)v35.m256i_i8 = _mm_unpacklo_epi64((__m128i)v9, (__m128i)a2);
  if ( a2 )
    ++*(_DWORD *)(a2 + 8);
  if ( !v30 )
  {
LABEL_11:
    v11 = (_QWORD *)a1[14];
    if ( v11 )
      goto LABEL_12;
LABEL_29:
    v31 = (_QWORD *)sub_186B270(0x48u);
    v11 = v31 + 1;
    *v31 = 2;
    v14 = 1;
    a1[14] = v31 + 1;
    v15 = v31 + 1;
    goto LABEL_14;
  }
  v11 = (_QWORD *)a1[14];
  ++*(_DWORD *)(v30 + 8);
  if ( !v11 )
    goto LABEL_29;
LABEL_12:
  v12 = *((_DWORD *)v11 - 1);
  if ( v12 == *((_DWORD *)v11 - 2) )
  {
    v16 = (3 * v12 + 1) >> 1;
    v34 = v16;
    v17 = 32 * v16 + 8;
    if ( 32 * v12 + 8 >= (unsigned int)v17 || v12 >= v16 )
    {
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0(v36, "Overflow encountered when expanding vector");
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, v36);
      sub_233E40((__int64)v36);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v18 = sub_186B270(v17);
    v19 = (__int64 *)a1[14];
    v33 = (_DWORD *)v18;
    v11 = (_QWORD *)(v18 + 8);
    if ( v19 )
    {
      v20 = *((unsigned int *)v19 - 1);
      v21 = v18 + 8;
      *(_DWORD *)(v18 + 4) = v20;
      v22 = v20;
      v23 = v19;
      v24 = &v19[4 * v20];
      if ( v19 != v24 )
      {
        do
        {
          v25 = *v23;
          v23 += 4;
          v21 += 32;
          *(_QWORD *)(v21 - 32) = v25;
          v26 = *(v23 - 3);
          *(v23 - 3) = 0;
          *(_QWORD *)(v21 - 24) = v26;
          v27 = *(v23 - 2);
          *(v23 - 2) = 0;
          *(_QWORD *)(v21 - 16) = v27;
          v28 = *(v23 - 1);
          *(v23 - 1) = 0;
          *(_QWORD *)(v21 - 8) = v28;
        }
        while ( v23 != v24 );
      }
      v29 = &v19[4 * v20];
      if ( v22 )
      {
        do
        {
          sub_234F80(v19);
          v19 += 4;
        }
        while ( v19 != v29 );
        v19 = (__int64 *)a1[14];
      }
      sub_186B220(v19 - 1);
      v15 = &v11[4 * (unsigned int)v33[1]];
      v14 = v33[1] + 1;
    }
    else
    {
      *(_DWORD *)(v18 + 4) = 0;
      v14 = 1;
      v15 = (unsigned __int64 *)(v18 + 8);
    }
    a1[14] = v11;
    *v33 = v34;
  }
  else
  {
    v13 = v12;
    v14 = v12 + 1;
    v15 = &v11[4 * v13];
  }
LABEL_14:
  *v15 = v9;
  v15[1] = a2;
  v15[2] = v10;
  v15[3] = 0;
  *((_DWORD *)v11 - 1) = v14;
  *(_OWORD *)&v35.m256i_u64[1] = 0;
  sub_234F80(v35.m256i_i64);
}

