__int64 __fastcall sub_3C53E0(__int64 a1)
{
  __int64 v1; // rbx
  unsigned int v2; // eax
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v12; // [rsp+0h] [rbp-28h]
  __int64 v13; // [rsp+0h] [rbp-28h]
  __int64 v14; // [rsp+0h] [rbp-28h]
  unsigned __int64 v15; // [rsp+8h] [rbp-20h]
  __int64 v16; // [rsp+8h] [rbp-20h]
  __int64 v17; // [rsp+8h] [rbp-20h]
  __int64 v18; // [rsp+8h] [rbp-20h]
  __int64 v19; // [rsp+10h] [rbp-18h]
  __int64 v20; // [rsp+10h] [rbp-18h]
  __int64 v21; // [rsp+10h] [rbp-18h]
  __int64 v22; // [rsp+18h] [rbp-10h]
  __int64 v23; // [rsp+18h] [rbp-10h]
  __int64 v24; // [rsp+18h] [rbp-10h]

  v15 = __readfsqword(0x28u);
  *(_BYTE *)(a1 + 896) = 1;
  v1 = a1 + 224;
  netnode_check();
  v2 = netnode_altval();
  v6 = (unsigned int)dword_4ED70C;
  if ( dword_4ED70C < v2 )
    v6 = v2;
  dword_4ED70C = v6;
  do
  {
    if ( !(unsigned __int8)callui(127, v1, v6, v3, v4, v5, v12, v15, v19, v22) )
    {
      if ( !under_debugger )
        sub_37EA20(52883);
      BUG();
    }
    v1 += 64;
  }
  while ( v1 != a1 + 800 );
  callui(129, "View/Open/Hex", "mv:GenMicro", 0, v4, v5, v12, v15, v19, v22);
  callui(129, "Edit/Comments/", "mv:EditBlockCmt", 1, v7, v8, v13, v16, v20, v23);
  callui(129, "Edit/Comments/", "mv:EditCmt", 1, v9, v10, v14, v17, v21, v24);
  if ( dword_4ED710 != -1 )
    return v18 - __readfsqword(0x28u);
  dword_4ED710 = internal_register_place_class();
  idaplace_t__name();
  return register_loc_converter2();
}
