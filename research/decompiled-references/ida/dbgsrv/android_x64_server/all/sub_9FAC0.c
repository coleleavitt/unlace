/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_9FAC0
// Address: 0x000000000009FAC0

//----- (000000000009FAC0) ----------------------------------------------------
__int64 __fastcall sub_9FAC0(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // r14d
  __int64 v3; // rax
  __int64 v4; // rbx
  unsigned __int64 v5; // rbp

  v3 = *(_QWORD *)(a1 + 384);
  if ( v3 != a2[1] )
    return 0;
  LOBYTE(v2) = 1;
  if ( v3 )
  {
    v4 = 0;
    v5 = 0;
    while ( sub_A3A20(v4 + *(_QWORD *)(a1 + 376), v4 + *a2) )
    {
      ++v5;
      v4 += 80;
      if ( v5 >= *(_QWORD *)(a1 + 384) )
        return v2;
    }
    return 0;
  }
  return v2;
}
// 9FB21: variable 'v2' is possibly undefined
