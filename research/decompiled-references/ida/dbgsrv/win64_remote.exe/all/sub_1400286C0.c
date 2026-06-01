/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1400286C0
// Address: 0x00000001400286C0

//----- (00000001400286C0) ----------------------------------------------------
void __fastcall sub_1400286C0(unsigned __int64 *a1, unsigned __int64 a2)
{
  char v2[8]; // [rsp+20h] [rbp-28h] BYREF
  __int128 v3; // [rsp+28h] [rbp-20h]
  __int64 v4; // [rsp+38h] [rbp-10h]

  if ( a2 != a1[1] )
  {
    v2[0] = 2;
    v4 = 0;
    v3 = 0u;
    sub_140028700(a1, a2, v2);
    sub_140029390((__int64)v2);
  }
}
