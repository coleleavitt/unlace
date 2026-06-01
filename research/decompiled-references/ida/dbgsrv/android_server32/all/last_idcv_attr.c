/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: last_idcv_attr
// Address: 0x00046124

//----- (00046124) --------------------------------------------------------
char *__fastcall last_idcv_attr(int a1)
{
  char *result; // r0
  _DWORD *v3; // r1
  _DWORD *v4; // r1
  _DWORD *v5; // r2
  _DWORD *v6; // r2
  _DWORD *v7; // r0
  bool v8; // zf

  result = nullptr;
  if ( a1 )
  {
    if ( *(_BYTE *)a1 == 5 )
    {
      v3 = *(_DWORD **)(a1 + 8);
      v5 = (_DWORD *)*v3;
      v4 = v3 + 1;
      if ( v4 != v5 )
      {
        v6 = (_DWORD *)*v4;
        if ( *v4 )
        {
          do
          {
            v7 = v6;
            v6 = (_DWORD *)v6[1];
          }
          while ( v6 );
        }
        else
        {
          do
          {
            v7 = (_DWORD *)v4[2];
            v8 = *v7 == (_DWORD)v4;
            v4 = v7;
          }
          while ( v8 );
        }
        if ( v7[5] )
          return (char *)v7[4];
        else
          return &byte_B3CBE;
      }
    }
  }
  return result;
}
// B3CBE: using guessed type char byte_B3CBE;
