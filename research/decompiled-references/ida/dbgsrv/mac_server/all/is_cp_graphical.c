/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: is_cp_graphical
// Address: 0x00000001000716B0

//----- (00000001000716B0) ----------------------------------------------------
bool __fastcall is_cp_graphical(unsigned int a1)
{
  unsigned __int16 v1; // ax
  unsigned __int8 v2; // eax^2
  bool result; // al
  int v4; // edx

  LOBYTE(v1) = sub_100071580(a1);
  if ( v2 < 2u || (a1 & 0xFFFFFFFE) == 8232 )
    return 0;
  v4 = v1;
  result = 0;
  if ( v4 != 270 && v4 != 290 )
  {
    result = 0;
    if ( a1 - 8206 >= 2 && a1 != 1564 )
      return a1 - 8239 < 0xFFFFFFFB && v2 != 5;
  }
  return result;
}
// 1000716C2: variable 'v2' is possibly undefined
// 1000716E3: variable 'v1' is possibly undefined
