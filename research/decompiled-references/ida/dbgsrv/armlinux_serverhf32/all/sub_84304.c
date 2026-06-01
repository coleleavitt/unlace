/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_84304
// Address: 0x00084304

//----- (00084304) --------------------------------------------------------
int __fastcall sub_84304(int a1)
{
  _BYTE *v1; // r3
  int v3; // r2
  int result; // r0

  v1 = *(_BYTE **)(a1 + 12);
  v3 = (unsigned __int8)*v1;
  if ( v3 == 95 )
  {
    result = 0;
LABEL_5:
    *(_DWORD *)(a1 + 12) = v1 + 1;
    return result;
  }
  if ( v3 != 110 )
  {
    result = sub_84278((unsigned __int8 **)(a1 + 12)) + 1;
    if ( result >= 0 )
    {
      v1 = *(_BYTE **)(a1 + 12);
      if ( *v1 == 95 )
        goto LABEL_5;
    }
  }
  return -1;
}
