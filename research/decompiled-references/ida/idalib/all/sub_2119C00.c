__int64 __fastcall sub_2119C00(__int64 a1, int a2, int a3, __int16 a4, char a5, char a6, int a7)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 8);
  *(_DWORD *)(result + 1764) = a3;
  *(_DWORD *)(result + 1760) = a2;
  *(_WORD *)(result + 1768) = a4;
  *(_BYTE *)(result + 1770) = a5;
  *(_BYTE *)(result + 1771) = a6;
  *(_DWORD *)(result + 1772) = a7;
  *(_BYTE *)(result + 1776) = 1;
  return result;
}
