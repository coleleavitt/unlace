__int64 __fastcall sub_1A03790(__int64 a1, __int64 a2, int a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rax
  __int64 v8; // rdx
  unsigned int v9; // r14d
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // r12
  __int64 v19; // rax
  _QWORD *v20; // rax
  __int64 v21; // [rsp+8h] [rbp-D0h] BYREF
  int v22; // [rsp+10h] [rbp-C8h] BYREF
  int v23; // [rsp+14h] [rbp-C4h] BYREF
  __int64 v24; // [rsp+18h] [rbp-C0h] BYREF
  _QWORD v25[2]; // [rsp+20h] [rbp-B8h] BYREF
  __int64 v26; // [rsp+30h] [rbp-A8h]
  unsigned __int8 *v27; // [rsp+40h] [rbp-98h] BYREF
  char v28; // [rsp+98h] [rbp-40h]
  unsigned int v29; // [rsp+A0h] [rbp-38h]
  char v30; // [rsp+A4h] [rbp-34h]

  v21 = a4;
  v7 = *(_QWORD *)(a4 & 0xFFFFFFFFFFFFFFF0LL);
  v8 = (unsigned int)*(unsigned __int8 *)(v7 + 16) - 57;
  if ( (unsigned int)v8 > 1 && (v7 = sub_19F5590(v7, a2, v8, a4)) == 0
    || (v9 = 0, !sub_F65360(*(_QWORD *)(*(_QWORD *)(v7 + 32) & 0xFFFFFFFFFFFFFFF0LL), a2, v8, a4, a5, a6)) )
  {
    sub_168B9F0((__int64)v25, (__int64 *)(a1 + 8), a2, 0xD17u, 0);
    if ( v28 )
    {
      sub_AE9DF0(&v27, a3, 2u);
    }
    else if ( v30 )
    {
      v18 = sub_168B9E0(v25);
      v19 = v26;
      if ( v26 )
        v19 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v26 + 32LL))(v26);
      v24 = v19;
      v20 = sub_1587BC0(v18, &v24, v14, v15, v16, v17);
      sub_AE9DF0((unsigned __int8 **)(*v20 + 32LL * v29 + 8), a3, 2u);
    }
    v22 = 4;
    v10 = sub_1587D10((__int64)v25, &v22);
    v23 = 3;
    v11 = sub_1587D10(v10, &v23);
    LODWORD(v24) = 0;
    v12 = sub_1587D10(v11, (int *)&v24);
    v9 = *(unsigned __int8 *)(sub_1605D30(v12, &v21) + 120);
    sub_15F7200(v25);
  }
  return v9;
}
