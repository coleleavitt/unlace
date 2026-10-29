void __fastcall sub_1A900A0(__int64 *a1, _BYTE *a2, __int64 a3)
{
  char v3; // cl
  unsigned __int64 v4; // rax
  __int64 v5; // rcx
  unsigned int v7; // eax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // r13
  bool v11; // bl
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rbp
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rax
  _QWORD *v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rbx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rax
  _QWORD *v25; // rax
  __int64 v26; // [rsp+0h] [rbp-C8h] BYREF
  __int64 v27; // [rsp+8h] [rbp-C0h] BYREF
  _BYTE v28[184]; // [rsp+10h] [rbp-B8h] BYREF

  v3 = a2[28] & 0x7F;
  v4 = (v3 + 120) & 0x7F;
  if ( (unsigned __int8)v4 > 0x3Au )
  {
    if ( v3 == 75 )
      return;
LABEL_5:
    v7 = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)a2 + 16LL))(a2);
    sub_168B9F0((__int64)v28, a1, v7, 0xCA8u, 0);
    v27 = *(_QWORD *)(a3 + 24);
    v8 = sub_1587DB0((__int64)v28, &v27);
    v9 = sub_15DD120(v8, a3);
    v10 = v9;
    v11 = (*(_BYTE *)(a3 + 35) & 2) != 0;
    if ( *(_BYTE *)(v9 + 120) )
    {
      sub_AE9DF0((unsigned __int8 **)(v9 + 32), v11, 2u);
    }
    else
    {
      if ( !*(_BYTE *)(v9 + 132) )
      {
LABEL_7:
        sub_15F7200(v28);
        return;
      }
      v14 = sub_168B9E0((_QWORD *)v9);
      v17 = *(_QWORD *)(v10 + 16);
      if ( v17 )
        v17 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v17 + 32LL))(*(_QWORD *)(v10 + 16));
      v26 = v17;
      v18 = sub_1587BC0(v14, &v26, v12, v13, v15, v16);
      sub_AE9DF0((unsigned __int8 **)(*v18 + 32LL * *(unsigned int *)(v10 + 128) + 8), v11, 2u);
    }
    if ( *(_BYTE *)(v10 + 120) )
    {
      sub_AE9DF0((unsigned __int8 **)(v10 + 32), 6, 2u);
    }
    else if ( *(_BYTE *)(v10 + 132) )
    {
      v21 = sub_168B9E0((_QWORD *)v10);
      v24 = *(_QWORD *)(v10 + 16);
      if ( v24 )
        v24 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v24 + 32LL))(*(_QWORD *)(v10 + 16));
      v26 = v24;
      v25 = sub_1587BC0(v21, &v26, v19, v20, v22, v23);
      sub_AE9DF0((unsigned __int8 **)(*v25 + 32LL * *(unsigned int *)(v10 + 128) + 8), 6, 2u);
    }
    goto LABEL_7;
  }
  v5 = 0x7000FFFFC000001LL;
  if ( !_bittest64(&v5, v4) )
    goto LABEL_5;
}
