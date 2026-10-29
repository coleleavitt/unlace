__int64 __fastcall sub_5BAB20(__m128i *a1, unsigned __int64 *a2, unsigned __int64 a3)
{
  unsigned __int64 v4; // r13
  unsigned __int64 v5; // rax
  int v6; // r14d
  __int64 v8[7]; // [rsp+0h] [rbp-38h] BYREF

  v8[1] = __readfsqword(0x28u);
  if ( a3 < *a2 && *sub_505D70((__int64)&a1[106].m128i_i64[1], a3) == a3 )
    sub_5BA890(a1, (__int64)a2, a3);
  v4 = sub_3C1F00(a1, a3);
  v5 = 0x100000000LL;
  if ( *(_DWORD *)(a1[1].m128i_i64[1] + 24) == 8 )
    v5 = -1;
  if ( v4 >= v5 || (v6 = sub_3BE900(a1, v4, 4), (~BYTE1(v6) & 6) != 0) || (v6 & 0x10000) == 0 )
  {
    sub_5BA9E0(a1, a2, a3);
    return 1;
  }
  if ( ((unsigned __int8)sub_3C5DC0((__int64)a1, v4) & 2) == 0 )
  {
    if ( (v6 & 0x1000) == 0 || (unsigned int)find_sp_value(v8, v4, 0xFFFFFFFF) != 1 )
      return 0;
    sub_5BA7A0(a1, (__int64)a2, v4, v8[0]);
  }
  return 1;
}
