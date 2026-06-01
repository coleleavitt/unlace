__int64 __fastcall sub_199D330(
        __int64 *a1,
        __int64 *a2,
        __m128 a3,
        __m128 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  unsigned __int16 *v9; // rsi
  __int64 v11; // rbp
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned __int8 v14; // r15
  char v15; // r13
  __m128i v16; // kr00_16
  __int64 v17; // rcx
  unsigned __int16 *v18; // rsi
  __int64 v19; // rax
  char v20; // cl
  __int64 v21; // r12
  unsigned __int16 *v22; // rax
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // r15
  unsigned __int64 v27; // r15
  __int64 v28; // rdx
  unsigned __int64 v29; // rbp
  __int64 v30; // rax
  unsigned __int64 v31; // r12
  int v32; // edi
  int v33; // ecx
  int v34; // esi
  unsigned __int8 v35; // dl
  int v36; // r9d
  __m128i v37; // xmm1
  __int64 result; // rax
  unsigned __int16 *v39; // r12
  __int64 v40; // rax
  unsigned __int64 v41; // rax
  unsigned __int64 v42; // rax
  __int16 v43; // dx
  unsigned __int16 *v44; // rax
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 v48; // rax
  __int64 v49; // r15
  int v50; // r12d
  __int64 v51; // r15
  __int16 v52; // dx
  __int64 v53; // rax
  __int64 v54; // rax
  char v55; // [rsp+18h] [rbp-90h]
  int v56; // [rsp+18h] [rbp-90h]
  __int64 v57; // [rsp+18h] [rbp-90h]
  int v58; // [rsp+18h] [rbp-90h]
  __int64 v59; // [rsp+18h] [rbp-90h]
  __int64 v60; // [rsp+18h] [rbp-90h]
  __int64 v61; // [rsp+20h] [rbp-88h]
  int v62; // [rsp+20h] [rbp-88h]
  char v63; // [rsp+2Fh] [rbp-79h]
  __m128i v64; // [rsp+30h] [rbp-78h] BYREF
  __int64 v65; // [rsp+40h] [rbp-68h]
  __m128i v66; // [rsp+50h] [rbp-58h] BYREF
  __int64 v67; // [rsp+60h] [rbp-48h]

  v9 = nullptr;
  if ( (*(_WORD *)a2 & 0x4000) != 0 )
    v9 = (unsigned __int16 *)a2[2];
  v11 = sub_1998500(a1, v9, 0, a3, a4, a6, a7, a8);
  if ( v11 == 1 )
    return 1;
  v14 = (*((_BYTE *)a2 + 1) >> 1) & 7;
  if ( (unsigned int)v14 - 2 > 1 )
  {
    v39 = (unsigned __int16 *)a2[((*a2 & 0x4000) != 0) + 2 + ((*a2 & 0x2000) != 0)];
    v40 = sub_EEDE70(a2);
    sub_197B180((__int64)&v66, a1, *((_DWORD *)a2 + 1), v40, v39, v14 == 1, a3, a4);
    a3 = (__m128)_mm_load_si128(&v66);
    v15 = BYTE2(v67);
    v16 = v66;
    v64 = (__m128i)a3;
    LOWORD(v65) = v67;
    BYTE2(v65) = BYTE2(v67);
    if ( (_BYTE)v67 )
      return 1;
    v14 = (*((_BYTE *)a2 + 1) >> 1) & 7;
    if ( v14 != 1 )
      goto LABEL_7;
    v17 = BYTE2(v67);
    v63 = BYTE1(v65);
    if ( BYTE2(v67) )
    {
      v17 = *(unsigned __int16 *)((char *)&v65 + 1);
      if ( !BYTE1(v65) )
      {
        v49 = *a2;
        v50 = sub_EEB7E0(
                a2[((*a2 & 0x4000) != 0) + 3 + (unsigned int)((*a2 & 0x2000) != 0)],
                (__int64)a1,
                *(double *)a3.m128_u64);
        v58 = sub_EEC140(a2[((v49 & 0x4000) != 0) + 3 + (unsigned int)((v49 & 0x2000) != 0)]);
        v51 = sub_EEE9A0(16, *(_QWORD **)(*a1 + 248), 8u);
        v52 = *(_WORD *)v51 & 0xFE00;
        LOBYTE(v52) = -7;
        *(_WORD *)v51 = v52;
        if ( unk_2CD7484 )
          sub_EE9B50(249);
        *(_DWORD *)(v51 + 8) = v50;
        v21 = v51;
        *(_DWORD *)(v51 + 4) = 0;
        *(_DWORD *)(v51 + 12) = v58;
        *(_BYTE *)(v51 + 1) &= ~2u;
        goto LABEL_14;
      }
    }
LABEL_29:
    v14 = 1;
    v61 = *a1;
    goto LABEL_10;
  }
  if ( v14 == 1 )
  {
    BYTE2(v65) = 0;
    v15 = 0;
    v17 = 0;
    v63 = BYTE1(v65);
    v16 = 0u;
    goto LABEL_29;
  }
  v15 = 0;
  v16 = 0u;
LABEL_7:
  v61 = *a1;
  if ( v14 == 2 )
    sub_18C79E0(*a1, 5, 4);
  v63 = 0;
  v17 = 0;
LABEL_10:
  v55 = v17;
  v18 = (unsigned __int16 *)a2[((*a2 & 0x2000) != 0) + 3 + (unsigned int)((*a2 & 0x4000) != 0)];
  v19 = sub_1998500(a1, v18, 0, a3, a4, v17, v12, v13);
  v20 = v55;
  v21 = v19;
  if ( v19 == 1 )
  {
    result = 1;
    if ( v14 == 2 )
    {
      sub_190D5E0(v61, a3);
      return 1;
    }
    return result;
  }
  if ( v14 == 2 )
  {
    sub_190D5E0(v61, a3);
    v20 = v55;
  }
  if ( !v20 || !v63 )
  {
LABEL_14:
    if ( ((*((_BYTE *)a2 + 1) >> 1) & 7) == 3 )
    {
      v57 = *a1;
      sub_18C79E0(*a1, 5, 4);
      v44 = (unsigned __int16 *)sub_F04E60(a2);
      v48 = sub_1998500(a1, v44, 0, a3, a4, v45, v46, v47);
      if ( v48 == 1 )
      {
        sub_190D5E0(v57, a3);
        return 1;
      }
      v27 = v48 & 0xFFFFFFFFFFFFFFFELL;
      sub_190D5E0(v57, a3);
      goto LABEL_17;
    }
    v22 = (unsigned __int16 *)sub_F04E60(a2);
    v26 = sub_1998500(a1, v22, 0, a3, a4, v23, v24, v25);
    if ( v26 != 1 )
      goto LABEL_16;
    return 1;
  }
  v41 = sub_F04E60(a2);
  v27 = v41;
  if ( !v41 )
    goto LABEL_17;
  v62 = sub_EEB7E0(v41, (__int64)v18, *(double *)a3.m128_u64);
  v42 = sub_F04E60(a2);
  v56 = sub_EEC140(v42);
  v26 = sub_EEE9A0(16, *(_QWORD **)(*a1 + 248), 8u);
  v43 = *(_WORD *)v26 & 0xFE00;
  LOBYTE(v43) = -7;
  *(_WORD *)v26 = v43;
  if ( unk_2CD7484 )
    sub_EE9B50(249);
  *(_DWORD *)(v26 + 4) = 0;
  *(_BYTE *)(v26 + 1) &= ~2u;
  *(_DWORD *)(v26 + 8) = v62;
  *(_DWORD *)(v26 + 12) = v56;
LABEL_16:
  v27 = v26 & 0xFFFFFFFFFFFFFFFELL;
LABEL_17:
  v28 = *a2;
  v29 = v11 & 0xFFFFFFFFFFFFFFFELL;
  v30 = 0;
  if ( (*a2 & 0x4000) != 0 )
    v30 = a2[2];
  v31 = v21 & 0xFFFFFFFFFFFFFFFELL;
  if ( v30 == v29 )
  {
    v59 = a2[((v28 & 0x4000) != 0) + 2 + ((v28 & 0x2000) != 0)];
    v53 = sub_EEDE70(a2);
    if ( v59 == (v16.m128i_i64[1] & 0xFFFFFFFFFFFFFFFELL) && v53 == v16.m128i_i64[0] )
    {
      v28 = *a2;
      if ( a2[((*a2 & 0x4000) != 0) + 3 + (unsigned int)((*a2 & 0x2000) != 0)] == v31 )
      {
        v60 = *a2;
        v54 = sub_F04E60(a2);
        LOWORD(v28) = v60;
        if ( v54 == v27 )
          return (__int64)a2;
      }
    }
    else
    {
      v28 = *a2;
    }
  }
  v32 = 0;
  if ( (v28 & 0x1000) != 0 )
    v32 = a2[((v28 & 0x1000) != 0) + 4 + ((v28 & 0x2000) != 0) + ((v28 & 0x4000) != 0)];
  v33 = *((_DWORD *)a2 + 2);
  v34 = *((_DWORD *)a2 + 1);
  BYTE2(v65) = v15;
  v35 = *((_BYTE *)a2 + 1);
  v36 = *((_DWORD *)a2 + 3);
  v64 = v16;
  v37 = _mm_load_si128(&v64);
  LOBYTE(v65) = 0;
  v66 = v37;
  v67 = v65;
  return sub_1C3A020(*a1, v34, (v35 >> 1) & 7, v33, v29, v36, v37.m128i_i64[0], v37.m128i_i64[1], 0, v31, v32, v27);
}
