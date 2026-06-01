void __fastcall sub_F2CE80(__int64 a1, _BYTE *a2, __int64 a3, __int64 a4, __int64 a5)
{
  bool v6; // zf
  __m128i v7; // xmm1
  __m128i v8; // xmm2
  __int64 v9; // rax
  __int64 v10; // rax
  __m128i v11; // xmm3
  __m128i *v12; // rdx
  __int64 v13; // rdx
  __m128i *v14; // rdi
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rax
  __m128i *v18; // r13
  __int64 v19; // rax
  __int64 v20; // rax
  __m128i v21; // xmm5
  __m128i *v22; // rdx
  __m128i v23; // xmm0
  void (__fastcall *v24)(__m128i *, __m128i *, __int64); // rax
  __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rdi
  __int64 v31; // rdi
  void (__fastcall *v32)(__int64, __int64, __int64); // rax
  __int64 v33; // rax
  _BYTE *v34; // rax
  __int64 (__fastcall *v35)(); // [rsp+8h] [rbp-E0h] BYREF
  __m128i v36; // [rsp+10h] [rbp-D8h] BYREF
  __m128i v37; // [rsp+20h] [rbp-C8h] BYREF
  __m128 v38; // [rsp+30h] [rbp-B8h]
  __int64 v39; // [rsp+40h] [rbp-A8h]
  __m128i v40; // [rsp+48h] [rbp-A0h] BYREF
  void *v41; // [rsp+58h] [rbp-90h] BYREF
  __int64 v42; // [rsp+60h] [rbp-88h]
  __m128i v43; // [rsp+68h] [rbp-80h] BYREF
  __int64 v44; // [rsp+80h] [rbp-68h] BYREF
  __m128i v45; // [rsp+88h] [rbp-60h] BYREF
  void *v46; // [rsp+98h] [rbp-50h]
  __int64 v47; // [rsp+A0h] [rbp-48h]
  __m128i v48[4]; // [rsp+A8h] [rbp-40h] BYREF

  v6 = *(_BYTE *)(a1 + 1056) == 0;
  v36.m128i_i64[0] = a4;
  v36.m128i_i64[1] = a5;
  if ( !v6 )
  {
    *(_BYTE *)(a1 + 1056) = 0;
    sub_F2CBF0(v36.m128i_i64);
    v26 = *(unsigned int *)(a1 + 24);
    if ( (_DWORD)v26 )
    {
      v27 = *(_QWORD *)(a1 + 16);
      v37.m128i_i8[0] = 1;
      v28 = v27 + 32 * v26 - 32;
      if ( !*(_QWORD *)(v28 + 16) )
        goto LABEL_35;
      while ( 1 )
      {
        (*(void (__fastcall **)(__int64, __m128i *))(v28 + 24))(v28, &v37);
        v30 = (unsigned int)(*(_DWORD *)(a1 + 24) - 1);
        *(_DWORD *)(a1 + 24) = v30;
        v31 = *(_QWORD *)(a1 + 16) + 32 * v30;
        v32 = *(void (__fastcall **)(__int64, __int64, __int64))(v31 + 16);
        if ( v32 )
          v32(v31, v31, 3);
        v33 = *(unsigned int *)(a1 + 24);
        if ( !(_DWORD)v33 )
          break;
        v29 = *(_QWORD *)(a1 + 16);
        v37.m128i_i8[0] = 1;
        v28 = v29 + 32 * v33 - 32;
        if ( !*(_QWORD *)(v28 + 16) )
          goto LABEL_35;
      }
    }
    v34 = *(_BYTE **)(a1 + 1064);
    *(_QWORD *)(a1 + 1072) = 0;
    *v34 = 0;
    sub_971800(*(_QWORD *)a1, "\n");
    *(_BYTE *)(a1 + 1056) = 1;
    return;
  }
  v7 = _mm_load_si128(&v36);
  v39 = a1;
  v40 = v7;
  v41 = &v43;
  if ( a2 )
  {
    sub_F009D0(&v41, a2, (__int64)&a2[a3]);
    if ( *(_BYTE *)(a1 + 1057) )
      goto LABEL_4;
    goto LABEL_16;
  }
  v6 = *(_BYTE *)(a1 + 1057) == 0;
  v43.m128i_i8[0] = 0;
  v42 = 0;
  if ( v6 )
  {
LABEL_16:
    v15 = *(unsigned int *)(a1 + 24);
    v16 = *(_QWORD *)(a1 + 16);
    LOBYTE(v44) = 0;
    v17 = v16 + 32 * v15 - 32;
    if ( *(_QWORD *)(v17 + 16) )
    {
      (*(void (__fastcall **)(__int64, __int64 *))(v17 + 24))(v17, &v44);
      v18 = (__m128i *)(*(_QWORD *)(a1 + 16) + 32LL * *(unsigned int *)(a1 + 24) - 32);
      v45 = _mm_loadu_si128(&v40);
      v44 = v39;
      v46 = v48;
      if ( v41 == &v43 )
      {
        v48[0] = _mm_loadu_si128(&v43);
      }
      else
      {
        v46 = v41;
        v48[0].m128i_i64[0] = v43.m128i_i64[0];
      }
      v19 = v42;
      v42 = 0;
      v43.m128i_i8[0] = 0;
      v47 = v19;
      v41 = &v43;
      v38.m128_u64[0] = 0;
      v20 = operator new(0x38u);
      v21 = _mm_loadu_si128(&v45);
      *(_QWORD *)v20 = v44;
      *(_QWORD *)(v20 + 24) = v20 + 40;
      v22 = (__m128i *)v46;
      *(__m128i *)(v20 + 8) = v21;
      if ( v22 == v48 )
      {
        *(__m128i *)(v20 + 40) = _mm_loadu_si128(v48);
      }
      else
      {
        *(_QWORD *)(v20 + 24) = v22;
        *(_QWORD *)(v20 + 40) = v48[0].m128i_i64[0];
      }
      v37.m128i_i64[0] = v20;
      v48[0].m128i_i8[0] = 0;
      v23 = _mm_load_si128(&v37);
      *(_QWORD *)(v20 + 32) = v47;
      v46 = v48;
      v47 = 0;
      v37 = _mm_loadu_si128(v18);
      v24 = (void (__fastcall *)(__m128i *, __m128i *, __int64))v18[1].m128i_i64[0];
      v25 = v18[1].m128i_i64[1];
      *v18 = v23;
      v38.m128_u64[0] = (unsigned __int64)v24;
      v18[1].m128i_i64[0] = (__int64)sub_F02320;
      v38.m128_u64[1] = v25;
      v18[1].m128i_i64[1] = (__int64)sub_F2DB00;
      if ( v24 )
        v24(&v37, &v37, 3);
      goto LABEL_10;
    }
LABEL_35:
    std::__throw_bad_function_call();
  }
LABEL_4:
  v8 = _mm_loadu_si128(&v40);
  v44 = v39;
  v46 = v48;
  v45 = v8;
  if ( v41 == &v43 )
  {
    v48[0] = _mm_loadu_si128(&v43);
  }
  else
  {
    v46 = v41;
    v48[0].m128i_i64[0] = v43.m128i_i64[0];
  }
  v9 = v42;
  v42 = 0;
  v43.m128i_i8[0] = 0;
  v47 = v9;
  v41 = &v43;
  v38.m128_u64[0] = 0;
  v10 = operator new(0x38u);
  v11 = _mm_loadu_si128(&v45);
  *(_QWORD *)v10 = v44;
  *(_QWORD *)(v10 + 24) = v10 + 40;
  v12 = (__m128i *)v46;
  *(__m128i *)(v10 + 8) = v11;
  if ( v12 == v48 )
  {
    *(__m128i *)(v10 + 40) = _mm_loadu_si128(v48);
  }
  else
  {
    *(_QWORD *)(v10 + 24) = v12;
    *(_QWORD *)(v10 + 40) = v48[0].m128i_i64[0];
  }
  v13 = v47;
  v37.m128i_i64[0] = v10;
  v47 = 0;
  *(_QWORD *)(v10 + 32) = v13;
  v35 = sub_F2DB00;
  v46 = v48;
  v48[0].m128i_i8[0] = 0;
  v38 = _mm_loadh_ps((const double *)&v35);
  sub_AA95F0(a1 + 16, &v37);
  if ( v38.m128_u64[0] )
    ((void (__fastcall *)(__m128i *, __m128i *, __int64))v38.m128_u64[0])(&v37, &v37, 3);
LABEL_10:
  if ( v46 != v48 )
    operator delete(v46);
  v14 = (__m128i *)v41;
  *(_BYTE *)(a1 + 1057) = 0;
  if ( v14 != &v43 )
    operator delete(v14);
}

