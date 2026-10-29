__int64 __fastcall sub_7265B0(_QWORD *a1, _QWORD *a2, __int64 *a3, __int64 a4)
{
  __int64 v5; // rsi
  __int64 v6; // rax
  __int64 v7; // rsi
  int v8; // r8d
  int v9; // r9d
  __int64 (__fastcall *v10)(__int64, _QWORD *, __int64, __int64, __int64 *); // rax
  unsigned int *v11; // rax
  __int64 v12; // rax
  __int64 v13; // rsi
  __int64 v14; // rbp
  bool v15; // zf
  void *v16; // rbx
  __int64 v17; // rsi
  __int64 v18; // rdi
  __int64 v21; // [rsp+8h] [rbp-80h]
  char v22; // [rsp+14h] [rbp-74h] BYREF
  char v23[8]; // [rsp+18h] [rbp-70h] BYREF
  __int64 v24; // [rsp+20h] [rbp-68h] BYREF
  __int64 v25; // [rsp+28h] [rbp-60h]
  _QWORD v26[2]; // [rsp+30h] [rbp-58h] BYREF
  _QWORD v27[9]; // [rsp+40h] [rbp-48h] BYREF

  v5 = *a3;
  v26[0] = 0;
  sub_1360C00(v23, v5, v26);
  sub_18572D0(v26);
  v6 = a1[1];
  v24 = 0;
  v26[0] = 0;
  v25 = v6;
  v26[1] = 0;
  v27[0] = 1;
  v27[1] = 0;
  sub_182CBA0(qword_1C7F2C0, v27);
  v7 = *a2;
  BYTE4(v27[0]) &= ~1u;
  LODWORD(v27[0]) = 1;
  sub_1361190(v23, v7, &v24);
  sub_1673B50((_DWORD)a1 + 168, v24, (unsigned int)v26, (unsigned int)&v22, v8, v9);
  v10 = *(__int64 (__fastcall **)(__int64, _QWORD *, __int64, __int64, __int64 *))(*a1 + 32LL);
  if ( v10 == sub_7262B0 )
  {
    v21 = a1[1];
    v11 = *(unsigned int **)(*(_QWORD *)(sub_15D1F10(*a2) + 24) + 8LL);
    if ( *((_BYTE *)v11 + 8) )
      sub_DBF6E(0);
    v12 = sub_1674520(a1 + 21, v26, *v11);
    v13 = *a2;
    v14 = v12;
    if ( v12 )
    {
      ++*(_DWORD *)(v12 + 8);
      sub_14EC390(a1 + 4, v13, v12, a4);
      v15 = (*(_DWORD *)(v14 + 8))-- == 1;
      if ( v15 )
        sub_15D7BC0(v21, v14);
    }
    else
    {
      sub_14EC390(a1 + 4, v13, 0, a4);
    }
  }
  else
  {
    v10((__int64)a1, a2, (__int64)v26, a4, nullptr);
  }
  v16 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v26);
  sub_182CBA0(v16, v27);
  v17 = v24;
  if ( v24 )
  {
    v18 = v25;
    v15 = (*(_DWORD *)(v24 + 8))-- == 1;
    if ( v15 )
      sub_15D7BC0(v18, v17);
  }
  sub_13606C0(v23);
  return 1;
}

