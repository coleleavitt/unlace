/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5FCA0
// Address: 0x000000000005FCA0

//----- (000000000005FCA0) ----------------------------------------------------
__int64 __fastcall sub_5FCA0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rcx

  v2 = *(_QWORD *)(a1 + 16);
  v3 = v2 - 1;
  if ( !v2 )
    v3 = 0;
  *(_QWORD *)(a2 + 8) = v3;
  return 0;
}
