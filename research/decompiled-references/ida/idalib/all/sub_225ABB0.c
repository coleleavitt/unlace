__int64 __fastcall sub_225ABB0(
        __int64 a1,
        _QWORD **a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        int a7,
        __int64 a8,
        int a9,
        unsigned int a10)
{
  sub_2253560((_QWORD *)a1, a2);
  *(_DWORD *)(a1 + 56) = a6;
  *(_QWORD *)(a1 + 48) = a5;
  *(_DWORD *)(a1 + 60) = a7;
  *(_QWORD *)(a1 + 32) = a3;
  *(_QWORD *)(a1 + 64) = a8;
  *(_QWORD *)(a1 + 40) = a4;
  *(_DWORD *)(a1 + 72) = a9;
  *(_BYTE *)(a1 + 80) = 0;
  *(_DWORD *)(a1 + 76) = a10;
  return a10;
}
