/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_E95DC
// Address: 0x00000000000E95DC

//----- (00000000000E95DC) ----------------------------------------------------
__int64 __fastcall sub_E95DC(char a1, __int64 a2)
{
  unsigned __int8 v2; // di
  bool v3; // zf

  if ( a1 == -1 )
    return 0;
  v2 = a1 & 0x70;
  if ( v2 == 32 )
    return *(_QWORD *)(a2 + 8);
  if ( v2 > 0x20u )
  {
    if ( v2 == 48 )
      return *(_QWORD *)(a2 + 16);
    v3 = v2 == 80;
    goto LABEL_8;
  }
  if ( v2 )
  {
    v3 = v2 == 16;
LABEL_8:
    if ( !v3 )
      abort();
  }
  return 0;
}
