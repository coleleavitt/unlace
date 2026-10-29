__int64 __fastcall sub_1451CA0(__int64 *a1, const __m128i *a2)
{
  __int64 v2; // rax
  __int64 result; // rax
  __int64 v4; // [rsp+8h] [rbp-E0h]
  __m128i v5; // [rsp+10h] [rbp-D8h] BYREF
  __int64 v6; // [rsp+20h] [rbp-C8h]
  void *v7[2]; // [rsp+30h] [rbp-B8h] BYREF
  __int64 v8; // [rsp+40h] [rbp-A8h] BYREF
  void *v9; // [rsp+50h] [rbp-98h] BYREF
  signed __int64 v10; // [rsp+58h] [rbp-90h]
  _BYTE v11[16]; // [rsp+60h] [rbp-88h] BYREF
  unsigned __int8 *v12[2]; // [rsp+70h] [rbp-78h] BYREF
  int v13; // [rsp+80h] [rbp-68h]

  v2 = a2[1].m128i_i64[0];
  v5 = _mm_loadu_si128(a2);
  v6 = v2;
  sub_14634E0(a1, a2);
  if ( a2[1].m128i_i16[0] != 22 || (sub_14634E0(a1, a2), a2[1].m128i_i16[0] != 14) )
  {
    sub_FC70B0((__int64)v12, a1[6], v5.m128i_i32[0], 1183);
    sub_13D35F0((__int64)&v9, (__int64)&v5, a1[11], a1[7], nullptr);
    sub_AEC220(v12, v9, v10);
    if ( v9 != v11 )
      operator delete(v9);
    goto LABEL_13;
  }
  if ( (a2[1].m128i_i8[2] & 0x20) != 0 )
  {
    sub_FC70B0((__int64)v12, a1[6], a2->m128i_i32[0], 29);
LABEL_13:
    sub_AEA040((__int64)v12);
    return 0;
  }
  sub_13D35F0((__int64)v7, (__int64)a2, a1[11], a1[7], nullptr);
  sub_14634E0(a1, a2);
  if ( a2[1].m128i_i16[0] == 23 )
  {
    v12[0] = nullptr;
    v12[1] = nullptr;
    v13 = 6;
    sub_145C860(a1, (char *)v7[0] + 1, (char *)v7[1] - 2, v12, 0, 0);
    result = sub_1460F90(a1, v12);
  }
  else
  {
    sub_FC70B0((__int64)v12, a1[6], v5.m128i_i32[0], 1183);
    sub_13D35F0((__int64)&v9, (__int64)&v5, a1[11], a1[7], nullptr);
    sub_AEC220(v12, v9, v10);
    if ( v9 != v11 )
      operator delete(v9);
    sub_AEA040((__int64)v12);
    result = 0;
  }
  if ( v7[0] != &v8 )
  {
    v4 = result;
    operator delete(v7[0]);
    return v4;
  }
  return result;
}
