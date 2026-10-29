signed __int64 __fastcall sub_C5680(__int64 a1, __int64 a2, const char *a3)
{
  signed __int64 result; // rax

  netnode_check();
  result = netnode_hashval();
  if ( result < 0 )
  {
    qstrncpy();
    return strlen(a3);
  }
  return result;
}

