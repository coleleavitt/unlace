/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_416E88
// Address: 0x0000000000416E88

//----- (0000000000416E88) ----------------------------------------------------
__int64 __fastcall sub_416E88(_QWORD *a1, __int64 *a2)
{
  unsigned int v4; // w19

  v4 = sub_415E40((__int64)a1, a2, 0);
  if ( v4 != 1 )
    return v4;
  if ( (unsigned __int8)sub_45C010((__int64)a1, a2) )
    return (unsigned int)-6;
  sub_45C170(a1, a2);
  return 1;
}
