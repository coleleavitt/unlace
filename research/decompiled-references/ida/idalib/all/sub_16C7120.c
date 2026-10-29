void __fastcall sub_16C7120(__int64 *a1, int a2, __int64 a3, unsigned int a4)
{
  __int64 v4; // r14
  int v7; // r15d
  int v8; // eax
  bool v9; // [rsp+1h] [rbp-C9h] BYREF
  bool v10[200]; // [rsp+2h] [rbp-C8h] BYREF

  if ( !a1[1410] && (*(_WORD *)a3 & 0x1FF) == 0xEE )
  {
    v4 = a1[34];
    if ( (*(_WORD *)a3 & 0x200) == 0 )
    {
      v7 = sub_1022B40((__int64 *)a1[34], a2, &v9);
      if ( !v9 )
      {
        v8 = sub_10228C0(v4, *(_DWORD *)(a3 + 4), v10);
        if ( !v10[0] && v7 == v8 )
        {
          sub_168B9F0((__int64)v10, a1 + 1, *(_DWORD *)(a3 + 4), a4, 0);
          sub_15F7200(v10);
          sub_168B9F0((__int64)v10, a1 + 1, *(_DWORD *)(a3 + 4), 0x1722u, 0);
          sub_15F7200(v10);
        }
      }
    }
  }
}
