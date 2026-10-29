/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6511A
// Address: 0x0006511A

//----- (0006511A) --------------------------------------------------------
bool __fastcall sub_6511A(int a1, int a2, int a3)
{
  _BOOL4 result; // r0
  _DWORD *v5; // r5
  _DWORD *v6; // r3
  int v7; // r4
  _DWORD *v8; // r2
  int v9; // r6
  _DWORD *v10; // r7
  int v11; // r3

  result = 1;
  if ( a3 )
  {
    if ( !(*(unsigned __int8 *)(a3 + 4) << 31) )
    {
      v5 = *(_DWORD **)(a1 + 164);
      v6 = (_DWORD *)(a1 + 164);
      result = 0;
      if ( v5 )
      {
        v7 = *(_DWORD *)(a2 + 4);
        v8 = v6;
        do
        {
          v9 = v5[4];
          if ( v9 >= v7 )
            v8 = v5;
          v10 = v5 + 1;
          if ( v9 >= v7 )
            v10 = v5;
          v5 = (_DWORD *)*v10;
        }
        while ( *v10 );
        if ( v8 != v6 && v7 >= v8[4] )
        {
          v11 = v8[6];
          if ( v11 )
            return *(_DWORD *)(v8[5] + 24 * v11 - 8) == *(_DWORD *)(a2 + 8);
        }
      }
    }
  }
  return result;
}
