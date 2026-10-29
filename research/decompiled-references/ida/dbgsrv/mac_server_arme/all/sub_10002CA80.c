/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10002CA80
// Address: 0x000000010002CA80

//----- (000000010002CA80) ----------------------------------------------------
__int64 __fastcall sub_10002CA80(_QWORD *a1, char a2)
{
  _QWORD *v4; // x1
  __int64 v5; // x8
  bool v6; // cf
  __int64 v7; // x8
  __int64 v8; // x22

  v4 = (_QWORD *)*a1;
  v5 = a1[1];
  v6 = v5 != 0;
  v7 = v5 - 1;
  if ( v6 )
    v8 = v7;
  else
    v8 = 0;
  if ( a1[2] < (unsigned __int64)(v8 + 2) )
  {
    v4 = qvector_reserve(a1, v4, v8 + 2, 1u);
    *a1 = v4;
  }
  a1[1] = v8 + 2;
  *((_BYTE *)v4 + v8) = a2;
  *(_BYTE *)(*a1 + v8 + 1) = 0;
  return 0;
}
