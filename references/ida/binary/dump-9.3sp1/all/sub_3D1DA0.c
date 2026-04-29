__int64 __fastcall sub_3D1DA0(double a1, __int64 a2, __int64 a3, _DWORD *a4, __int64 a5, const __m128i *a6)
{
  __int64 v6; // r13
  __int64 v9; // rax
  __int64 v11; // rcx
  _BYTE v12[32]; // [rsp+0h] [rbp-88h] BYREF
  _QWORD v13[2]; // [rsp+20h] [rbp-68h] BYREF
  _QWORD v14[2]; // [rsp+30h] [rbp-58h] BYREF
  _QWORD v15[9]; // [rsp+40h] [rbp-48h] BYREF

  v6 = (__int64)&a6[1].m128i_i64[1];
  v15[3] = __readfsqword(0x28u);
  sub_1253A0((__int64)&a6[1].m128i_i64[1], (__int64)a4);
  v9 = sub_3CEF80(a3, (__int64)a6, a4);
  if ( v9 )
  {
    if ( !(unsigned __int8)sub_137E00(a3, v9, 9u) )
    {
      if ( !under_debugger )
        sub_383060(0xCEEFu, a1);
      BUG();
    }
  }
  else
  {
    a6[6].m128i_i32[2] = 0;
    v13[1] = 0;
    v13[0] = 0xFFFFFFFF00000000LL;
    v14[0] = 0xFFFFFFFF00000000LL;
    v14[1] = 0;
    v15[0] = 0xFFFFFFFF00000000LL;
    v15[1] = 0;
    sub_330970((__int64)v12, -1);
    sub_1253A0(v6, (__int64)v12);
    sub_11CDA0((__int64)v15);
    sub_11CDA0((__int64)v14);
    sub_11CDA0((__int64)v13);
    sub_137840(a3, a6, 9, v11);
  }
  return 1;
}
