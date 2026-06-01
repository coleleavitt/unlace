__int64 __fastcall sub_1508610(__int64 a1, unsigned int a2, char a3)
{
  __int64 v5; // rdi
  _BYTE *v6; // rax
  signed __int64 v7; // rdx
  _BYTE *v8; // rax
  signed __int64 v9; // rdx
  __m128i v10; // [rsp+0h] [rbp-88h] BYREF
  int v11; // [rsp+10h] [rbp-78h]
  char v12; // [rsp+14h] [rbp-74h]
  unsigned __int8 *v13[13]; // [rsp+20h] [rbp-68h] BYREF

  sub_1508400(&v10, a1, a2);
  if ( v12 != 1 || a3 )
    return 0;
  if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL) + 64LL) > 0x32u || a2 != 20 )
    return sub_1B0A070(
             *(_QWORD *)(*(_QWORD *)(a1 + 96) + 760LL),
             a2,
             v10.m128i_i32[0],
             v10.m128i_i32[3],
             v10.m128i_i32[2],
             v10.m128i_i32[1],
             v11);
  if ( v10.m128i_i32[0] == 2 )
  {
    sub_1564820(v13, a1, v10.m128i_u32[2], 1808);
    v5 = 82;
  }
  else
  {
    if ( v10.m128i_i32[0] != 3 )
      return sub_1B0A070(
               *(_QWORD *)(*(_QWORD *)(a1 + 96) + 760LL),
               a2,
               v10.m128i_i32[0],
               v10.m128i_i32[3],
               v10.m128i_i32[2],
               v10.m128i_i32[1],
               v11);
    sub_1564820(v13, a1, v10.m128i_u32[2], 1808);
    v5 = 36;
  }
  v6 = (_BYTE *)sub_20EB760(v5, 0);
  sub_AEC220(v13, v6, v7);
  v8 = (_BYTE *)sub_20EB760(20, 0);
  sub_AEC220(v13, v8, v9);
  sub_1503D30(v13, (__int64)"5.1");
  sub_AEA040((__int64)v13);
  return 0;
}
