__int64 __fastcall sub_1CD8AB0(__int64 *a1, _BYTE *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned int v6; // r14d
  char v7; // r13
  __int64 v9; // rbx
  _QWORD *v10; // rdi
  __int64 v11; // r12
  unsigned __int64 v12; // rax
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 *v17; // r15
  char v18; // dl
  __int64 v19; // r12
  int v20; // ecx
  unsigned int v21; // ecx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rbp
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rax
  _QWORD *v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rbp
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rax
  _QWORD *v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rbp
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rax
  _QWORD *v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // rbp
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 v49; // rax
  _QWORD *v50; // rax
  _BYTE *v51; // [rsp+8h] [rbp-E0h] BYREF
  __int64 v52; // [rsp+18h] [rbp-D0h] BYREF
  _QWORD v53[2]; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v54; // [rsp+30h] [rbp-B8h]
  unsigned __int8 *v55[11]; // [rsp+40h] [rbp-A8h] BYREF
  char v56; // [rsp+98h] [rbp-50h]
  unsigned int v57; // [rsp+A0h] [rbp-48h]
  char v58; // [rsp+A4h] [rbp-44h]

  v6 = a3;
  v7 = a4;
  v9 = (__int64)a2;
  v51 = a2;
  if ( (_DWORD)a5 == 3 )
  {
    if ( (unsigned __int8)sub_B844D0(a2) == 2 )
    {
      sub_168B9F0((__int64)v53, a1 + 1, v6, 0xEAFu, 0);
      sub_17BA610((__int64)v53, (__int64 *)&v51);
      sub_15F7200(v53);
      return 1;
    }
    v9 = (__int64)v51;
  }
  v10 = (_QWORD *)(*(_QWORD *)(v9 + 16) & 0xFFFFFFFFFFFFFFF8LL);
  if ( (*(_QWORD *)(v9 + 16) & 4) != 0 )
    v10 = (_QWORD *)*v10;
  v11 = sub_B916A0((unsigned __int64)v10, (__int64)a2, a3, a4, a5, a6);
  v12 = sub_B8EAA0(a1[68]);
  v15 = *(unsigned __int8 *)(v12 + 8);
  v16 = ((_BYTE)v15 + 70) & 0x7F;
  if ( (unsigned __int8)v16 <= 3u )
  {
    sub_168B9F0((__int64)v53, a1 + 1, v6, 0xEADu, 0);
    if ( v56 )
    {
      sub_AE9DF0(v55, v9, 0xAu);
    }
    else if ( v58 )
    {
      v46 = sub_168B9E0(v53);
      v49 = v54;
      if ( v54 )
        v49 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v54 + 32LL))(v54);
      v52 = v49;
      v50 = sub_1587BC0(v46, &v52, v44, v45, v47, v48);
      sub_AE9DF0((unsigned __int8 **)(*v50 + 32LL * v57 + 8), v9, 0xAu);
    }
    sub_15F7200(v53);
    return 1;
  }
  else
  {
    if ( v7 )
    {
      if ( !(unsigned __int8)sub_B91990(v12, v11, v16, v15, v13, v14) )
        goto LABEL_7;
    }
    else if ( !(unsigned __int8)sub_B92160(v12, v11, v16, v15, v13, v14) )
    {
LABEL_7:
      v17 = a1 + 1;
      v18 = *(_BYTE *)(a1[29] + 1) & 0x10;
      if ( (*(_BYTE *)(v11 + 8) & 0x7F) != 0x18 || (v19 = v11 - 48) == 0 )
      {
        sub_168B9F0((__int64)v53, a1 + 1, v6, v18 == 0 ? 6886 : 3761, 0);
        if ( v56 )
        {
          sub_AE9DF0(v55, v9, 0xAu);
        }
        else if ( v58 )
        {
          v25 = sub_168B9E0(v53);
          v28 = v54;
          if ( v54 )
            v28 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v54 + 32LL))(v54);
          v52 = v28;
          v29 = sub_1587BC0(v25, &v52, v23, v24, v26, v27);
          sub_AE9DF0((unsigned __int8 **)(*v29 + 32LL * v57 + 8), v9, 0xAu);
        }
        goto LABEL_13;
      }
      v20 = -(v18 == 0);
      if ( v7 )
        v21 = (v20 & 0xC31) + 3766;
      else
        v21 = (v20 & 0xC2C) + 3772;
      sub_168B9F0((__int64)v53, a1 + 1, v6, v21, 0);
      if ( v56 )
      {
        sub_AE9DF0(v55, v9, 0xAu);
      }
      else
      {
        if ( !v58 )
        {
LABEL_13:
          sub_15F7200(v53);
          sub_168B9F0((__int64)v53, v17, *(_DWORD *)(v9 + 24), 0x174Eu, 0);
          sub_15F7200(v53);
          return 0;
        }
        v32 = sub_168B9E0(v53);
        v35 = v54;
        if ( v54 )
          v35 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v54 + 32LL))(v54);
        v52 = v35;
        v36 = sub_1587BC0(v32, &v52, v30, v31, v33, v34);
        sub_AE9DF0((unsigned __int8 **)(*v36 + 32LL * v57 + 8), v9, 0xAu);
      }
      if ( v56 )
      {
        sub_AE9DF0(v55, v19, 0xAu);
      }
      else if ( v58 )
      {
        v39 = sub_168B9E0(v53);
        v42 = v54;
        if ( v54 )
          v42 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v54 + 32LL))(v54);
        v52 = v42;
        v43 = sub_1587BC0(v39, &v52, v37, v38, v40, v41);
        sub_AE9DF0((unsigned __int8 **)(*v43 + 32LL * v57 + 8), v19, 0xAu);
      }
      goto LABEL_13;
    }
    return 0;
  }
}
