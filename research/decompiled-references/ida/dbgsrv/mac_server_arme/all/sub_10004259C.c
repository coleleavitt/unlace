/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10004259C
// Address: 0x000000010004259C

//----- (000000010004259C) ----------------------------------------------------
void __fastcall sub_10004259C(_QWORD *a1, int a2)
{
  signed __int64 v3; // x20
  _QWORD *v4; // x0
  _QWORD *v5; // x1

  v3 = a1[1] - a2;
  if ( v3 > 1 )
  {
    v5 = (_QWORD *)*a1;
    if ( a1[2] < (unsigned __int64)v3 )
    {
      v5 = qvector_reserve(a1, v5, v3, 1u);
      *a1 = v5;
    }
    a1[1] = v3;
    *((_BYTE *)v5 + v3 - 1) = 0;
  }
  else
  {
    v4 = (_QWORD *)*a1;
    if ( *a1 )
    {
      a1[1] = 0;
      qfree(v4);
      *a1 = 0;
      a1[2] = 0;
    }
  }
}
