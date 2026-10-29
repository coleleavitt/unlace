void __fastcall sub_ADBAF0(
        __int64 a1,
        _BYTE *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int128 a7,
        __int64 *a8)
{
  __m128i v9; // xmm2
  __int64 v10; // rax
  __int64 v11; // rax
  __m128i v12; // xmm3
  __int64 *v13; // rdx
  __int64 v14; // rdx
  __m128i *v15; // rdi
  bool v16; // zf
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rax
  __m128i *v20; // r13
  __int64 v21; // rax
  __int64 v22; // rax
  __m128i v23; // xmm5
  __int64 *v24; // rdx
  __m128i v25; // xmm0
  void (__fastcall *v26)(_QWORD, _QWORD, _QWORD); // rax
  __int128 v27; // kr00_16
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 *v31; // rsi
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rdi
  __int64 v42; // rdi
  void (__fastcall *v43)(_QWORD, _QWORD, _QWORD); // rax
  __int64 v44; // rax
  _BYTE *v45; // rax
  double v46[2]; // [rsp+8h] [rbp-E0h] BYREF
  char v47; // [rsp+1Fh] [rbp-C9h] BYREF
  __m128i v48; // [rsp+20h] [rbp-C8h] BYREF
  __m128 v49; // [rsp+30h] [rbp-B8h]
  __int64 v50; // [rsp+40h] [rbp-A8h]
  __m128i v51; // [rsp+48h] [rbp-A0h] BYREF
  __int64 *v52; // [rsp+58h] [rbp-90h]
  void *v53; // [rsp+60h] [rbp-88h] BYREF
  __int64 v54; // [rsp+68h] [rbp-80h]
  __m128i v55; // [rsp+70h] [rbp-78h] BYREF
  _BYTE v56[24]; // [rsp+80h] [rbp-68h] BYREF
  __int64 *v57; // [rsp+98h] [rbp-50h]
  void *v58; // [rsp+A0h] [rbp-48h]
  __int64 v59; // [rsp+A8h] [rbp-40h]
  __m128i v60[3]; // [rsp+B0h] [rbp-38h] BYREF

  if ( *(_BYTE *)(a1 + 1056) )
  {
    v27 = a7;
    *(_BYTE *)(a1 + 1056) = 0;
    sub_F51670(v27 + 8, *((_QWORD *)&v27 + 1), a8);
    if ( *((_QWORD *)&v27 + 1) )
    {
      sub_ADB840(v27, *((__int64 *)&a7 + 1), a8, v28, v29, v30);
      v31 = a8;
      v32 = sub_F6C7E0(*((_QWORD *)&a7 + 1), a8);
      if ( v32 )
      {
        *(_QWORD *)&v46[0] = v32;
        *(_QWORD *)&v56[16] = v33;
        *(__m128 *)v56 = _mm_loadh_ps(v46);
        sub_ADC0B0(v27 + 8, v31, v33, v34, v35, v36, *(_QWORD *)v56, *(_QWORD *)&v56[8], v33);
      }
    }
    v37 = *(unsigned int *)(a1 + 24);
    if ( (_DWORD)v37 )
    {
      v38 = *(_QWORD *)(a1 + 16);
      v47 = 1;
      v39 = v38 + 32 * v37 - 32;
      if ( !*(_QWORD *)(v39 + 16) )
        goto LABEL_38;
      while ( 1 )
      {
        (*(void (__fastcall **)(__int64, char *))(v39 + 24))(v39, &v47);
        v41 = (unsigned int)(*(_DWORD *)(a1 + 24) - 1);
        *(_DWORD *)(a1 + 24) = v41;
        v42 = *(_QWORD *)(a1 + 16) + 32 * v41;
        v43 = *(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(v42 + 16);
        if ( v43 )
          v43(v42, v42, 3);
        v44 = *(unsigned int *)(a1 + 24);
        if ( !(_DWORD)v44 )
          break;
        v40 = *(_QWORD *)(a1 + 16);
        v47 = 1;
        v39 = v40 + 32 * v44 - 32;
        if ( !*(_QWORD *)(v39 + 16) )
          goto LABEL_38;
      }
    }
    v45 = *(_BYTE **)(a1 + 1064);
    *(_QWORD *)(a1 + 1072) = 0;
    *v45 = 0;
    sub_995540(*(_QWORD *)a1, "\n");
    *(_BYTE *)(a1 + 1056) = 1;
    return;
  }
  v50 = a1;
  v52 = a8;
  v51 = _mm_loadu_si128((const __m128i *)&a7);
  v53 = &v55;
  if ( a2 )
  {
    sub_ACAA20(&v53, a2, (__int64)&a2[a3]);
    if ( *(_BYTE *)(a1 + 1057) )
      goto LABEL_4;
    goto LABEL_16;
  }
  v16 = *(_BYTE *)(a1 + 1057) == 0;
  v55.m128i_i8[0] = 0;
  v54 = 0;
  if ( v16 )
  {
LABEL_16:
    v17 = *(unsigned int *)(a1 + 24);
    v18 = *(_QWORD *)(a1 + 16);
    v48.m128i_i8[0] = 0;
    v19 = v18 + 32 * v17 - 32;
    if ( *(_QWORD *)(v19 + 16) )
    {
      (*(void (__fastcall **)(__int64, __m128i *))(v19 + 24))(v19, &v48);
      v20 = (__m128i *)(*(_QWORD *)(a1 + 16) + 32LL * *(unsigned int *)(a1 + 24) - 32);
      *(__m128i *)&v56[8] = _mm_loadu_si128(&v51);
      *(_QWORD *)v56 = v50;
      v57 = v52;
      v58 = v60;
      if ( v53 == &v55 )
      {
        v60[0] = _mm_load_si128(&v55);
      }
      else
      {
        v58 = v53;
        v60[0].m128i_i64[0] = v55.m128i_i64[0];
      }
      v21 = v54;
      v54 = 0;
      v55.m128i_i8[0] = 0;
      v59 = v21;
      v53 = &v55;
      v49.m128_u64[0] = 0;
      v22 = operator new(0x40u);
      v23 = _mm_loadu_si128((const __m128i *)&v56[8]);
      *(_QWORD *)v22 = *(_QWORD *)v56;
      v24 = v57;
      *(__m128i *)(v22 + 8) = v23;
      *(_QWORD *)(v22 + 24) = v24;
      *(_QWORD *)(v22 + 32) = v22 + 48;
      if ( v58 == v60 )
      {
        *(__m128i *)(v22 + 48) = _mm_load_si128(v60);
      }
      else
      {
        *(_QWORD *)(v22 + 32) = v58;
        *(_QWORD *)(v22 + 48) = v60[0].m128i_i64[0];
      }
      v48.m128i_i64[0] = v22;
      v60[0].m128i_i8[0] = 0;
      v25 = _mm_load_si128(&v48);
      *(_QWORD *)(v22 + 40) = v59;
      v58 = v60;
      v59 = 0;
      v48 = _mm_loadu_si128(v20);
      v26 = (void (__fastcall *)(_QWORD, _QWORD, _QWORD))v20[1].m128i_i64[0];
      *v20 = v25;
      v49.m128_u64[0] = (unsigned __int64)v26;
      v20[1].m128i_i64[0] = (__int64)sub_ACC3C0;
      v49.m128_u64[1] = v20[1].m128i_u64[1];
      v20[1].m128i_i64[1] = (__int64)sub_ADC1A0;
      if ( v26 )
        v26(&v48, &v48, 3);
      goto LABEL_10;
    }
LABEL_38:
    std::__throw_bad_function_call();
  }
LABEL_4:
  v9 = _mm_loadu_si128(&v51);
  *(_QWORD *)v56 = v50;
  *(__m128i *)&v56[8] = v9;
  v57 = v52;
  v58 = v60;
  if ( v53 == &v55 )
  {
    v60[0] = _mm_load_si128(&v55);
  }
  else
  {
    v58 = v53;
    v60[0].m128i_i64[0] = v55.m128i_i64[0];
  }
  v10 = v54;
  v54 = 0;
  v55.m128i_i8[0] = 0;
  v59 = v10;
  v53 = &v55;
  v49.m128_u64[0] = 0;
  v11 = operator new(0x40u);
  v12 = _mm_loadu_si128((const __m128i *)&v56[8]);
  *(_QWORD *)v11 = *(_QWORD *)v56;
  v13 = v57;
  *(__m128i *)(v11 + 8) = v12;
  *(_QWORD *)(v11 + 24) = v13;
  *(_QWORD *)(v11 + 32) = v11 + 48;
  if ( v58 == v60 )
  {
    *(__m128i *)(v11 + 48) = _mm_load_si128(v60);
  }
  else
  {
    *(_QWORD *)(v11 + 32) = v58;
    *(_QWORD *)(v11 + 48) = v60[0].m128i_i64[0];
  }
  v14 = v59;
  v48.m128i_i64[0] = v11;
  v59 = 0;
  *(_QWORD *)(v11 + 40) = v14;
  v58 = v60;
  v60[0].m128i_i8[0] = 0;
  v49 = _mm_loadh_ps((const double *)off_2C78100);
  sub_ACD330(a1 + 16, &v48);
  if ( v49.m128_u64[0] )
    ((void (__fastcall *)(__m128i *, __m128i *, __int64))v49.m128_u64[0])(&v48, &v48, 3);
LABEL_10:
  if ( v58 != v60 )
    operator delete(v58);
  v15 = (__m128i *)v53;
  *(_BYTE *)(a1 + 1057) = 0;
  if ( v15 != &v55 )
    operator delete(v15);
}
