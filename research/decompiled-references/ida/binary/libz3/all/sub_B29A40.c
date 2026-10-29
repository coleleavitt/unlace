__int64 __fastcall sub_B29A40(__int64 a1, const __m128i *a2)
{
  __int64 v3; // rax
  void *v4; // r14
  __int32 v5; // eax
  int v6; // eax
  void *v7; // r15
  char v8; // al
  __m128i v9; // xmm0
  int v10; // r13d
  char v11; // si
  char v12; // r11
  __int64 v13; // r15
  char v14; // r9
  char v15; // di
  char v16; // cl
  void *v17; // r13
  char v18; // dl
  __m128d si128; // xmm0
  int v20; // eax
  unsigned __int64 v21; // r13
  bool v22; // zf
  unsigned __int64 v23; // r13
  void *v24; // r13
  void *v25; // rbp
  unsigned int *v27; // r15
  __int64 v28; // rax
  __m128i v29; // xmm0
  unsigned int *v30; // r15
  __int64 v31; // rax
  __m128i v32; // xmm0
  __int64 v33; // [rsp+0h] [rbp-E8h]
  __int32 v34; // [rsp+8h] [rbp-E0h]
  char v35; // [rsp+Eh] [rbp-DAh]
  int v36; // [rsp+10h] [rbp-D8h]
  int v37; // [rsp+18h] [rbp-D0h] BYREF
  char v38; // [rsp+1Ch] [rbp-CCh]
  __int64 v39; // [rsp+20h] [rbp-C8h]
  int v40; // [rsp+28h] [rbp-C0h] BYREF
  char v41; // [rsp+2Ch] [rbp-BCh]
  __int64 v42; // [rsp+30h] [rbp-B8h]
  __int64 v43; // [rsp+40h] [rbp-A8h]
  int v44; // [rsp+48h] [rbp-A0h] BYREF
  __int64 v45; // [rsp+50h] [rbp-98h] BYREF
  __int64 v46; // [rsp+58h] [rbp-90h]
  __int64 v47; // [rsp+60h] [rbp-88h] BYREF
  __int64 v48; // [rsp+68h] [rbp-80h]
  int v49; // [rsp+70h] [rbp-78h] BYREF
  __int64 v50; // [rsp+78h] [rbp-70h] BYREF
  __int64 v51; // [rsp+80h] [rbp-68h]
  __int64 v52; // [rsp+88h] [rbp-60h] BYREF
  __int64 v53; // [rsp+90h] [rbp-58h]
  __int16 v54; // [rsp+98h] [rbp-50h]
  __m128d v55; // [rsp+A0h] [rbp-48h] BYREF

  v3 = a2->m128i_i64[0];
  v45 = 0;
  v43 = v3;
  LODWORD(v3) = a2->m128i_i32[2];
  v46 = 0;
  v4 = qword_1C7F2C0;
  v44 = v3;
  v47 = 1;
  v48 = 0;
  if ( (a2[1].m128i_i8[4] & 1) != 0 )
  {
    sub_182C690(qword_1C7F2C0, &v45, &a2[1]);
    if ( (a2[2].m128i_i8[4] & 1) == 0 )
      goto LABEL_3;
  }
  else
  {
    LODWORD(v45) = a2[1].m128i_i32[0];
    if ( (a2[2].m128i_i8[4] & 1) == 0 )
    {
LABEL_3:
      v5 = a2[2].m128i_i32[0];
      BYTE4(v47) &= ~1u;
      LODWORD(v47) = v5;
      goto LABEL_4;
    }
  }
  sub_182C690(v4, &v47, &a2[2]);
LABEL_4:
  v6 = a2[3].m128i_i32[0];
  v7 = qword_1C7F2C0;
  v50 = 0;
  v51 = 0;
  v49 = v6;
  v52 = 1;
  v53 = 0;
  if ( (a2[3].m128i_i8[12] & 1) != 0 )
  {
    sub_182C690(qword_1C7F2C0, &v50, &a2[3].m128i_u64[1]);
    if ( (a2[4].m128i_i8[12] & 1) == 0 )
      goto LABEL_6;
  }
  else
  {
    LODWORD(v50) = a2[3].m128i_i32[2];
    if ( (a2[4].m128i_i8[12] & 1) == 0 )
    {
LABEL_6:
      v35 = 0;
      v34 = a2[4].m128i_i32[2];
      v8 = BYTE4(v52);
      goto LABEL_7;
    }
  }
  sub_182C690(v7, &v52, &a2[4].m128i_u64[1]);
  v34 = v52;
  v8 = BYTE4(v52);
  v35 = BYTE4(v52) & 1;
LABEL_7:
  v9 = _mm_loadu_si128(a2 + 6);
  v10 = v45;
  v36 = v44;
  v54 = a2[5].m128i_i16[4];
  v11 = BYTE4(v45) & 2;
  v44 = v49;
  v12 = BYTE4(v45) & 1;
  v33 = v46;
  LODWORD(v45) = v50;
  v13 = v48;
  v55 = (__m128d)v9;
  v46 = v51;
  v14 = BYTE4(v47) & 1;
  LODWORD(v52) = v47;
  LODWORD(v50) = v10;
  v15 = BYTE4(v45) & 2 | BYTE4(v50) & 0xFC;
  BYTE4(v45) = BYTE4(v50) & 1 | BYTE4(v50) & 2 | BYTE4(v45) & 0xFC;
  LODWORD(v47) = v34;
  BYTE4(v50) = v12 | v15;
  v16 = BYTE4(v47) & 2;
  v48 = v53;
  BYTE4(v47) = BYTE4(v47) & 0xFC | v35 | v8 & 2;
  v49 = v36;
  v37 = v10;
  v17 = qword_1C7F2C0;
  v40 = v52;
  v51 = v33;
  v39 = 0;
  v38 = v12 | v11 | v38 & 0xFC;
  v53 = v13;
  v42 = 0;
  BYTE4(v52) = v14 | v16 | v8 & 0xFC;
  v41 = v14 | v16 | v41 & 0xFC;
  sub_182CBA0(qword_1C7F2C0, &v37);
  sub_182CBA0(v17, &v40);
  v18 = HIBYTE(v54);
  si128 = (__m128d)_mm_load_si128((const __m128i *)&v55);
  HIBYTE(v54) = v54;
  LOBYTE(v54) = v18;
  v55 = _mm_shuffle_pd(si128, si128, 1);
  if ( v44 == 1 )
  {
    sub_1831620(qword_1C7F2C0, &v45);
    goto LABEL_11;
  }
  if ( v44 != 2 )
  {
    if ( !v44 )
      v44 = 2;
LABEL_11:
    v20 = v49;
    if ( v49 != 1 )
      goto LABEL_12;
LABEL_19:
    sub_1831620(qword_1C7F2C0, &v50);
    goto LABEL_15;
  }
  v20 = v49;
  v44 = 0;
  if ( v49 == 1 )
    goto LABEL_19;
LABEL_12:
  if ( v20 == 2 )
  {
    v49 = 0;
  }
  else if ( !v20 )
  {
    v49 = 2;
  }
LABEL_15:
  sub_B27BE0(a1 + 8, &v44);
  sub_B27BE0(a1 + 48, &v49);
  v21 = 0;
  v22 = *(_DWORD *)(a1 + 8) == 1;
  *(_WORD *)(a1 + 88) |= v54;
  if ( v22 )
  {
    v21 = *(_QWORD *)(a1 + 96);
    v30 = *(unsigned int **)&v55.m128d_f64[0];
    if ( v21 )
    {
      if ( *(_QWORD *)&v55.m128d_f64[0] != v21 && *(_QWORD *)&v55.m128d_f64[0] )
      {
        v31 = sub_180C100(*(_QWORD *)(*(_QWORD *)a1 + 56LL), 24);
        v32 = _mm_unpacklo_epi64((__m128i)v21, (__m128i)(unsigned __int64)v30);
        *(_DWORD *)v21 = (*(_DWORD *)v21 + 1) & 0x3FFFFFFF | *(_DWORD *)v21 & 0xC0000000;
        v21 = v31;
        *v30 = (*v30 + 1) & 0x3FFFFFFF | *v30 & 0xC0000000;
        *(_QWORD *)v31 = 0;
        *(__m128i *)(v31 + 8) = v32;
      }
    }
    else
    {
      v21 = *(_QWORD *)&v55.m128d_f64[0];
    }
  }
  *(_QWORD *)(a1 + 96) = v21;
  v23 = 0;
  if ( *(_DWORD *)(a1 + 48) == 1 )
  {
    v23 = *(_QWORD *)(a1 + 104);
    v27 = *(unsigned int **)&v55.m128d_f64[1];
    if ( v23 )
    {
      if ( *(_QWORD *)&v55.m128d_f64[1] != v23 && *(_QWORD *)&v55.m128d_f64[1] )
      {
        v28 = sub_180C100(*(_QWORD *)(*(_QWORD *)a1 + 56LL), 24);
        v29 = _mm_unpacklo_epi64((__m128i)v23, (__m128i)(unsigned __int64)v27);
        *(_DWORD *)v23 = (*(_DWORD *)v23 + 1) & 0x3FFFFFFF | *(_DWORD *)v23 & 0xC0000000;
        v23 = v28;
        *v27 = (*v27 + 1) & 0x3FFFFFFF | *v27 & 0xC0000000;
        *(_QWORD *)v28 = 0;
        *(__m128i *)(v28 + 8) = v29;
      }
    }
    else
    {
      v23 = *(_QWORD *)&v55.m128d_f64[1];
    }
  }
  *(_QWORD *)(a1 + 104) = v23;
  v24 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v50);
  sub_182CBA0(v24, &v52);
  v25 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v45);
  sub_182CBA0(v25, &v47);
  return a1;
}

