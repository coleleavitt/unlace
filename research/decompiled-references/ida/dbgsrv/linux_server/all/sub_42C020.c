/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42C020
// Address: 0x000000000042C020

//----- (000000000042C020) ----------------------------------------------------
__int64 __fastcall sub_42C020(__int64 a1, __int64 a2)
{
  const char *v2; // rax

  v2 = s1;
  if ( *(_QWORD *)(a1 + 16) )
    v2 = *(const char **)(a1 + 8);
  *(_QWORD *)(a2 + 8) = (int)sub_480DC0(v2);
  return 0;
}
