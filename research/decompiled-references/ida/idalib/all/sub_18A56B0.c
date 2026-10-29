__m128i *__fastcall sub_18A56B0(__int64 *a1, __int64 a2, __int64 a3, __m128 a4, __m128i a5)
{
  _BYTE *v8; // rbp
  int v9; // r15d
  unsigned int v10; // edx
  bool v11; // bp
  _BYTE *v12; // rax
  char v13; // di
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 *v18; // rax
  char v19; // si
  __int64 v20; // r9
  __m128i *v21; // rbp
  unsigned __int8 v22; // al
  __m128i **v23; // rdx
  __int64 v24; // rdi
  __m128i **v25; // rcx
  __m128i **v26; // rax
  __m128i **v27; // rcx
  __m128i **v28; // rax
  __m128i **v29; // rdx
  __m128i **v30; // rdx
  __int64 v31; // rdi
  __m128i **v32; // rsi
  __m128i **v33; // rax
  __m128i **v34; // rdx
  __m128i **v35; // rax
  __m128i **v36; // rcx
  __int64 *v37; // rdi
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  unsigned __int64 *v43; // rax
  __int64 *v44; // rdx
  unsigned __int64 v45; // rcx
  __int64 *v46; // rax
  __int64 v47; // rcx
  char *v48; // rax
  __int64 v49; // rbp
  char *v50; // rax
  __int64 v51; // r15
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // r9
  __int64 v56; // rax
  _QWORD *v57; // rax
  int v58; // eax
  unsigned __int64 v59; // rax
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // r8
  __int64 v63; // r9
  __int64 v64; // r15
  __int64 v65; // rax
  _QWORD *v66; // rax
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // r8
  __int64 v70; // r9
  __int64 v71; // r15
  __int64 v72; // rax
  _QWORD *v73; // rax
  __int64 v74; // [rsp+8h] [rbp-110h]
  __int64 v75; // [rsp+10h] [rbp-108h] BYREF
  char v76; // [rsp+18h] [rbp-100h]
  __int64 v77; // [rsp+1Ch] [rbp-FCh]
  char v78; // [rsp+24h] [rbp-F4h]
  void *v79; // [rsp+28h] [rbp-F0h]
  __int64 v80; // [rsp+30h] [rbp-E8h]
  _BYTE v81[24]; // [rsp+38h] [rbp-E0h] BYREF
  _QWORD v82[2]; // [rsp+50h] [rbp-C8h] BYREF
  __int64 v83; // [rsp+60h] [rbp-B8h]
  unsigned __int8 *v84[11]; // [rsp+70h] [rbp-A8h] BYREF
  char v85; // [rsp+C8h] [rbp-50h]
  unsigned int v86; // [rsp+D0h] [rbp-48h]
  char v87; // [rsp+D4h] [rbp-44h]

  v8 = *(_BYTE **)a3;
  v9 = **(_BYTE **)a3 & 7;
  if ( v9 == 5 )
  {
    sub_168B9F0((__int64)v82, a1, *((_DWORD *)v8 + 42), 0x1C9Eu, 0);
    v58 = *((_DWORD *)v8 + 42);
    v78 = 0;
    v77 = 0;
    v79 = v81;
    v80 = 0;
    v81[0] = 0;
    v81[16] = 0;
    LODWORD(v75) = v58;
    HIDWORD(v75) = v58;
    v76 = 1;
    sub_1589170((__int64)v82, &v75);
    if ( v79 != v81 )
    {
      operator delete(v79);
      sub_15F7200(v82);
      goto LABEL_3;
    }
    goto LABEL_71;
  }
  if ( (**(_BYTE **)a3 & 7) != 0 )
  {
    sub_168B9F0((__int64)v82, a1, *((_DWORD *)v8 + 42), 0x13ABu, 0);
    v50 = sub_15AC850(v9);
    v51 = (__int64)v50;
    if ( v85 )
    {
      sub_AE9DF0(v84, (__int64)v50, 1u);
    }
    else if ( v87 )
    {
      v52 = sub_168B9E0(v82);
      v56 = v83;
      if ( v83 )
      {
        v74 = v52;
        v56 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v83 + 32LL))(v83);
        v52 = v74;
      }
      v75 = v56;
      v57 = sub_1587BC0(v52, &v75, v52, v53, v54, v55);
      sub_AE9DF0((unsigned __int8 **)(*v57 + 32LL * v86 + 8), v51, 1u);
    }
LABEL_71:
    sub_15F7200(v82);
  }
LABEL_3:
  if ( (v8[3] >> 7) | v8[4] & 1 )
  {
    if ( (char)v8[3] < 0 )
      v10 = *((_DWORD *)v8 + 60);
    else
      v10 = *((_DWORD *)v8 + 65);
    sub_168B9F0((__int64)v82, a1, v10, 0xFA3u, 0);
    v11 = (*(_BYTE *)(sub_168B6E0((__int64)a1) + 1) & 0x40) != 0;
    if ( v85 )
    {
      sub_AE9DF0(v84, v11, 3u);
    }
    else if ( v87 )
    {
      v71 = sub_168B9E0(v82);
      v72 = v83;
      if ( v83 )
        v72 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v83 + 32LL))(v83);
      v75 = v72;
      v73 = sub_1587BC0(v71, &v75, v67, v68, v69, v70);
      sub_AE9DF0((unsigned __int8 **)(*v73 + 32LL * v86 + 8), v11, 3u);
    }
    sub_15F7200(v82);
  }
  v12 = *(_BYTE **)a3;
  v13 = **(_BYTE **)a3 >> 3;
  if ( (v13 & 3) != 0 )
  {
    sub_168B9F0((__int64)v82, a1, *((_DWORD *)v12 + 43), 0xFDFu, 0);
    v48 = sub_15AC8E0(v13 & 3);
    v49 = (__int64)v48;
    if ( v85 )
    {
      sub_AE9DF0(v84, (__int64)v48, 1u);
      sub_15F7200(v82);
      v12 = *(_BYTE **)a3;
    }
    else
    {
      if ( v87 )
      {
        v64 = sub_168B9E0(v82);
        v65 = v83;
        if ( v83 )
          v65 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v83 + 32LL))(v83);
        v75 = v65;
        v66 = sub_1587BC0(v64, &v75, v60, v61, v62, v63);
        sub_AE9DF0((unsigned __int8 **)(*v66 + 32LL * v86 + 8), v49, 1u);
      }
      sub_15F7200(v82);
      v12 = *(_BYTE **)a3;
    }
  }
  *v12 &= 0xC0u;
  *((_QWORD *)v12 + 21) = 0;
  sub_17A3FF0(*a1, *(_QWORD *)a3);
  if ( (*(_BYTE *)(sub_168B6E0((__int64)a1) + 1) & 8) != 0 )
    sub_186C8D0(*a1, a3, *(double *)a4.m128_u64, v14, v15, v16, v17);
  v18 = (__int64 *)sub_1E85170(*a1, a3);
  v19 = 1;
  if ( (*(_BYTE *)(a3 + 720) & 1) == 0 )
    v19 = ((**(_DWORD **)a3 >> 12) & 0x7F) == 69;
  v20 = 0;
  if ( !*(_DWORD *)(a3 + 56) )
    v20 = *(_QWORD *)(a3 + 64);
  v21 = (__m128i *)sub_189F870(a1, (__int64)v18, *v18, *(_DWORD *)(a3 + 88), *(_DWORD *)(a3 + 80), v20, v19);
  if ( *(_QWORD *)(a3 + 16) )
  {
    sub_168B9F0((__int64)v82, a1, *(_DWORD *)(a3 + 80), 0x131Au, 0);
    v75 = *(_QWORD *)(a3 + 8);
    sub_1587DB0((__int64)v82, &v75);
    sub_15F7200(v82);
    sub_B88650((__int64)v21, 1);
  }
  v22 = v21[1].m128i_i8[12] & 0x7F;
  if ( (unsigned int)v22 - 40 > 6 || v22 == 43 )
    goto LABEL_34;
  if ( !*(_BYTE *)(a2 + 452) )
    goto LABEL_83;
  v23 = *(__m128i ***)(a2 + 432);
  v24 = *(unsigned int *)(a2 + 444);
  v25 = &v23[v24];
  if ( v23 != v25 )
  {
    v26 = *(__m128i ***)(a2 + 432);
    if ( v21 == *v23 )
      goto LABEL_28;
    do
    {
      if ( v25 == ++v26 )
        break;
    }
    while ( v21 != *v26 );
  }
  if ( (unsigned int)v24 < *(_DWORD *)(a2 + 440) )
  {
    *(_DWORD *)(a2 + 444) = v24 + 1;
    *v25 = v21;
    v23 = *(__m128i ***)(a2 + 432);
    v26 = &v23[v24];
  }
  else
  {
LABEL_83:
    v26 = (__m128i **)sub_2236760(a2 + 432, v21);
    v23 = *(__m128i ***)(a2 + 432);
    if ( !*(_BYTE *)(a2 + 452) )
    {
      v27 = &v23[*(unsigned int *)(a2 + 440)];
      goto LABEL_29;
    }
  }
LABEL_28:
  v27 = &v23[*(unsigned int *)(a2 + 444)];
LABEL_29:
  if ( v27 != v26 && (unsigned __int64)*v26 >= 0xFFFFFFFFFFFFFFFELL )
  {
    v28 = v26 + 1;
    do
    {
      v29 = v28;
      if ( v27 == v28 )
        break;
      ++v28;
    }
    while ( (unsigned __int64)*v29 >= 0xFFFFFFFFFFFFFFFELL );
  }
LABEL_34:
  if ( !*(_BYTE *)(a2 + 100) )
    goto LABEL_43;
  v30 = *(__m128i ***)(a2 + 80);
  v31 = *(unsigned int *)(a2 + 92);
  v32 = &v30[v31];
  if ( v30 != v32 )
  {
    v33 = *(__m128i ***)(a2 + 80);
    if ( v21 == *v30 )
      goto LABEL_42;
    do
    {
      if ( v32 == ++v33 )
        break;
    }
    while ( v21 != *v33 );
  }
  if ( (unsigned int)v31 < *(_DWORD *)(a2 + 88) )
  {
    *(_DWORD *)(a2 + 92) = v31 + 1;
    *v32 = v21;
    v30 = *(__m128i ***)(a2 + 80);
    v33 = &v30[v31];
  }
  else
  {
LABEL_43:
    v33 = (__m128i **)sub_2236760(a2 + 80, v21);
    v30 = *(__m128i ***)(a2 + 80);
    if ( !*(_BYTE *)(a2 + 100) )
    {
      v34 = &v30[*(unsigned int *)(a2 + 88)];
      goto LABEL_45;
    }
  }
LABEL_42:
  v34 = &v30[*(unsigned int *)(a2 + 92)];
LABEL_45:
  if ( v34 != v33 && (unsigned __int64)*v33 >= 0xFFFFFFFFFFFFFFFELL )
  {
    v35 = v33 + 1;
    do
    {
      v36 = v35;
      if ( v34 == v35 )
        break;
      ++v35;
    }
    while ( (unsigned __int64)*v36 >= 0xFFFFFFFFFFFFFFFELL );
  }
  v37 = (__int64 *)*a1;
  if ( !*(_DWORD *)(a3 + 56) && *(_QWORD *)(a3 + 64) )
  {
    sub_15C17C0((__int64)(v37 + 326), (__int64)v21);
    v37 = (__int64 *)*a1;
  }
  sub_1836CB0(v37, a2, v21, (__int64 *)a3, a4, a5);
  if ( (v21[1].m128i_i8[13] & 1) == 0 )
    return v21;
  v43 = sub_B8C3D0((__int64)v21, a2, v38, v39, v40, v41);
  v44 = (__int64 *)*v43;
  v45 = *v43 + 8LL * *((unsigned int *)v43 + 2);
  if ( *v43 >= v45 )
  {
    if ( v44 == (__int64 *)v45 )
      return v21;
    if ( *(_WORD *)(*(_QWORD *)v45 + 36LL) != 148 )
    {
      v46 = (__int64 *)(v45 + 8);
      while ( v44 != v46 )
      {
        v47 = *v46++;
        if ( *(_WORD *)(v47 + 36) == 148 )
          goto LABEL_78;
      }
      return v21;
    }
LABEL_78:
    sub_168B9F0((__int64)v82, a1, v21[1].m128i_u32[2], 0xD03u, 0);
    sub_15F7200(v82);
    return v21;
  }
  v59 = *v43;
  while ( *(_WORD *)(*(_QWORD *)v59 + 36LL) != 148 )
  {
    v59 += 8LL;
    if ( v45 == v59 )
      return v21;
  }
  if ( v45 != v59 )
    goto LABEL_78;
  return v21;
}
