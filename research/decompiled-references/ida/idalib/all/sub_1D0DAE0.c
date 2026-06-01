unsigned __int64 __fastcall sub_1D0DAE0(
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
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rcx
  __int64 v23; // r12
  char v24; // r15
  _WORD *v25; // rsi
  unsigned __int64 result; // rax
  unsigned __int64 v27; // rax
  void **v28; // r9
  __int64 v29; // rdi
  _WORD *v30; // r12
  __int64 v31; // rdx
  unsigned __int64 v32; // r8
  __int64 v33; // rax
  int v34; // r11d
  unsigned __int8 v35; // dl
  int v36; // ecx
  __int64 v37; // rsi
  __m128i v38; // xmm1
  unsigned __int16 *v39; // r12
  unsigned __int64 v40; // rax
  unsigned __int64 v41; // rax
  unsigned __int64 v42; // rax
  __int64 v43; // r15
  __int16 v44; // dx
  __int64 v45; // r15
  int v46; // r12d
  __int64 v47; // r15
  __int16 v48; // dx
  __int64 v49; // rbp
  __int64 v50; // rax
  __int64 v51; // rax
  unsigned __int8 v52; // [rsp+18h] [rbp-90h]
  __int64 v53; // [rsp+18h] [rbp-90h]
  int v54; // [rsp+18h] [rbp-90h]
  int v55; // [rsp+18h] [rbp-90h]
  void **v56; // [rsp+18h] [rbp-90h]
  __int64 v57; // [rsp+20h] [rbp-88h]
  int v58; // [rsp+20h] [rbp-88h]
  void **v59; // [rsp+20h] [rbp-88h]
  unsigned __int64 v60; // [rsp+20h] [rbp-88h]
  char v61; // [rsp+28h] [rbp-80h]
  __int64 v62; // [rsp+28h] [rbp-80h]
  __m128i v63; // [rsp+30h] [rbp-78h] BYREF
  __int64 v64; // [rsp+40h] [rbp-68h]
  __m128i v65; // [rsp+50h] [rbp-58h] BYREF
  __int64 v66; // [rsp+60h] [rbp-48h]

  v9 = nullptr;
  if ( (*(_WORD *)a2 & 0x4000) != 0 )
    v9 = (_WORD *)a2[2];
  v11 = sub_1CE7590(a1, v9, 0, a3, a4, a6, a7, a8);
  if ( v11 == 1 )
    return 1;
  v14 = (*((_BYTE *)a2 + 1) >> 1) & 7;
  if ( (unsigned int)v14 - 2 > 1 )
  {
    v39 = (unsigned __int16 *)a2[((*a2 & 0x4000) != 0) + 2 + ((*a2 & 0x2000) != 0)];
    v40 = sub_EEDE70(a2);
    sub_1CE9030((__int64)&v65, a1, *((unsigned int *)a2 + 1), v40, v39, v14 == 1, a3, a4);
    a3 = (__m128)_mm_load_si128(&v65);
    v15 = BYTE2(v66);
    v16 = v65;
    v63 = (__m128i)a3;
    LOWORD(v64) = v66;
    BYTE2(v64) = BYTE2(v66);
    if ( !(_BYTE)v66 )
    {
      v14 = (*((_BYTE *)a2 + 1) >> 1) & 7;
      if ( v14 != 1 )
        goto LABEL_7;
      v17 = BYTE2(v66);
      v61 = BYTE1(v64);
      if ( BYTE2(v66) )
      {
        v17 = *(unsigned __int16 *)((char *)&v64 + 1);
        if ( !BYTE1(v64) )
        {
          v45 = *a2;
          v46 = sub_EEB7E0(
                  a2[((*a2 & 0x4000) != 0) + 3 + (unsigned int)((*a2 & 0x2000) != 0)],
                  (__int64)a1,
                  *(double *)a3.m128_u64);
          v55 = sub_EEC140(a2[((v45 & 0x4000) != 0) + 3 + (unsigned int)((v45 & 0x2000) != 0)]);
          v47 = sub_EEE9A0(16, *(_QWORD **)(*a1 + 248), 8u);
          v48 = *(_WORD *)v47 & 0xFE00;
          LOBYTE(v48) = -7;
          *(_WORD *)v47 = v48;
          if ( unk_2CD7484 )
            sub_EE9B50(249);
          *(_DWORD *)(v47 + 8) = v46;
          v23 = v47;
          *(_DWORD *)(v47 + 4) = 0;
          *(_DWORD *)(v47 + 12) = v55;
          *(_BYTE *)(v47 + 1) &= ~2u;
LABEL_14:
          v53 = *a1;
          v24 = (*((_BYTE *)a2 + 1) >> 1) & 7;
          if ( v24 == 3 )
            sub_18C74E0(*a1, 5, 0, 4);
          v25 = nullptr;
          if ( (*a2 & 0x1000) != 0 )
            v25 = (_WORD *)a2[((*a2 & 0x4000) != 0) + 4 + (unsigned int)((*a2 & 0x2000) != 0)];
          result = sub_1CE7590(a1, v25, 0, a3, a4, v22, v20, v21);
          if ( result == 1 )
          {
            if ( v24 == 3 )
            {
              sub_190D5E0(v53, a3);
              return 1;
            }
            return result;
          }
          v27 = result & 0xFFFFFFFFFFFFFFFELL;
          v28 = (void **)v27;
          if ( v24 == 3 )
          {
            v59 = (void **)v27;
            sub_190D5E0(v53, a3);
            v28 = v59;
          }
          goto LABEL_21;
        }
      }
LABEL_32:
      v14 = 1;
      v57 = *a1;
      goto LABEL_10;
    }
    return 1;
  }
  if ( v14 == 1 )
  {
    BYTE2(v64) = 0;
    v15 = 0;
    v17 = 0;
    v61 = BYTE1(v64);
    v16 = 0u;
    goto LABEL_32;
  }
  v15 = 0;
  v16 = 0u;
LABEL_7:
  v57 = *a1;
  if ( v14 == 2 )
    sub_18C74E0(*a1, 5, 0, 4);
  v61 = 0;
  v17 = 0;
LABEL_10:
  v52 = v17;
  v18 = (_WORD *)a2[((*a2 & 0x2000) != 0) + 3 + (unsigned int)((*a2 & 0x4000) != 0)];
  v19 = sub_1CE7590(a1, v18, 0, a3, a4, v17, v12, v13);
  v22 = v52;
  v23 = v19;
  if ( v19 == 1 )
  {
    result = 1;
    if ( v14 == 2 )
    {
      sub_190D5E0(v57, a3);
      return 1;
    }
    return result;
  }
  if ( v14 == 2 )
  {
    sub_190D5E0(v57, a3);
    v22 = v52;
  }
  if ( !(_BYTE)v22 || !v61 )
    goto LABEL_14;
  v41 = sub_F04E60(a2);
  v28 = (void **)v41;
  if ( v41 )
  {
    v58 = sub_EEB7E0(v41, (__int64)v18, *(double *)a3.m128_u64);
    v42 = sub_F04E60(a2);
    v54 = sub_EEC140(v42);
    v43 = sub_EEE9A0(16, *(_QWORD **)(*a1 + 248), 8u);
    v44 = *(_WORD *)v43 & 0xFE00;
    LOBYTE(v44) = -7;
    *(_WORD *)v43 = v44;
    if ( unk_2CD7484 )
      sub_EE9B50(249);
    *(_BYTE *)(v43 + 1) &= ~2u;
    *(_DWORD *)(v43 + 4) = 0;
    v28 = (void **)(v43 & 0xFFFFFFFFFFFFFFFELL);
    *(_DWORD *)(v43 + 8) = v58;
    *(_DWORD *)(v43 + 12) = v54;
  }
LABEL_21:
  v29 = *a1;
  v30 = (_WORD *)(v23 & 0xFFFFFFFFFFFFFFFELL);
  v31 = *a2;
  v32 = v11 & 0xFFFFFFFFFFFFFFFELL;
  if ( !*(_DWORD *)(*a1 + 12632) )
  {
    v33 = 0;
    if ( (v31 & 0x4000) != 0 )
      v33 = a2[2];
    if ( v33 == v32 )
    {
      v60 = v11 & 0xFFFFFFFFFFFFFFFELL;
      v56 = v28;
      v49 = a2[((v31 & 0x4000) != 0) + 2 + ((v31 & 0x2000) != 0)];
      v50 = sub_EEDE70(a2);
      v28 = v56;
      v32 = v60;
      if ( v49 == (v16.m128i_i64[1] & 0xFFFFFFFFFFFFFFFELL) && v50 == v16.m128i_i64[0] )
      {
        v31 = *a2;
        if ( (_WORD *)a2[((*a2 & 0x4000) != 0) + 3 + (unsigned int)((*a2 & 0x2000) != 0)] == v30 )
        {
          v62 = *a2;
          v51 = sub_F04E60(a2);
          v28 = v56;
          v32 = v60;
          LOWORD(v31) = v62;
          if ( (void **)v51 == v56 )
            return (unsigned __int64)a2;
        }
        v29 = *a1;
      }
      else
      {
        v29 = *a1;
        v31 = *a2;
      }
    }
  }
  v34 = 0;
  if ( (v31 & 0x1000) != 0 )
    v34 = a2[((v31 & 0x1000) != 0) + 4 + ((v31 & 0x2000) != 0) + ((v31 & 0x4000) != 0)];
  v35 = *((_BYTE *)a2 + 1);
  BYTE2(v64) = v15;
  v36 = *((_DWORD *)a2 + 2);
  v37 = *((unsigned int *)a2 + 1);
  v63 = v16;
  v38 = _mm_load_si128(&v63);
  LOBYTE(v64) = 0;
  v65 = v38;
  v66 = v64;
  return sub_1C3A020(
           v29,
           v37,
           (v35 >> 1) & 7,
           v36,
           v32,
           *((_DWORD *)a2 + 3),
           *(double *)a3.m128_u64,
           v38.m128i_i64[0],
           v38.m128i_i64[1],
           0,
           v30,
           v34,
           v28);
}
