/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4B2AC0
// Address: 0x00000000004B2AC0

//----- (00000000004B2AC0) ----------------------------------------------------
__int64 __fastcall sub_4B2AC0(_QWORD *a1, __int64 *a2, unsigned __int64 a3, unsigned __int64 a4)
{
  unsigned __int64 v4; // x4
  __int64 v5; // x1
  unsigned __int64 v6; // x4
  _BYTE *v7; // x2

  *a1 = a1 + 2;
  v4 = a2[1];
  v5 = *a2;
  if ( a3 > v4 )
    sub_4A0590("%s: __pos (which is %zu) > this->size() (which is %zu)", "string::string", a3, v4);
  v6 = v4 - a3;
  v7 = (_BYTE *)(v5 + a3);
  if ( v6 > a4 )
    v6 = a4;
  return sub_4B2930(a1, v7, (__int64)&v7[v6]);
}
