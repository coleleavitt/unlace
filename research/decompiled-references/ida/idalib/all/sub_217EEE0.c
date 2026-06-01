_BOOL8 __fastcall sub_217EEE0(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  _BOOL8 result; // rax

  v2 = *(_QWORD *)(a2 + 8);
  result = 0;
  if ( (v2 & 2) != 0 )
  {
    result = (v2 & 1) == 0;
    if ( (v2 & 4) != 0 )
      return 1;
  }
  return result;
}
