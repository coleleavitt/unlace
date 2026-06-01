/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_451C38
// Address: 0x0000000000451C38

//----- (0000000000451C38) ----------------------------------------------------
__int64 __fastcall sub_451C38(__int64 a1, char *s)
{
  char *v3; // x0
  char *v4; // x20
  __int64 v5; // x21
  __int64 result; // x0

  v3 = strchr(s, 40);
  if ( !v3 )
    return 0xFFFFFFFFLL;
  v4 = v3;
  v5 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 8) = v3 + 1;
  *(_BYTE *)(a1 + 692) = 40;
  result = sub_4518C8(a1);
  if ( (result & 0x80000000) == 0 )
    *v4 = 0;
  *(_QWORD *)(a1 + 8) = v5;
  return result;
}
