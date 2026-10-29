char __fastcall sub_154F1E0(__int64 a1, __int64 a2)
{
  __int16 v2; // r12
  char result; // al

  v2 = *(_WORD *)(a1 + 32);
  result = sub_146F400(a1, a2);
  if ( !result )
    result = sub_146E570(a1, 25, 25, a2, 0, 1);
  if ( v2 == 150 )
  {
    while ( *(_WORD *)(a1 + 32) == 128 )
    {
      sub_146E570(a1, 24, 24, a2, 0, 1);
      result = sub_146E570(a1, 25, 25, a2, 0, 1);
    }
  }
  return result;
}
