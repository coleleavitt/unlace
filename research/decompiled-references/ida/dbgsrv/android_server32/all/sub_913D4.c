/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_913D4
// Address: 0x000913D4

//----- (000913D4) --------------------------------------------------------
int __fastcall sub_913D4(int *a1, int a2, _DWORD *a3, int a4)
{
  int v5; // r0
  int v8; // r5
  int result; // r0
  unsigned int v10; // r5
  _DWORD *v11; // r4

  v5 = *(_DWORD *)(a2 + 8);
  if ( a1 == (int *)v5 )
    return sub_91348(v5, a2, (int)a3, a4);
  v8 = a1[3];
  result = sub_9139C(a1 + 4, a2, a3);
  if ( v8 >= 2 )
  {
    v10 = (unsigned int)&a1[2 * v8 + 4];
    v11 = a1 + 6;
    do
    {
      sub_9139C(v11, a2, a3);
      result = *(unsigned __int8 *)(a2 + 54);
      if ( *(_BYTE *)(a2 + 54) )
        break;
      v11 += 2;
    }
    while ( (unsigned int)v11 < v10 );
  }
  return result;
}
