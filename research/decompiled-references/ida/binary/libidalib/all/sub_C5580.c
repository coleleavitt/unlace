__int64 __fastcall sub_C5580(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 result; // rax
  __int64 v4; // [rsp+10h] [rbp-28h]

  netnode_check();
  v2 = netnode_hashval();
  result = a2;
  if ( v2 > 0 )
    return v4;
  return result;
}

