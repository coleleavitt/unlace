/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: rangeset_t_has_common2
// Address: 0x00000000000C4768

//----- (00000000000C4768) ----------------------------------------------------
__int64 __fastcall rangeset_t_has_common2(_QWORD *a1, __int64 a2)
{
  __int64 v2; // x9
  __int64 v3; // x10
  _QWORD *v4; // x12
  unsigned __int64 *v5; // x8
  unsigned __int64 v6; // x11
  __int64 v7; // x9
  __int64 v8; // x10
  unsigned __int64 v9; // x13
  _QWORD *v10; // x12

  v2 = a1[1];
  if ( !v2 )
    return 0;
  v3 = *(_QWORD *)(a2 + 8);
  if ( !v3 )
    return 0;
  v4 = (_QWORD *)*a1;
  v5 = *(unsigned __int64 **)a2;
  v6 = *(_QWORD *)(*a1 + 8LL);
  v7 = *a1 + 16 * v2;
  v8 = *(_QWORD *)a2 + 16 * v3;
LABEL_4:
  v9 = *v5;
  if ( *v5 >= v6 || *v4 >= v5[1] )
  {
    if ( v6 > v9 )
      goto LABEL_11;
    v10 = v4 + 2;
    while ( (_QWORD *)v7 != v10 )
    {
      v6 = v10[1];
      v10 += 2;
      if ( v6 > v9 )
      {
        v4 = v10 - 2;
LABEL_11:
        while ( v5[1] <= *v4 )
        {
          v5 += 2;
          if ( (unsigned __int64 *)v8 == v5 )
            return 0;
        }
        goto LABEL_4;
      }
    }
    return 0;
  }
  return 1;
}
