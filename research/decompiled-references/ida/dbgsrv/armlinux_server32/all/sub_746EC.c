/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_746EC
// Address: 0x000746EC

//----- (000746EC) --------------------------------------------------------
char *__fastcall sub_746EC(_BYTE *a1)
{
  const char *v1; // r0
  char *v2; // r0

  if ( !a1 )
    return nullptr;
  v1 = sub_76C6C(a1);
  v2 = strrchr(v1, 46);
  if ( v2 )
    return v2 + 1;
  else
    return nullptr;
}
