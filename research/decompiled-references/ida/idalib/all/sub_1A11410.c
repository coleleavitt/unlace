void __fastcall sub_1A11410(
        _BYTE *a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        unsigned __int8 a5,
        double a6)
{
  __int64 v8; // rax
  unsigned int v9; // ebp
  unsigned __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rbp
  __int64 *v13; // rbp
  unsigned int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rax
  _QWORD *v22; // rax
  __int64 v23; // [rsp+0h] [rbp-E8h]
  unsigned __int64 v24; // [rsp+8h] [rbp-E0h] BYREF
  unsigned __int8 v25; // [rsp+17h] [rbp-D1h] BYREF
  __int64 v26; // [rsp+18h] [rbp-D0h] BYREF
  _BYTE v27[200]; // [rsp+20h] [rbp-C8h] BYREF

  v8 = *(_QWORD *)a1;
  v24 = a3;
  if ( (*(_BYTE *)(*(_QWORD *)(v8 + 232) + 1LL) & 8) != 0 )
  {
    v9 = (_BYTE)a4 == 0 ? 5593 : 5595;
    if ( a1[11] )
    {
      a1[8] = 1;
      goto LABEL_4;
    }
  }
  else
  {
    v9 = 7049;
  }
  if ( !(unsigned int)sub_F65A30(*(_QWORD *)(a2 + 8), a2, a3, a4) || a5 )
  {
    v10 = sub_EEC8C0(a2, a2, a6);
    if ( !(_DWORD)v10 || !HIDWORD(v10) || a1[9] )
      return;
    goto LABEL_12;
  }
  v9 = 3996;
LABEL_4:
  if ( a1[9] )
    return;
LABEL_12:
  sub_168B9F0((__int64)v27, (__int64 *)(*(_QWORD *)a1 + 8LL), v24, v9, 0);
  v11 = sub_15884C0((__int64)v27, (__int64 *)&v24);
  v12 = v11;
  if ( *(_BYTE *)(v11 + 120) )
  {
    sub_AE9DF0((unsigned __int8 **)(v11 + 32), a5, 2u);
  }
  else if ( *(_BYTE *)(v11 + 132) )
  {
    v18 = sub_168B9E0((_QWORD *)v11);
    v21 = *(_QWORD *)(v12 + 16);
    if ( v21 )
    {
      v23 = v18;
      v21 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v21 + 32LL))(v21);
      v18 = v23;
    }
    v26 = v21;
    v22 = sub_1587BC0(v18, &v26, v18, v19, v20, (__int64)&v26);
    sub_AE9DF0((unsigned __int8 **)(*v22 + 32LL * *(unsigned int *)(v12 + 128) + 8), a5, 2u);
  }
  v26 = *(_QWORD *)(a2 + 8);
  sub_162B6D0(v12, &v26);
  sub_15F7200(v27);
  v13 = (__int64 *)(*(_QWORD *)a1 + 8LL);
  v14 = sub_EEB7E0(a2, (__int64)&v26, a6);
  sub_168B9F0((__int64)v27, v13, v14, 0x1890u, 0);
  v25 = sub_C01160(a2, *(_QWORD *)(*(_QWORD *)a1 + 248LL), 1, v15, v16) & a5;
  v17 = sub_1588420((__int64)v27, &v25);
  v26 = sub_EEC8C0(a2, (__int64)&v25, a6);
  sub_1587DB0(v17, &v26);
  sub_15F7200(v27);
}
