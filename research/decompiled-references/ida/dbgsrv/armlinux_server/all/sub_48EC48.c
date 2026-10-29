/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_48EC48
// Address: 0x000000000048EC48

//----- (000000000048EC48) ----------------------------------------------------
__int64 __fastcall sub_48EC48(_BYTE *a1, _BYTE *a2)
{
  int v4; // w1
  __int64 result; // x0
  int v7; // w0
  int v8; // t1
  int v9; // t1
  bool v10; // zf
  int v11; // w0
  int v12; // t1

  while ( 1 )
  {
    v4 = (unsigned __int8)*a2;
    if ( !*a1 )
      break;
    result = (unsigned __int8)*a1 == v4;
    if ( !*a2 )
      return result;
    if ( v4 == 63 || (unsigned __int8)*a1 == v4 )
    {
      do
      {
        v8 = (unsigned __int8)*++a1;
        v7 = v8;
        v9 = (unsigned __int8)*++a2;
        v4 = v9;
        v10 = v9 == 63 || v7 == v4;
        if ( !v7 )
          goto LABEL_16;
        if ( !v4 )
          return 0;
      }
      while ( v10 );
    }
    if ( v4 != 42 )
      return 0;
    result = (unsigned __int8)sub_48EC48(a1 + 1, a2);
    if ( (_DWORD)result )
      return result;
    ++a2;
  }
LABEL_16:
  if ( v4 != 42 )
    return v4 == 0;
  do
  {
    v12 = (unsigned __int8)*++a2;
    v11 = v12;
  }
  while ( v12 == 42 );
  return v11 == 0;
}
