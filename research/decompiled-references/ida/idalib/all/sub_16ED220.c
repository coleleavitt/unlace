__int64 __fastcall sub_16ED220(__int64 a1, unsigned __int64 a2, double a3)
{
  unsigned int v3; // r12d
  __int64 v4; // r13
  int v5; // eax
  unsigned int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rbp
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rax
  _QWORD *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rbp
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rax
  _QWORD *v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rbp
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rax
  _QWORD *v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rbp
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rax
  _QWORD *v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rbp
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // rax
  _QWORD *v42; // rax
  __int64 v43; // [rsp+8h] [rbp-C0h] BYREF
  _QWORD v44[2]; // [rsp+10h] [rbp-B8h] BYREF
  __int64 v45; // [rsp+20h] [rbp-A8h]
  unsigned __int8 *v46[11]; // [rsp+30h] [rbp-98h] BYREF
  unsigned __int8 v47; // [rsp+88h] [rbp-40h]
  unsigned int v48; // [rsp+90h] [rbp-38h]
  unsigned __int8 v49; // [rsp+94h] [rbp-34h]

  v3 = sub_16EC930(a1, a2, 1u, a3);
  if ( !(_BYTE)v3 )
  {
    v4 = *(_QWORD *)((*(_QWORD *)(a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 32) & 0xFFFFFFFFFFFFFFFELL) + 8);
    v5 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                        & 0xFFFFFFFFFFFFFFF0LL)
                            + 16LL);
    if ( (_BYTE)v5 == 13 || (unsigned int)(v5 - 57) <= 1 )
    {
      *(_QWORD *)(a2 + 8) = v4;
      return v3;
    }
    v7 = sub_EEB7E0(*(_QWORD *)(a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 32), a2, a3);
    sub_168B9F0((__int64)v44, (__int64 *)(a1 + 8), v7, 0xD17u, 0);
    if ( v47 )
    {
      sub_16B71B0(v46, 1);
    }
    else
    {
      if ( !v49 )
      {
LABEL_8:
        sub_15F7200(v44);
        return v3;
      }
      v10 = sub_168B9E0(v44);
      v13 = v45;
      if ( v45 )
        v13 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v45 + 32LL))(v45);
      v43 = v13;
      v14 = sub_1587BC0(v10, &v43, v8, v9, v11, v12);
      sub_16B71B0((unsigned __int8 **)(*v14 + 32LL * v48 + 8), 1);
    }
    if ( v47 )
    {
      sub_16B71B0(v46, 2);
    }
    else
    {
      if ( !v49 )
        goto LABEL_8;
      v38 = sub_168B9E0(v44);
      v41 = v45;
      if ( v45 )
        v41 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v45 + 32LL))(v45);
      v43 = v41;
      v42 = sub_1587BC0(v38, &v43, v36, v37, v39, v40);
      sub_16B71B0((unsigned __int8 **)(*v42 + 32LL * v48 + 8), 2);
    }
    if ( v47 )
    {
      sub_16B71B0(v46, 1);
    }
    else
    {
      if ( !v49 )
        goto LABEL_8;
      v31 = sub_168B9E0(v44);
      v34 = v45;
      if ( v45 )
        v34 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v45 + 32LL))(v45);
      v43 = v34;
      v35 = sub_1587BC0(v31, &v43, v29, v30, v32, v33);
      sub_16B71B0((unsigned __int8 **)(*v35 + 32LL * v48 + 8), 1);
    }
    if ( v47 )
    {
      sub_16B71B0(v46, 1);
    }
    else
    {
      if ( !v49 )
        goto LABEL_8;
      v24 = sub_168B9E0(v44);
      v27 = v45;
      if ( v45 )
        v27 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v45 + 32LL))(v45);
      v43 = v27;
      v28 = sub_1587BC0(v24, &v43, v22, v23, v25, v26);
      sub_16B71B0((unsigned __int8 **)(*v28 + 32LL * v48 + 8), 1);
    }
    if ( v47 )
    {
      sub_AE9DF0(v46, v4, 8u);
      v3 = v47;
    }
    else
    {
      v3 = v49;
      if ( v49 )
      {
        v17 = sub_168B9E0(v44);
        v20 = v45;
        if ( v45 )
          v20 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v45 + 32LL))(v45);
        v43 = v20;
        v21 = sub_1587BC0(v17, &v43, v15, v16, v18, v19);
        sub_AE9DF0((unsigned __int8 **)(*v21 + 32LL * v48 + 8), v4, 8u);
        v3 = v47;
      }
    }
    goto LABEL_8;
  }
  return v3;
}
