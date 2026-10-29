/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4A3738
// Address: 0x00000000004A3738

//----- (00000000004A3738) ----------------------------------------------------
__int64 **__usercall sub_4A3738@<X0>(
        __int64 *a1@<X0>,
        unsigned __int64 a2@<X1>,
        unsigned __int64 a3@<X2>,
        __int64 **a4@<X8>)
{
  unsigned __int64 v4; // x3

  v4 = *(_QWORD *)(*a1 - 24);
  if ( a2 > v4 )
    sub_4A0590("%s: __pos (which is %zu) > this->size() (which is %zu)", "basic_string::substr", a2, v4);
  sub_4A36C0(a4, a1, a2, a3);
  return a4;
}
