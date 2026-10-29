__int64 __fastcall sub_1BC42F0(
        __int64 *a1,
        __int64 *a2,
        __m128 a3,
        __m128 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  const __m128i *v9; // rsi
  __int64 v11; // rbp
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned __int8 v14; // r15
  char v15; // r13
  __m128i v16; // kr00_16
  __int64 v17; // rcx
  const __m128i *v18; // rsi
  __int64 v19; // rax
  char v20; // cl
  __int64 v21; // r12
  const __m128i *v22; // rax
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // r15
  unsigned __int64 v27; // r15
  __int64 v28; // rdi
  unsigned __int64 v29; // r12
  __int64 v30; // rdx
  unsigned __int64 v31; // r8
  __int64 v32; // rax
  int v33; // r11d
  unsigned __int8 v34; // dl
  int v35; // ecx
  int v36; // esi
  int v37; // r9d
  __m128i v38; // xmm1
  __int64 result; // rax
  unsigned __int64 v40; // r12
  __int64 v41; // rax
  unsigned __int64 v42; // rax
  unsigned __int64 v43; // rax
  __int16 v44; // dx
  const __m128i *v45; // rax
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 v49; // rax
  __int64 v50; // r15
  int v51; // r12d
  __int64 v52; // r15
  __int16 v53; // dx
  __int64 v54; // rbp
  __int64 v55; // rax
  __int64 v56; // rax
  char v57; // [rsp+18h] [rbp-90h]
  int v58; // [rsp+18h] [rbp-90h]
  __int64 v59; // [rsp+18h] [rbp-90h]
  int v60; // [rsp+18h] [rbp-90h]
  int v61; // [rsp+18h] [rbp-90h]
  __int64 v62; // [rsp+20h] [rbp-88h]
  int v63; // [rsp+20h] [rbp-88h]
  __int64 v64; // [rsp+20h] [rbp-88h]
  char v65; // [rsp+2Fh] [rbp-79h]
  __m128i v66; // [rsp+30h] [rbp-78h] BYREF
  __int64 v67; // [rsp+40h] [rbp-68h]
  __m128i v68; // [rsp+50h] [rbp-58h] BYREF
  __int64 v69; // [rsp+60h] [rbp-48h]

  v9 = nullptr;
  if ( (*(_WORD *)a2 & 0x4000) != 0 )
    v9 = (const __m128i *)a2[2];
  v11 = sub_1B71AD0(a1, v9, 0, a3, a4, a6, a7, a8);
  if ( v11 == 1 )
    return 1;
  v14 = (*((_BYTE *)a2 + 1) >> 1) & 7;
  if ( (unsigned int)v14 - 2 > 1 )
  {
    v40 = a2[((*a2 & 0x4000) != 0) + 2 + ((*a2 & 0x2000) != 0)];
    v41 = sub_EEDE70(a2);
    sub_1BA5100((__int64)&v68, a1, *((unsigned int *)a2 + 1), v41, v40, v14 == 1, a3, a4);
    a3 = (__m128)_mm_load_si128(&v68);
    v15 = BYTE2(v69);
    v16 = v68;
    v66 = (__m128i)a3;
    LOWORD(v67) = v69;
    BYTE2(v67) = BYTE2(v69);
    if ( (_BYTE)v69 )
      return 1;
    v14 = (*((_BYTE *)a2 + 1) >> 1) & 7;
    if ( v14 != 1 )
      goto LABEL_7;
    v17 = BYTE2(v69);
    v65 = BYTE1(v67);
    if ( BYTE2(v69) )
    {
      v17 = *(unsigned __int16 *)((char *)&v67 + 1);
      if ( !BYTE1(v67) )
      {
        v50 = *a2;
        v51 = sub_EEB7E0(
                a2[((*a2 & 0x4000) != 0) + 3 + (unsigned int)((*a2 & 0x2000) != 0)],
                (__int64)a1,
                *(double *)a3.m128_u64);
        v60 = sub_EEC140(a2[((v50 & 0x4000) != 0) + 3 + (unsigned int)((v50 & 0x2000) != 0)]);
        v52 = sub_EEE9A0(16, *(_QWORD **)(*a1 + 248), 8u);
        v53 = *(_WORD *)v52 & 0xFE00;
        LOBYTE(v53) = -7;
        *(_WORD *)v52 = v53;
        if ( unk_2CD7484 )
          sub_EE9B50(249);
        *(_DWORD *)(v52 + 8) = v51;
        v21 = v52;
        *(_DWORD *)(v52 + 4) = 0;
        *(_DWORD *)(v52 + 12) = v60;
        *(_BYTE *)(v52 + 1) &= ~2u;
        goto LABEL_14;
      }
    }
LABEL_30:
    v14 = 1;
    v62 = *a1;
    goto LABEL_10;
  }
  if ( v14 == 1 )
  {
    BYTE2(v67) = 0;
    v15 = 0;
    v17 = 0;
    v65 = BYTE1(v67);
    v16 = 0u;
    goto LABEL_30;
  }
  v15 = 0;
  v16 = 0u;
LABEL_7:
  v62 = *a1;
  if ( v14 == 2 )
    sub_18C74E0(*a1, 5, 0, 4);
  v65 = 0;
  v17 = 0;
LABEL_10:
  v57 = v17;
  v18 = (const __m128i *)a2[((*a2 & 0x2000) != 0) + 3 + (unsigned int)((*a2 & 0x4000) != 0)];
  v19 = sub_1B71AD0(a1, v18, 0, a3, a4, v17, v12, v13);
  v20 = v57;
  v21 = v19;
  if ( v19 == 1 )
  {
    result = 1;
    if ( v14 == 2 )
    {
      sub_190D5E0(v62, a3);
      return 1;
    }
    return result;
  }
  if ( v14 == 2 )
  {
    sub_190D5E0(v62, a3);
    v20 = v57;
  }
  if ( !v20 || !v65 )
  {
LABEL_14:
    if ( ((*((_BYTE *)a2 + 1) >> 1) & 7) == 3 )
    {
      v59 = *a1;
      sub_18C74E0(*a1, 5, 0, 4);
      v45 = (const __m128i *)sub_F04E60(a2);
      v49 = sub_1B71AD0(a1, v45, 0, a3, a4, v46, v47, v48);
      if ( v49 == 1 )
      {
        sub_190D5E0(v59, a3);
        return 1;
      }
      v27 = v49 & 0xFFFFFFFFFFFFFFFELL;
      sub_190D5E0(v59, a3);
      goto LABEL_17;
    }
    v22 = (const __m128i *)sub_F04E60(a2);
    v26 = sub_1B71AD0(a1, v22, 0, a3, a4, v23, v24, v25);
    if ( v26 != 1 )
      goto LABEL_16;
    return 1;
  }
  v42 = sub_F04E60(a2);
  v27 = v42;
  if ( v42 )
  {
    v63 = sub_EEB7E0(v42, (__int64)v18, *(double *)a3.m128_u64);
    v43 = sub_F04E60(a2);
    v58 = sub_EEC140(v43);
    v26 = sub_EEE9A0(16, *(_QWORD **)(*a1 + 248), 8u);
    v44 = *(_WORD *)v26 & 0xFE00;
    LOBYTE(v44) = -7;
    *(_WORD *)v26 = v44;
    if ( unk_2CD7484 )
      sub_EE9B50(249);
    *(_DWORD *)(v26 + 4) = 0;
    *(_BYTE *)(v26 + 1) &= ~2u;
    *(_DWORD *)(v26 + 8) = v63;
    *(_DWORD *)(v26 + 12) = v58;
LABEL_16:
    v27 = v26 & 0xFFFFFFFFFFFFFFFELL;
  }
LABEL_17:
  v28 = *a1;
  v29 = v21 & 0xFFFFFFFFFFFFFFFELL;
  v30 = *a2;
  v31 = v11 & 0xFFFFFFFFFFFFFFFELL;
  if ( !*(_DWORD *)(*a1 + 12632) )
  {
    v32 = 0;
    if ( (v30 & 0x4000) != 0 )
      v32 = a2[2];
    if ( v32 == v31 )
    {
      v61 = v11 & 0xFFFFFFFE;
      v54 = a2[((v30 & 0x4000) != 0) + 2 + ((v30 & 0x2000) != 0)];
      v55 = sub_EEDE70(a2);
      LODWORD(v31) = v61;
      if ( v54 == (v16.m128i_i64[1] & 0xFFFFFFFFFFFFFFFELL) && v55 == v16.m128i_i64[0] )
      {
        v30 = *a2;
        if ( a2[((*a2 & 0x4000) != 0) + 3 + (unsigned int)((*a2 & 0x2000) != 0)] == v29 )
        {
          v64 = *a2;
          v56 = sub_F04E60(a2);
          LODWORD(v31) = v61;
          LOWORD(v30) = v64;
          if ( v56 == v27 )
            return (__int64)a2;
        }
        v28 = *a1;
      }
      else
      {
        v28 = *a1;
        v30 = *a2;
      }
    }
  }
  v33 = 0;
  if ( (v30 & 0x1000) != 0 )
    v33 = a2[((v30 & 0x1000) != 0) + 4 + ((v30 & 0x2000) != 0) + ((v30 & 0x4000) != 0)];
  v34 = *((_BYTE *)a2 + 1);
  BYTE2(v67) = v15;
  v35 = *((_DWORD *)a2 + 2);
  v36 = *((_DWORD *)a2 + 1);
  v66 = v16;
  v37 = *((_DWORD *)a2 + 3);
  v38 = _mm_load_si128(&v66);
  LOBYTE(v67) = 0;
  v68 = v38;
  v69 = v67;
  return sub_1C3A020(v28, v36, (v34 >> 1) & 7, v35, v31, v37, v38.m128i_i64[0], v38.m128i_i64[1], 0, v29, v33, v27);
}
