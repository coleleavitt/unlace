char __fastcall sub_454D00(__int64 a1)
{
  char result; // al
  unsigned __int8 v2; // al
  unsigned __int8 v3; // al

  result = sub_443A40();
  if ( result )
  {
    switch_dbctx(*(int *)(a1 + 8));
    v2 = getinf(45);
    setinf(45, v2 | 0xE0u);
    v3 = getinf(48);
    setinf(48, v3 | 4u);
    return setinf(47, 4);
  }
  return result;
}

