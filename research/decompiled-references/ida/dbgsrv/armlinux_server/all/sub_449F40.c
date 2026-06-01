/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_449F40
// Address: 0x0000000000449F40

//----- (0000000000449F40) ----------------------------------------------------
__int64 __fastcall sub_449F40(__int64 *a1, __int64 a2)
{
  void *v4; // x0
  __int64 v5; // x21
  int v6; // w1

  if ( !a1 )
    return sub_4869C8(1532);
  sub_448310(a1);
  *(_BYTE *)a1 = 5;
  v4 = sub_49E050(0x38u);
  v5 = (__int64)v4;
  v6 = 0;
  if ( a2 )
    v6 = *(_DWORD *)(a2 + 52);
  sub_4403E0((__int64)v4, v6);
  a1[1] = v5;
  return 0;
}
