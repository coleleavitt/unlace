/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_EFB84
// Address: 0x00000000000EFB84

//----- (00000000000EFB84) ----------------------------------------------------
__int64 __fastcall sub_EFB84(unsigned __int8 a1, __int64 a2)
{
  unsigned int v2; // w0
  bool v3; // zf

  if ( a1 == 255 )
    return 0;
  v2 = a1 & 0x70;
  if ( v2 == 32 )
    return *(_QWORD *)(a2 + 8);
  if ( v2 > 0x20 )
  {
    if ( v2 == 48 )
      return *(_QWORD *)(a2 + 16);
    v3 = v2 == 80;
    goto LABEL_8;
  }
  v3 = v2 == 16;
  if ( v2 )
  {
LABEL_8:
    if ( !v3 )
      abort();
  }
  return 0;
}
