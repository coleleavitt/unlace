/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_74580
// Address: 0x00074580

//----- (00074580) --------------------------------------------------------
char *__fastcall sub_74580(_BYTE *a1)
{
  const char *v1; // r0
  char *v2; // r0

  if ( !a1 )
    return nullptr;
  v1 = sub_76B04(a1);
  v2 = strrchr(v1, 46);
  if ( v2 )
    return v2 + 1;
  else
    return nullptr;
}
