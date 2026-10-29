__int64 __fastcall sub_17D5250(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  int v5; // eax
  __int64 v6; // r14
  __int64 v7; // r14
  __int64 v8; // r14
  unsigned int v9; // r14d
  __int64 v10; // rax
  int v11; // eax
  unsigned int v12; // ecx
  int v13; // eax
  __int64 v14; // rbp
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // r15
  __int64 v21; // rax
  _QWORD *v22; // rax
  char v23; // al
  char v24; // al
  char v25; // al
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // r13
  __int64 v31; // rax
  _QWORD *v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // r13
  __int64 v38; // rax
  _QWORD *v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // r15
  __int64 v45; // rax
  _QWORD *v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 v51; // r15
  __int64 v52; // rax
  _QWORD *v53; // rax
  __int64 v54; // [rsp+8h] [rbp-D0h] BYREF
  _QWORD v55[2]; // [rsp+10h] [rbp-C8h] BYREF
  __int64 v56; // [rsp+20h] [rbp-B8h]
  unsigned __int8 *v57[11]; // [rsp+30h] [rbp-A8h] BYREF
  char v58; // [rsp+88h] [rbp-50h]
  unsigned int v59; // [rsp+90h] [rbp-48h]
  char v60; // [rsp+94h] [rbp-44h]

  v4 = sub_B8C330(a2);
  v5 = sub_B74100(a2, v4);
  sub_168B9F0((__int64)v55, (__int64 *)(a1 + 8), *(_DWORD *)(a2 + 24), v5 == 0 ? 4900 : 4906, 0);
  v6 = *(_QWORD *)(a2 + 40);
  if ( v58 )
  {
    sub_AE9DF0(v57, *(_QWORD *)(a2 + 40), 9u);
    v23 = v58;
  }
  else
  {
    if ( !v60 )
    {
      v7 = *(_QWORD *)(a2 + 48);
      goto LABEL_4;
    }
    v20 = sub_168B9E0(v55);
    v21 = v56;
    if ( v56 )
      v21 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v56 + 32LL))(v56);
    v54 = v21;
    v22 = sub_1587BC0(v20, &v54, v16, v17, v18, v19);
    sub_AE9DF0((unsigned __int8 **)(*v22 + 32LL * v59 + 8), v6, 9u);
    v23 = v58;
  }
  v7 = *(_QWORD *)(a2 + 48);
  if ( v23 )
  {
    sub_AE9DF0(v57, *(_QWORD *)(a2 + 48), 8u);
    v24 = v58;
    goto LABEL_24;
  }
LABEL_4:
  if ( !v60 )
  {
    v8 = *(_QWORD *)(a3 + 48);
    goto LABEL_6;
  }
  v51 = sub_168B9E0(v55);
  v52 = v56;
  if ( v56 )
    v52 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v56 + 32LL))(v56);
  v54 = v52;
  v53 = sub_1587BC0(v51, &v54, v47, v48, v49, v50);
  sub_AE9DF0((unsigned __int8 **)(*v53 + 32LL * v59 + 8), v7, 8u);
  v24 = v58;
LABEL_24:
  v8 = *(_QWORD *)(a3 + 48);
  if ( v24 )
  {
    sub_AE9DF0(v57, *(_QWORD *)(a3 + 48), 8u);
    goto LABEL_7;
  }
LABEL_6:
  if ( v60 )
  {
    v44 = sub_168B9E0(v55);
    v45 = v56;
    if ( v56 )
      v45 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v56 + 32LL))(v56);
    v54 = v45;
    v46 = sub_1587BC0(v44, &v54, v40, v41, v42, v43);
    sub_AE9DF0((unsigned __int8 **)(*v46 + 32LL * v59 + 8), v8, 8u);
  }
LABEL_7:
  sub_15F7200(v55);
  v9 = *(_DWORD *)(a3 + 24);
  v10 = sub_B8C330(a3);
  v11 = sub_B74100(a3, v10);
  v12 = 113;
  if ( !v11 )
  {
    v12 = 112;
    if ( (*(_BYTE *)(a3 + 29) & 2) != 0 )
    {
      if ( (*(_BYTE *)(a3 + 28) & 0x7Fu) - 34 > 5 || (v13 = sub_B75A50(a3, 0), v12 = 6282, !v13) )
        v12 = 114;
      if ( !v9 )
        v9 = *(_DWORD *)(a2 + 24);
    }
  }
  sub_168B9F0((__int64)v55, (__int64 *)(a1 + 8), v9, v12, 0);
  if ( v58 )
  {
    sub_AE9DF0(v57, a3, 0xAu);
    v25 = v58;
  }
  else
  {
    if ( !v60 )
    {
      v14 = *(_QWORD *)(a3 + 48);
      goto LABEL_17;
    }
    v37 = sub_168B9E0(v55);
    v38 = v56;
    if ( v56 )
      v38 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v56 + 32LL))(v56);
    v54 = v38;
    v39 = sub_1587BC0(v37, &v54, v33, v34, v35, v36);
    sub_AE9DF0((unsigned __int8 **)(*v39 + 32LL * v59 + 8), a3, 0xAu);
    v25 = v58;
  }
  v14 = *(_QWORD *)(a3 + 48);
  if ( v25 )
  {
    sub_AE9DF0(v57, v14, 8u);
    goto LABEL_18;
  }
LABEL_17:
  if ( v60 )
  {
    v30 = sub_168B9E0(v55);
    v31 = v56;
    if ( v56 )
      v31 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v56 + 32LL))(v56);
    v54 = v31;
    v32 = sub_1587BC0(v30, &v54, v26, v27, v28, v29);
    sub_AE9DF0((unsigned __int8 **)(*v32 + 32LL * v59 + 8), v14, 8u);
  }
LABEL_18:
  sub_15F7200(v55);
  return sub_B88650(a2, 1);
}
