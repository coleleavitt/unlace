void __fastcall sub_18199B0(__int64 a1, __int64 a2, const __m128i *a3, _DWORD *a4, char a5, double a6)
{
  int v10; // eax
  _QWORD *v11; // rdx
  __m128i *v12; // r15
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  bool v17; // zf
  __int64 v18; // rcx
  int v19; // eax
  unsigned int v20; // edx
  unsigned __int64 v21; // r9
  int v22; // eax
  __int64 v23; // rdi
  __int64 v24; // rax
  unsigned int v25; // eax
  __int64 v26; // rdx
  __m128i *v27; // rbp
  int v28; // eax
  __int64 v29; // r9
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  int v33; // eax
  __int64 v34; // rax
  __int64 v35; // rax
  int v36; // eax
  bool v37; // al
  __int64 v38; // rsi
  int v39; // eax
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // r12
  __int64 v46; // rax
  _QWORD *v47; // rax
  unsigned int v48; // [rsp+0h] [rbp-168h]
  unsigned __int64 v49; // [rsp+0h] [rbp-168h]
  int v50; // [rsp+0h] [rbp-168h]
  __int64 v51; // [rsp+18h] [rbp-150h]
  __int64 v52; // [rsp+20h] [rbp-148h]
  unsigned int v53; // [rsp+20h] [rbp-148h]
  unsigned __int64 v54; // [rsp+20h] [rbp-148h]
  int v55; // [rsp+28h] [rbp-140h]
  unsigned __int64 v56; // [rsp+28h] [rbp-140h]
  unsigned int v57; // [rsp+3Ch] [rbp-12Ch] BYREF
  __int64 v58; // [rsp+40h] [rbp-128h] BYREF
  __int64 v59; // [rsp+48h] [rbp-120h] BYREF
  void *v60; // [rsp+50h] [rbp-118h] BYREF
  unsigned int v61; // [rsp+58h] [rbp-110h]
  char v62; // [rsp+5Ch] [rbp-10Ch]
  __m128i v63[2]; // [rsp+60h] [rbp-108h] BYREF
  unsigned __int8 v64; // [rsp+82h] [rbp-E6h]
  void *v65; // [rsp+A0h] [rbp-C8h] BYREF
  unsigned int v66; // [rsp+A8h] [rbp-C0h]
  char v67; // [rsp+ACh] [rbp-BCh]
  __int64 v68; // [rsp+B0h] [rbp-B8h]
  unsigned __int8 *v69; // [rsp+C0h] [rbp-A8h] BYREF
  char v70; // [rsp+118h] [rbp-50h]
  unsigned int v71; // [rsp+120h] [rbp-48h]
  char v72; // [rsp+124h] [rbp-44h]

  sub_B08AB0(v63, *(_QWORD *)(a1 + 248), a3, 1, (__int64)a4);
  v48 = a3[1].m128i_u32[2];
  if ( (v64 & 0xF0) != 0xF0 )
  {
    LOBYTE(v10) = v64 >> 4;
    if ( v64 >> 4 == 4 )
      goto LABEL_12;
    goto LABEL_3;
  }
  if ( (unsigned int)sub_FA77D0(v63) == 4 )
    goto LABEL_12;
  if ( (v64 & 0xF0) != 0xF0 )
  {
    LOBYTE(v10) = v64 >> 4;
LABEL_3:
    v10 = (unsigned __int8)v10;
    goto LABEL_4;
  }
  v10 = sub_FA77D0(v63);
LABEL_4:
  if ( v10 != 5 )
  {
    if ( (*a4 & 0x20000) != 0 )
      goto LABEL_6;
    goto LABEL_14;
  }
LABEL_12:
  if ( (unsigned __int8)sub_1819300(a1, (_BYTE *)a2, (__int64)v63, v48) )
    return;
  if ( (*a4 & 0x20000) != 0 )
  {
LABEL_6:
    if ( (*(_BYTE *)(a2 + 28) & 0x7Fu) - 64 <= 2 )
    {
      v11 = (_QWORD *)(*(_QWORD *)(a2 + 80) & 0xFFFFFFFFFFFFFFF8LL);
      if ( (*(_QWORD *)(a2 + 80) & 4) != 0 )
      {
        if ( (*(_BYTE *)(*(_QWORD *)(v11[1] & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) != 0 )
          goto LABEL_9;
      }
      else if ( (*(_BYTE *)(*(_QWORD *)(*v11 & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) != 0 )
      {
        goto LABEL_9;
      }
      sub_168B9F0((__int64)&v65, (__int64 *)(a1 + 8), v48, 0xBA3u, 0);
      v60 = (void *)sub_EEC8C0((unsigned __int64)a4, a1 + 8, a6);
      sub_1587DB0((__int64)&v65, (__int64 *)&v60);
      sub_15F7200(&v65);
      return;
    }
LABEL_9:
    v12 = (__m128i *)sub_1806F50((__int64 *)(*(_QWORD *)(a1 + 248) + 2352LL), 56, 3u);
    sub_B08AB0(v12, *(_QWORD *)(a1 + 248), a3, 1, (__int64)a4);
    v12[2].m128i_i8[6] = (2 * (a5 & 1)) | v12[2].m128i_i8[6] & 0xFD;
    sub_B8CC60(a2, (__int64)v12, v13, v14, v15, v16);
    return;
  }
LABEL_14:
  v61 = 1;
  v60 = nullptr;
  v62 = 0;
  v51 = sub_1915C50(a1, a4, &v60, 2978, 0);
  if ( v51 == 1 )
    goto LABEL_40;
  v17 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 248) + 17448LL) + 268LL) == 1;
  v66 = 64;
  v18 = 0x2000;
  v67 = 0;
  if ( !v17 )
    v18 = 0x100000000LL;
  v52 = v18;
  v65 = (void *)v18;
  v19 = sub_98E2D0((__int64 *)&v60, (__int64 *)&v65);
  if ( v66 > 0x40 && v65 )
  {
    v55 = v19;
    operator delete[](v65);
    v19 = v55;
  }
  if ( v19 > 0 )
  {
    v38 = a1 + 8;
    sub_168B9F0((__int64)&v65, (__int64 *)(a1 + 8), v48, 0xC50u, 0);
    if ( v70 )
    {
      v38 = v52;
      sub_AE9DF0(&v69, v52, 3u);
    }
    else if ( v72 )
    {
      v45 = sub_168B9E0(&v65);
      v46 = v68;
      if ( v68 )
        v46 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v68 + 32LL))(v68);
      v59 = v46;
      v47 = sub_1587BC0(v45, &v59, v41, v42, v43, v44);
      v38 = v52;
      sub_AE9DF0((unsigned __int8 **)(*v47 + 32LL * v71 + 8), v52, 3u);
    }
    v59 = sub_EEC8C0((unsigned __int64)a4, v38, a6);
    sub_1587DB0((__int64)&v65, &v59);
    sub_15F7200(&v65);
LABEL_40:
    if ( v61 <= 0x40 )
      return;
    goto LABEL_35;
  }
  v20 = v61;
  v21 = (unsigned __int64)v60;
  if ( v61 > 0x40 )
    v21 = *(_QWORD *)v60;
  if ( (v64 & 0xF0) != 0xF0 )
  {
    LOBYTE(v22) = v64 >> 4;
    if ( v64 >> 4 == 4 )
      goto LABEL_49;
    goto LABEL_25;
  }
  v54 = v21;
  v39 = sub_FA77D0(v63);
  v21 = v54;
  if ( v39 == 4 )
    goto LABEL_48;
  if ( (v64 & 0xF0) != 0xF0 )
  {
    LOBYTE(v22) = v64 >> 4;
LABEL_25:
    v22 = (unsigned __int8)v22;
    goto LABEL_26;
  }
  v22 = sub_FA77D0(v63);
  v21 = v54;
LABEL_26:
  if ( v22 == 5 )
  {
LABEL_48:
    v20 = v61;
LABEL_49:
    if ( v20 <= 0x40 )
    {
      v37 = v60 == nullptr;
    }
    else
    {
      v56 = v21;
      v53 = v20;
      v36 = sub_2206780(&v60);
      v21 = v56;
      v37 = v36 == v53;
    }
    if ( v37 )
      goto LABEL_29;
  }
  if ( !v21 || (v21 & (v21 - 1)) != 0 )
  {
    sub_168B9F0((__int64)&v65, (__int64 *)(a1 + 8), v48, 0xBA4u, 0);
    v59 = sub_EEC8C0((unsigned __int64)a4, a1 + 8, a6);
    sub_1587DB0((__int64)&v65, &v59);
    sub_15F7200(&v65);
    if ( v61 <= 0x40 )
      return;
    goto LABEL_35;
  }
LABEL_29:
  v23 = *(_QWORD *)(a1 + 248);
  if ( (*(_BYTE *)(a2 + 28) & 0x7Fu) - 40 > 6 )
  {
    v58 = 0;
    goto LABEL_34;
  }
  v24 = *(_QWORD *)(v23 + 17448);
  v49 = v21;
  v58 = a2;
  v25 = sub_A97FF0(v23, *(unsigned int *)(v24 + 72));
  v21 = v49;
  v57 = v25;
  if ( v25 )
  {
    v26 = v58;
    if ( v25 >= v49 )
      goto LABEL_32;
    v33 = sub_B73370(v58);
    v21 = v49;
    if ( v33 )
    {
      sub_168B9F0((__int64)&v65, (__int64 *)(a1 + 8), *(_DWORD *)(v58 + 24), 0x1441u, 0);
      LODWORD(v59) = v49;
      v34 = sub_16CF160((__int64)&v65, (unsigned int *)&v59);
      v35 = sub_16065E0(v34, &v58);
      sub_1588370(v35, &v57);
      sub_15F7200(&v65);
      goto LABEL_40;
    }
  }
  v26 = v58;
LABEL_32:
  v23 = *(_QWORD *)(a1 + 248);
  if ( v26
    && *(_DWORD *)(*(_QWORD *)(v23 + 17448) + 260LL) == 20
    && (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v26 + 48)
                                                                            & 0xFFFFFFFFFFFFFFF0LL)
                                                                + 8LL)
                                                    & 0xFFFFFFFFFFFFFFF0LL)
                                        + 16LL)
     - 57 <= 1
    && v21 <= 0xF )
  {
    sub_168B9F0((__int64)&v65, (__int64 *)(a1 + 8), *(_DWORD *)(v26 + 24), 0x195Bu, 0);
    v59 = *(_QWORD *)(v58 + 48);
    v40 = sub_162B6D0((__int64)&v65, &v59);
    v57 = 16;
    sub_1587D10(v40, (int *)&v57);
    sub_15F7200(&v65);
    goto LABEL_40;
  }
LABEL_34:
  v50 = v21;
  v27 = (__m128i *)sub_1806F50((__int64 *)(v23 + 2352), 56, 3u);
  sub_B08AB0(v27, *(_QWORD *)(a1 + 248), a3, 1, v51 & 0xFFFFFFFFFFFFFFFELL);
  v27[2].m128i_i8[6] = (2 * (a5 & 1)) | v27[2].m128i_i8[6] & 0xFD;
  v28 = sub_A97D20(
          *(_QWORD *)(a1 + 248),
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 248) + 18648LL) & 0xFFFFFFFFFFFFFFF0LL));
  v27[3].m128i_i8[4] = 1;
  v29 = (unsigned int)(v28 * v50);
  v27[3].m128i_i32[0] = v29;
  sub_B8CC60(a2, (__int64)v27, v30, v31, v32, v29);
  if ( v61 <= 0x40 )
    return;
LABEL_35:
  if ( v60 )
    operator delete[](v60);
}
