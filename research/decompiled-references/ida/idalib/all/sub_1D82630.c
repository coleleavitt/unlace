__int64 __fastcall sub_1D82630(
        __int64 *a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8)
{
  bool v10; // zf
  unsigned __int64 v11; // rax
  __int64 result; // rax
  unsigned __int64 v13; // r14
  _QWORD *i; // rbx
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // r15
  __int64 v18; // rcx
  unsigned __int64 v19; // rbx
  __int64 v20; // rsi
  __int64 v21; // rdx
  __int64 v22; // rcx
  _QWORD *v23; // r15
  unsigned __int64 v24; // rbx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rax
  __int64 v39; // rbx
  __int64 v40; // r14
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // rax
  __int64 v45; // rbx
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // [rsp+0h] [rbp-68h]
  __int64 v54; // [rsp+8h] [rbp-60h]
  __int64 v55; // [rsp+10h] [rbp-58h]
  __int64 v56; // [rsp+18h] [rbp-50h] BYREF
  int v57; // [rsp+20h] [rbp-48h]
  unsigned __int64 v58[8]; // [rsp+28h] [rbp-40h] BYREF

  v10 = a1[6] == 0;
  v56 = a2;
  if ( v10 )
    return sub_1CDD580(*a1, v56, a3, a4, a7, a8, a5, a6, v53, v54, v55, v56, v57, v58[0]);
  v11 = sub_F22BD0(&v56, 0);
  if ( !v11 )
    return sub_1CDD580(*a1, v56, a3, a4, a7, a8, a5, a6, v53, v54, v55, v56, v57, v58[0]);
  if ( (*(_BYTE *)(v11 + 28) & 0x7F) != 0x46 )
    return sub_1CDD580(*a1, v56, a3, a4, a7, a8, a5, a6, v53, v54, v55, v56, v57, v58[0]);
  v13 = sub_F22BD0(&v56, 0);
  for ( i = (_QWORD *)v13;
        (*(_QWORD *)sub_BC3640(i) & 0xFFFFFFFFFFFFFFF8LL) != 0;
        i = (_QWORD *)(*(_QWORD *)sub_BC3640(i) & 0xFFFFFFFFFFFFFFF8LL) )
  {
    ;
  }
  v16 = a1[5];
  if ( !v16 )
    return sub_1CDD580(*a1, v56, a3, a4, a7, a8, a5, a6, v53, v54, v55, v56, v57, v58[0]);
  v17 = *(_QWORD *)(v16 + 48);
  if ( v17 )
  {
    v18 = i[6];
    v17 += 64;
    v19 = *(_QWORD *)(v18 + 16) & 0xFFFFFFFFFFFFFFF8LL;
    v20 = *(_QWORD *)(v18 + 16) & 4LL;
    if ( (*(_QWORD *)(v18 + 16) & 4) == 0 )
    {
LABEL_25:
      v55 = v18;
      v54 = sub_B91570(v19, v20, v15, v18, a5, a6);
      v38 = sub_B91570(v17, v20, v34, v35, v36, v37);
      v18 = v55;
      if ( v54 == v38 )
        goto LABEL_28;
      while ( ((*(_BYTE *)(v19 + 8) + 70) & 0x7Fu) <= 3 )
      {
        v55 = v18;
        v54 = sub_B91570(v19, v20, v21, v18, a5, a6);
        v50 = sub_B91570(v17, v20, v46, v47, v48, v49);
        v18 = v55;
        if ( v54 == v50 )
          goto LABEL_28;
        LODWORD(v54) = v55;
        v51 = sub_B8C1B0(v19);
        v18 = v55;
        v52 = *(_QWORD *)(v51 + 16);
        v19 = v52 & 0xFFFFFFFFFFFFFFF8LL;
        if ( (v52 & 4) != 0 )
          v19 = *(_QWORD *)v19;
      }
      goto LABEL_27;
    }
  }
  else
  {
    v18 = i[6];
    v19 = *(_QWORD *)(v18 + 16) & 0xFFFFFFFFFFFFFFF8LL;
    v20 = *(_QWORD *)(v18 + 16) & 4LL;
    if ( (*(_QWORD *)(v18 + 16) & 4) == 0 )
      goto LABEL_13;
  }
  v19 = *(_QWORD *)v19;
  if ( v17 )
    goto LABEL_25;
LABEL_13:
  v21 = (*(_BYTE *)(v19 + 8) + 70) & 0x7F;
  if ( (unsigned __int8)v21 > 3u )
    goto LABEL_14;
  do
  {
    v54 = v18;
    v44 = sub_B8C1B0(v19);
    v18 = v54;
    v45 = *(_QWORD *)(v44 + 16);
    if ( (v45 & 4) != 0 )
      v19 = *(_QWORD *)(v45 & 0xFFFFFFFFFFFFFFF8LL);
    else
      v19 = v45 & 0xFFFFFFFFFFFFFFF8LL;
  }
  while ( ((*(_BYTE *)(v19 + 8) + 70) & 0x7Fu) <= 3 );
LABEL_27:
  v16 = a1[5];
LABEL_14:
  v22 = *(_QWORD *)(v18 + 16);
  v23 = (_QWORD *)(v22 & 0xFFFFFFFFFFFFFFF8LL);
  v18 = v22 & 4;
  if ( (_DWORD)v18 )
    v23 = (_QWORD *)*v23;
  v24 = *(_QWORD *)(v16 + 48);
  if ( v24 )
    v24 += 64LL;
  if ( !v23 || (v54 = sub_B91570(v24, v20, v21, v18, a5, a6), v54 != sub_B91570((__int64)v23, v20, v25, v26, v27, v28)) )
  {
    while ( ((*(_BYTE *)(v24 + 8) + 70) & 0x7Fu) <= 3 )
    {
      if ( v23 )
      {
        v54 = sub_B91570(v24, v20, v21, v18, a5, a6);
        if ( v54 == sub_B91570((__int64)v23, v20, v29, v30, v31, v32) )
          goto LABEL_28;
      }
      v33 = *(_QWORD *)(sub_B8C1B0(v24) + 16);
      v24 = v33 & 0xFFFFFFFFFFFFFFF8LL;
      if ( (v33 & 4) != 0 )
        v24 = *(_QWORD *)v24;
    }
    return sub_1CDD580(*a1, v56, a3, a4, a7, a8, a5, a6, v53, v54, v55, v56, v57, v58[0]);
  }
LABEL_28:
  result = sub_1E4BB20(a1 + 7, v13, v21, v18);
  if ( result )
  {
    v39 = a1[4];
    v40 = *(_QWORD *)(result + 48);
    v41 = *(unsigned int *)(v39 + 8);
    if ( v41 + 1 > (unsigned __int64)*(unsigned int *)(v39 + 12) )
    {
      v54 = result;
      sub_2237220(a1[4], v39 + 16, v41 + 1, 8);
      v41 = *(unsigned int *)(v39 + 8);
      result = v54;
    }
    *(_QWORD *)(*(_QWORD *)v39 + 8 * v41) = v40;
    ++*(_DWORD *)(v39 + 8);
    sub_F22AA0(v58, result);
    return sub_1CDD580(*a1, v58[0], a3, a4, a7, a8, v42, v43, v53, v54, v55, v56, v57, v58[0]);
  }
  return result;
}
