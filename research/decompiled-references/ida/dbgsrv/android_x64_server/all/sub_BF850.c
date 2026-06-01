/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_BF850
// Address: 0x00000000000BF850

//----- (00000000000BF850) ----------------------------------------------------
__int64 __fastcall sub_BF850(__int64 a1, void *a2, unsigned __int64 a3)
{
  __int64 v4; // rax
  unsigned __int64 v5; // rax
  __int64 v6; // rdi
  __int64 v7; // r14
  __int64 v8; // rax
  size_t v9; // r12
  FILE *v10; // rdi

  v4 = *(_QWORD *)(a1 + 8);
  if ( v4 )
  {
    v5 = v4 - *(_QWORD *)(a1 + 40);
    if ( v5 <= a3 )
      a3 = v5;
  }
  v6 = *(_QWORD *)(a1 + 24);
  v7 = -1;
  if ( v6 )
  {
    if ( *(int *)v6 < 2 )
      v8 = qfread(*(FILE **)(v6 + 8), a2, a3);
    else
      v8 = sub_BE3E0(v6, a2, a3);
    v9 = v8;
    if ( v8 <= 0 )
      return v9;
    v10 = *(FILE **)(a1 + 32);
    if ( !v10 || !(unsigned int)qfseek(v10, *(_QWORD *)(a1 + 40), 0) && qfwrite(*(FILE **)(a1 + 32), a2, v9) == v9 )
    {
      *(_QWORD *)(a1 + 40) += v9;
      return v9;
    }
  }
  return v7;
}
