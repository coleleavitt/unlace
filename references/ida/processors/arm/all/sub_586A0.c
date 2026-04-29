__int64 __fastcall sub_586A0(__int64 a1, __int64 a2)
{
  unsigned int dword; // ebx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  char v7; // dl
  unsigned __int32 v8; // eax
  unsigned int v9; // ebp
  unsigned int v10; // ebx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  char v15; // dl
  unsigned __int32 v16; // eax
  __int64 v18; // [rsp+0h] [rbp-18h]
  __int64 v19; // [rsp+0h] [rbp-18h]
  __int64 v20; // [rsp+8h] [rbp-10h]
  __int64 v21; // [rsp+8h] [rbp-10h]
  __int64 v22; // [rsp+10h] [rbp-8h]
  __int64 v23; // [rsp+10h] [rbp-8h]

  dword = get_dword(a2);
  v7 = getinf_flag(3, 32, v3, v4, v5, v6, v18, v20, v22);
  v8 = _byteswap_ulong(dword);
  if ( v7 )
    dword = v8;
  v9 = get_dword(a2);
  v10 = dword >> 5;
  v15 = getinf_flag(3, 32, v11, v12, v13, v14, v19, v21, v23);
  v16 = _byteswap_ulong(v9);
  if ( v15 )
    v9 = v16;
  return (unsigned __int16)v10 << ((v9 >> 17) & 0x30);
}
