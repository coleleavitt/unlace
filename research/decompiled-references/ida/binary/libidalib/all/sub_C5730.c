__int64 __fastcall sub_C5730(__int64 a1, unsigned int a2, __int64 a3, unsigned int a4)
{
  unsigned int v5; // ebx
  __int64 v6; // rdx
  unsigned int v7; // eax
  unsigned int v9; // [rsp+20h] [rbp-48h]

  netnode_check();
  v5 = a2;
  if ( netnode_hashval() > 0 )
    v5 = v9;
  netnode_check();
  v6 = netnode_hashval();
  v7 = a4;
  if ( v6 > 0 )
    v7 = v9;
  return a4 & a2 ^ v7 & (a4 & a2 ^ v5);
}

