/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10005B380
// Address: 0x000000010005B380

//----- (000000010005B380) ----------------------------------------------------
__int64 __fastcall sub_10005B380(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rax
  __int64 v4; // rdi

  v3 = *(_QWORD *)(a1 + 400);
  v4 = v3 - 192;
  if ( !v3 )
    v4 = 0;
  return sub_10005B230(v4, a2, a3);
}
