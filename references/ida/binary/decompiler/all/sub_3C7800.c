__int64 __fastcall sub_3C7800(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4, const __m128i *a5)
{
  __int64 v5; // r13
  __int64 v8; // rax
  _BYTE v10[32]; // [rsp+0h] [rbp-88h] BYREF
  _QWORD v11[2]; // [rsp+20h] [rbp-68h] BYREF
  _QWORD v12[2]; // [rsp+30h] [rbp-58h] BYREF
  _QWORD v13[9]; // [rsp+40h] [rbp-48h] BYREF

  v5 = (__int64)&a5[1].m128i_i64[1];
  v13[3] = __readfsqword(0x28u);
  sub_122EA0((__int64)&a5[1].m128i_i64[1], (__int64)a3);
  v8 = sub_3C52A0(a2, (__int64)a5, a3);
  if ( v8 )
  {
    if ( !(unsigned __int8)sub_135900(a2, v8, 9u) )
    {
      if ( !under_debugger )
        sub_37EA20(0);
      BUG();
    }
  }
  else
  {
    a5[6].m128i_i32[2] = 0;
    v11[1] = 0;
    v11[0] = 0xFFFFFFFF00000000LL;
    v12[0] = 0xFFFFFFFF00000000LL;
    v12[1] = 0;
    v13[0] = 0xFFFFFFFF00000000LL;
    v13[1] = 0;
    sub_32D4D0(v10, -1);
    sub_122EA0(v5, (__int64)v10);
    sub_11A960((__int64)v13);
    sub_11A960((__int64)v12);
    sub_11A960((__int64)v11);
    sub_135340(a2, a5, 9u);
  }
  return 1;
}
