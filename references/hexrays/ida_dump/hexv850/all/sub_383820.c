__int64 __fastcall sub_383820(__int64 a1)
{
  __int64 result; // rax

  result = operator new(0x60u);
  *(_OWORD *)(result + 16) = 0;
  *(_OWORD *)(result + 48) = 0;
  *(_QWORD *)result = a1;
  *(_DWORD *)(result + 8) = 0;
  *(_BYTE *)(result + 12) = 0;
  *(_QWORD *)(result + 32) = 0;
  *(_QWORD *)(result + 40) = 0;
  *(_QWORD *)(result + 72) = 0;
  *(_QWORD *)(result + 64) = off_4B9EB8;
  *(_OWORD *)(result + 80) = -1;
  return result;
}
