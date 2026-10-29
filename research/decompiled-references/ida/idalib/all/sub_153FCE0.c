__int64 __fastcall sub_153FCE0(__int64 a1, double a2, __m128 a3)
{
  int *v3; // r13
  unsigned int v5; // r14d
  const __m128i *v6; // rbp
  __int32 v7; // eax
  bool v8; // zf
  __int64 v9; // rax
  const __m128i *v10; // rdi
  __int8 v11; // al
  __int16 v12; // ax
  __m128i v13; // xmm0
  char v14; // cl
  _BYTE *v15; // rax
  __int64 v16; // rbp
  __int64 v17; // r13
  const __m128i *v18; // rbx
  __int8 v19; // r14
  __int8 v20; // r15
  bool v21; // bp
  const __m128i *v22; // rdi
  unsigned int v23; // eax
  const __m128i *v24; // rax
  __int16 v25; // dx
  __int8 v26; // bp
  int *v28; // rdx
  __int64 v29; // rdi
  __int64 *v30; // rdi
  int v31; // r15d
  int *v32; // rdx
  unsigned int v33; // eax
  __int8 v34; // dl
  void *v35; // rdi
  unsigned int v36; // edx
  unsigned __int8 v37; // al
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  unsigned __int64 v43; // r13
  unsigned int v44; // r8d
  unsigned int *v45; // rax
  __int64 *v46; // rsi
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 v51; // rdi
  __int64 v52; // rdx
  unsigned int v53; // [rsp+4h] [rbp-104h]
  __int16 v54; // [rsp+1Ah] [rbp-EEh] BYREF
  unsigned int v55; // [rsp+1Ch] [rbp-ECh] BYREF
  __int64 v56; // [rsp+20h] [rbp-E8h] BYREF
  __int64 v57; // [rsp+28h] [rbp-E0h] BYREF
  unsigned __int8 *v58; // [rsp+30h] [rbp-D8h] BYREF
  unsigned __int8 v59; // [rsp+38h] [rbp-D0h]
  __int64 v60; // [rsp+40h] [rbp-C8h]
  int v61; // [rsp+48h] [rbp-C0h]
  __int16 v62; // [rsp+4Ch] [rbp-BCh]
  __int64 (__fastcall *v63)(__int64); // [rsp+50h] [rbp-B8h]
  __int64 v64; // [rsp+58h] [rbp-B0h]
  __int64 v65; // [rsp+60h] [rbp-A8h]
  const __m128i *v66; // [rsp+80h] [rbp-88h]
  __int32 v67; // [rsp+88h] [rbp-80h]
  __int64 v68; // [rsp+90h] [rbp-78h]
  __int64 v69; // [rsp+98h] [rbp-70h] BYREF
  unsigned int v70; // [rsp+A0h] [rbp-68h]
  __int8 v71; // [rsp+A4h] [rbp-64h]
  char v72; // [rsp+A8h] [rbp-60h]
  __int16 v73; // [rsp+B0h] [rbp-58h]
  __m128i v74; // [rsp+B8h] [rbp-50h]
  char v75; // [rsp+C8h] [rbp-40h]

  v3 = (int *)(a1 + 16);
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
  sub_14634E0(*(__int64 **)(a1 + 8), (int *)(a1 + 16));
  v5 = *(_DWORD *)(a1 + 40);
  sub_146B5E0(&v56, a1, (**(_BYTE **)(*(_QWORD *)(a1 + 8) + 56LL) & 1) == 0 ? 6 : 14, 1, 0);
  v6 = *(const __m128i **)(*(_QWORD *)(a1 + 96) + 744LL);
  v7 = v6[2].m128i_i32[0];
  v8 = v6[4].m128i_i8[0] == 0;
  v66 = v6;
  v67 = v7;
  v9 = v6[2].m128i_i64[1];
  v72 = 0;
  v68 = v9;
  if ( v8 )
  {
    v10 = v6;
  }
  else
  {
    v70 = v6[3].m128i_u32[2];
    if ( v70 > 0x40 )
    {
      sub_2205510(&v69);
      v10 = *(const __m128i **)(*(_QWORD *)(a1 + 96) + 744LL);
    }
    else
    {
      v10 = v6;
      v69 = v6[3].m128i_i64[0];
    }
    v11 = v6[3].m128i_i8[12];
    v72 = 1;
    v71 = v11;
  }
  v12 = v6[4].m128i_i16[4];
  v13 = _mm_loadu_si128(v6 + 5);
  v75 = 1;
  v73 = v12;
  v74 = v13;
  sub_1AA58B0(v10, v5);
  v14 = 1;
  v15 = *(_BYTE **)(*(_QWORD *)(a1 + 8) + 56LL);
  if ( (*v15 & 1) == 0 )
    v14 = (v15[1] & 8) != 0;
  sub_146B5E0(&v57, a1, 8u, v14, *(_WORD *)(a1 + 32) == 24);
  v16 = sub_153D810(a1, nullptr, 0, v13, a3);
  if ( !v57 )
  {
    if ( *(_WORD *)(a1 + 32) != 110 )
      goto LABEL_10;
LABEL_25:
    v30 = *(__int64 **)(a1 + 8);
    *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
    sub_14634E0(v30, v3);
    v31 = *(_DWORD *)(a1 + 40);
    if ( *(_WORD *)(a1 + 32) != 22 )
    {
      v32 = v3;
      v17 = 1;
      sub_1564840(&v58, a1, v32, 1625);
      sub_1533090(&v58, (__int64)"do/while");
      sub_AEA040((__int64)&v58);
      LOWORD(v58) = 63;
      sub_15680D0(a1, &v58, 1, 2);
      v29 = v57;
      goto LABEL_22;
    }
    v36 = *(unsigned __int16 *)(a1 + 88);
    v60 = a1;
    v58 = (unsigned __int8 *)(a1 + 1952);
    v37 = *(_BYTE *)(a1 + 1952);
    v61 = 1507350;
    v59 = v37;
    v63 = sub_146A990;
    v38 = *(_QWORD *)(a1 + 8);
    *(_BYTE *)(a1 + 1952) = 1;
    v62 = 63;
    v64 = 0;
    v65 = 0;
    if ( v36 >= *(_DWORD *)(*(_QWORD *)(v38 + 56) + 144LL) )
      sub_1568800(&v58);
    else
      LODWORD(v65) = sub_146A990(a1);
    sub_14A1D90(a1);
    v55 = *(_DWORD *)(a1 + 16);
    v53 = v55;
    v43 = sub_14BFC10((const __m128i *)a1, 0, v13);
    if ( v43 > 1 )
    {
      sub_14808E0((__int64)&v58, nullptr, v39, v40, v41, v42);
      v51 = v56;
      if ( !v56 )
      {
LABEL_46:
        if ( v16 != 1 )
        {
          v17 = sub_1C3AA30(
                  *(_QWORD *)(a1 + 96),
                  v5,
                  (unsigned int)v16 & 0xFFFFFFFE,
                  v31,
                  v65,
                  (unsigned int)v43 & 0xFFFFFFFE,
                  HIDWORD(v65));
LABEL_48:
          v29 = v57;
          *v58 = v59;
          goto LABEL_22;
        }
LABEL_55:
        v17 = 1;
        goto LABEL_48;
      }
    }
    else
    {
      v44 = v55;
      if ( (*(_WORD *)(a1 + 32) & 0xFFFD) != 0x15 && *(_WORD *)(a1 + 32) != 25 )
      {
        v54 = 63;
        sub_15680D0(a1, &v54, 1, 0);
        v44 = v53;
      }
      v45 = (unsigned int *)(a1 + 40);
      if ( v44 == *(_DWORD *)(a1 + 16) )
        v45 = &v55;
      v46 = (__int64 *)v55;
      v43 = sub_18C4330(
              *(_QWORD *)(a1 + 96),
              v55,
              *v45,
              0,
              0,
              *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 248LL) + 18640LL));
      sub_14808E0((__int64)&v58, v46, v47, v48, v49, v50);
      v51 = v56;
      if ( !v56 )
      {
LABEL_45:
        if ( v43 == 1 )
          goto LABEL_55;
        goto LABEL_46;
      }
    }
    sub_1564F70(v51);
    v56 = 0;
    goto LABEL_45;
  }
  sub_1564F70(v57);
  v8 = *(_WORD *)(a1 + 32) == 110;
  v57 = 0;
  if ( v8 )
    goto LABEL_25;
LABEL_10:
  if ( v16 == 1 )
  {
    v17 = 1;
    goto LABEL_12;
  }
  v28 = v3;
  v17 = 1;
  sub_1564840(&v58, a1, v28, 1661);
  sub_AEA040((__int64)&v58);
  sub_1564820(&v58, a1, v5, 109);
  sub_1533090(&v58, (__int64)"'do'");
  sub_AEA040((__int64)&v58);
  LOWORD(v58) = 63;
  sub_15680D0(a1, &v58, 1, 2);
  v29 = v57;
LABEL_22:
  if ( v29 )
    sub_1564F70(v29);
LABEL_12:
  v18 = v66;
  if ( v75 )
  {
    v19 = v66[4].m128i_i8[8];
    v20 = v66[5].m128i_i8[12];
    v21 = (v66[2].m128i_i8[0] & 2) != 0;
  }
  else
  {
    v19 = v73;
    v20 = v74.m128i_i8[12];
    v21 = (v67 & 2) != 0;
  }
  v8 = v66[4].m128i_i8[0] == 0;
  v22 = v66 + 3;
  v66[2].m128i_i32[0] = v67;
  v18[2].m128i_i64[1] = v68;
  if ( v8 )
  {
    if ( v72 )
    {
      v33 = v70;
      v18[3].m128i_i32[2] = v70;
      if ( v33 > 0x40 )
      {
        sub_2205510(v22);
        v24 = v66;
      }
      else
      {
        v18[3].m128i_i64[0] = v69;
        v24 = v18;
      }
      v34 = v71;
      v18[4].m128i_i8[0] = 1;
      v18[3].m128i_i8[12] = v34;
      goto LABEL_18;
    }
    goto LABEL_17;
  }
  v23 = v18[3].m128i_u32[2];
  if ( v72 )
  {
    if ( v23 <= 0x40 && v70 <= 0x40 )
    {
      v52 = v69;
      v18[3].m128i_i32[2] = v70;
      v24 = v18;
      v18[3].m128i_i64[0] = v52;
    }
    else
    {
      sub_22056A0(v22, &v69);
      v24 = v66;
    }
    v18[3].m128i_i8[12] = v71;
  }
  else
  {
    v18[4].m128i_i8[0] = 0;
    if ( v23 <= 0x40 )
    {
LABEL_17:
      v24 = v18;
      goto LABEL_18;
    }
    v35 = (void *)v18[3].m128i_i64[0];
    v24 = v18;
    if ( v35 )
    {
      operator delete[](v35);
      v24 = v66;
    }
  }
LABEL_18:
  v18[4].m128i_i16[4] = v73;
  v24[5].m128i_i64[0] = v74.m128i_i64[0];
  v24[5].m128i_i32[2] = v74.m128i_i32[2];
  v25 = v74.m128i_i16[6];
  v24[4].m128i_i8[8] = v19;
  v24[5].m128i_i16[6] = v25;
  LOBYTE(v25) = 2 * v21;
  v26 = v24[2].m128i_i8[0];
  v24[5].m128i_i8[12] = v20;
  v24[2].m128i_i8[0] = v25 | v26 & 0xFD;
  sub_98E4B0((__int64)&v69);
  if ( v56 )
    sub_1564F70(v56);
  return v17;
}
