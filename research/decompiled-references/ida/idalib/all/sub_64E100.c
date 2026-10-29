_BOOL8 __fastcall sub_64E100(__int64 a1)
{
  _BOOL8 result; // rax
  __int64 v2; // rdx

  result = 0;
  if ( a1 )
  {
    v2 = *(_QWORD *)(a1 + 64);
    if ( v2 )
      return (*(_BYTE *)(v2 + 8) & 2) != 0;
  }
  return result;
}
