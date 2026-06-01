/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100025130
// Address: 0x0000000100025130

//----- (0000000100025130) ----------------------------------------------------
__int64 __fastcall sub_100025130(__int64 a1, __int64 a2)
{
  const char *v2; // rax

  if ( *(_QWORD *)(a1 + 16) )
    v2 = *(const char **)(a1 + 8);
  else
    v2 = _s1;
  *(_QWORD *)(a2 + 8) = *v2;
  return 0;
}
