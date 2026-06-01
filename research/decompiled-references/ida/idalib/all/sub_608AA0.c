__int64 __fastcall sub_608AA0(__int64 a1)
{
  __int64 result; // rax

  result = operator new(0x70u);
  *(_QWORD *)result = a1;
  *(_QWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 40) = 0;
  *(_QWORD *)(result + 48) = 0;
  *(_QWORD *)(result + 56) = result + 40;
  *(_QWORD *)(result + 64) = result + 40;
  *(_QWORD *)(result + 72) = 0;
  *(_QWORD *)(result + 80) = 0;
  *(_QWORD *)(result + 104) = 0;
  *(_OWORD *)(result + 16) = 0;
  *(_OWORD *)(result + 88) = 0;
  return result;
}
