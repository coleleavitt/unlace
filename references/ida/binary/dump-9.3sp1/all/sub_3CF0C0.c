__int64 __fastcall sub_3CF0C0(__int64 a1, double a2)
{
  __int64 v2; // rbx
  unsigned int v3; // eax
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v13; // [rsp+0h] [rbp-28h]
  __int64 v14; // [rsp+0h] [rbp-28h]
  __int64 v15; // [rsp+0h] [rbp-28h]
  unsigned __int64 v16; // [rsp+8h] [rbp-20h]
  __int64 v17; // [rsp+8h] [rbp-20h]
  __int64 v18; // [rsp+8h] [rbp-20h]
  __int64 v19; // [rsp+8h] [rbp-20h]
  __int64 v20; // [rsp+10h] [rbp-18h]
  __int64 v21; // [rsp+10h] [rbp-18h]
  __int64 v22; // [rsp+10h] [rbp-18h]
  __int64 v23; // [rsp+18h] [rbp-10h]
  __int64 v24; // [rsp+18h] [rbp-10h]
  __int64 v25; // [rsp+18h] [rbp-10h]

  v16 = __readfsqword(0x28u);
  *(_BYTE *)(a1 + 2112) = 1;
  v2 = a1 + 672;
  netnode_check();
  v3 = netnode_altval();
  v7 = (unsigned int)dword_4EEA04;
  if ( dword_4EEA04 < v3 )
    v7 = v3;
  dword_4EEA04 = v7;
  do
  {
    if ( !(unsigned __int8)callui(127, v2, v7, v4, v5, v6, v13, v16, v20, v23) )
    {
      if ( !under_debugger )
        sub_383060(0xCE93u, a2);
      BUG();
    }
    v2 += 64;
  }
  while ( v2 != a1 + 2016 );
  callui(129, "View/Open/Hex", "mv:GenMicro", 0, v5, v6, v13, v16, v20, v23);
  callui(129, "Edit/Comments/", "mv:EditBlockCmt", 1, v8, v9, v14, v17, v21, v24);
  callui(129, "Edit/Comments/", "mv:EditCmt", 1, v10, v11, v15, v18, v22, v25);
  if ( dword_4EEA08 != -1 )
    return v19 - __readfsqword(0x28u);
  dword_4EEA08 = internal_register_place_class();
  idaplace_t__name();
  return register_loc_converter2();
}
