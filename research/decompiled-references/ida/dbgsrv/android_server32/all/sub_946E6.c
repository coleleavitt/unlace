/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_946E6
// Address: 0x000946E6

//----- (000946E6) --------------------------------------------------------
int __fastcall sub_946E6(int a1, int *a2)
{
  _BYTE *v2; // r3
  _BYTE *v3; // r12
  int v5; // lr
  int v6; // r2
  int v7; // lr

  *a2 = 0;
  v3 = *(_BYTE **)(a1 + 4);
  v2 = *(_BYTE **)a1;
  if ( v3 == *(_BYTE **)a1 || (unsigned __int8)(*v2 - 48) > 9u )
    return 1;
  v5 = 0;
  while ( v3 != v2 && (unsigned __int8)(*v2 - 48) <= 9u )
  {
    v6 = 10 * v5;
    *a2 = 10 * v5;
    if ( v2 == v3 )
    {
      v7 = 0;
      v2 = v3;
    }
    else
    {
      *(_DWORD *)a1 = v2 + 1;
      v7 = (unsigned __int8)*v2++;
    }
    v5 = v6 + v7 - 48;
    *a2 = v5;
  }
  return 0;
}
