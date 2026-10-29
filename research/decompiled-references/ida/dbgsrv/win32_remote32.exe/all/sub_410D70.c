/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_410D70
// Address: 0x00410D70

//----- (00410D70) --------------------------------------------------------
int __thiscall sub_410D70(int *this, unsigned int a2)
{
  int result; // eax
  int v4; // [esp+4h] [ebp-Ch] BYREF
  int v5; // [esp+Ch] [ebp-4h]

  sub_408C10(this, &v4, &a2);
  if ( *(_BYTE *)(v5 + 13) || a2 < *(_DWORD *)(v5 + 16) )
    return 0;
  result = v5 + 20;
  if ( v5 == *this )
    return 0;
  return result;
}
