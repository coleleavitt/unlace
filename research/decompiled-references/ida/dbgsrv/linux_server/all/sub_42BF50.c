/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42BF50
// Address: 0x000000000042BF50

//----- (000000000042BF50) ----------------------------------------------------
__int64 __fastcall sub_42BF50(__int64 a1, __int64 a2)
{
  const char *v2; // rax

  v2 = s1;
  if ( *(_QWORD *)(a1 + 16) )
    v2 = *(const char **)(a1 + 8);
  *(_QWORD *)(a2 + 8) = strtol(v2, nullptr, 10);
  return 0;
}
