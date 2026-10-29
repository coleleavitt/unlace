/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4535F0
// Address: 0x00000000004535F0

//----- (00000000004535F0) ----------------------------------------------------
_QWORD *__fastcall sub_4535F0(_QWORD *a1, unsigned __int64 a2, unsigned __int64 a3, _QWORD *a4)
{
  unsigned __int64 v8; // x1
  _QWORD *v9; // x0

  if ( (unsigned __int8)sub_4A0148((__int64)(a1 + 4), a1[1], a1[3], 1) )
  {
    sub_4534F8((__int64)a1, v8);
    a2 = a3 % a1[1];
  }
  a4[3] = a3;
  v9 = *(_QWORD **)(*a1 + 8 * a2);
  if ( v9 )
  {
    *a4 = *v9;
    **(_QWORD **)(*a1 + 8 * a2) = a4;
  }
  else
  {
    *a4 = a1[2];
    a1[2] = a4;
    if ( *a4 )
      *(_QWORD *)(*a1 + 8LL * (*(_QWORD *)(*a4 + 24LL) % a1[1])) = a4;
    *(_QWORD *)(*a1 + 8 * a2) = a1 + 2;
  }
  ++a1[3];
  return a4;
}
// 45364C: variable 'v8' is possibly undefined
