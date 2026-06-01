__int64 __fastcall sub_1A336C0(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, __int64 a4)
{
  unsigned __int64 v5; // r14
  unsigned int v6; // ebp
  __int64 v7; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rax
  _QWORD *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rbx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rax
  _QWORD *v22; // rax
  __int64 v23; // rdi
  bool v24; // bl
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rax
  _QWORD *v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rax
  _QWORD *v36; // rax
  __int64 v37; // [rsp+8h] [rbp-120h]
  __int64 v38; // [rsp+8h] [rbp-120h]
  __int64 v39; // [rsp+18h] [rbp-110h] BYREF
  unsigned __int64 v40; // [rsp+20h] [rbp-108h] BYREF
  char v41; // [rsp+28h] [rbp-100h]
  __int64 v42; // [rsp+2Ch] [rbp-FCh]
  char v43; // [rsp+34h] [rbp-F4h]
  void *v44; // [rsp+38h] [rbp-F0h]
  __int64 v45; // [rsp+40h] [rbp-E8h]
  _BYTE v46[24]; // [rsp+48h] [rbp-E0h] BYREF
  _QWORD v47[2]; // [rsp+60h] [rbp-C8h] BYREF
  __int64 v48; // [rsp+70h] [rbp-B8h]
  unsigned __int8 *v49[11]; // [rsp+80h] [rbp-A8h] BYREF
  char v50; // [rsp+D8h] [rbp-50h]
  unsigned int v51; // [rsp+E0h] [rbp-48h]
  char v52; // [rsp+E4h] [rbp-44h]

  v5 = HIDWORD(a3);
  v6 = a3;
  if ( sub_1A30050(a1, (__int64 *)a4)
    || (*(_BYTE *)(a4 + 24) & 3) == 3
    || (unsigned __int8)sub_15EEA20(a4) && sub_B72A20(*(_QWORD *)a4, *(_QWORD *)(a1 + 232)) )
  {
    return 0;
  }
  sub_168B9F0((__int64)v47, (__int64 *)(a1 + 8), *(_DWORD *)(a4 + 8), 0x1D67u, 0);
  if ( (*(_BYTE *)(a4 + 24) & 8) == 0 )
  {
    v7 = *(_QWORD *)a4;
    if ( v50 )
    {
      sub_AE9DF0(v49, *(_QWORD *)a4, 0xAu);
    }
    else
    {
      if ( !v52 )
        goto LABEL_8;
      v31 = sub_168B9E0(v47);
      v35 = v48;
      if ( v48 )
      {
        v38 = v31;
        v35 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v48 + 32LL))(v48);
        v31 = v38;
      }
      v40 = v35;
      v36 = sub_1587BC0(v31, (__int64 *)&v40, v31, v32, v33, v34);
      sub_AE9DF0((unsigned __int8 **)(*v36 + 32LL * v51 + 8), v7, 0xAu);
    }
LABEL_26:
    v24 = (*(_BYTE *)(a4 + 24) & 0x20) != 0;
    if ( v50 )
    {
      sub_AE9DF0(v49, v24, 2u);
    }
    else if ( v52 )
    {
      v25 = sub_168B9E0(v47);
      v29 = v48;
      if ( v48 )
      {
        v37 = v25;
        v29 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v48 + 32LL))(v48);
        v25 = v37;
      }
      v40 = v29;
      v30 = sub_1587BC0(v25, (__int64 *)&v40, v25, v26, v27, v28);
      sub_AE9DF0((unsigned __int8 **)(*v30 + 32LL * v51 + 8), v24, 2u);
    }
    goto LABEL_8;
  }
  if ( v50 )
  {
    sub_AE9DF0(v49, (__int64)"'this'", 1u);
    goto LABEL_26;
  }
  if ( v52 )
  {
    v11 = sub_168B9E0(v47);
    v14 = v48;
    if ( v48 )
      v14 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v48 + 32LL))(v48);
    v40 = v14;
    v15 = sub_1587BC0(v11, (__int64 *)&v40, v9, v10, v12, v13);
    sub_AE9DF0((unsigned __int8 **)(*v15 + 32LL * v51 + 8), (__int64)"'this'", 1u);
    goto LABEL_26;
  }
LABEL_8:
  if ( v6 && v5 )
  {
    v43 = 0;
    v46[0] = 0;
    v42 = 0;
    v44 = v46;
    v45 = 0;
    v46[16] = 0;
    v40 = __PAIR64__(v5, v6);
    v41 = 1;
    sub_1589170((__int64)v47, &v40);
    if ( v44 != v46 )
      operator delete(v44);
  }
  else if ( v50 )
  {
    v40 = a2;
    v41 = 1;
    sub_AEC610((__int64 *)v49, (__int64 *)&v40);
  }
  else if ( v52 )
  {
    v18 = sub_168B9E0(v47);
    v21 = v48;
    if ( v48 )
      v21 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v48 + 32LL))(v48);
    v39 = v21;
    v22 = sub_1587BC0(v18, &v39, v16, v17, v19, v20);
    v23 = *v22 + 32LL * v51;
    v40 = a2;
    v41 = 1;
    sub_AEC610((__int64 *)(v23 + 8), (__int64 *)&v40);
  }
  sub_15F7200(v47);
  return 1;
}
