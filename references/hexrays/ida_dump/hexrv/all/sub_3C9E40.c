__int64 __fastcall sub_3C9E40(__int64 a1, double a2)
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
  __int64 v13; // rdi
  __int64 v14; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v15; // [rsp+8h] [rbp-20h]
  __int64 v16; // [rsp+10h] [rbp-18h]
  __int64 v17; // [rsp+18h] [rbp-10h]

  v15 = __readfsqword(0x28u);
  *(_BYTE *)(a1 + 2112) = 1;
  v2 = a1 + 672;
  netnode_check(&v14, "$ mbui.view_id", 0, 1);
  v3 = netnode_altval(v14, 0, 65);
  v7 = (unsigned int)dword_4C0944;
  if ( dword_4C0944 < v3 )
    v7 = v3;
  dword_4C0944 = v7;
  do
  {
    if ( !(unsigned __int8)callui(127, v2, v7, v4, v5, v6, v14, v15, v16, v17) )
    {
      if ( !under_debugger )
        sub_37DDE0(0xCE93u, v2, a2);
      BUG();
    }
    v2 += 64;
  }
  while ( v2 != a1 + 2016 );
  callui(129, "View/Open/Hex", "mv:GenMicro", 0, v5, v6, v14, v15, v16, v17);
  callui(129, "Edit/Comments/", "mv:EditBlockCmt", 1, v8, v9, v14, v15, v16, v17);
  callui(129, "Edit/Comments/", "mv:EditCmt", 1, v10, v11, v14, v15, v16, v17);
  if ( dword_4C0948 != -1 )
    return v15 - __readfsqword(0x28u);
  dword_4C0948 = internal_register_place_class(&qword_4C1C60, 3, &PLUGIN, 930);
  v13 = idaplace_t__name(0);
  return register_loc_converter2(v13, "mbui_place_t", sub_3DC7C0);
}
