__int64 __fastcall sub_3CCEA0(double a1, __int64 a2, __int64 a3, _DWORD *a4, __int64 a5, const __m128i *a6)
{
  __int64 v6; // r13
  __int64 v10; // rax
  __int64 v11; // rsi
  _BYTE v13[32]; // [rsp+0h] [rbp-88h] BYREF
  _QWORD v14[2]; // [rsp+20h] [rbp-68h] BYREF
  _QWORD v15[2]; // [rsp+30h] [rbp-58h] BYREF
  _QWORD v16[9]; // [rsp+40h] [rbp-48h] BYREF

  v6 = (__int64)&a6[1].m128i_i64[1];
  v16[3] = __readfsqword(0x28u);
  sub_1211A0((__int64)&a6[1].m128i_i64[1], (__int64)a4);
  v10 = sub_3CA080(a3, (__int64)a6, a4);
  if ( v10 )
  {
    v11 = v10;
    if ( !(unsigned __int8)sub_133C00(a3, v10, 9u) )
    {
      if ( !under_debugger )
        sub_37E160(0xCEEFu, v11, a1);
      BUG();
    }
  }
  else
  {
    a6[6].m128i_i32[2] = 0;
    v14[1] = 0;
    v14[0] = 0xFFFFFFFF00000000LL;
    v15[0] = 0xFFFFFFFF00000000LL;
    v15[1] = 0;
    v16[0] = 0xFFFFFFFF00000000LL;
    v16[1] = 0;
    sub_32B920((__int64)v13, -1);
    sub_1211A0(v6, (__int64)v13);
    sub_118BA0((__int64)v16);
    sub_118BA0((__int64)v15);
    sub_118BA0((__int64)v14);
    sub_133640(a3, a6, 9u);
  }
  return 1;
}
