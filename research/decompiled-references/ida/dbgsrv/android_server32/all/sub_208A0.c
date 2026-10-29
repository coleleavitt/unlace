/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_208A0
// Address: 0x000208A0

//----- (000208A0) --------------------------------------------------------
int __fastcall sub_208A0(_DWORD *a1)
{
  int v2; // r2
  int result; // r0
  _DWORD *v4; // r3
  _DWORD *v5; // r4
  _DWORD *v6; // r4
  bool v7; // zf
  int v8; // r5

  v2 = a1[19];
  result = 1;
  if ( !v2 )
  {
    v4 = (_DWORD *)a1[228];
    while ( v4 != a1 + 229 )
    {
      if ( *((_BYTE *)v4 + 45) && !v4[7] && !v4[6] )
        return result;
      v5 = (_DWORD *)v4[1];
      if ( v5 )
      {
        do
        {
          v4 = v5;
          v5 = (_DWORD *)*v5;
        }
        while ( v5 );
      }
      else
      {
        v6 = v4 + 2;
        v7 = *(_DWORD *)v4[2] == (_DWORD)v4;
        v4 = (_DWORD *)v4[2];
        if ( !v7 )
        {
          do
          {
            v8 = *v6;
            v6 = (_DWORD *)(*v6 + 8);
            v4 = *(_DWORD **)(v8 + 8);
          }
          while ( *v4 != v8 );
        }
      }
    }
    return 0;
  }
  return result;
}
