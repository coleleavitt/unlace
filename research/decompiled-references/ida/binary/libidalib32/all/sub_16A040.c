__int64 __fastcall sub_16A040(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rbx
  char ShiftState; // al
  int v4; // r9d
  _QWORD v6[15]; // [rsp+0h] [rbp-78h] BYREF

  v6[11] = __readfsqword(0x28u);
  v1 = sub_1092C0(a1);
  if ( v1 )
  {
    v2 = v1;
    ShiftState = getShiftState();
    sub_168960((__int64)v6, v2, 10, *(_DWORD *)(v2 + 912) | (2 * ((ShiftState & 3) != 0)), -32768, v4);
    sub_153DB0(v2, 1);
    sub_1692D0((__int64)v6);
  }
  return 1;
}

