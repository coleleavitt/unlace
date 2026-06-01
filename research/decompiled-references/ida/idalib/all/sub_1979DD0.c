__int64 __fastcall sub_1979DD0(
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
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rcx
  __int64 v24; // rbp
  char v25; // r15
  _WORD *v26; // rsi
  __int64 result; // rax
  unsigned __int64 v28; // rax
  int v29; // edi
  unsigned __int8 v30; // dl
  int v31; // ecx
  int v32; // esi
  int v33; // r9d
  __m128i v34; // xmm1
  unsigned __int64 v35; // rbp
  __int64 v36; // rax
  unsigned __int64 v37; // rax
  int v38; // r15d
  __int64 v39; // rax
  __int16 v40; // dx
  __int64 v41; // r15
  int v42; // ebp
  __int64 v43; // r15
  __int16 v44; // dx
  unsigned __int8 v45; // [rsp+18h] [rbp-90h]
  __int64 v46; // [rsp+18h] [rbp-90h]
  int v47; // [rsp+18h] [rbp-90h]
  int v48; // [rsp+18h] [rbp-90h]
  __int64 v49; // [rsp+20h] [rbp-88h]
  unsigned __int64 v50; // [rsp+20h] [rbp-88h]
  __int64 v51; // [rsp+20h] [rbp-88h]
  char v52; // [rsp+2Fh] [rbp-79h]
  __m128i v53; // [rsp+30h] [rbp-78h] BYREF
  __int64 v54; // [rsp+40h] [rbp-68h]
  __m128i v55; // [rsp+50h] [rbp-58h] BYREF
  __int64 v56; // [rsp+60h] [rbp-48h]

  v9 = nullptr;
  if ( (*(_WORD *)a2 & 0x4000) != 0 )
    v9 = (_WORD *)a2[2];
  v11 = sub_1975200(a1, v9, 0, a3, a4, a6, a7, a8);
  v14 = v11;
  if ( v11 == 1 )
    return 1;
  v15 = (*((_BYTE *)a2 + 1) >> 1) & 7;
  if ( (unsigned int)v15 - 2 > 1 )
  {
    v35 = a2[((*a2 & 0x4000) != 0) + 2 + ((*a2 & 0x2000) != 0)];
    v36 = sub_EEDE70(a2);
    sub_19346D0((__int64)&v55, a1, *((_DWORD *)a2 + 1), v36, v35, v15 == 1, a3, a4);
    a3 = (__m128)_mm_load_si128(&v55);
    v16 = BYTE2(v56);
    v17 = v55;
    v53 = (__m128i)a3;
    LOWORD(v54) = v56;
    BYTE2(v54) = BYTE2(v56);
    if ( !(_BYTE)v56 )
    {
      v15 = (*((_BYTE *)a2 + 1) >> 1) & 7;
      if ( v15 != 1 )
        goto LABEL_7;
      v18 = BYTE2(v56);
      v52 = BYTE1(v54);
      if ( BYTE2(v56) )
      {
        v18 = *(unsigned __int16 *)((char *)&v54 + 1);
        if ( !BYTE1(v54) )
        {
          v41 = *a2;
          v42 = sub_EEB7E0(
                  a2[((*a2 & 0x4000) != 0) + 3 + (unsigned int)((*a2 & 0x2000) != 0)],
                  (__int64)a1,
                  *(double *)a3.m128_u64);
          v48 = sub_EEC140(a2[((v41 & 0x4000) != 0) + 3 + (unsigned int)((v41 & 0x2000) != 0)]);
          v43 = sub_EEE9A0(16, *(_QWORD **)(*a1 + 248), 8u);
          v44 = *(_WORD *)v43 & 0xFE00;
          LOBYTE(v44) = -7;
          *(_WORD *)v43 = v44;
          if ( unk_2CD7484 )
            sub_EE9B50(249);
          *(_DWORD *)(v43 + 8) = v42;
          v24 = v43;
          *(_DWORD *)(v43 + 4) = 0;
          *(_DWORD *)(v43 + 12) = v48;
          *(_BYTE *)(v43 + 1) &= ~2u;
          goto LABEL_14;
        }
      }
      goto LABEL_28;
    }
    return 1;
  }
  if ( v15 != 1 )
  {
    v16 = 0;
    v17 = 0u;
LABEL_7:
    v49 = *a1;
    if ( v15 == 2 )
      sub_18C79E0(*a1, 5, 4);
    v52 = 0;
    v18 = 0;
    goto LABEL_10;
  }
  BYTE2(v54) = 0;
  v16 = 0;
  v18 = 0;
  v52 = BYTE1(v54);
  v17 = 0u;
LABEL_28:
  v15 = 1;
  v49 = *a1;
LABEL_10:
  v45 = v18;
  v19 = (_WORD *)a2[((*a2 & 0x2000) != 0) + 3 + (unsigned int)((*a2 & 0x4000) != 0)];
  v20 = sub_1975200(a1, v19, 0, a3, a4, v18, v12, v13);
  v23 = v45;
  v24 = v20;
  if ( v20 == 1 )
  {
    result = 1;
    if ( v15 == 2 )
    {
      sub_190D5E0(v49, a3);
      return 1;
    }
    return result;
  }
  if ( v15 == 2 )
  {
    sub_190D5E0(v49, a3);
    v23 = v45;
  }
  if ( (_BYTE)v23 && v52 )
  {
    v28 = sub_F04E60(a2);
    if ( v28 )
    {
      v47 = sub_EEB7E0(v28, (__int64)v19, *(double *)a3.m128_u64);
      v37 = sub_F04E60(a2);
      v38 = sub_EEC140(v37);
      v39 = sub_EEE9A0(16, *(_QWORD **)(*a1 + 248), 8u);
      v40 = *(_WORD *)v39 & 0xFE00;
      LOBYTE(v40) = -7;
      *(_WORD *)v39 = v40;
      if ( unk_2CD7484 )
      {
        v51 = v39;
        sub_EE9B50(249);
        v39 = v51;
      }
      *(_DWORD *)(v39 + 12) = v38;
      *(_DWORD *)(v39 + 4) = 0;
      *(_DWORD *)(v39 + 8) = v47;
      *(_BYTE *)(v39 + 1) &= ~2u;
      v28 = v39 & 0xFFFFFFFFFFFFFFFELL;
    }
LABEL_21:
    v29 = 0;
    if ( (*a2 & 0x1000) != 0 )
      v29 = a2[((*a2 & 0x1000) != 0) + 4 + ((*a2 & 0x2000) != 0) + ((*a2 & 0x4000) != 0)];
    BYTE2(v54) = v16;
    v30 = *((_BYTE *)a2 + 1);
    v31 = *((_DWORD *)a2 + 2);
    v32 = *((_DWORD *)a2 + 1);
    v33 = *((_DWORD *)a2 + 3);
    v53 = v17;
    v34 = _mm_load_si128(&v53);
    LOBYTE(v54) = 0;
    v55 = v34;
    v56 = v54;
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
             v24 & 0xFFFFFFFFFFFFFFFELL,
             v29,
             v28);
  }
LABEL_14:
  v46 = *a1;
  v25 = (*((_BYTE *)a2 + 1) >> 1) & 7;
  if ( v25 == 3 )
    sub_18C79E0(*a1, 5, 4);
  v26 = nullptr;
  if ( (*a2 & 0x1000) != 0 )
    v26 = (_WORD *)a2[((*a2 & 0x4000) != 0) + 4 + (unsigned int)((*a2 & 0x2000) != 0)];
  result = sub_1975200(a1, v26, 0, a3, a4, v23, v21, v22);
  if ( result != 1 )
  {
    v28 = result & 0xFFFFFFFFFFFFFFFELL;
    if ( v25 == 3 )
    {
      v50 = v28;
      sub_190D5E0(v46, a3);
      v28 = v50;
    }
    goto LABEL_21;
  }
  if ( v25 == 3 )
  {
    sub_190D5E0(v46, a3);
    return 1;
  }
  return result;
}
