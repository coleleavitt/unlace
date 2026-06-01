__int64 __fastcall sub_50E020(__int64 a1)
{
  __int64 result; // rax

  result = operator new(0xB0u);
  *(_OWORD *)(result + 8) = -1;
  *(_QWORD *)result = a1;
  *(_QWORD *)(result + 24) = 0;
  *(_QWORD *)(result + 48) = 0;
  *(_DWORD *)(result + 80) = 0;
  *(_QWORD *)(result + 88) = 0;
  *(_QWORD *)(result + 96) = result + 80;
  *(_QWORD *)(result + 104) = result + 80;
  *(_QWORD *)(result + 112) = 0;
  *(_QWORD *)(result + 120) = 0;
  *(_QWORD *)(result + 144) = 0;
  *(_BYTE *)(result + 168) = 0;
  *(_OWORD *)(result + 32) = 0;
  *(_OWORD *)(result + 56) = 0;
  *(_OWORD *)(result + 128) = 0;
  *(_OWORD *)(result + 152) = 0;
  return result;
}
