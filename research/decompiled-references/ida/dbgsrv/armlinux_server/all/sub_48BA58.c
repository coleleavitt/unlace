/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_48BA58
// Address: 0x000000000048BA58

//----- (000000000048BA58) ----------------------------------------------------
char *__fastcall sub_48BA58(_BYTE *a1)
{
  const char *v1; // x0
  char *v2; // x0

  if ( !a1 )
    return nullptr;
  v1 = sub_48F420(a1);
  v2 = strrchr(v1, 46);
  if ( v2 )
    return v2 + 1;
  else
    return nullptr;
}
