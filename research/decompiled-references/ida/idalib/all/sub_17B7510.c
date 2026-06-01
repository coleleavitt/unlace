void __fastcall sub_17B7510(__int64 a1, __int64 a2)
{
  int v3; // r12d
  __int64 v4; // rax
  int v5; // esi
  __int64 *v6; // r13
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // r14
  __int64 v13; // rax
  _QWORD *v14; // rax
  __int64 v15; // [rsp+8h] [rbp-C0h] BYREF
  _QWORD v16[2]; // [rsp+10h] [rbp-B8h] BYREF
  __int64 v17; // [rsp+20h] [rbp-A8h]
  unsigned __int8 *v18; // [rsp+30h] [rbp-98h] BYREF
  char v19; // [rsp+88h] [rbp-40h]
  unsigned int v20; // [rsp+90h] [rbp-38h]
  char v21; // [rsp+94h] [rbp-34h]

  if ( !(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 48LL))(a2) && (*(_BYTE *)(a2 + 29) & 2) == 0 )
  {
    v3 = sub_B845D0(a2);
    if ( v3 )
    {
      v4 = *(_QWORD *)(a1 + 248);
      v5 = *(_DWORD *)(a2 + 24);
      v6 = *(__int64 **)(v4 + 2312);
      if ( v5 )
      {
        v7 = sub_1021680(*(_QWORD *)(v4 + 2312), v5);
        if ( v7 && v7 != 3 )
          return;
        v5 = *(_DWORD *)(a2 + 24);
      }
      if ( !(unsigned __int8)sub_16C5190(v6, v5) )
      {
        sub_168B9F0((__int64)v16, (__int64 *)(a1 + 8), *(_DWORD *)(a2 + 24), 0x1CA4u, 0);
        if ( v19 )
        {
          sub_AE9DF0(&v18, a2, 0xAu);
        }
        else if ( v21 )
        {
          v12 = sub_168B9E0(v16);
          v13 = v17;
          if ( v17 )
            v13 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v17 + 32LL))(v17);
          v15 = v13;
          v14 = sub_1587BC0(v12, &v15, v8, v9, v10, v11);
          sub_AE9DF0((unsigned __int8 **)(*v14 + 32LL * v20 + 8), a2, 0xAu);
        }
        LODWORD(v15) = v3;
        sub_1587D10((__int64)v16, (int *)&v15);
        sub_15F7200(v16);
      }
    }
  }
}
