/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7BF14
// Address: 0x0007BF14

//----- (0007BF14) --------------------------------------------------------
ssize_t __fastcall sub_7BF14(int a1, int a2, int a3, int a4, void *a5, signed int a6)
{
  __int64 v7; // r0
  ssize_t result; // r0
  int v9; // [sp+0h] [bp-8h] BYREF

  v7 = qseek(*(_DWORD *)(a1 + 20), (int)&v9, a3, a4, 0);
  HIDWORD(v7) = (HIDWORD(v7) & v7) + 1;
  result = -1;
  if ( HIDWORD(v7) )
    return qread(*(_DWORD *)(a1 + 20), a5, a6);
  return result;
}
