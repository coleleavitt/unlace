__int64 __fastcall sub_588D0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v13; // [rsp+0h] [rbp-28h]
  __int64 v14; // [rsp+0h] [rbp-28h]
  __int64 v15; // [rsp+8h] [rbp-20h]
  __int64 v16; // [rsp+8h] [rbp-20h]
  __int64 v17; // [rsp+10h] [rbp-18h]
  __int64 v18; // [rsp+10h] [rbp-18h]

  get_dword(a2);
  v8 = (unsigned int)getinf_flag(3, 32, v4, v5, v6, v7, v13, v15, v17);
  if ( (*(_BYTE *)(a3 + 4) & 1) == 0 && *(_QWORD *)(a3 + 16) != -1 )
    sel2para();
  getinf_flag(3, 32, v8, v9, v10, v11, v14, v16, v18);
  put_dword();
  return 1;
}
