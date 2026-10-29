__int64 __fastcall sub_197530(__int64 a1, __int64 *a2, int a3)
{
  __int64 v4; // rbx

  v4 = operator new(0x48u);
  *(_QWORD *)v4 = &off_235CB0;
  *(_QWORD *)(v4 + 8) = 0;
  *(_QWORD *)(v4 + 32) = 0;
  *(_BYTE *)(v4 + 56) = 0;
  *(_DWORD *)(v4 + 64) = 0;
  *(_OWORD *)(v4 + 16) = 0;
  *(_OWORD *)(v4 + 40) = 0;
  sub_17F540((__int64 *)(v4 + 8), a2);
  *(_DWORD *)(v4 + 64) = a3;
  return v4;
}

