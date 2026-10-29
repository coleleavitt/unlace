/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100022DF0
// Address: 0x0000000100022DF0

//----- (0000000100022DF0) ----------------------------------------------------
__int64 __fastcall sub_100022DF0(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a2 + 8) = rotate_left(
                          *(_QWORD *)(a1 + 8),
                          *(_DWORD *)(a1 + 40),
                          *(_QWORD *)(a1 + 72),
                          *(_QWORD *)(a1 + 104));
  return 0;
}
