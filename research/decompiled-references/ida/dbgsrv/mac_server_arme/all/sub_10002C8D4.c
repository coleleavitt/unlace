/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10002C8D4
// Address: 0x000000010002C8D4

//----- (000000010002C8D4) ----------------------------------------------------
__int64 __fastcall sub_10002C8D4(_QWORD *a1, char a2)
{
  _QWORD *v4; // x1
  _QWORD *v5; // x0
  __int64 v6; // x8
  bool v7; // cf
  __int64 v8; // x8
  __int64 v9; // x22

  v4 = (_QWORD *)*a1;
  if ( a1[1] >= 0x401u )
  {
    sub_100000B44();
    v5 = (_QWORD *)*a1;
    if ( *a1 )
    {
      a1[1] = 0;
      qfree(v5);
      v4 = nullptr;
      *a1 = 0;
      a1[2] = 0;
    }
    else
    {
      v4 = nullptr;
    }
  }
  v6 = a1[1];
  v7 = v6 != 0;
  v8 = v6 - 1;
  if ( v7 )
    v9 = v8;
  else
    v9 = 0;
  if ( a1[2] < (unsigned __int64)(v9 + 2) )
  {
    v4 = qvector_reserve(a1, v4, v9 + 2, 1u);
    *a1 = v4;
  }
  a1[1] = v9 + 2;
  *((_BYTE *)v4 + v9) = a2;
  *(_BYTE *)(*a1 + v9 + 1) = 0;
  return 0;
}
