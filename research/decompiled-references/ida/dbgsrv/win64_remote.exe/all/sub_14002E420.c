/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14002E420
// Address: 0x000000014002E420

//----- (000000014002E420) ----------------------------------------------------
void __fastcall sub_14002E420(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rdi
  _QWORD *v4; // rsi
  __int64 v5; // r9
  __int64 v6; // rbp
  _QWORD *v7; // r8
  _QWORD *v8; // rcx

  v2 = *(_QWORD *)(a1 + 16);
  if ( a2 > v2 )
  {
    v4 = sub_14005ABE0(a1, nullptr, a2, 8u);
    v5 = *(_QWORD *)(a1 + 8) - 1LL;
    v6 = *(_QWORD *)(a1 + 16);
    v7 = *(_QWORD **)a1;
    v8 = v4;
    for ( *(_QWORD *)(a1 + 16) = v2; v5 >= 0; ++v7 )
    {
      --v5;
      *v8++ = *v7;
    }
    j_free(*(void **)a1);
    *(_QWORD *)a1 = v4;
    *(_QWORD *)(a1 + 16) = v6;
  }
}
