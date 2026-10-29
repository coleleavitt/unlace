/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80FE0
// Address: 0x0000000000080FE0

//----- (0000000000080FE0) ----------------------------------------------------
__int64 __fastcall sub_80FE0(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rax
  __int64 v4; // rdi

  for ( result = *(_QWORD *)(a1 + 64); result; result = *(_QWORD *)(a1 + 64) )
  {
    v3 = result - 1;
    v4 = *(_QWORD *)(a1 + 56) + 56 * v3;
    *(_QWORD *)a1 = *(_QWORD *)(v4 + 24);
    *(_QWORD *)(a1 + 8) = *(_QWORD *)(v4 + 32);
    *(_DWORD *)(a1 + 80) = *(_DWORD *)(v4 + 48);
    *(_QWORD *)(a1 + 64) = v3;
    sub_38490((char **)v4);
  }
  return result;
}
