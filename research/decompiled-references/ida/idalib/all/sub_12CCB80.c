bool __fastcall sub_12CCB80(int a1)
{
  bool result; // al

  result = a1 == 60 || a1 == 67;
  if ( !result )
    return a1 == 46 || a1 == 58;
  return result;
}
