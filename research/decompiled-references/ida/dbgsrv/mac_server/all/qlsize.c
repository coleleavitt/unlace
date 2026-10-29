/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qlsize
// Address: 0x000000010007A2C0

//----- (000000010007A2C0) ----------------------------------------------------
__int64 __fastcall qlsize(__int64 a1)
{
  if ( !a1 )
    return -1;
  if ( *(int *)a1 < 2 )
    JUMPOUT(0x100074950LL);
  return *(_QWORD *)(a1 + 16);
}
// 10007A2E2: control flows out of bounds to 100074950
