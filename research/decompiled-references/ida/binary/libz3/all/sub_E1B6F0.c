__int64 __fastcall sub_E1B6F0(__int64 a1, __int64 a2, char a3)
{
  __int64 result; // rax

  result = sub_186B270(0x28u);
  *(_DWORD *)(result + 8) = 0;
  *(_QWORD *)result = off_1C5C9E8;
  *(_QWORD *)(result + 16) = a1;
  *(_QWORD *)(result + 24) = a2;
  *(_BYTE *)(result + 32) = a3;
  return result;
}

