/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_466FD0
// Address: 0x0000000000466FD0

//----- (0000000000466FD0) ----------------------------------------------------
__int64 __fastcall sub_466FD0(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // x3
  __int64 v4; // x0

  v3 = *(_QWORD *)(a1 + 480);
  v4 = v3 - 192;
  if ( !v3 )
    v4 = 0;
  return sub_466610(v4, a2, a3);
}
