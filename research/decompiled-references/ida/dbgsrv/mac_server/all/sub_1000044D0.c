/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000044D0
// Address: 0x00000001000044D0

//----- (00000001000044D0) ----------------------------------------------------
__int64 __fastcall sub_1000044D0(_QWORD *a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 i; // r9
  __int64 v6; // r10

  v3 = *(_QWORD *)(a2 + 8);
  if ( (*(_DWORD *)(a2 + 20) & 0xFFFFFFF) != 5 )
  {
    if ( under_debugger != 1 )
      interr(0xCE2u);
    BUG();
  }
  v4 = 56LL * a1[58];
  i = a1[57];
  if ( v4 )
  {
    v6 = 56LL * a1[58];
    for ( i = a1[57]; v3 != *(_QWORD *)i || 4 * (*(_QWORD *)(a2 + 24) == v3) + 4 != *(_DWORD *)(i + 32); i += 56 )
    {
      v6 -= 56;
      if ( !v6 )
        return 0;
    }
  }
  if ( i == v4 + a1[57] )
  {
    return 0;
  }
  else
  {
    LOBYTE(v2) = 1;
    (*(void (__fastcall **)(_QWORD *))(*a1 + 704LL))(a1);
  }
  return v2;
}
// 10000459C: variable 'v2' is possibly undefined
// 1000AE23D: using guessed type char under_debugger;
