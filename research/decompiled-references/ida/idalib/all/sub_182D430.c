void __fastcall sub_182D430(__int64 *a1, __int64 *a2, const __m128i *a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r13
  unsigned int v9; // r12d
  __int64 v10; // rax
  __int64 **v11; // rax
  __int64 *v12; // rdx
  unsigned __int64 v13; // rax
  __int64 *v14; // rax
  __int64 v15; // rcx
  bool v16; // zf
  __int64 v17; // rax
  __int64 v18; // rax
  unsigned __int64 v19; // r14
  unsigned int *v20; // rdi
  bool v21; // cc
  __int64 v22; // rax
  __int64 v23; // rax
  __int16 v24; // ax
  __int64 v25; // rax
  __int64 v26; // rax
  int v27; // eax
  __int64 v28; // rdx
  __int64 *v29; // rcx
  __m128i *v30; // r12
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // r15
  __int64 v40; // rax
  _QWORD *v41; // rax
  __int64 v42; // rax
  unsigned __int64 v43; // r14
  unsigned int *v44; // rdi
  unsigned __int64 v45; // r14
  unsigned int *v46; // rdi
  __int64 v47; // rax
  __int64 v48; // rax
  int v49; // [rsp+8h] [rbp-E0h] BYREF
  int v50; // [rsp+Ch] [rbp-DCh] BYREF
  int v51; // [rsp+10h] [rbp-D8h] BYREF
  unsigned __int32 v52; // [rsp+14h] [rbp-D4h] BYREF
  __int64 v53; // [rsp+18h] [rbp-D0h] BYREF
  _QWORD v54[2]; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v55; // [rsp+30h] [rbp-B8h]
  unsigned __int8 *v56; // [rsp+40h] [rbp-A8h] BYREF
  char v57; // [rsp+98h] [rbp-50h]
  unsigned int v58; // [rsp+A0h] [rbp-48h]
  char v59; // [rsp+A4h] [rbp-44h]

  v6 = (__int64)a2;
  v9 = a3[3].m128i_u16[4];
  if ( v9 > 4 )
  {
    sub_168B9F0((__int64)v54, a1 + 1, a3[1].m128i_u32[2], 0xC9Du, 0);
    v10 = sub_15DD120((__int64)v54, (__int64)a3);
    a2 = &v53;
    LODWORD(v53) = 4;
    sub_1587D10(v10, (int *)&v53);
    sub_15F7200(v54);
    a3[3].m128i_i8[10] |= 1u;
  }
  else if ( !a3[3].m128i_i16[4] )
  {
    sub_168B9F0((__int64)v54, a1 + 1, a3[1].m128i_u32[2], 0xC9Cu, 0);
    sub_15DD120((__int64)v54, (__int64)a3);
    sub_15F7200(v54);
    a3[3].m128i_i8[10] |= 1u;
    return;
  }
  if ( (*(_BYTE *)(v6 + 29) & 1) != 0 )
  {
    v11 = (__int64 **)sub_B8C3D0(v6, (__int64)a2, (__int64)a3, a4, a5, a6);
    v12 = *v11;
    v13 = (unsigned __int64)&(*v11)[*((unsigned int *)v11 + 2)];
    if ( (unsigned __int64)v12 >= v13 )
    {
      if ( v12 == (__int64 *)v13 )
        goto LABEL_12;
      if ( *(_WORD *)(*(_QWORD *)v13 + 36LL) != 393 )
      {
        v14 = (__int64 *)(v13 + 8);
        while ( v12 != v14 )
        {
          v15 = *v14++;
          if ( *(_WORD *)(v15 + 36) == 393 )
            goto LABEL_35;
        }
        goto LABEL_12;
      }
LABEL_35:
      while ( *(_WORD *)(*v12 + 36) != 393 )
        ++v12;
      sub_168B9F0((__int64)v54, a1 + 1, a3[1].m128i_u32[2], 0xE87u, 0);
      if ( v57 )
      {
        sub_AE9DF0(&v56, v6, 0xAu);
      }
      else if ( v59 )
      {
        v39 = sub_168B9E0(v54);
        v40 = v55;
        if ( v55 )
          v40 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v55 + 32LL))(v55);
        v53 = v40;
        v41 = sub_1587BC0(v39, &v53, v35, v36, v37, v38);
        sub_AE9DF0((unsigned __int8 **)(*v41 + 32LL * v58 + 8), v6, 0xAu);
      }
      sub_15F7200(v54);
      a3[3].m128i_i8[10] |= 1u;
      v16 = a3[3].m128i_i16[4] == 0;
      v49 = 0;
      if ( v16 )
        goto LABEL_13;
      goto LABEL_14;
    }
    v29 = v12;
    while ( *(_WORD *)(*v29 + 36) != 393 )
    {
      if ( (__int64 *)v13 == ++v29 )
        goto LABEL_12;
    }
    if ( (__int64 *)v13 != v29 )
      goto LABEL_35;
  }
LABEL_12:
  v16 = a3[3].m128i_i16[4] == 0;
  v49 = 0;
  if ( v16 )
  {
LABEL_13:
    sub_168B9F0((__int64)v54, a1 + 1, a3[1].m128i_u32[2], 0xC57u, 0);
    v17 = sub_15DD120((__int64)v54, (__int64)a3);
    LODWORD(v53) = 3;
    sub_180A710(v17, (int *)&v53);
    sub_15F7200(v54);
    return;
  }
LABEL_14:
  v18 = a3[5].m128i_i64[0];
  if ( (v18 & 2) == 0 )
    goto LABEL_13;
  v19 = v18 & 0xFFFFFFFFFFFFFFFCLL;
  v20 = *(unsigned int **)(*(_QWORD *)((v18 & 0xFFFFFFFFFFFFFFFCLL) + 8) + 16LL);
  if ( !(unsigned __int8)sub_B1ABF0((__int64)(v20 + 4), *v20, &v49) )
  {
    sub_168B9F0((__int64)v54, a1 + 1, *(_DWORD *)v19, 0xFACu, 0);
    v53 = *(_QWORD *)(v19 + 8);
    sub_18175F0((__int64)v54, &v53);
    sub_15F7200(v54);
    a3[3].m128i_i8[10] |= 1u;
  }
  if ( !v49 && (*(_BYTE *)(a1[29] + 16) & 1) == 0 )
  {
    sub_168B9F0((__int64)v54, a1 + 1, a3[1].m128i_u32[2], 0x10AEu, 0);
    LODWORD(v53) = 0;
    sub_1587D10((__int64)v54, (int *)&v53);
    sub_15F7200(v54);
    a3[3].m128i_i8[10] |= 1u;
  }
  v21 = a3[3].m128i_i16[4] <= 1u;
  v50 = 0;
  if ( v21 )
  {
    v51 = 0;
    goto LABEL_48;
  }
  v22 = a3[5].m128i_i64[1];
  if ( (v22 & 2) != 0 )
  {
    v43 = v22 & 0xFFFFFFFFFFFFFFFCLL;
    v44 = *(unsigned int **)(*(_QWORD *)((v22 & 0xFFFFFFFFFFFFFFFCLL) + 8) + 16LL);
    if ( !(unsigned __int8)sub_B1ACE0((__int64)(v44 + 4), *v44, &v50) )
    {
      sub_168B9F0((__int64)v54, a1 + 1, *(_DWORD *)v43, 0xFA9u, 0);
      v53 = *(_QWORD *)(v43 + 8);
      sub_18175F0((__int64)v54, &v53);
      sub_15F7200(v54);
      a3[3].m128i_i8[10] |= 1u;
    }
    if ( !v50 && (*(_BYTE *)(a1[29] + 16) & 1) == 0 )
    {
      sub_168B9F0((__int64)v54, a1 + 1, *(_DWORD *)v43, 0x10AEu, 0);
      LODWORD(v53) = 1;
      sub_1587D10((__int64)v54, (int *)&v53);
      sub_15F7200(v54);
      a3[3].m128i_i8[10] |= 1u;
    }
    v24 = a3[3].m128i_i16[4];
  }
  else
  {
    sub_168B9F0((__int64)v54, a1 + 1, a3[1].m128i_u32[2], 0xC57u, 0);
    v23 = sub_15DD120((__int64)v54, (__int64)a3);
    LODWORD(v53) = 3;
    sub_180A710(v23, (int *)&v53);
    sub_15F7200(v54);
    v24 = a3[3].m128i_i16[4];
  }
  v51 = 0;
  if ( (unsigned __int16)v24 <= 2u )
    goto LABEL_48;
  v25 = a3[6].m128i_i64[0];
  if ( (v25 & 2) == 0 )
  {
    sub_168B9F0((__int64)v54, a1 + 1, a3[1].m128i_u32[2], 0xC57u, 0);
    v26 = sub_15DD120((__int64)v54, (__int64)a3);
    LODWORD(v53) = 3;
    sub_180A710(v26, (int *)&v53);
    sub_15F7200(v54);
    v27 = v51;
    goto LABEL_26;
  }
  v45 = v25 & 0xFFFFFFFFFFFFFFFCLL;
  v46 = *(unsigned int **)(*(_QWORD *)((v25 & 0xFFFFFFFFFFFFFFFCLL) + 8) + 16LL);
  if ( !(unsigned __int8)sub_B1ADC0((__int64)(v46 + 4), *v46, &v51) )
  {
    sub_168B9F0((__int64)v54, a1 + 1, *(_DWORD *)v45, 0xFC8u, 0);
    v53 = *(_QWORD *)(v45 + 8);
    sub_18175F0((__int64)v54, &v53);
    sub_15F7200(v54);
    a3[3].m128i_i8[10] |= 1u;
  }
  v27 = v51;
  if ( !v51 )
  {
    if ( (*(_BYTE *)(a1[29] + 16) & 1) == 0 )
    {
      sub_168B9F0((__int64)v54, a1 + 1, a3[1].m128i_u32[2], 0x10AEu, 0);
      LODWORD(v53) = 2;
      sub_1587D10((__int64)v54, (int *)&v53);
      sub_15F7200(v54);
      a3[3].m128i_i8[10] |= 1u;
      v27 = v51;
      goto LABEL_26;
    }
LABEL_48:
    v52 = 0;
LABEL_49:
    if ( v9 > 3 )
    {
      sub_168B9F0((__int64)v54, a1 + 1, a3[1].m128i_u32[2], 0xC9Du, 0);
      v47 = sub_15DD120((__int64)v54, (__int64)a3);
      LODWORD(v53) = 3;
      sub_1587D10(v47, (int *)&v53);
      sub_15F7200(v54);
      a3[3].m128i_i8[10] |= 1u;
    }
    goto LABEL_51;
  }
LABEL_26:
  v52 = 0;
  if ( v27 != 3 )
    goto LABEL_49;
  if ( v9 > 3 )
  {
    if ( v9 != 4 )
    {
      sub_168B9F0((__int64)v54, a1 + 1, a3[1].m128i_u32[2], 0xC9Du, 0);
      v48 = sub_15DD120((__int64)v54, (__int64)a3);
      LODWORD(v53) = 4;
      sub_1587D10(v48, (int *)&v53);
      sub_15F7200(v54);
      a3[3].m128i_i8[10] |= 1u;
    }
    if ( a3[3].m128i_i16[4] <= 3u
      || (v28 = a3[6].m128i_i64[1], (v28 & 2) != 0)
      || !(unsigned __int8)sub_16211A0(a1, a3, v28 & 0xFFFFFFFFFFFFFFFCLL, &v52, 0xFFFFFFFFLL, 0) )
    {
      sub_168B9F0((__int64)v54, a1 + 1, a3[1].m128i_u32[2], 0xFC0u, 0);
      sub_15F7200(v54);
      a3[3].m128i_i8[10] |= 1u;
    }
LABEL_51:
    v30 = (__m128i *)sub_1806F50((__int64 *)(a1[31] + 2352), 56, 3u);
    sub_B1ABB0(v30, a1[31], a3, v49, v50, v51, v52);
    sub_B8CC60(v6, (__int64)v30, v31, v32, v33, v34);
    return;
  }
  sub_168B9F0((__int64)v54, a1 + 1, a3[1].m128i_u32[2], 0x105Au, 0);
  v42 = sub_15DD120((__int64)v54, (__int64)a3);
  LODWORD(v53) = 4;
  sub_1587D10(v42, (int *)&v53);
  sub_15F7200(v54);
  a3[3].m128i_i8[10] |= 1u;
}
