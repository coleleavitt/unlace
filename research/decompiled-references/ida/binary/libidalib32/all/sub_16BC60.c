__int64 __fastcall sub_16BC60(__int64 a1)
{
  __int64 v1; // rax
  _DWORD *v2; // rbx
  char ShiftState; // al
  int v4; // r9d
  __int64 (__fastcall *v5)(__int64, int); // rax
  int v7; // [rsp+Ch] [rbp-7Ch] BYREF
  _BYTE v8[88]; // [rsp+10h] [rbp-78h] BYREF
  unsigned __int64 v9; // [rsp+68h] [rbp-20h]

  v9 = __readfsqword(0x28u);
  v1 = sub_1092C0(a1);
  if ( v1 )
  {
    v2 = (_DWORD *)v1;
    ShiftState = getShiftState();
    sub_168960((__int64)v8, (int)v2, 10, v2[228] | (2 * ((ShiftState & 3) != 0)), -32768, v4);
    v5 = *(__int64 (__fastcall **)(__int64, int))(*(_QWORD *)v2 + 264LL);
    if ( v5 == sub_16B3C0 )
    {
      v7 = 0;
      sub_16ACA0((__int64)v2, 0, (unsigned __int64)&v7);
    }
    else
    {
      v5((__int64)v2, 1);
    }
    sub_1692D0((__int64)v8);
  }
  return 1;
}

