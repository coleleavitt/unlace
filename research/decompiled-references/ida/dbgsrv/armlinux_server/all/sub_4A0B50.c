/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4A0B50
// Address: 0x00000000004A0B50

//----- (00000000004A0B50) ----------------------------------------------------
unsigned __int64 __fastcall sub_4A0B50(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // x2

  v2 = *(_QWORD *)(*a1 - 24LL);
  if ( a2 >= v2 )
    sub_4A0590("basic_string::at: __n (which is %zu) >= this->size() (which is %zu)", a2, v2);
  return *a1 + a2;
}
