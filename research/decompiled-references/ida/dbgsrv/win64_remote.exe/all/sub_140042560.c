/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140042560
// Address: 0x0000000140042560

//----- (0000000140042560) ----------------------------------------------------
__int64 __fastcall sub_140042560(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  size_t v5; // r8
  __int64 result; // rax

  *(_DWORD *)a2 = *(_DWORD *)(a1 + 232);
  *(_DWORD *)(a2 + 4) = *(_DWORD *)(a1 + 236);
  if ( a2 + 8 != a1 + 240 )
  {
    v4 = *(_QWORD *)(a1 + 248);
    v5 = v4 - 1;
    if ( !v4 )
      v5 = 0;
    if ( v5 )
      sub_140001810(a2 + 8, *(const void **)(a1 + 240), v5);
    else
      *(_QWORD *)(a2 + 16) = 0;
  }
  result = *(unsigned int *)(a1 + 264);
  *(_DWORD *)(a2 + 32) = result;
  return result;
}
