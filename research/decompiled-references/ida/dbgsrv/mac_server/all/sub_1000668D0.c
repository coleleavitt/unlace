/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000668D0
// Address: 0x00000001000668D0

//----- (00000001000668D0) ----------------------------------------------------
__int64 __fastcall sub_1000668D0(void **a1, __int64 *a2)
{
  __int64 v2; // r15
  __int64 result; // rax
  __int64 v4; // r15
  __int64 v5; // r12
  __int64 v6; // r13

  v2 = a2[1];
  result = sub_100032FE0(a1, v2);
  if ( (int)v2 > 0 )
  {
    v4 = v2 & 0x7FFFFFFF;
    v5 = 24;
    do
    {
      v6 = *a2;
      sub_10005A320(a1, *(_QWORD *)(*a2 + v5 - 24) + 1LL);
      sub_10005A320(a1, *(_QWORD *)(v6 + v5 - 16) + 1LL);
      sub_10005A320(a1, *(_QWORD *)(v6 + v5 - 8) + 1LL);
      result = sub_100032FE0(a1, *(unsigned __int8 *)(v6 + v5));
      v5 += 32;
      --v4;
    }
    while ( v4 );
  }
  return result;
}
