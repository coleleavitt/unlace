__int64 __fastcall sub_C42F0(__int64 a1, int a2, __int64 a3, int a4)
{
  int v5; // ebp
  int v6; // edx
  int v7; // eax
  int v9; // [rsp+14h] [rbp-44h]

  netnode_check();
  v5 = a2;
  if ( netnode_hashval() > 0 )
    v5 = v9;
  netnode_check();
  if ( netnode_hashval() <= 0 )
  {
    v6 = a4;
    v7 = a4;
  }
  else
  {
    v6 = v9;
    v7 = v9;
  }
  return v5 & v6 | a4 & a2 & (unsigned int)~v7;
}

