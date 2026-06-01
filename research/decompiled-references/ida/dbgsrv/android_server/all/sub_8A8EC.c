/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8A8EC
// Address: 0x000000000008A8EC

//----- (000000000008A8EC) ----------------------------------------------------
__int64 __fastcall sub_8A8EC(__int64 a1, char a2)
{
  unsigned __int64 v2; // x20
  const char *v3; // x19
  __int64 v4; // x21
  __int64 v5; // x22
  int i; // w23
  const char *v7; // x0

  v2 = *(_QWORD *)(a1 + 240);
  if ( (a2 & 1) != 0 )
    v3 = ".debug_info";
  else
    v3 = ".debug_types";
  if ( !v2 )
    return 0;
  v4 = *(_QWORD *)(a1 + 232);
  v5 = 0;
  for ( i = 1; ; ++i )
  {
    v7 = *(_QWORD *)(v4 + 72 * v5 + 32) ? *(const char **)(v4 + 72 * v5 + 24) : &byte_F154B;
    if ( !strcmp(v7, v3) )
      break;
    v5 = i;
    if ( v2 <= i )
      return 0;
  }
  return v4 + 72 * v5;
}
// F154B: using guessed type char byte_F154B;
