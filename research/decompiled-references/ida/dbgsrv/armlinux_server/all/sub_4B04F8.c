/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4B04F8
// Address: 0x00000000004B04F8

//----- (00000000004B04F8) ----------------------------------------------------
unsigned __int64 __fastcall sub_4B04F8(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // x2

  v2 = a1[1];
  if ( a2 >= v2 )
    sub_4A0590("basic_string::at: __n (which is %zu) >= this->size() (which is %zu)", a2, v2);
  return *a1 + a2;
}
