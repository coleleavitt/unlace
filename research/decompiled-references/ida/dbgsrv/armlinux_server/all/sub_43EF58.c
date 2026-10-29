/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_43EF58
// Address: 0x000000000043EF58

//----- (000000000043EF58) ----------------------------------------------------
__int64 __fastcall sub_43EF58(__int64 result)
{
  __int64 v1; // x1
  __int64 v2; // x22
  _UNKNOWN **v3; // x2
  _UNKNOWN **v4; // x0
  _UNKNOWN **v5; // x19
  _UNKNOWN **v6; // x20

  v1 = *(_QWORD *)(result + 48);
  if ( qword_520148 != v1 )
  {
    v2 = result;
    v3 = off_520150;
    v4 = &off_520150[5 * v1];
    v5 = &off_520150[5 * qword_520148];
    if ( v4 < v5 )
    {
      do
      {
        v6 = v4 + 5;
        sub_43C5E8((__int64)v4);
        v4 = v6;
      }
      while ( v5 > v6 );
      v3 = off_520150;
    }
    j__free(v3);
    result = *(_QWORD *)(v2 + 40);
    qword_520148 = *(_QWORD *)(v2 + 48);
    off_520150 = (_UNKNOWN **)result;
  }
  return result;
}
// 520148: using guessed type __int64 qword_520148;
// 520150: using guessed type _UNKNOWN **off_520150;
