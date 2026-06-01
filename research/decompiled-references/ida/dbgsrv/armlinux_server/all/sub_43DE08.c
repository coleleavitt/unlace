/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_43DE08
// Address: 0x000000000043DE08

//----- (000000000043DE08) ----------------------------------------------------
__int64 __fastcall sub_43DE08(_QWORD *a1, __int64 a2)
{
  __int64 v2; // x3
  _QWORD *v3; // x4
  bool v4; // zf
  __int64 result; // x0

  if ( !a2 )
    return -1;
  v2 = a1[1];
  if ( !v2 )
    return -1;
  v3 = (_QWORD *)*a1;
  v4 = a2 == *(_QWORD *)*a1;
  result = 0;
  if ( !v4 )
  {
    while ( ++result != v2 )
    {
      if ( v3[result] == a2 )
        return result;
    }
    return -1;
  }
  return result;
}
