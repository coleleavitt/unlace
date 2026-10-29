/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_444440
// Address: 0x0000000000444440

//----- (0000000000444440) ----------------------------------------------------
__int64 __fastcall sub_444440(__int64 a1, __int64 a2)
{
  __int64 v4; // x0
  unsigned __int64 v5; // x20
  const void *v6; // x22
  void *v7; // x0

  if ( !a2 || *(_BYTE *)a2 != 5 )
    return sub_4869C8(1532);
  if ( !a1 )
    return 0;
  v4 = sub_43E578(*(int *)(*(_QWORD *)(a2 + 8) + 52LL));
  if ( a1 != v4 + 56 )
  {
    v5 = *(_QWORD *)(v4 + 64);
    if ( v5 > 1 )
    {
      v6 = *(const void **)(v4 + 56);
      v7 = *(void **)a1;
      if ( v5 > *(_QWORD *)(a1 + 16) )
      {
        v7 = sub_491288(a1, *(void **)a1, v5, 1u);
        *(_QWORD *)a1 = v7;
      }
      *(_QWORD *)(a1 + 8) = v5;
      memmove(v7, v6, v5 - 1);
      *(_BYTE *)(*(_QWORD *)a1 + v5 - 1) = 0;
    }
    else
    {
      *(_QWORD *)(a1 + 8) = 0;
    }
  }
  return 0;
}
