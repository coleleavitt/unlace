/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140028540
// Address: 0x0000000140028540

//----- (0000000140028540) ----------------------------------------------------
void __fastcall sub_140028540(__int64 a1, int a2)
{
  unsigned __int64 v2; // rax
  __int64 v3; // r8
  unsigned __int64 v4; // rdx
  char v5[8]; // [rsp+20h] [rbp-28h] BYREF
  __int128 v6; // [rsp+28h] [rbp-20h]
  __int64 v7; // [rsp+38h] [rbp-10h]

  v2 = *(_QWORD *)(a1 + 32);
  v3 = a2;
  if ( a2 > v2 )
  {
    if ( byte_1400CB61C )
      __debugbreak();
    sub_14005A480(285);
  }
  v4 = v2 - a2;
  if ( v2 - v3 != v2 )
  {
    v5[0] = 2;
    v7 = 0;
    v6 = 0u;
    sub_140028700((unsigned __int64 *)(a1 + 24), v4, v5);
    sub_140029390((__int64)v5);
  }
}
// 1400CB61C: using guessed type char byte_1400CB61C;
