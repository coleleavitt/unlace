/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_44A400
// Address: 0x000000000044A400

//----- (000000000044A400) ----------------------------------------------------
__int64 __fastcall sub_44A400(__int64 a1, const char **a2)
{
  int *v3; // x0
  int *v4; // x1
  int *v5; // x22
  int *v6; // x19
  __int64 v7; // x23
  __int64 v8; // x20

  v3 = (int *)sub_444E78(a1, a2);
  v5 = v4;
  v6 = v3;
  v7 = *(_QWORD *)(a1 + 40);
  if ( v3 == *(int **)(a1 + 24) && v4 == (int *)(a1 + 8) )
  {
    sub_440380(a1, *(__int64 **)(a1 + 16));
    *((_QWORD *)v5 + 1) = 0;
    *((_QWORD *)v5 + 2) = v5;
    *((_QWORD *)v5 + 3) = v5;
    *((_QWORD *)v5 + 4) = 0;
    return v7;
  }
  if ( v4 != v3 )
  {
    do
    {
      v8 = sub_49F748(v6);
      sub_44A3A8(a1, v6);
      v6 = (int *)v8;
    }
    while ( v5 != (int *)v8 );
    v7 -= *(_QWORD *)(a1 + 40);
    return v7;
  }
  return 0;
}
// 44A414: variable 'v4' is possibly undefined
// 49F748: using guessed type __int64 __fastcall sub_49F748(_QWORD);
