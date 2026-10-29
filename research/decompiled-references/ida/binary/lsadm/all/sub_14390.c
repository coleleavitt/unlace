__int64 (__fastcall **__fastcall sub_14390(
        __int64 a1,
        __int64 a2,
        char a3,
        unsigned __int8 a4,
        unsigned int a5,
        __int64 a6,
        __int64 a7))()
{
  sub_1A250(a1, a4, a5, a6, a7);
  *(_QWORD *)(a1 + 96) = a2;
  *(_BYTE *)(a1 + 104) = a3;
  *(_DWORD *)(a1 + 108) = 2;
  *(_QWORD *)a1 = &off_79C08;
  sub_1A2A0(a1, &qword_79900, 18);
  *(_BYTE *)(a1 + 112) = 0;
  *(_QWORD *)a1 = &off_79AC0;
  return &off_79AC0;
}

