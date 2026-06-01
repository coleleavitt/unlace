/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4B2BA8
// Address: 0x00000000004B2BA8

//----- (00000000004B2BA8) ----------------------------------------------------
_QWORD *__usercall sub_4B2BA8@<X0>(
        _QWORD *a1@<X0>,
        unsigned __int64 a2@<X1>,
        unsigned __int64 a3@<X2>,
        _QWORD *a4@<X8>)
{
  unsigned __int64 v4; // x3
  unsigned __int64 v6; // x3

  v4 = a1[1];
  if ( a2 > v4 )
    sub_4A0590("%s: __pos (which is %zu) > this->size() (which is %zu)", "basic_string::substr", a2, v4);
  *a4 = a4 + 2;
  v6 = a1[1];
  if ( a2 > v6 )
    sub_4A0590("%s: __pos (which is %zu) > this->size() (which is %zu)", "basic_string::basic_string", a2, v6);
  if ( v6 - a2 <= a3 )
    a3 = v6 - a2;
  sub_4B2930(a4, (_BYTE *)(*a1 + a2), *a1 + a2 + a3);
  return a4;
}
