/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4B2A10
// Address: 0x00000000004B2A10

//----- (00000000004B2A10) ----------------------------------------------------
__int64 __fastcall sub_4B2A10(_QWORD *a1, __int64 *a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // x4
  __int64 v4; // x1

  *a1 = a1 + 2;
  v3 = a2[1];
  v4 = *a2;
  if ( a3 > v3 )
    sub_4A0590("%s: __pos (which is %zu) > this->size() (which is %zu)", "basic_string::basic_string", a3, v3);
  return sub_4B2930(a1, (_BYTE *)(v4 + a3), v4 + v3);
}
