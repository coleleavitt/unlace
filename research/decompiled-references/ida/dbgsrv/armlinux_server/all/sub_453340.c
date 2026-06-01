/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_453340
// Address: 0x0000000000453340

//----- (0000000000453340) ----------------------------------------------------
__int64 __fastcall sub_453340(__int64 *a1, __int64 *ptr)
{
  unsigned __int64 v3; // x4
  __int64 v4; // x5
  unsigned __int64 v5; // x3
  __int64 *v6; // x6
  __int64 **v7; // x8
  __int64 *i; // x2
  __int64 v9; // x0
  unsigned __int64 v10; // x4
  __int64 v11; // x20
  unsigned __int64 v13; // x4
  __int64 *v14; // x3

  v3 = a1[1];
  v4 = *a1;
  v5 = ptr[5] % v3;
  v6 = *(__int64 **)(*a1 + 8 * v5);
  v7 = (__int64 **)(*a1 + 8 * v5);
  for ( i = v6; ptr != (__int64 *)*i; i = (__int64 *)*i )
    ;
  v9 = *ptr;
  if ( v6 == i )
  {
    if ( v9 )
    {
      v13 = *(_QWORD *)(v9 + 40) % v3;
      if ( v5 == v13 )
        goto LABEL_8;
      *(_QWORD *)(v4 + 8 * v13) = i;
      v7 = (__int64 **)(*a1 + 8 * v5);
      v14 = *v7;
    }
    else
    {
      v14 = i;
    }
    if ( v14 == a1 + 2 )
      a1[2] = v9;
    *v7 = nullptr;
    v9 = *ptr;
  }
  else if ( v9 )
  {
    v10 = *(_QWORD *)(v9 + 40) % v3;
    if ( v5 != v10 )
    {
      *(_QWORD *)(v4 + 8 * v10) = i;
      v9 = *ptr;
    }
  }
LABEL_8:
  *i = v9;
  v11 = *ptr;
  sub_450A88(ptr);
  --a1[3];
  return v11;
}
