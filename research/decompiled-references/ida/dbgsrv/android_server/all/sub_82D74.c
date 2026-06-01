/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_82D74
// Address: 0x0000000000082D74

//----- (0000000000082D74) ----------------------------------------------------
__int64 __fastcall sub_82D74(__int64 a1, char *s)
{
  char *v3; // x0
  __int64 v4; // x21
  char *v5; // x20
  __int64 result; // x0

  v3 = strchr(s, 40);
  if ( !v3 )
    return 0xFFFFFFFFLL;
  v4 = *(_QWORD *)(a1 + 8);
  v5 = v3;
  *(_QWORD *)(a1 + 8) = v3 + 1;
  *(_BYTE *)(a1 + 620) = 40;
  result = sub_82A98(a1);
  if ( (result & 0x80000000) == 0 )
    *v5 = 0;
  *(_QWORD *)(a1 + 8) = v4;
  return result;
}
