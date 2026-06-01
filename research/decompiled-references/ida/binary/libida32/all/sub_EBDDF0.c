void __fastcall sub_EBDDF0(__int64 *a1, char *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 *v6; // rbx
  __int64 v9; // r12
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  _QWORD *v14; // r13
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  unsigned __int64 v22; // r9
  unsigned __int64 v23; // r15
  __int64 v24; // r12
  unsigned __int64 v25; // rax
  __int64 v26; // r13
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  unsigned __int64 v35; // r14
  __int64 v36; // r15
  __int64 v37; // rdx
  unsigned __int64 v38; // rax
  unsigned __int64 v39; // rax
  unsigned __int64 v40; // rax
  unsigned __int64 v41; // r15
  unsigned __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // rbx
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 v48; // rax
  __int64 v49; // r14
  __int64 v50; // rcx
  __int64 v51; // r9
  __int64 v52; // rcx
  unsigned int v53; // edi
  __int64 v54; // rdx
  int v55; // eax
  int v56; // esi
  __int64 v57; // r8
  bool v58; // zf
  __int64 v59; // rax
  __int64 *v60; // [rsp+0h] [rbp-98h]
  _QWORD *v61; // [rsp+8h] [rbp-90h]
  __int64 v62; // [rsp+8h] [rbp-90h]
  char *v63; // [rsp+10h] [rbp-88h]
  unsigned __int8 v65; // [rsp+1Bh] [rbp-7Dh]
  unsigned __int8 v66; // [rsp+1Ch] [rbp-7Ch]
  __int64 v67; // [rsp+28h] [rbp-70h]
  __int64 v68; // [rsp+48h] [rbp-50h] BYREF
  __int64 v69; // [rsp+50h] [rbp-48h] BYREF
  __int64 v70[8]; // [rsp+58h] [rbp-40h] BYREF

  v65 = a5;
  if ( !(_BYTE)a5 && a4 >= a1[7] )
    return;
  v6 = a1;
  v66 = a5;
  v9 = (__int64)a2;
  sub_EB7F10((__int64)a1, (__int64)a2, a4, a4, a5, a6);
  v14 = sub_EBA840(*a1, a2, v10, v11, v12, v13);
  v22 = sub_A56850((__int64)a2, (__int64)a2, v15, v16, v17, v18);
  v60 = v14 + 9;
  if ( v22 != v19 )
  {
    v61 = v14;
    v23 = v22;
    v63 = a2;
    v24 = v19;
    do
    {
      if ( (*(_BYTE *)(v23 + 12) & 1) == 0 )
      {
        v25 = sub_EB2840(*(__int64 **)(v23 + 16));
        v26 = sub_F3F530(*(_QWORD *)(v25 & 0xFFFFFFFFFFFFFFF0LL));
        v31 = sub_EB7560(v60, v26, v27, v28, v29, v30);
        a2 = (char *)v26;
        sub_EBDDF0(a1, v26, a3, v31 + a4, v65);
      }
      v23 += 24LL;
    }
    while ( v24 != v23 );
    v14 = v61;
    v9 = (__int64)v63;
  }
  if ( v9 != a3 )
    goto LABEL_10;
  v40 = sub_A56900(v9, (__int64)a2, v19, v20, v21, v22);
  v62 = v19;
  v41 = v40;
  if ( v40 == v19 )
    goto LABEL_10;
  v67 = a3;
  do
  {
    v42 = sub_EB2840(*(__int64 **)(v41 + 16));
    v45 = sub_F3F530(*(_QWORD *)(v42 & 0xFFFFFFFFFFFFFFF0LL));
    v68 = v45;
    v48 = *(_QWORD *)(v45 + 128);
    if ( v48
      || (sub_6E4DB0((__int64 *)(*(_QWORD *)(v45 + 104) + 96LL), *(_QWORD *)(v45 + 104), v43, v44, v46, v47),
          (v48 = *(_QWORD *)(v45 + 128)) != 0) )
    {
      v48 = *(_QWORD *)(v48 + 88);
    }
    v49 = v14[9];
    v68 = v48;
    if ( (unsigned __int8)sub_A4A0A0((__int64 *)(v49 + 88), &v68, &v69) )
    {
      v52 = a4 + *(_QWORD *)(v69 + 8);
      goto LABEL_26;
    }
    v53 = *(_DWORD *)(v49 + 104);
    v54 = v69;
    v55 = *(_DWORD *)(v49 + 96) + 1;
    v56 = 2 * v53;
    v57 = 3 * v53;
    v70[0] = v69;
    if ( 4 * v55 >= (unsigned int)v57 )
      goto LABEL_36;
    v57 = v53 >> 3;
    if ( v53 - *(_DWORD *)(v49 + 100) - v55 <= (unsigned int)v57 )
    {
      v56 = v53;
LABEL_36:
      sub_A6E490((__int64 **)(v49 + 88), v56, v69, v50, v57, v51);
      sub_A4A0A0((__int64 *)(v49 + 88), &v68, v70);
      v54 = v70[0];
      v55 = *(_DWORD *)(v49 + 96) + 1;
    }
    v58 = *(_QWORD *)v54 == -4096;
    *(_DWORD *)(v49 + 96) = v55;
    if ( !v58 )
      --*(_DWORD *)(v49 + 100);
    v59 = v68;
    *(_QWORD *)(v54 + 8) = 0;
    v52 = a4;
    *(_BYTE *)(v54 + 16) = 0;
    *(_QWORD *)v54 = v59;
LABEL_26:
    a2 = (char *)v45;
    v41 += 24LL;
    sub_EBDDF0(a1, v45, v67, v52, v66);
  }
  while ( v41 != v62 );
  v6 = a1;
LABEL_10:
  v35 = sub_B5ABC0(v9, (__int64)a2, v19, v20, v21, v22);
  if ( v35 )
  {
LABEL_11:
    if ( (*(_BYTE *)(v35 + 68) & 1) == 0 )
    {
      v36 = v35;
      if ( *(char *)(v35 + 29) < 0 )
        v36 = sub_B4E9E0(v35);
      v37 = *(unsigned int *)(v36 + 68);
      if ( (v37 & 0xFFFFFFF0) == 0 )
      {
        sub_B5AD70(v36, (__int64)a2, v37, v32, v33, v34);
        LODWORD(v37) = *(_DWORD *)(v36 + 68);
      }
      v38 = sub_A742B0(*v6, *(_QWORD *)(v14[6] + 8LL * (((unsigned int)v37 >> 4) - 1)));
      a2 = (char *)v35;
      sub_EBDCB0(v6, v35, v38 + a4, v65);
    }
    while ( 1 )
    {
      v39 = *(_QWORD *)(v35 + 8) & 0xFFFFFFFFFFFFFFF8LL;
      v35 = v39;
      if ( !v39 )
        break;
      if ( (*(_BYTE *)(v39 + 28) & 0x7Fu) - 49 <= 2 )
        goto LABEL_11;
    }
  }
}

