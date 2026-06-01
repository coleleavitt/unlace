/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4C950
// Address: 0x000000000004C950

//----- (000000000004C950) ----------------------------------------------------
__int64 __fastcall sub_4C950(__int64 a1)
{
  unsigned int v1; // ebx
  __m128 v3[31]; // [rsp+8h] [rbp-280h] BYREF
  char (*v4)(); // [rsp+1F8h] [rbp-90h]
  unsigned __int64 v5; // [rsp+278h] [rbp-10h]

  v5 = __readfsqword(0x28u);
  sub_4FDB0((__int64)v3, a1, 0);
  v4 = sub_4CA10;
  if ( (unsigned __int8)sub_4CA20((__int64)v3) )
    v1 = sub_4CB70(v3);
  else
    v1 = 0;
  sub_4D700(v3);
  return v1;
}
