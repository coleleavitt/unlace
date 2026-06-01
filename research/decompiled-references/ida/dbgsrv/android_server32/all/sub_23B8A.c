/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_23B8A
// Address: 0x00023B8A

//----- (00023B8A) --------------------------------------------------------
int __fastcall sub_23B8A(int a1, int a2, int a3)
{
  int result; // r0
  _DWORD *v5; // r4
  _DWORD *v6; // r3
  _DWORD *v7; // r2
  int v8; // r5
  _DWORD *v9; // r6

  result = -1;
  if ( a3 == 1 )
  {
    v5 = *(_DWORD **)(a1 + 916);
    v6 = (_DWORD *)(a1 + 916);
    if ( v5 )
    {
      v7 = v6;
      do
      {
        v8 = v5[4];
        if ( v8 >= a2 )
          v7 = v5;
        v9 = v5 + 1;
        if ( v8 >= a2 )
          v9 = v5;
        v5 = (_DWORD *)*v9;
      }
      while ( *v9 );
      if ( v7 != v6 && v7[4] <= a2 )
      {
        *((_BYTE *)v7 + 36) = 1;
        return 1;
      }
    }
  }
  return result;
}
