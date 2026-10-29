/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_880B0
// Address: 0x00000000000880B0

//----- (00000000000880B0) ----------------------------------------------------
__int64 __fastcall sub_880B0(__int64 a1, const char *a2)
{
  char *v2; // rax
  char *v3; // r14
  __int64 v4; // r15
  __int64 result; // rax

  v2 = strchr(a2, 40);
  if ( !v2 )
    return 0xFFFFFFFFLL;
  v3 = v2;
  v4 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 8) = v2 + 1;
  *(_BYTE *)(a1 + 452) = 40;
  result = sub_87DB0(a1);
  if ( (int)result >= 0 )
    *v3 = 0;
  *(_QWORD *)(a1 + 8) = v4;
  return result;
}
