/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_454020
// Address: 0x00454020

//----- (00454020) --------------------------------------------------------
__int16 __cdecl sub_454020(_BYTE **a1, unsigned int a2)
{
  _BYTE *v2; // edx
  unsigned __int8 v3; // al
  unsigned __int8 v4; // al
  __int16 v6; // [esp+0h] [ebp-4h]

  v6 = 0;
  v2 = *a1;
  if ( (unsigned int)*a1 >= a2 || (v3 = *v2, ++v2, v6 = v3 << 8, (unsigned int)v2 >= a2) )
  {
    *a1 = v2;
    return v6;
  }
  else
  {
    v4 = *v2;
    *a1 = v2 + 1;
    return v4 | v6;
  }
}
