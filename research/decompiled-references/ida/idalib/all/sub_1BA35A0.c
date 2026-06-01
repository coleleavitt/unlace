__int64 __fastcall sub_1BA35A0(
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
  __int64 v11; // rax
  __int64 v12; // r8
  __int64 v13; // r9
  int v14; // r13d
  unsigned __int8 v15; // r15
  char v16; // r12
  __m128i v17; // kr00_16
  __int64 v18; // rcx
  _WORD *v19; // rsi
  __int64 v20; // rax
  char v21; // cl
  __int64 v22; // rbp
  _WORD *v23; // rax
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rax
  unsigned __int64 v28; // rax
  int v29; // edi
  unsigned __int8 v30; // dl
  int v31; // ecx
  int v32; // esi
  int v33; // r9d
  __m128i v34; // xmm1
  __int64 result; // rax
  unsigned __int16 *v36; // rbp
  unsigned __int64 v37; // rax
  unsigned __int64 v38; // rax
  int v39; // r15d
  __int16 v40; // dx
  __int64 v41; // r15
  _WORD *v42; // rax
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // rax
  __int64 v47; // r15
  int v48; // ebp
  __int64 v49; // r15
  __int16 v50; // dx
  char v51; // [rsp+18h] [rbp-90h]
  int v52; // [rsp+18h] [rbp-90h]
  __int64 v53; // [rsp+18h] [rbp-90h]
  int v54; // [rsp+18h] [rbp-90h]
  __int64 v55; // [rsp+20h] [rbp-88h]
  __int64 v56; // [rsp+20h] [rbp-88h]
  char v57; // [rsp+2Fh] [rbp-79h]
  __m128i v58; // [rsp+30h] [rbp-78h] BYREF
  __int64 v59; // [rsp+40h] [rbp-68h]
  __m128i v60; // [rsp+50h] [rbp-58h] BYREF
  __int64 v61; // [rsp+60h] [rbp-48h]

  v9 = nullptr;
  if ( (*(_WORD *)a2 & 0x4000) != 0 )
    v9 = (_WORD *)a2[2];
  v11 = sub_1B7AA40(a1, v9, 0, a3, a4, a6, a7, a8);
  v14 = v11;
  if ( v11 == 1 )
    return 1;
  v15 = (*((_BYTE *)a2 + 1) >> 1) & 7;
  if ( (unsigned int)v15 - 2 > 1 )
  {
    v36 = (unsigned __int16 *)a2[((*a2 & 0x4000) != 0) + 2 + ((*a2 & 0x2000) != 0)];
    v37 = sub_EEDE70(a2);
    sub_1B7D0C0((__int64)&v60, a1, *((unsigned int *)a2 + 1), v37, v36, v15 == 1, a3, a4);
    a3 = (__m128)_mm_load_si128(&v60);
    v16 = BYTE2(v61);
    v17 = v60;
    v58 = (__m128i)a3;
    LOWORD(v59) = v61;
    BYTE2(v59) = BYTE2(v61);
    if ( (_BYTE)v61 )
      return 1;
    v15 = (*((_BYTE *)a2 + 1) >> 1) & 7;
    if ( v15 != 1 )
      goto LABEL_7;
    v18 = BYTE2(v61);
    v57 = BYTE1(v59);
    if ( BYTE2(v61) )
    {
      v18 = *(unsigned __int16 *)((char *)&v59 + 1);
      if ( !BYTE1(v59) )
      {
        v47 = *a2;
        v48 = sub_EEB7E0(
                a2[((*a2 & 0x4000) != 0) + 3 + (unsigned int)((*a2 & 0x2000) != 0)],
                (__int64)a1,
                *(double *)a3.m128_u64);
        v54 = sub_EEC140(a2[((v47 & 0x4000) != 0) + 3 + (unsigned int)((v47 & 0x2000) != 0)]);
        v49 = sub_EEE9A0(16, *(_QWORD **)(*a1 + 248), 8u);
        v50 = *(_WORD *)v49 & 0xFE00;
        LOBYTE(v50) = -7;
        *(_WORD *)v49 = v50;
        if ( unk_2CD7484 )
          sub_EE9B50(249);
        *(_DWORD *)(v49 + 8) = v48;
        v22 = v49;
        *(_DWORD *)(v49 + 4) = 0;
        *(_DWORD *)(v49 + 12) = v54;
        *(_BYTE *)(v49 + 1) &= ~2u;
LABEL_14:
        if ( ((*((_BYTE *)a2 + 1) >> 1) & 7) == 3 )
        {
          v41 = *a1;
          sub_18C74E0(*a1, 5, 0, 4);
          v42 = (_WORD *)sub_F04E60(a2);
          v46 = sub_1B7AA40(a1, v42, 0, a3, a4, v43, v44, v45);
          if ( v46 == 1 )
          {
            sub_190D5E0(v41, a3);
            return 1;
          }
          v53 = v46;
          sub_190D5E0(v41, a3);
          v28 = v53 & 0xFFFFFFFFFFFFFFFELL;
          goto LABEL_17;
        }
        v23 = (_WORD *)sub_F04E60(a2);
        v27 = sub_1B7AA40(a1, v23, 0, a3, a4, v24, v25, v26);
        if ( v27 != 1 )
          goto LABEL_16;
        return 1;
      }
    }
LABEL_26:
    v15 = 1;
    v55 = *a1;
    goto LABEL_10;
  }
  if ( v15 == 1 )
  {
    BYTE2(v59) = 0;
    v16 = 0;
    v18 = 0;
    v57 = BYTE1(v59);
    v17 = 0u;
    goto LABEL_26;
  }
  v16 = 0;
  v17 = 0u;
LABEL_7:
  v55 = *a1;
  if ( v15 == 2 )
    sub_18C74E0(*a1, 5, 0, 4);
  v57 = 0;
  v18 = 0;
LABEL_10:
  v51 = v18;
  v19 = (_WORD *)a2[((*a2 & 0x2000) != 0) + 3 + (unsigned int)((*a2 & 0x4000) != 0)];
  v20 = sub_1B7AA40(a1, v19, 0, a3, a4, v18, v12, v13);
  v21 = v51;
  v22 = v20;
  if ( v20 != 1 )
  {
    if ( v15 == 2 )
    {
      sub_190D5E0(v55, a3);
      v21 = v51;
    }
    if ( v21 && v57 )
    {
      v28 = sub_F04E60(a2);
      if ( !v28 )
        goto LABEL_17;
      v52 = sub_EEB7E0(v28, (__int64)v19, *(double *)a3.m128_u64);
      v38 = sub_F04E60(a2);
      v39 = sub_EEC140(v38);
      v27 = sub_EEE9A0(16, *(_QWORD **)(*a1 + 248), 8u);
      v40 = *(_WORD *)v27 & 0xFE00;
      LOBYTE(v40) = -7;
      *(_WORD *)v27 = v40;
      if ( unk_2CD7484 )
      {
        v56 = v27;
        sub_EE9B50(249);
        v27 = v56;
      }
      *(_DWORD *)(v27 + 12) = v39;
      *(_DWORD *)(v27 + 4) = 0;
      *(_DWORD *)(v27 + 8) = v52;
      *(_BYTE *)(v27 + 1) &= ~2u;
LABEL_16:
      v28 = v27 & 0xFFFFFFFFFFFFFFFELL;
LABEL_17:
      v29 = 0;
      if ( (*a2 & 0x1000) != 0 )
        v29 = a2[((*a2 & 0x1000) != 0) + 4 + ((*a2 & 0x2000) != 0) + ((*a2 & 0x4000) != 0)];
      BYTE2(v59) = v16;
      v30 = *((_BYTE *)a2 + 1);
      v31 = *((_DWORD *)a2 + 2);
      v32 = *((_DWORD *)a2 + 1);
      v33 = *((_DWORD *)a2 + 3);
      v58 = v17;
      v34 = _mm_load_si128(&v58);
      LOBYTE(v59) = 0;
      v60 = v34;
      v61 = v59;
      return sub_1C3A020(
               *a1,
               v32,
               (v30 >> 1) & 7,
               v31,
               v14 & 0xFFFFFFFE,
               v33,
               v34.m128i_i64[0],
               v34.m128i_i64[1],
               0,
               v22 & 0xFFFFFFFFFFFFFFFELL,
               v29,
               v28);
    }
    goto LABEL_14;
  }
  result = 1;
  if ( v15 == 2 )
  {
    sub_190D5E0(v55, a3);
    return 1;
  }
  return result;
}
