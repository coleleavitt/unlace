/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100022DA0
// Address: 0x0000000100022DA0

//----- (0000000100022DA0) ----------------------------------------------------
__int64 __fastcall sub_100022DA0(__int64 a1, __int64 a2)
{
  const char *v2; // x8

  if ( *(_QWORD *)(a1 + 16) )
    v2 = *(const char **)(a1 + 8);
  else
    v2 = &byte_10007AE40;
  *(_QWORD *)(a2 + 8) = (int)qmkdir(v2, *(_DWORD *)(a1 + 40));
  return 0;
}
// 10007AE40: using guessed type char byte_10007AE40;
