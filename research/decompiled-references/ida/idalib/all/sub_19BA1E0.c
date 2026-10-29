void __fastcall sub_19BA1E0(__int64 *a1, __int64 a2, unsigned int a3, __int64 a4)
{
  char v5; // r14
  __int64 v6; // r15
  signed __int64 v7; // rdx
  int v8; // edx
  int v9; // eax
  _BOOL8 v10; // r15
  __int64 v11; // rax
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rax
  _QWORD *v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // r15
  void *v24; // rax
  _QWORD *v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  void *v30; // rax
  _QWORD *v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // r15
  void *v37; // rax
  _QWORD *v38; // rax
  char *v39; // [rsp+0h] [rbp-140h]
  __int64 v40; // [rsp+0h] [rbp-140h]
  signed __int64 v41; // [rsp+8h] [rbp-138h]
  char v42; // [rsp+10h] [rbp-130h]
  __int64 v43; // [rsp+10h] [rbp-130h]
  __int64 v44; // [rsp+18h] [rbp-128h] BYREF
  __int64 v45; // [rsp+20h] [rbp-120h] BYREF
  int v46; // [rsp+28h] [rbp-118h] BYREF
  __int64 v47; // [rsp+2Ch] [rbp-114h]
  int v48; // [rsp+34h] [rbp-10Ch]
  void *v49; // [rsp+38h] [rbp-108h] BYREF
  signed __int64 v50; // [rsp+40h] [rbp-100h]
  __int64 v51; // [rsp+48h] [rbp-F8h] BYREF
  void *v52; // [rsp+58h] [rbp-E8h] BYREF
  signed __int64 v53; // [rsp+60h] [rbp-E0h]
  __int64 v54; // [rsp+68h] [rbp-D8h] BYREF
  _QWORD v55[2]; // [rsp+78h] [rbp-C8h] BYREF
  void *v56; // [rsp+88h] [rbp-B8h]
  unsigned __int8 *v57[11]; // [rsp+98h] [rbp-A8h] BYREF
  char v58; // [rsp+F0h] [rbp-50h]
  unsigned int v59; // [rsp+F8h] [rbp-48h]
  char v60; // [rsp+FCh] [rbp-44h]

  if ( (*(_BYTE *)(a1[29] + 97) & 0x40) == 0 )
    return;
  if ( (unsigned __int8)sub_B7D390(a2, (__int64)v55, 0, a4) )
    return;
  LODWORD(v55[0]) = 0;
  v5 = sub_B74C70(a2);
  if ( v5 )
    return;
  v42 = sub_B760E0(a2, v55, nullptr);
  if ( !v42 || !LODWORD(v55[0]) )
    return;
  v6 = *(_QWORD *)(a1[31] + 17448);
  v39 = (char *)sub_1680000(*(_QWORD *)(v6 + 360), *(_QWORD *)(v6 + 368));
  v41 = v7;
  switch ( *(_DWORD *)(v6 + 260) )
  {
    case 0:
    case 2:
    case 3:
    case 4:
    case 6:
    case 7:
    case 8:
    case 0xA:
    case 0xB:
    case 0xC:
    case 0xD:
    case 0xE:
    case 0xF:
    case 0x11:
    case 0x12:
    case 0x13:
    case 0x14:
    case 0x15:
    case 0x16:
    case 0x17:
    case 0x18:
    case 0x19:
    case 0x1A:
    case 0x1C:
      v8 = 0;
      v9 = 4;
      break;
    case 1:
    case 9:
      v5 = v42;
      v8 = 13;
      v9 = 10;
      break;
    case 5:
    case 0x1B:
      v8 = 0;
      v9 = 11;
      break;
    case 0x10:
      v8 = 0;
      v9 = 0;
      break;
  }
  v46 = v9;
  v10 = 0;
  v48 = 0;
  v47 = v8 | (unsigned int)v47 & 0x80000000;
  v11 = *(_QWORD *)(a2 + 40);
  BYTE3(v47) = v5 << 7;
  if ( (v11 & 7) == 6 )
  {
    v10 = 1;
    v12 = *(_DWORD *)(v11 & 0xFFFFFFFFFFFFFFF8LL);
    if ( v12 != 2 )
      v10 = v12 == 4;
  }
  sub_168B9F0((__int64)v55, a1 + 1, a3, 0xBA1u, 0);
  if ( v58 )
  {
    sub_AE9DF0(v57, v10, 2u);
  }
  else if ( v60 )
  {
    v26 = sub_168B9E0(v55);
    v30 = v56;
    if ( v56 )
    {
      v43 = v26;
      v30 = (void *)(*(__int64 (__fastcall **)(void *))(*(_QWORD *)v56 + 32LL))(v56);
      v26 = v43;
    }
    v52 = v30;
    v31 = sub_1587BC0(v26, (__int64 *)&v52, v26, v27, v28, v29);
    sub_AE9DF0((unsigned __int8 **)(*v31 + 32LL * v59 + 8), v10, 2u);
  }
  v44 = *(_QWORD *)(a2 + 48);
  sub_F78400((__int64)&v49, &v44);
  if ( v58 )
  {
    sub_AEC220(v57, v49, v50);
LABEL_28:
    if ( v58 )
    {
      sub_AEC220(v57, v39, v41);
    }
    else if ( v60 )
    {
      v36 = sub_168B9E0(v55);
      v37 = v56;
      if ( v56 )
        v37 = (void *)(*(__int64 (__fastcall **)(void *))(*(_QWORD *)v56 + 32LL))(v56);
      v52 = v37;
      v38 = sub_1587BC0(v36, (__int64 *)&v52, v32, v33, v34, v35);
      sub_AEC220((unsigned __int8 **)(*v38 + 32LL * v59 + 8), v39, v41);
    }
    goto LABEL_16;
  }
  if ( v60 )
  {
    v23 = sub_168B9E0(v55);
    v24 = v56;
    if ( v56 )
      v24 = (void *)(*(__int64 (__fastcall **)(void *))(*(_QWORD *)v56 + 32LL))(v56);
    v52 = v24;
    v25 = sub_1587BC0(v23, (__int64 *)&v52, v19, v20, v21, v22);
    sub_AEC220((unsigned __int8 **)(*v25 + 32LL * v59 + 8), v49, v50);
    goto LABEL_28;
  }
LABEL_16:
  sub_2257830(&v52, &v46);
  if ( v58 )
  {
    sub_AEC220(v57, v52, v53);
  }
  else if ( v60 )
  {
    v13 = sub_168B9E0(v55);
    v17 = (__int64)v56;
    if ( v56 )
    {
      v40 = v13;
      v17 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v56 + 32LL))(v56);
      v13 = v40;
    }
    v45 = v17;
    v18 = sub_1587BC0(v13, &v45, v13, v14, v15, v16);
    sub_AEC220((unsigned __int8 **)(*v18 + 32LL * v59 + 8), v52, v53);
  }
  LOBYTE(v45) = (v46 | v48 & 0x7FFFFFFF | ((unsigned int)v47 | HIDWORD(v47)) & 0x7FFFFFFF) == 0;
  sub_1588420((__int64)v55, (unsigned __int8 *)&v45);
  if ( v52 != &v54 )
    operator delete(v52);
  if ( v49 != &v51 )
    operator delete(v49);
  sub_15F7200(v55);
  sub_168B9F0((__int64)v55, a1 + 1, a3, 0x18DAu, 0);
  sub_15F7200(v55);
}
