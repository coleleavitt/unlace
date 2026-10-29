__int64 __fastcall sub_16A110(__int64 a1)
{
  __int64 v1; // rax
  _DWORD *v2; // rbx
  char ShiftState; // al
  int v4; // r9d
  _QWORD v6[15]; // [rsp+0h] [rbp-78h] BYREF

  v6[11] = __readfsqword(0x28u);
  v1 = sub_109550(a1);
  if ( v1 )
  {
    v2 = (_DWORD *)v1;
    ShiftState = getShiftState();
    sub_169320((__int64)v6, (int)v2, 10, v2[230] | (2 * ((ShiftState & 3) != 0)), -32768, v4);
    (*(void (__fastcall **)(_DWORD *, __int64, __int64))(*(_QWORD *)v2 + 256LL))(v2, 1, 1);
    sub_169C90((__int64)v6);
  }
  return 1;
}

