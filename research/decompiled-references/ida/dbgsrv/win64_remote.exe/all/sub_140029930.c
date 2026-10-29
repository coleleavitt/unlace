/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140029930
// Address: 0x0000000140029930

//----- (0000000140029930) ----------------------------------------------------
__int64 __fastcall sub_140029930(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  const void **v4; // rdx
  __int64 v5; // rax
  size_t v6; // r8

  if ( !a2 || *(_BYTE *)a2 != 5 )
    return sub_1400640B0(0x5FCu);
  if ( a1 )
  {
    v3 = sub_14002D950(*(int *)(*(_QWORD *)(a2 + 8) + 20LL));
    v4 = (const void **)(v3 + 24);
    if ( a1 != v3 + 24 )
    {
      v5 = *(_QWORD *)(v3 + 32);
      v6 = v5 - 1;
      if ( !v5 )
        v6 = 0;
      if ( v6 )
      {
        sub_140001810(a1, *v4, v6);
        return 0;
      }
      *(_QWORD *)(a1 + 8) = 0;
    }
  }
  return 0;
}
