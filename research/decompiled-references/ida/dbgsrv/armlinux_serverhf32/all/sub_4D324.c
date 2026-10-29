/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4D324
// Address: 0x0004D324

//----- (0004D324) --------------------------------------------------------
int __fastcall sub_4D324(_DWORD *a1, unsigned __int8 **a2)
{
  unsigned int v4; // r6
  int *v5; // r0
  int result; // r0

  v4 = sub_80B04(*a2, *((_DWORD *)*a2 - 3), -955291385);
  v5 = sub_4D2BC(a1, v4 % a1[1], (const void **)a2, v4);
  if ( !v5 )
    return 0;
  result = *v5;
  if ( !result )
    return 0;
  return result;
}
