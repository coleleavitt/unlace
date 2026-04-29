_QWORD *__fastcall sub_17D4C0(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, unsigned __int64 a5, int a6, __int64 a7)
{
  int v8; // edx
  unsigned __int8 v13[32]; // [rsp+20h] [rbp-98h] BYREF
  _QWORD v14[2]; // [rsp+40h] [rbp-78h] BYREF
  _QWORD v15[2]; // [rsp+50h] [rbp-68h] BYREF
  _QWORD v16[11]; // [rsp+60h] [rbp-58h] BYREF

  v16[3] = __readfsqword(0x28u);
  v8 = *(_DWORD *)(a4 + 4);
  if ( v8 != *(_DWORD *)(a2 + 84) )
  {
    if ( !under_debugger )
      sub_37B760(51575);
    BUG();
  }
  if ( (unsigned __int8)sub_124490(a5, a2, v8, 0) )
  {
    if ( a6 != 1 )
    {
      v14[1] = 0;
      v14[0] = 0xFFFFFFFF00000000LL;
      v15[0] = 0xFFFFFFFF00000000LL;
      v15[1] = 0;
      v16[0] = 0xFFFFFFFF00000000LL;
      v16[1] = 0;
      sub_329320(v13, a3);
      *(_DWORD *)v13 = 14;
      sub_11EAC0((__int64)v14, (unsigned __int8 *)a5);
      sub_11A350((__int64)v15, a2, a6, *(_DWORD *)(a5 + 4), -1, 0);
      HIDWORD(v16[0]) = *(_DWORD *)(a5 + 4);
      sub_11FC20(a5, v13);
      sub_1166E0((__int64)v16);
      sub_1166E0((__int64)v15);
      sub_1166E0((__int64)v14);
    }
    sub_9C2F0((__int64)a1, a2, a3, a4, a5, a7);
  }
  else
  {
    a1[1] = 0;
    *a1 = 0xFFFFFFFF00000000LL;
  }
  return a1;
}
