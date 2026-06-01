__int64 __fastcall sub_16A970(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rbx
  char ShiftState; // al
  int v4; // r9d
  _QWORD v6[15]; // [rsp+0h] [rbp-78h] BYREF

  v6[11] = __readfsqword(0x28u);
  v1 = sub_109550(a1);
  if ( v1 )
  {
    v2 = v1;
    ShiftState = getShiftState();
    sub_169320((__int64)v6, v2, 10, *(_DWORD *)(v2 + 920) | (2 * ((ShiftState & 3) != 0)), -32768, v4);
    sub_1545B0(v2, 0);
    sub_169C90((__int64)v6);
  }
  return 1;
}

