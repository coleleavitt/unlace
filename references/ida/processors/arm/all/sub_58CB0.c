__int64 __fastcall sub_58CB0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned int dword; // ebx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned __int32 v16; // eax
  unsigned int v17; // ebx
  __int64 v19; // [rsp+0h] [rbp-28h]
  __int64 v20; // [rsp+0h] [rbp-28h]
  __int64 v21; // [rsp+0h] [rbp-28h]
  __int64 v22; // [rsp+8h] [rbp-20h]
  __int64 v23; // [rsp+8h] [rbp-20h]
  __int64 v24; // [rsp+8h] [rbp-20h]
  __int64 v25; // [rsp+10h] [rbp-18h]
  __int64 v26; // [rsp+10h] [rbp-18h]
  __int64 v27; // [rsp+10h] [rbp-18h]

  get_dword(a2);
  getinf_flag(3, 32, v4, v5, v6, v7, v19, v22, v25);
  dword = get_dword(a2);
  v13 = (unsigned int)getinf_flag(3, 32, v9, v10, v11, v12, v20, v23, v26);
  v16 = _byteswap_ulong(dword);
  if ( (_BYTE)v13 )
    dword = v16;
  v17 = (dword >> 17) & 0x30;
  if ( (*(_BYTE *)(a3 + 4) & 1) == 0 && *(_QWORD *)(a3 + 16) != -1 )
    sel2para();
  getinf_flag(3, 32, v13, v17, v14, v15, v21, v24, v27);
  put_dword();
  return 1;
}
