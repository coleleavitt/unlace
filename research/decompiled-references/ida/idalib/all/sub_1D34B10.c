unsigned __int64 __fastcall sub_1D34B10(
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
  __int64 v28; // r8
  __int64 v29; // r9
  double v30; // xmm4_8
  double v31; // xmm5_8
  __int64 v32; // rcx
  __int64 v33; // r12
  char v34; // r15
  unsigned __int16 *v35; // rsi
  unsigned __int64 result; // rax
  unsigned __int64 v37; // rax
  void **v38; // r9
  __int64 v39; // rdi
  _WORD *v40; // r12
  __int64 v41; // rdx
  unsigned __int64 v42; // r8
  __int64 v43; // rax
  int v44; // r11d
  unsigned __int8 v45; // dl
  int v46; // ecx
  __int64 v47; // rsi
  __m128i v48; // xmm1
  unsigned __int16 *v49; // r12
  unsigned __int64 v50; // rax
  unsigned __int64 v51; // rax
  unsigned __int64 v52; // rax
  __int64 v53; // r15
  __int16 v54; // dx
  __int64 v55; // r15
  int v56; // r12d
  __int64 v57; // r15
  __int16 v58; // dx
  __int64 v59; // rbp
  __int64 v60; // rax
  __int64 v61; // rax
  unsigned __int8 v62; // [rsp+18h] [rbp-90h]
  __int64 v63; // [rsp+18h] [rbp-90h]
  int v64; // [rsp+18h] [rbp-90h]
  int v65; // [rsp+18h] [rbp-90h]
  void **v66; // [rsp+18h] [rbp-90h]
  __int64 v67; // [rsp+20h] [rbp-88h]
  int v68; // [rsp+20h] [rbp-88h]
  void **v69; // [rsp+20h] [rbp-88h]
  unsigned __int64 v70; // [rsp+20h] [rbp-88h]
  char v71; // [rsp+28h] [rbp-80h]
  __int64 v72; // [rsp+28h] [rbp-80h]
  __m128i v73; // [rsp+30h] [rbp-78h] BYREF
  __int64 v74; // [rsp+40h] [rbp-68h]
  __m128i v75; // [rsp+50h] [rbp-58h] BYREF
  __int64 v76; // [rsp+60h] [rbp-48h]

  v15 = nullptr;
  if ( (*(_WORD *)a2 & 0x4000) != 0 )
    v15 = (unsigned __int16 *)a2[2];
  v17 = sub_1D2FA60(a1, v15, nullptr, a3, a4, a5, a6, a7, a8, a9, a10, a12, a13, a14);
  if ( v17 == 1 )
    return 1;
  v22 = (*((_BYTE *)a2 + 1) >> 1) & 7;
  if ( (unsigned int)v22 - 2 > 1 )
  {
    v49 = (unsigned __int16 *)a2[((*a2 & 0x4000) != 0) + 2 + ((*a2 & 0x2000) != 0)];
    v50 = sub_EEDE70(a2);
    sub_1D1BD70((__int64)&v75, a1, *((unsigned int *)a2 + 1), v50, v49, v22 == 1, a3, a4);
    a3 = (__m128)_mm_load_si128(&v75);
    v23 = BYTE2(v76);
    v24 = v75;
    v73 = (__m128i)a3;
    LOWORD(v74) = v76;
    BYTE2(v74) = BYTE2(v76);
    if ( !(_BYTE)v76 )
    {
      v22 = (*((_BYTE *)a2 + 1) >> 1) & 7;
      if ( v22 != 1 )
        goto LABEL_7;
      v25 = BYTE2(v76);
      v71 = BYTE1(v74);
      if ( BYTE2(v76) )
      {
        v25 = *(unsigned __int16 *)((char *)&v74 + 1);
        if ( !BYTE1(v74) )
        {
          v55 = *a2;
          v56 = sub_EEB7E0(
                  a2[((*a2 & 0x4000) != 0) + 3 + (unsigned int)((*a2 & 0x2000) != 0)],
                  (__int64)a1,
                  *(double *)a3.m128_u64);
          v65 = sub_EEC140(a2[((v55 & 0x4000) != 0) + 3 + (unsigned int)((v55 & 0x2000) != 0)]);
          v57 = sub_EEE9A0(16, *(_QWORD **)(*a1 + 248), 8u);
          v58 = *(_WORD *)v57 & 0xFE00;
          LOBYTE(v58) = -7;
          *(_WORD *)v57 = v58;
          if ( unk_2CD7484 )
            sub_EE9B50(249);
          *(_DWORD *)(v57 + 8) = v56;
          v33 = v57;
          *(_DWORD *)(v57 + 4) = 0;
          *(_DWORD *)(v57 + 12) = v65;
          *(_BYTE *)(v57 + 1) &= ~2u;
LABEL_14:
          v63 = *a1;
          v34 = (*((_BYTE *)a2 + 1) >> 1) & 7;
          if ( v34 == 3 )
            sub_18C74E0(*a1, 5, 0, 4);
          v35 = nullptr;
          if ( (*a2 & 0x1000) != 0 )
            v35 = (unsigned __int16 *)a2[((*a2 & 0x4000) != 0) + 4 + (unsigned int)((*a2 & 0x2000) != 0)];
          result = sub_1D2FA60(a1, v35, nullptr, a3, a4, a5, a6, v30, v31, a9, a10, v32, v28, v29);
          if ( result == 1 )
          {
            if ( v34 == 3 )
            {
              sub_190D5E0(v63, a3);
              return 1;
            }
            return result;
          }
          v37 = result & 0xFFFFFFFFFFFFFFFELL;
          v38 = (void **)v37;
          if ( v34 == 3 )
          {
            v69 = (void **)v37;
            sub_190D5E0(v63, a3);
            v38 = v69;
          }
          goto LABEL_21;
        }
      }
LABEL_32:
      v22 = 1;
      v67 = *a1;
      goto LABEL_10;
    }
    return 1;
  }
  if ( v22 == 1 )
  {
    BYTE2(v74) = 0;
    v23 = 0;
    v25 = 0;
    v71 = BYTE1(v74);
    v24 = 0u;
    goto LABEL_32;
  }
  v23 = 0;
  v24 = 0u;
LABEL_7:
  v67 = *a1;
  if ( v22 == 2 )
    sub_18C74E0(*a1, 5, 0, 4);
  v71 = 0;
  v25 = 0;
LABEL_10:
  v62 = v25;
  v26 = (unsigned __int16 *)a2[((*a2 & 0x2000) != 0) + 3 + (unsigned int)((*a2 & 0x4000) != 0)];
  v27 = sub_1D2FA60(a1, v26, nullptr, a3, a4, a5, a6, v20, v21, a9, a10, v25, v18, v19);
  v32 = v62;
  v33 = v27;
  if ( v27 == 1 )
  {
    result = 1;
    if ( v22 == 2 )
    {
      sub_190D5E0(v67, a3);
      return 1;
    }
    return result;
  }
  if ( v22 == 2 )
  {
    sub_190D5E0(v67, a3);
    v32 = v62;
  }
  if ( !(_BYTE)v32 || !v71 )
    goto LABEL_14;
  v51 = sub_F04E60(a2);
  v38 = (void **)v51;
  if ( v51 )
  {
    v68 = sub_EEB7E0(v51, (__int64)v26, *(double *)a3.m128_u64);
    v52 = sub_F04E60(a2);
    v64 = sub_EEC140(v52);
    v53 = sub_EEE9A0(16, *(_QWORD **)(*a1 + 248), 8u);
    v54 = *(_WORD *)v53 & 0xFE00;
    LOBYTE(v54) = -7;
    *(_WORD *)v53 = v54;
    if ( unk_2CD7484 )
      sub_EE9B50(249);
    *(_BYTE *)(v53 + 1) &= ~2u;
    *(_DWORD *)(v53 + 4) = 0;
    v38 = (void **)(v53 & 0xFFFFFFFFFFFFFFFELL);
    *(_DWORD *)(v53 + 8) = v68;
    *(_DWORD *)(v53 + 12) = v64;
  }
LABEL_21:
  v39 = *a1;
  v40 = (_WORD *)(v33 & 0xFFFFFFFFFFFFFFFELL);
  v41 = *a2;
  v42 = v17 & 0xFFFFFFFFFFFFFFFELL;
  if ( !*(_DWORD *)(*a1 + 12632) )
  {
    v43 = 0;
    if ( (v41 & 0x4000) != 0 )
      v43 = a2[2];
    if ( v43 == v42 )
    {
      v70 = v17 & 0xFFFFFFFFFFFFFFFELL;
      v66 = v38;
      v59 = a2[((v41 & 0x4000) != 0) + 2 + ((v41 & 0x2000) != 0)];
      v60 = sub_EEDE70(a2);
      v38 = v66;
      v42 = v70;
      if ( v59 == (v24.m128i_i64[1] & 0xFFFFFFFFFFFFFFFELL) && v60 == v24.m128i_i64[0] )
      {
        v41 = *a2;
        if ( (_WORD *)a2[((*a2 & 0x4000) != 0) + 3 + (unsigned int)((*a2 & 0x2000) != 0)] == v40 )
        {
          v72 = *a2;
          v61 = sub_F04E60(a2);
          v38 = v66;
          v42 = v70;
          LOWORD(v41) = v72;
          if ( (void **)v61 == v66 )
            return (unsigned __int64)a2;
        }
        v39 = *a1;
      }
      else
      {
        v39 = *a1;
        v41 = *a2;
      }
    }
  }
  v44 = 0;
  if ( (v41 & 0x1000) != 0 )
    v44 = a2[((v41 & 0x1000) != 0) + 4 + ((v41 & 0x2000) != 0) + ((v41 & 0x4000) != 0)];
  v45 = *((_BYTE *)a2 + 1);
  BYTE2(v74) = v23;
  v46 = *((_DWORD *)a2 + 2);
  v47 = *((unsigned int *)a2 + 1);
  v73 = v24;
  v48 = _mm_load_si128(&v73);
  LOBYTE(v74) = 0;
  v75 = v48;
  v76 = v74;
  return sub_1C3A020(
           v39,
           v47,
           (v45 >> 1) & 7,
           v46,
           v42,
           *((_DWORD *)a2 + 3),
           *(double *)a3.m128_u64,
           v48.m128i_i64[0],
           v48.m128i_i64[1],
           0,
           v40,
           v44,
           v38);
}
