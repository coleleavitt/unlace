__int64 __fastcall sub_A320(__int64 a1, const char **a2)
{
  int v2; // edx
  __int64 result; // rax

  v2 = strcmp(*a2, "lsadm");
  result = 4294967294LL;
  if ( !v2 )
  {
    *(_BYTE *)(a1 + 70) = 1;
    return 0xFFFFFFFFLL;
  }
  return result;
}

