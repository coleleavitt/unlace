__int64 (__fastcall **__fastcall sub_812B80(
        __int64 a1,
        __int64 a2,
        char a3,
        char a4,
        int a5,
        __int64 a6,
        __int64 a7))()
{
  sub_7C2540(a1, a4, a5, a6, a7);
  *(_QWORD *)(a1 + 96) = a2;
  *(_BYTE *)(a1 + 104) = a3;
  *(_DWORD *)(a1 + 108) = 2;
  *(_QWORD *)a1 = &off_2BFBD68;
  sub_7C25A0((_QWORD *)a1, byte_2B3C700, 0x12u);
  *(_BYTE *)(a1 + 112) = 0;
  *(_QWORD *)a1 = &off_2BFC000;
  return &off_2BFC000;
}
