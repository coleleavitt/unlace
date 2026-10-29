/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_48CD58
// Address: 0x000000000048CD58

//----- (000000000048CD58) ----------------------------------------------------
__int64 __fastcall sub_48CD58(unsigned __int8 *a1, int a2, _QWORD *a3)
{
  unsigned __int8 *v3; // x20
  int v5; // w19
  __int64 v6; // x21
  __int64 v8; // x23
  int v9; // w0
  int v10; // t1

  v3 = a1;
  v5 = *a1;
  if ( (v5 & 0x80) != 0 )
  {
    v6 = 0;
  }
  else
  {
    v6 = 0;
    v8 = a2;
    do
    {
      if ( !isalnum(v5) )
        break;
      if ( v5 > 57 )
      {
        if ( v5 > 96 )
          v5 -= 32;
        v5 -= 7;
      }
      v9 = v5 - 48;
      if ( v5 - 48 >= a2 )
        break;
      v10 = *++v3;
      v5 = v10;
      v6 = v9 + v8 * v6;
    }
    while ( (v10 & 0x80) == 0 );
  }
  if ( a3 )
    *a3 = v3;
  return v6;
}
