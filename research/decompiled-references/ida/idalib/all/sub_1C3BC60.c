void __fastcall sub_1C3BC60(_QWORD *a1, unsigned int a2, char a3)
{
  _BYTE *v3; // rax
  int v4; // ecx
  int v6; // eax
  char *v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rbp
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rax
  _QWORD *v15; // rax
  __int64 v16; // [rsp+0h] [rbp-C0h] BYREF
  _QWORD v17[2]; // [rsp+8h] [rbp-B8h] BYREF
  __int64 v18; // [rsp+18h] [rbp-A8h]
  unsigned __int8 *v19; // [rsp+28h] [rbp-98h] BYREF
  char v20; // [rsp+80h] [rbp-40h]
  unsigned int v21; // [rsp+88h] [rbp-38h]
  char v22; // [rsp+8Ch] [rbp-34h]

  v3 = (_BYTE *)a1[29];
  if ( (v3[68] & 8) == 0
    || (v4 = *(_DWORD *)(*(_QWORD *)(a1[31] + 17448LL) + 248LL), (unsigned int)(v4 - 41) > 1) && v4 != 26 )
  {
    if ( (v3[60] & 0x10) == 0
      && (v3[13] & 0x20) == 0
      && (!a2 || (v6 = sub_1021680(a1[34], a2)) == 0 || v6 == 3)
      && !(unsigned __int8)sub_B8E180(a1[68]) )
    {
      sub_1606D30((__int64)v17, a1, a2, 3740, 0);
      v7 = "throw";
      if ( a3 )
        v7 = "try";
      v8 = (__int64)v7;
      if ( v20 )
      {
        sub_AE9DF0(&v19, (__int64)v7, 1u);
      }
      else if ( v22 )
      {
        v11 = sub_168B9E0(v17);
        v14 = v18;
        if ( v18 )
          v14 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v18 + 32LL))(v18);
        v16 = v14;
        v15 = sub_1587BC0(v11, &v16, v9, v10, v12, v13);
        sub_AE9DF0((unsigned __int8 **)(*v15 + 32LL * v21 + 8), v8, 1u);
      }
      sub_15F7200(v17);
    }
  }
}
