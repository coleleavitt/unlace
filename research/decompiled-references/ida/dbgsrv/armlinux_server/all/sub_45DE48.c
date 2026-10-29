/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45DE48
// Address: 0x000000000045DE48

//----- (000000000045DE48) ----------------------------------------------------
__int64 __fastcall sub_45DE48(_QWORD *a1, unsigned __int64 a2, int a3)
{
  __int64 v6; // x5
  __int64 (*v7)(void); // x1
  _QWORD *v8; // x3
  _QWORD *v9; // x20
  unsigned __int64 v10; // x5
  __int64 v11; // x0
  __int64 v12; // x1
  unsigned __int64 v13; // x3
  __int64 v14; // x2
  bool v15; // zf

  v6 = -4096;
  v7 = *(__int64 (**)(void))(*a1 + 496LL);
  if ( v7 != sub_407188 )
    v6 = (int)-v7();
  v8 = (_QWORD *)a1[78];
  v9 = a1 + 77;
  v10 = a2 & v6;
  v11 = (__int64)(a1 + 77);
  if ( !v8 )
    goto LABEL_8;
  do
  {
    while ( v10 <= v8[4] )
    {
      v11 = (__int64)v8;
      v8 = (_QWORD *)v8[2];
      if ( !v8 )
        goto LABEL_6;
    }
    v8 = (_QWORD *)v8[3];
  }
  while ( v8 );
LABEL_6:
  if ( v9 == (_QWORD *)v11 || (v12 = a3, v13 = *(_QWORD *)(v11 + 32), v13 >= a3 + a2) )
  {
LABEL_8:
    if ( v11 == a1[79] )
      return (__int64)v9;
    v11 = sub_49F750(v11);
    v13 = *(_QWORD *)(v11 + 32);
    v12 = a3;
  }
  v14 = *(int *)(v11 + 60);
  if ( v12 )
    v15 = v14 == 0;
  else
    v15 = 1;
  if ( !v15 && a2 - 1 + v12 >= v13 && a2 <= v13 - 1 + v14 )
    return v11;
  return (__int64)v9;
}
// 49F750: using guessed type __int64 __fastcall sub_49F750(_QWORD);
