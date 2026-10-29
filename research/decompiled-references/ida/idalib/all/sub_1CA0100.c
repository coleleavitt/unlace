unsigned __int64 __fastcall sub_1CA0100(
        __int64 *a1,
        __int64 *a2,
        __m128 a3,
        __m128 a4,
        __m128i a5,
        __m128i a6,
        double a7,
        double a8,
        __m128 a9,
        __m128i a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14)
{
  _WORD *v15; // rsi
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // r13
  double v20; // xmm4_8
  double v21; // xmm5_8
  unsigned __int8 v22; // r15
  char v23; // r12
  __m128i v24; // kr00_16
  __int64 v25; // rcx
  _WORD *v26; // rsi
  __int64 v27; // rax
  __int64 v28; // r9
  double v29; // xmm4_8
  double v30; // xmm5_8
  __int64 v31; // rcx
  __int64 v32; // rbp
  __int64 v33; // r8
  _WORD *v34; // rsi
  unsigned __int64 result; // rax
  void **v36; // r15
  __int64 v37; // rdx
  int v38; // edi
  unsigned __int8 v39; // dl
  int v40; // ecx
  __int64 v41; // rsi
  int v42; // r9d
  __m128i v43; // xmm1
  unsigned __int64 v44; // rbp
  unsigned __int64 v45; // rax
  __int64 v46; // rax
  unsigned __int64 v47; // rdi
  __int64 v48; // r15
  __int16 v49; // dx
  __int64 v50; // r15
  int v51; // ebp
  __int64 v52; // r15
  __int16 v53; // dx
  unsigned __int8 v54; // [rsp+18h] [rbp-90h]
  char v55; // [rsp+18h] [rbp-90h]
  __int64 v56; // [rsp+18h] [rbp-90h]
  int v57; // [rsp+18h] [rbp-90h]
  int v58; // [rsp+18h] [rbp-90h]
  __int64 v59; // [rsp+20h] [rbp-88h]
  int v60; // [rsp+20h] [rbp-88h]
  char v61; // [rsp+2Fh] [rbp-79h]
  __m128i v62; // [rsp+30h] [rbp-78h] BYREF
  __int64 v63; // [rsp+40h] [rbp-68h]
  __m128i v64; // [rsp+50h] [rbp-58h] BYREF
  __int64 v65; // [rsp+60h] [rbp-48h]

  v15 = nullptr;
  if ( (*(_WORD *)a2 & 0x4000) != 0 )
    v15 = (_WORD *)a2[2];
  v19 = sub_1C9AFD0(a1, v15, 0, a3, a4, a5, a6, a7, a8, a9, a10, a12, a13, a14);
  if ( v19 == 1 )
    return 1;
  v22 = (*((_BYTE *)a2 + 1) >> 1) & 7;
  if ( (unsigned int)v22 - 2 > 1 )
  {
    v44 = a2[((*a2 & 0x4000) != 0) + 2 + ((*a2 & 0x2000) != 0)];
    v45 = sub_EEDE70(a2);
    sub_1C7D6B0((__int64)&v64, a1, *((unsigned int *)a2 + 1), v45, v44, v22 == 1, a3, a4);
    a3 = (__m128)_mm_load_si128(&v64);
    v23 = BYTE2(v65);
    v24 = v64;
    v62 = (__m128i)a3;
    LOWORD(v63) = v65;
    BYTE2(v63) = BYTE2(v65);
    if ( !(_BYTE)v65 )
    {
      v22 = (*((_BYTE *)a2 + 1) >> 1) & 7;
      if ( v22 != 1 )
        goto LABEL_7;
      v25 = BYTE2(v65);
      v61 = BYTE1(v63);
      if ( BYTE2(v65) )
      {
        v25 = *(unsigned __int16 *)((char *)&v63 + 1);
        if ( !BYTE1(v63) )
        {
          v50 = *a2;
          v51 = sub_EEB7E0(
                  a2[((*a2 & 0x4000) != 0) + 3 + (unsigned int)((*a2 & 0x2000) != 0)],
                  (__int64)a1,
                  *(double *)a3.m128_u64);
          v58 = sub_EEC140(a2[((v50 & 0x4000) != 0) + 3 + (unsigned int)((v50 & 0x2000) != 0)]);
          v52 = sub_EEE9A0(16, *(_QWORD **)(*a1 + 248), 8u);
          v53 = *(_WORD *)v52 & 0xFE00;
          LOBYTE(v53) = -7;
          *(_WORD *)v52 = v53;
          if ( unk_2CD7484 )
            sub_EE9B50(249);
          *(_DWORD *)(v52 + 8) = v51;
          v32 = v52;
          *(_DWORD *)(v52 + 4) = 0;
          *(_DWORD *)(v52 + 12) = v58;
          *(_BYTE *)(v52 + 1) &= ~2u;
          goto LABEL_14;
        }
      }
LABEL_28:
      v22 = 1;
      v59 = *a1;
      goto LABEL_10;
    }
    return 1;
  }
  if ( v22 == 1 )
  {
    BYTE2(v63) = 0;
    v23 = 0;
    v25 = 0;
    v61 = BYTE1(v63);
    v24 = 0u;
    goto LABEL_28;
  }
  v23 = 0;
  v24 = 0u;
LABEL_7:
  v59 = *a1;
  if ( v22 == 2 )
    sub_18C74E0(*a1, 5, 0, 4);
  v61 = 0;
  v25 = 0;
LABEL_10:
  v54 = v25;
  v26 = (_WORD *)a2[((*a2 & 0x2000) != 0) + 3 + (unsigned int)((*a2 & 0x4000) != 0)];
  v27 = sub_1C9AFD0(a1, v26, 0, a3, a4, a5, a6, v20, v21, a9, a10, v25, v17, v18);
  v31 = v54;
  v32 = v27;
  if ( v27 == 1 )
  {
    result = 1;
    if ( v22 != 2 )
      return result;
    goto LABEL_40;
  }
  if ( v22 == 2 )
  {
    sub_190D5E0(v59, a3);
    v31 = v54;
  }
  if ( !(_BYTE)v31 || !v61 )
  {
LABEL_14:
    v59 = *a1;
    v33 = (*((_BYTE *)a2 + 1) >> 1) & 7;
    if ( (_BYTE)v33 == 3 )
    {
      sub_18C74E0(*a1, 5, 0, 4);
      v33 = 3;
    }
    v34 = nullptr;
    if ( (*a2 & 0x1000) != 0 )
      v34 = (_WORD *)a2[((*a2 & 0x4000) != 0) + 4 + (unsigned int)((*a2 & 0x2000) != 0)];
    v55 = v33;
    result = sub_1C9AFD0(a1, v34, 0, a3, a4, a5, a6, v29, v30, a9, a10, v31, v33, v28);
    if ( result != 1 )
    {
      v36 = (void **)(result & 0xFFFFFFFFFFFFFFFELL);
      if ( v55 == 3 )
      {
        sub_190D5E0(v59, a3);
        v37 = *a2;
        goto LABEL_21;
      }
      goto LABEL_20;
    }
    if ( v55 != 3 )
      return result;
LABEL_40:
    sub_190D5E0(v59, a3);
    return 1;
  }
  v37 = *a2;
  v36 = nullptr;
  if ( (*a2 & 0x1000) != 0 )
  {
    v46 = ((v37 & 0x4000) != 0) + (unsigned int)((v37 & 0x2000) != 0) + 2;
    v36 = (void **)a2[v46 + 2];
    if ( v36 )
    {
      v56 = *a2;
      v47 = 0;
      v60 = sub_EEB7E0(a2[v46 + 2], (__int64)v26, *(double *)a3.m128_u64);
      if ( (v56 & 0x1000) != 0 )
        v47 = a2[((v56 & 0x4000) != 0) + 4 + (unsigned int)((v56 & 0x2000) != 0)];
      v57 = sub_EEC140(v47);
      v48 = sub_EEE9A0(16, *(_QWORD **)(*a1 + 248), 8u);
      v49 = *(_WORD *)v48 & 0xFE00;
      LOBYTE(v49) = -7;
      *(_WORD *)v48 = v49;
      if ( unk_2CD7484 )
        sub_EE9B50(249);
      *(_DWORD *)(v48 + 4) = 0;
      *(_BYTE *)(v48 + 1) &= ~2u;
      *(_DWORD *)(v48 + 8) = v60;
      *(_DWORD *)(v48 + 12) = v57;
      v36 = (void **)(v48 & 0xFFFFFFFFFFFFFFFELL);
LABEL_20:
      v37 = *a2;
    }
  }
LABEL_21:
  v38 = 0;
  if ( (v37 & 0x1000) != 0 )
    v38 = a2[((v37 & 0x1000) != 0) + 4 + ((v37 & 0x2000) != 0) + ((v37 & 0x4000) != 0)];
  BYTE2(v63) = v23;
  v39 = *((_BYTE *)a2 + 1);
  v40 = *((_DWORD *)a2 + 2);
  v41 = *((unsigned int *)a2 + 1);
  v42 = *((_DWORD *)a2 + 3);
  v62 = v24;
  v43 = _mm_load_si128(&v62);
  LOBYTE(v63) = 0;
  v64 = v43;
  v65 = v63;
  return sub_1C3A020(
           *a1,
           v41,
           (v39 >> 1) & 7,
           v40,
           v19 & 0xFFFFFFFFFFFFFFFELL,
           v42,
           *(double *)a3.m128_u64,
           v43.m128i_i64[0],
           v43.m128i_i64[1],
           0,
           (_WORD *)(v32 & 0xFFFFFFFFFFFFFFFELL),
           v38,
           v36);
}
