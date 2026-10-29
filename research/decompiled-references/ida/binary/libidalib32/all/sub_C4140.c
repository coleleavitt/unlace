__int64 __fastcall sub_C4140(__int64 a1, unsigned int a2)
{
  __int64 v2; // rdx
  __int64 result; // rax
  unsigned int v4; // [rsp+4h] [rbp-24h]

  netnode_check();
  v2 = netnode_hashval();
  result = a2;
  if ( v2 > 0 )
    return v4;
  return result;
}

