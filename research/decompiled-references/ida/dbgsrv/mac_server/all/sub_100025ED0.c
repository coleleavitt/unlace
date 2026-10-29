/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100025ED0
// Address: 0x0000000100025ED0

//----- (0000000100025ED0) ----------------------------------------------------
__int64 __fastcall sub_100025ED0(__int64 a1, __int64 a2)
{
  const char *v2; // rdi

  if ( *(_QWORD *)(a1 + 16) )
    v2 = *(const char **)(a1 + 8);
  else
    v2 = _s1;
  *(_QWORD *)(a2 + 8) = qunlink(v2);
  return 0;
}
