char __fastcall sub_AC030(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, char a5, unsigned int a6)
{
  char result; // al
  __int64 v11; // rdx

  if ( (a5 & 1) == 0 )
    return (a5 & 2) != 0 && sub_A5B90(a1, a2, a3, a4, a6) != 0;
  v11 = sub_A58A0(a1, a2, a3, a4, a6);
  result = 1;
  if ( !v11 )
    return (a5 & 2) != 0 && sub_A5B90(a1, a2, a3, a4, a6) != 0;
  return result;
}
