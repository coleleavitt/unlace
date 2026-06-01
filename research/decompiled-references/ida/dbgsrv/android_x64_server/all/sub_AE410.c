/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_AE410
// Address: 0x00000000000AE410

//----- (00000000000AE410) ----------------------------------------------------
__int64 __fastcall sub_AE410(__int64 a1)
{
  __int64 result; // rax
  FILE *v3; // rdi

  result = *(_QWORD *)(a1 + 8);
  if ( result )
  {
    v3 = *(FILE **)(result + 160);
    if ( v3 )
    {
      qfclose(v3);
      result = *(_QWORD *)(a1 + 8);
      *(_QWORD *)(result + 160) = 0;
    }
  }
  return result;
}
