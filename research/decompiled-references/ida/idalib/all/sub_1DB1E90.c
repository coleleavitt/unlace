unsigned __int64 __fastcall sub_1DB1E90(
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
  unsigned __int16 *v15; // rsi
  __int64 v17; // rbp
  __int64 v18; // r8
  __int64 v19; // r9
  double v20; // xmm4_8
  double v21; // xmm5_8
  unsigned __int8 v22; // r15
  char v23; // r13
  __m128i v24; // kr00_16
  __int64 v25; // rcx
  unsigned __int16 *v26; // rsi
  __int64 v27; // rax
  __int64 v28; // r9
  double v29; // xmm4_8
  double v30; // xmm5_8
  __int64 v31; // rcx
  __int64 v32; // r12
  __int64 v33; // r8
  unsigned __int16 *v34; // rsi
  unsigned __int64 result; // rax
  void **v36; // r15
  __int64 v37; // rdx
  __int64 v38; // rdi
  _WORD *v39; // r12
  unsigned __int64 v40; // r8
  __int64 v41; // rax
  int v42; // r11d
  unsigned __int8 v43; // dl
  int v44; // ecx
  __int64 v45; // rsi
  int v46; // r9d
  __m128i v47; // xmm1
  unsigned __int16 *v48; // r12
  unsigned __int64 v49; // rax
  __int64 v50; // rax
  unsigned __int64 v51; // rdi
  __int64 v52; // r15
  __int16 v53; // dx
  __int64 v54; // r15
  int v55; // r12d
  __int64 v56; // r15
  __int16 v57; // dx
  __int64 v58; // rbp
  __int64 v59; // rax
  void **v60; // rax
  unsigned __int8 v61; // [rsp+18h] [rbp-90h]
  char v62; // [rsp+18h] [rbp-90h]
  __int64 v63; // [rsp+18h] [rbp-90h]
  int v64; // [rsp+18h] [rbp-90h]
  int v65; // [rsp+18h] [rbp-90h]
  unsigned __int64 v66; // [rsp+18h] [rbp-90h]
  __int64 v67; // [rsp+20h] [rbp-88h]
  int v68; // [rsp+20h] [rbp-88h]
  char v69; // [rsp+2Fh] [rbp-79h]
  __m128i v70; // [rsp+30h] [rbp-78h] BYREF
  __int64 v71; // [rsp+40h] [rbp-68h]
  __m128i v72; // [rsp+50h] [rbp-58h] BYREF
  __int64 v73; // [rsp+60h] [rbp-48h]

  v15 = nullptr;
  if ( (*(_WORD *)a2 & 0x4000) != 0 )
    v15 = (unsigned __int16 *)a2[2];
  v17 = sub_1DAD2E0(a1, v15, nullptr, a3, a4, a5, a6, a7, a8, a9, a10, a12, a13, a14);
  if ( v17 == 1 )
    return 1;
  v22 = (*((_BYTE *)a2 + 1) >> 1) & 7;
  if ( (unsigned int)v22 - 2 > 1 )
  {
    v48 = (unsigned __int16 *)a2[((*a2 & 0x4000) != 0) + 2 + ((*a2 & 0x2000) != 0)];
    v49 = sub_EEDE70(a2);
    sub_1D8B7D0((__int64)&v72, a1, *((unsigned int *)a2 + 1), v49, v48, v22 == 1, a3, a4);
    a3 = (__m128)_mm_load_si128(&v72);
    v23 = BYTE2(v73);
    v24 = v72;
    v70 = (__m128i)a3;
    LOWORD(v71) = v73;
    BYTE2(v71) = BYTE2(v73);
    if ( !(_BYTE)v73 )
    {
      v22 = (*((_BYTE *)a2 + 1) >> 1) & 7;
      if ( v22 != 1 )
        goto LABEL_7;
      v25 = BYTE2(v73);
      v69 = BYTE1(v71);
      if ( BYTE2(v73) )
      {
        v25 = *(unsigned __int16 *)((char *)&v71 + 1);
        if ( !BYTE1(v71) )
        {
          v54 = *a2;
          v55 = sub_EEB7E0(
                  a2[((*a2 & 0x4000) != 0) + 3 + (unsigned int)((*a2 & 0x2000) != 0)],
                  (__int64)a1,
                  *(double *)a3.m128_u64);
          v65 = sub_EEC140(a2[((v54 & 0x4000) != 0) + 3 + (unsigned int)((v54 & 0x2000) != 0)]);
          v56 = sub_EEE9A0(16, *(_QWORD **)(*a1 + 248), 8u);
          v57 = *(_WORD *)v56 & 0xFE00;
          LOBYTE(v57) = -7;
          *(_WORD *)v56 = v57;
          if ( unk_2CD7484 )
            sub_EE9B50(249);
          *(_DWORD *)(v56 + 8) = v55;
          v32 = v56;
          *(_DWORD *)(v56 + 4) = 0;
          *(_DWORD *)(v56 + 12) = v65;
          *(_BYTE *)(v56 + 1) &= ~2u;
          goto LABEL_14;
        }
      }
      goto LABEL_32;
    }
    return 1;
  }
  if ( v22 != 1 )
  {
    v23 = 0;
    v24 = 0u;
LABEL_7:
    v67 = *a1;
    if ( v22 == 2 )
      sub_18C74E0(*a1, 5, 0, 4);
    v69 = 0;
    v25 = 0;
    goto LABEL_10;
  }
  BYTE2(v71) = 0;
  v23 = 0;
  v25 = 0;
  v69 = BYTE1(v71);
  v24 = 0u;
LABEL_32:
  v22 = 1;
  v67 = *a1;
LABEL_10:
  v61 = v25;
  v26 = (unsigned __int16 *)a2[((*a2 & 0x2000) != 0) + 3 + (unsigned int)((*a2 & 0x4000) != 0)];
  v27 = sub_1DAD2E0(a1, v26, nullptr, a3, a4, a5, a6, v20, v21, a9, a10, v25, v18, v19);
  v31 = v61;
  v32 = v27;
  if ( v27 == 1 )
  {
    result = 1;
    if ( v22 != 2 )
      return result;
LABEL_44:
    sub_190D5E0(v67, a3);
    return 1;
  }
  if ( v22 == 2 )
  {
    sub_190D5E0(v67, a3);
    v31 = v61;
  }
  if ( (_BYTE)v31 && v69 )
  {
    v37 = *a2;
    v36 = nullptr;
    if ( (*a2 & 0x1000) != 0 )
    {
      v50 = ((v37 & 0x4000) != 0) + (unsigned int)((v37 & 0x2000) != 0) + 2;
      v36 = (void **)a2[v50 + 2];
      if ( v36 )
      {
        v63 = *a2;
        v51 = 0;
        v68 = sub_EEB7E0(a2[v50 + 2], (__int64)v26, *(double *)a3.m128_u64);
        if ( (v63 & 0x1000) != 0 )
          v51 = a2[((v63 & 0x4000) != 0) + 4 + (unsigned int)((v63 & 0x2000) != 0)];
        v64 = sub_EEC140(v51);
        v52 = sub_EEE9A0(16, *(_QWORD **)(*a1 + 248), 8u);
        v53 = *(_WORD *)v52 & 0xFE00;
        LOBYTE(v53) = -7;
        *(_WORD *)v52 = v53;
        if ( unk_2CD7484 )
          sub_EE9B50(249);
        *(_DWORD *)(v52 + 4) = 0;
        *(_BYTE *)(v52 + 1) &= ~2u;
        *(_DWORD *)(v52 + 8) = v68;
        *(_DWORD *)(v52 + 12) = v64;
        v36 = (void **)(v52 & 0xFFFFFFFFFFFFFFFELL);
        goto LABEL_20;
      }
    }
    goto LABEL_21;
  }
LABEL_14:
  v67 = *a1;
  v33 = (*((_BYTE *)a2 + 1) >> 1) & 7;
  if ( (_BYTE)v33 == 3 )
  {
    sub_18C74E0(*a1, 5, 0, 4);
    v33 = 3;
  }
  v34 = nullptr;
  if ( (*a2 & 0x1000) != 0 )
    v34 = (unsigned __int16 *)a2[((*a2 & 0x4000) != 0) + 4 + (unsigned int)((*a2 & 0x2000) != 0)];
  v62 = v33;
  result = sub_1DAD2E0(a1, v34, nullptr, a3, a4, a5, a6, v29, v30, a9, a10, v31, v33, v28);
  if ( result == 1 )
  {
    if ( v62 != 3 )
      return result;
    goto LABEL_44;
  }
  v36 = (void **)(result & 0xFFFFFFFFFFFFFFFELL);
  if ( v62 != 3 )
  {
LABEL_20:
    v37 = *a2;
    goto LABEL_21;
  }
  sub_190D5E0(v67, a3);
  v37 = *a2;
LABEL_21:
  v38 = *a1;
  v39 = (_WORD *)(v32 & 0xFFFFFFFFFFFFFFFELL);
  v40 = v17 & 0xFFFFFFFFFFFFFFFELL;
  if ( !*(_DWORD *)(*a1 + 12632) )
  {
    v41 = 0;
    if ( (v37 & 0x4000) != 0 )
      v41 = a2[2];
    if ( v41 == v40 )
    {
      v66 = v17 & 0xFFFFFFFFFFFFFFFELL;
      v58 = a2[((v37 & 0x4000) != 0) + 2 + ((v37 & 0x2000) != 0)];
      v59 = sub_EEDE70(a2);
      v40 = v66;
      if ( v58 == (v24.m128i_i64[1] & 0xFFFFFFFFFFFFFFFELL) && v59 == v24.m128i_i64[0] )
      {
        v37 = *a2;
        if ( (_WORD *)a2[((*a2 & 0x4000) != 0) + 3 + (unsigned int)((*a2 & 0x2000) != 0)] == v39 )
        {
          v60 = (v37 & 0x1000) != 0
              ? (void **)a2[((v37 & 0x4000) != 0) + 4 + (unsigned int)((v37 & 0x2000) != 0)]
              : nullptr;
          if ( v60 == v36 )
            return (unsigned __int64)a2;
        }
        v38 = *a1;
      }
      else
      {
        v38 = *a1;
        v37 = *a2;
      }
    }
  }
  v42 = 0;
  if ( (v37 & 0x1000) != 0 )
    v42 = a2[((v37 & 0x1000) != 0) + 4 + ((v37 & 0x2000) != 0) + ((v37 & 0x4000) != 0)];
  v43 = *((_BYTE *)a2 + 1);
  BYTE2(v71) = v23;
  v44 = *((_DWORD *)a2 + 2);
  v45 = *((unsigned int *)a2 + 1);
  v70 = v24;
  v46 = *((_DWORD *)a2 + 3);
  v47 = _mm_load_si128(&v70);
  LOBYTE(v71) = 0;
  v72 = v47;
  v73 = v71;
  return sub_1C3A020(
           v38,
           v45,
           (v43 >> 1) & 7,
           v44,
           v40,
           v46,
           *(double *)a3.m128_u64,
           v47.m128i_i64[0],
           v47.m128i_i64[1],
           0,
           v39,
           v42,
           v36);
}
