unsigned __int64 __fastcall sub_1D64ED0(
        __int64 *a1,
        __int64 *a2,
        __m128 a3,
        __m128 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  _WORD *v9; // rsi
  __int64 v11; // rbp
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned __int8 v14; // r15
  char v15; // r13
  __m128i v16; // kr00_16
  __int64 v17; // rcx
  _WORD *v18; // rsi
  __int64 v19; // rax
  __int64 v20; // r9
  __int64 v21; // rcx
  __int64 v22; // r12
  __int64 v23; // r8
  _WORD *v24; // rsi
  unsigned __int64 result; // rax
  void **v26; // r15
  __int64 v27; // rdx
  __int64 v28; // rdi
  _WORD *v29; // r12
  unsigned __int64 v30; // r8
  __int64 v31; // rax
  int v32; // r11d
  unsigned __int8 v33; // dl
  int v34; // ecx
  __int64 v35; // rsi
  int v36; // r9d
  __m128i v37; // xmm1
  unsigned __int16 *v38; // r12
  unsigned __int64 v39; // rax
  __int64 v40; // rax
  unsigned __int64 v41; // rax
  __int64 v42; // r15
  __int16 v43; // dx
  __int64 v44; // r15
  int v45; // r12d
  __int64 v46; // r15
  __int16 v47; // dx
  __int64 v48; // rbp
  __int64 v49; // rax
  __int64 v50; // rax
  unsigned __int8 v51; // [rsp+18h] [rbp-90h]
  char v52; // [rsp+18h] [rbp-90h]
  int v53; // [rsp+18h] [rbp-90h]
  int v54; // [rsp+18h] [rbp-90h]
  unsigned __int64 v55; // [rsp+18h] [rbp-90h]
  __int64 v56; // [rsp+20h] [rbp-88h]
  int v57; // [rsp+20h] [rbp-88h]
  __int64 v58; // [rsp+20h] [rbp-88h]
  char v59; // [rsp+2Fh] [rbp-79h]
  __m128i v60; // [rsp+30h] [rbp-78h] BYREF
  __int64 v61; // [rsp+40h] [rbp-68h]
  __m128i v62; // [rsp+50h] [rbp-58h] BYREF
  __int64 v63; // [rsp+60h] [rbp-48h]

  v9 = nullptr;
  if ( (*(_WORD *)a2 & 0x4000) != 0 )
    v9 = (_WORD *)a2[2];
  v11 = sub_1D42130(a1, v9, 0, a3, a4, a6, a7, a8);
  if ( v11 == 1 )
    return 1;
  v14 = (*((_BYTE *)a2 + 1) >> 1) & 7;
  if ( (unsigned int)v14 - 2 > 1 )
  {
    v38 = (unsigned __int16 *)a2[((*a2 & 0x4000) != 0) + 2 + ((*a2 & 0x2000) != 0)];
    v39 = sub_EEDE70(a2);
    sub_1D43BE0((__int64)&v62, a1, *((unsigned int *)a2 + 1), v39, v38, v14 == 1, a3, a4);
    a3 = (__m128)_mm_load_si128(&v62);
    v15 = BYTE2(v63);
    v16 = v62;
    v60 = (__m128i)a3;
    LOWORD(v61) = v63;
    BYTE2(v61) = BYTE2(v63);
    if ( !(_BYTE)v63 )
    {
      v14 = (*((_BYTE *)a2 + 1) >> 1) & 7;
      if ( v14 != 1 )
        goto LABEL_7;
      v17 = BYTE2(v63);
      v59 = BYTE1(v61);
      if ( BYTE2(v63) )
      {
        v17 = *(unsigned __int16 *)((char *)&v61 + 1);
        if ( !BYTE1(v61) )
        {
          v44 = *a2;
          v45 = sub_EEB7E0(
                  a2[((*a2 & 0x4000) != 0) + 3 + (unsigned int)((*a2 & 0x2000) != 0)],
                  (__int64)a1,
                  *(double *)a3.m128_u64);
          v54 = sub_EEC140(a2[((v44 & 0x4000) != 0) + 3 + (unsigned int)((v44 & 0x2000) != 0)]);
          v46 = sub_EEE9A0(16, *(_QWORD **)(*a1 + 248), 8u);
          v47 = *(_WORD *)v46 & 0xFE00;
          LOBYTE(v47) = -7;
          *(_WORD *)v46 = v47;
          if ( unk_2CD7484 )
            sub_EE9B50(249);
          *(_DWORD *)(v46 + 8) = v45;
          v22 = v46;
          *(_DWORD *)(v46 + 4) = 0;
          *(_DWORD *)(v46 + 12) = v54;
          *(_BYTE *)(v46 + 1) &= ~2u;
          goto LABEL_14;
        }
      }
      goto LABEL_32;
    }
    return 1;
  }
  if ( v14 != 1 )
  {
    v15 = 0;
    v16 = 0u;
LABEL_7:
    v56 = *a1;
    if ( v14 == 2 )
      sub_18C74E0(*a1, 5, 0, 4);
    v59 = 0;
    v17 = 0;
    goto LABEL_10;
  }
  BYTE2(v61) = 0;
  v15 = 0;
  v17 = 0;
  v59 = BYTE1(v61);
  v16 = 0u;
LABEL_32:
  v14 = 1;
  v56 = *a1;
LABEL_10:
  v51 = v17;
  v18 = (_WORD *)a2[((*a2 & 0x2000) != 0) + 3 + (unsigned int)((*a2 & 0x4000) != 0)];
  v19 = sub_1D42130(a1, v18, 0, a3, a4, v17, v12, v13);
  v21 = v51;
  v22 = v19;
  if ( v19 == 1 )
  {
    result = 1;
    if ( v14 != 2 )
      return result;
LABEL_42:
    sub_190D5E0(v56, a3);
    return 1;
  }
  if ( v14 == 2 )
  {
    sub_190D5E0(v56, a3);
    v21 = v51;
  }
  if ( (_BYTE)v21 && v59 )
  {
    v27 = *a2;
    v26 = nullptr;
    if ( (*a2 & 0x1000) != 0 )
    {
      v40 = ((v27 & 0x4000) != 0) + (unsigned int)((v27 & 0x2000) != 0) + 2;
      v26 = (void **)a2[v40 + 2];
      if ( v26 )
      {
        v57 = sub_EEB7E0(a2[v40 + 2], (__int64)v18, *(double *)a3.m128_u64);
        v41 = sub_F04E60(a2);
        v53 = sub_EEC140(v41);
        v42 = sub_EEE9A0(16, *(_QWORD **)(*a1 + 248), 8u);
        v43 = *(_WORD *)v42 & 0xFE00;
        LOBYTE(v43) = -7;
        *(_WORD *)v42 = v43;
        if ( unk_2CD7484 )
          sub_EE9B50(249);
        *(_DWORD *)(v42 + 4) = 0;
        *(_BYTE *)(v42 + 1) &= ~2u;
        *(_DWORD *)(v42 + 8) = v57;
        *(_DWORD *)(v42 + 12) = v53;
        v26 = (void **)(v42 & 0xFFFFFFFFFFFFFFFELL);
        goto LABEL_20;
      }
    }
    goto LABEL_21;
  }
LABEL_14:
  v56 = *a1;
  v23 = (*((_BYTE *)a2 + 1) >> 1) & 7;
  if ( (_BYTE)v23 == 3 )
  {
    sub_18C74E0(*a1, 5, 0, 4);
    v23 = 3;
  }
  v24 = nullptr;
  if ( (*a2 & 0x1000) != 0 )
    v24 = (_WORD *)a2[((*a2 & 0x4000) != 0) + 4 + (unsigned int)((*a2 & 0x2000) != 0)];
  v52 = v23;
  result = sub_1D42130(a1, v24, 0, a3, a4, v21, v23, v20);
  if ( result == 1 )
  {
    if ( v52 != 3 )
      return result;
    goto LABEL_42;
  }
  v26 = (void **)(result & 0xFFFFFFFFFFFFFFFELL);
  if ( v52 != 3 )
  {
LABEL_20:
    v27 = *a2;
    goto LABEL_21;
  }
  sub_190D5E0(v56, a3);
  v27 = *a2;
LABEL_21:
  v28 = *a1;
  v29 = (_WORD *)(v22 & 0xFFFFFFFFFFFFFFFELL);
  v30 = v11 & 0xFFFFFFFFFFFFFFFELL;
  if ( !*(_DWORD *)(*a1 + 12632) )
  {
    v31 = 0;
    if ( (v27 & 0x4000) != 0 )
      v31 = a2[2];
    if ( v31 == v30 )
    {
      v55 = v11 & 0xFFFFFFFFFFFFFFFELL;
      v48 = a2[((v27 & 0x4000) != 0) + 2 + ((v27 & 0x2000) != 0)];
      v49 = sub_EEDE70(a2);
      v30 = v55;
      if ( v48 == (v16.m128i_i64[1] & 0xFFFFFFFFFFFFFFFELL) && v49 == v16.m128i_i64[0] )
      {
        v27 = *a2;
        if ( (_WORD *)a2[((*a2 & 0x4000) != 0) + 3 + (unsigned int)((*a2 & 0x2000) != 0)] == v29 )
        {
          v58 = *a2;
          v50 = sub_F04E60(a2);
          v30 = v55;
          LOWORD(v27) = v58;
          if ( (void **)v50 == v26 )
            return (unsigned __int64)a2;
        }
        v28 = *a1;
      }
      else
      {
        v28 = *a1;
        v27 = *a2;
      }
    }
  }
  v32 = 0;
  if ( (v27 & 0x1000) != 0 )
    v32 = a2[((v27 & 0x1000) != 0) + 4 + ((v27 & 0x2000) != 0) + ((v27 & 0x4000) != 0)];
  v33 = *((_BYTE *)a2 + 1);
  BYTE2(v61) = v15;
  v34 = *((_DWORD *)a2 + 2);
  v35 = *((unsigned int *)a2 + 1);
  v60 = v16;
  v36 = *((_DWORD *)a2 + 3);
  v37 = _mm_load_si128(&v60);
  LOBYTE(v61) = 0;
  v62 = v37;
  v63 = v61;
  return sub_1C3A020(
           v28,
           v35,
           (v33 >> 1) & 7,
           v34,
           v30,
           v36,
           *(double *)a3.m128_u64,
           v37.m128i_i64[0],
           v37.m128i_i64[1],
           0,
           v29,
           v32,
           v26);
}
