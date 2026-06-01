/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10005B230
// Address: 0x000000010005B230

//----- (000000010005B230) ----------------------------------------------------
__int64 __fastcall sub_10005B230(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 result; // rax
  unsigned int v5; // ebx
  void *v6[3]; // [rsp+8h] [rbp-38h] BYREF

  sub_10006B790((__int64)v6, 55);
  sub_100066550(v6, a2);
  sub_100032FE0(v6, a3);
  result = sub_100065B50(a1 + 192, (__int64)v6, -1, 0);
  if ( v6[0] )
  {
    v6[1] = nullptr;
    v5 = result;
    qfree(v6[0]);
    return v5;
  }
  return result;
}
