__int64 __fastcall sub_36A490(__int64 a1, __int64 a2)
{
  char v2; // dl
  int v3; // eax
  int v4; // eax
  unsigned int v6; // [rsp+4h] [rbp-24h] BYREF
  unsigned __int64 v7; // [rsp+8h] [rbp-20h]

  v7 = __readfsqword(0x28u);
  netnode_check(&v6, "$ got", 0, 0);
  v2 = netnode_exist(&v6);
  v3 = -1;
  if ( v2 )
  {
    v4 = netnode_altval(v6, 0, 65);
    v3 = node2ea((unsigned int)(v4 - 1));
  }
  *(_DWORD *)(a2 + 8) = v3;
  return 0;
}

