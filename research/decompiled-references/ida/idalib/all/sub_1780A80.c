__int64 __fastcall sub_1780A80(__int64 *a1, __int64 *a2, __m128i a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7)
{
  unsigned __int16 *v8; // rsi
  __int64 v10; // rbp
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned __int8 v13; // r15
  char v14; // r13
  __m128i v15; // kr00_16
  __int64 v16; // rcx
  unsigned __int16 *v17; // rsi
  __int64 v18; // rax
  __int64 v19; // r9
  __int64 v20; // rcx
  __int64 v21; // r12
  __int64 v22; // r8
  unsigned __int16 *v23; // rsi
  __int64 result; // rax
  unsigned __int64 v25; // r15
  __int64 v26; // rdx
  __int64 v27; // rdi
  unsigned __int64 v28; // r12
  unsigned __int64 v29; // r8
  __int64 v30; // rax
  int v31; // r11d
  unsigned __int8 v32; // dl
  int v33; // ecx
  int v34; // esi
  int v35; // r9d
  __m128i v36; // xmm1
  unsigned __int16 *v37; // r12
  __int64 v38; // rax
  __int64 v39; // rax
  unsigned __int64 v40; // rax
  __int64 v41; // r15
  __int16 v42; // dx
  __int64 v43; // r15
  int v44; // r12d
  __int64 v45; // r15
  __int16 v46; // dx
  __int64 v47; // rbp
  __int64 v48; // rax
  __int64 v49; // rax
  unsigned __int8 v50; // [rsp+18h] [rbp-90h]
  char v51; // [rsp+18h] [rbp-90h]
  int v52; // [rsp+18h] [rbp-90h]
  int v53; // [rsp+18h] [rbp-90h]
  int v54; // [rsp+18h] [rbp-90h]
  __int64 v55; // [rsp+20h] [rbp-88h]
  int v56; // [rsp+20h] [rbp-88h]
  __int64 v57; // [rsp+20h] [rbp-88h]
  char v58; // [rsp+2Fh] [rbp-79h]
  __m128i v59; // [rsp+30h] [rbp-78h] BYREF
  __int64 v60; // [rsp+40h] [rbp-68h]
  __m128i v61; // [rsp+50h] [rbp-58h] BYREF
  __int64 v62; // [rsp+60h] [rbp-48h]

  v8 = nullptr;
  if ( (*(_WORD *)a2 & 0x4000) != 0 )
    v8 = (unsigned __int16 *)a2[2];
  v10 = sub_177B9C0(a1, v8, 0, *(double *)a3.m128i_i64, a5, a6, a7);
  if ( v10 == 1 )
    return 1;
  v13 = (*((_BYTE *)a2 + 1) >> 1) & 7;
  if ( (unsigned int)v13 - 2 > 1 )
  {
    v37 = (unsigned __int16 *)a2[((*a2 & 0x4000) != 0) + 2 + ((*a2 & 0x2000) != 0)];
    v38 = sub_EEDE70(a2);
    sub_175C5C0((__int64)&v61, a1, *((_DWORD *)a2 + 1), v38, v37, v13 == 1);
    a3 = _mm_load_si128(&v61);
    v14 = BYTE2(v62);
    v15 = v61;
    v59 = a3;
    LOWORD(v60) = v62;
    BYTE2(v60) = BYTE2(v62);
    if ( !(_BYTE)v62 )
    {
      v13 = (*((_BYTE *)a2 + 1) >> 1) & 7;
      if ( v13 != 1 )
        goto LABEL_7;
      v16 = BYTE2(v62);
      v58 = BYTE1(v60);
      if ( BYTE2(v62) )
      {
        v16 = *(unsigned __int16 *)((char *)&v60 + 1);
        if ( !BYTE1(v60) )
        {
          v43 = *a2;
          v44 = sub_EEB7E0(
                  a2[((*a2 & 0x4000) != 0) + 3 + (unsigned int)((*a2 & 0x2000) != 0)],
                  (__int64)a1,
                  *(double *)a3.m128i_i64);
          v53 = sub_EEC140(a2[((v43 & 0x4000) != 0) + 3 + (unsigned int)((v43 & 0x2000) != 0)]);
          v45 = sub_EEE9A0(16, *(_QWORD **)(*a1 + 248), 8u);
          v46 = *(_WORD *)v45 & 0xFE00;
          LOBYTE(v46) = -7;
          *(_WORD *)v45 = v46;
          if ( unk_2CD7484 )
            sub_EE9B50(249);
          *(_DWORD *)(v45 + 8) = v44;
          v21 = v45;
          *(_DWORD *)(v45 + 4) = 0;
          *(_DWORD *)(v45 + 12) = v53;
          *(_BYTE *)(v45 + 1) &= ~2u;
          goto LABEL_14;
        }
      }
      goto LABEL_32;
    }
    return 1;
  }
  if ( v13 != 1 )
  {
    v14 = 0;
    v15 = 0u;
LABEL_7:
    v55 = *a1;
    if ( v13 == 2 )
      sub_18C74E0(*a1, 5, 0, 4);
    v58 = 0;
    v16 = 0;
    goto LABEL_10;
  }
  BYTE2(v60) = 0;
  v14 = 0;
  v16 = 0;
  v58 = BYTE1(v60);
  v15 = 0u;
LABEL_32:
  v13 = 1;
  v55 = *a1;
LABEL_10:
  v50 = v16;
  v17 = (unsigned __int16 *)a2[((*a2 & 0x2000) != 0) + 3 + (unsigned int)((*a2 & 0x4000) != 0)];
  v18 = sub_177B9C0(a1, v17, 0, *(double *)a3.m128i_i64, v16, v11, v12);
  v20 = v50;
  v21 = v18;
  if ( v18 == 1 )
  {
    result = 1;
    if ( v13 != 2 )
      return result;
LABEL_42:
    sub_190D5E0(v55);
    return 1;
  }
  if ( v13 == 2 )
  {
    sub_190D5E0(v55);
    v20 = v50;
  }
  if ( (_BYTE)v20 && v58 )
  {
    v26 = *a2;
    v25 = 0;
    if ( (*a2 & 0x1000) != 0 )
    {
      v39 = ((v26 & 0x4000) != 0) + (unsigned int)((v26 & 0x2000) != 0) + 2;
      v25 = a2[v39 + 2];
      if ( v25 )
      {
        v56 = sub_EEB7E0(a2[v39 + 2], (__int64)v17, *(double *)a3.m128i_i64);
        v40 = sub_F04E60(a2);
        v52 = sub_EEC140(v40);
        v41 = sub_EEE9A0(16, *(_QWORD **)(*a1 + 248), 8u);
        v42 = *(_WORD *)v41 & 0xFE00;
        LOBYTE(v42) = -7;
        *(_WORD *)v41 = v42;
        if ( unk_2CD7484 )
          sub_EE9B50(249);
        *(_DWORD *)(v41 + 4) = 0;
        *(_BYTE *)(v41 + 1) &= ~2u;
        *(_DWORD *)(v41 + 8) = v56;
        *(_DWORD *)(v41 + 12) = v52;
        v25 = v41 & 0xFFFFFFFFFFFFFFFELL;
        goto LABEL_20;
      }
    }
    goto LABEL_21;
  }
LABEL_14:
  v55 = *a1;
  v22 = (*((_BYTE *)a2 + 1) >> 1) & 7;
  if ( (_BYTE)v22 == 3 )
  {
    sub_18C74E0(*a1, 5, 0, 4);
    v22 = 3;
  }
  v23 = nullptr;
  if ( (*a2 & 0x1000) != 0 )
    v23 = (unsigned __int16 *)a2[((*a2 & 0x4000) != 0) + 4 + (unsigned int)((*a2 & 0x2000) != 0)];
  v51 = v22;
  result = sub_177B9C0(a1, v23, 0, *(double *)a3.m128i_i64, v20, v22, v19);
  if ( result == 1 )
  {
    if ( v51 != 3 )
      return result;
    goto LABEL_42;
  }
  v25 = result & 0xFFFFFFFFFFFFFFFELL;
  if ( v51 != 3 )
  {
LABEL_20:
    v26 = *a2;
    goto LABEL_21;
  }
  sub_190D5E0(v55);
  v26 = *a2;
LABEL_21:
  v27 = *a1;
  v28 = v21 & 0xFFFFFFFFFFFFFFFELL;
  v29 = v10 & 0xFFFFFFFFFFFFFFFELL;
  if ( !*(_DWORD *)(*a1 + 12632) )
  {
    v30 = 0;
    if ( (v26 & 0x4000) != 0 )
      v30 = a2[2];
    if ( v30 == v29 )
    {
      v54 = v10 & 0xFFFFFFFE;
      v47 = a2[((v26 & 0x4000) != 0) + 2 + ((v26 & 0x2000) != 0)];
      v48 = sub_EEDE70(a2);
      LODWORD(v29) = v54;
      if ( v47 == (v15.m128i_i64[1] & 0xFFFFFFFFFFFFFFFELL) && v48 == v15.m128i_i64[0] )
      {
        v26 = *a2;
        if ( a2[((*a2 & 0x4000) != 0) + 3 + (unsigned int)((*a2 & 0x2000) != 0)] == v28 )
        {
          v57 = *a2;
          v49 = sub_F04E60(a2);
          LODWORD(v29) = v54;
          LOWORD(v26) = v57;
          if ( v49 == v25 )
            return (__int64)a2;
        }
        v27 = *a1;
      }
      else
      {
        v27 = *a1;
        v26 = *a2;
      }
    }
  }
  v31 = 0;
  if ( (v26 & 0x1000) != 0 )
    v31 = a2[((v26 & 0x1000) != 0) + 4 + ((v26 & 0x2000) != 0) + ((v26 & 0x4000) != 0)];
  v32 = *((_BYTE *)a2 + 1);
  BYTE2(v60) = v14;
  v33 = *((_DWORD *)a2 + 2);
  v34 = *((_DWORD *)a2 + 1);
  v59 = v15;
  v35 = *((_DWORD *)a2 + 3);
  v36 = _mm_load_si128(&v59);
  LOBYTE(v60) = 0;
  v61 = v36;
  v62 = v60;
  return sub_1C3A020(v27, v34, (v32 >> 1) & 7, v33, v29, v35, v36.m128i_i64[0], v36.m128i_i64[1], 0, v28, v31, v25);
}
