/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4B0558
// Address: 0x00000000004B0558

//----- (00000000004B0558) ----------------------------------------------------
_QWORD *__fastcall sub_4B0558(_QWORD *a1, char a2)
{
  unsigned __int64 v2; // x2
  size_t v5; // x21
  _QWORD *v6; // x1
  unsigned __int64 v7; // x20

  v2 = 15;
  v5 = a1[1];
  v6 = (_QWORD *)*a1;
  v7 = v5 + 1;
  if ( (_QWORD *)*a1 != a1 + 2 )
    v2 = a1[2];
  if ( v7 > v2 )
  {
    sub_4AFE60(a1, v5, 0, nullptr, 1u);
    v6 = (_QWORD *)*a1;
  }
  *((_BYTE *)v6 + v5) = a2;
  a1[1] = v7;
  *(_BYTE *)(*a1 + v7) = 0;
  return a1;
}
