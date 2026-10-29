__int64 __fastcall sub_37D7A0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rbp

  v2 = sub_186B270(0x30u);
  *(_DWORD *)(v2 + 8) = 0;
  *(_QWORD *)(v2 + 16) = 0;
  *(_BYTE *)(v2 + 24) = 1;
  *(_QWORD *)(v2 + 32) = a1;
  *(_QWORD *)v2 = &off_1C64D38;
  v3 = sub_186B270(0xD8u);
  sub_D8DFF0(v3, a1, a2);
  *(_QWORD *)(v2 + 40) = v3;
  return v2;
}

