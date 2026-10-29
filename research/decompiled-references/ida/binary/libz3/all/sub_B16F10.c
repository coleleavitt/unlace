__int64 __fastcall sub_B16F10(__int64 a1, unsigned int a2, int a3)
{
  __int64 v4; // rbx
  const double *v5; // rbp
  __int64 *v6; // r15
  __int64 v7; // rax
  __m128i v8; // xmm0
  __int64 v9; // rax
  int v10; // ecx
  unsigned __int64 *v11; // rax
  __int64 v12; // rdi
  unsigned int v13; // esi
  __m128i v14; // kr00_16
  unsigned __int64 v15; // rdx
  unsigned int v16; // ecx
  unsigned int v17; // r9d
  size_t v18; // rsi
  unsigned int *v19; // rax
  unsigned __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rax
  unsigned int *v23; // r15
  __int64 v24; // rdi
  __int64 v25; // rdx
  __int64 v26; // rax
  int v27; // ebp
  _QWORD *v28; // rax
  char **exception; // r15
  __m128i v30; // [rsp+8h] [rbp-A8h] BYREF
  unsigned __int64 v31; // [rsp+18h] [rbp-98h]
  unsigned int v32; // [rsp+24h] [rbp-8Ch]
  _DWORD v33[2]; // [rsp+30h] [rbp-80h] BYREF
  __int64 v34[2]; // [rsp+38h] [rbp-78h] BYREF
  __m128i v35; // [rsp+48h] [rbp-68h] BYREF
  __int64 v36[11]; // [rsp+58h] [rbp-58h] BYREF

  if ( a2 == a3 )
    return a2;
  v4 = 0;
  v5 = *(const double **)(a1 + 8);
  ++*(_DWORD *)(a1 + 20);
  v33[0] = a2;
  v6 = (__int64 *)v33;
  v7 = *((_QWORD *)v5 + 1);
  v33[1] = a3;
  v8 = (__m128i)_mm_loadh_ps(v5 + 1);
  v34[0] = v7;
  do
  {
    while ( 1 )
    {
      v12 = *(_QWORD *)v5;
      v13 = *(_DWORD *)v6;
      v35 = v8;
      sub_894B80(v12, v13, v35.m128i_i64);
      v8 = _mm_load_si128(&v35);
      v14 = v35;
      v15 = v8.m128i_i64[0];
      if ( v8.m128i_i64[0] )
        ++*(_DWORD *)(v8.m128i_i64[0] + 8);
      if ( !v4 )
      {
        v31 = v8.m128i_i64[0];
        v30 = v8;
        v28 = (_QWORD *)sub_186B270(0x18u);
        v4 = (__int64)(v28 + 1);
        v8 = _mm_load_si128(&v30);
        v15 = v31;
        *v28 = 2;
        v10 = 1;
        v11 = v28 + 1;
        goto LABEL_5;
      }
      v16 = *(_DWORD *)(v4 - 4);
      if ( v16 == *(_DWORD *)(v4 - 8) )
        break;
      v9 = v16;
      v10 = v16 + 1;
      v11 = (unsigned __int64 *)(v4 + 8 * v9);
LABEL_5:
      v6 = (__int64 *)((char *)v6 + 4);
      *v11 = v15;
      *(_DWORD *)(v4 - 4) = v10;
      if ( v6 == v34 )
        goto LABEL_13;
    }
    v17 = (3 * v16 + 1) >> 1;
    v18 = 8 * v17 + 8;
    if ( 8 * v16 + 8 >= (unsigned int)v18 || v16 >= v17 )
    {
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_B035D0(v36, "Overflow encountered when expanding vector");
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, v36);
      sub_233E40((__int64)v36);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v32 = (3 * v16 + 1) >> 1;
    v31 = v8.m128i_i64[0];
    v30 = v8;
    v19 = (unsigned int *)sub_186B300((void *)(v4 - 8), v18);
    v4 = (__int64)(v19 + 2);
    v20 = v31;
    v6 = (__int64 *)((char *)v6 + 4);
    v8 = _mm_load_si128(&v30);
    *v19 = v32;
    v21 = v19[1];
    *(_QWORD *)(v4 + 8 * v21) = v20;
    *(_DWORD *)(v4 - 4) = v21 + 1;
  }
  while ( v6 != v34 );
LABEL_13:
  v22 = sub_15E1AF0(*((_QWORD *)v5 + 1));
  v23 = (unsigned int *)v22;
  if ( v22 )
    ++*(_DWORD *)(v22 + 8);
  sub_B035B0(v14.m128i_i64[0], v14.m128i_i64[1]);
  v24 = *(_QWORD *)v5;
  v25 = *(_QWORD *)(*(_QWORD *)v5 + 8832LL);
  if ( !v25
    || (v26 = *v23, (unsigned int)v26 >= *(_DWORD *)(v25 - 4))
    || (v27 = *(_DWORD *)(v25 + 4 * v26), v27 == 0x7FFFFFFF) )
  {
    v27 = sub_B67520(v24, v23);
  }
  sub_B035B0((__int64)v23, v14.m128i_i64[1]);
  v34[1] = v4;
  sub_2334C0(v34);
  return (unsigned int)(2 * v27);
}

