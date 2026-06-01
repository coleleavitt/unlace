/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5F930
// Address: 0x000000000005F930

//----- (000000000005F930) ----------------------------------------------------
__int64 __fastcall sub_5F930(__int64 a1, __int64 a2)
{
  const char *v2; // rdi

  if ( *(_QWORD *)(a1 + 16) )
    v2 = *(const char **)(a1 + 8);
  else
    v2 = s1;
  *(_QWORD *)(a2 + 8) = (int)call_system((__int64)v2, a2);
  return 0;
}
