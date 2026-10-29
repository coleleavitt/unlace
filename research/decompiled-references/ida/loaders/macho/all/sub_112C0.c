__int64 __fastcall sub_112C0(__int64 a1, __int64 a2)
{
  int v2; // edx
  __int64 result; // rax

  v2 = strcmp((const char *)(a2 + 8), "__KLD");
  result = 0;
  if ( !v2 )
  {
    *(_BYTE *)(a1 + 8) = 1;
    return 1;
  }
  return result;
}

