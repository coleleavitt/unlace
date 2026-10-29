__int64 __fastcall sub_4F68C0(__int64 a1)
{
  __int64 result; // rax

  result = operator new(0xA8u);
  *(_QWORD *)result = a1;
  *(_QWORD *)(result + 8) = -1;
  *(_QWORD *)(result + 16) = 0;
  *(_QWORD *)(result + 40) = 0;
  *(_DWORD *)(result + 72) = 0;
  *(_QWORD *)(result + 80) = 0;
  *(_QWORD *)(result + 88) = result + 72;
  *(_QWORD *)(result + 96) = result + 72;
  *(_QWORD *)(result + 104) = 0;
  *(_QWORD *)(result + 112) = 0;
  *(_QWORD *)(result + 136) = 0;
  *(_BYTE *)(result + 160) = 0;
  *(_OWORD *)(result + 24) = 0;
  *(_OWORD *)(result + 48) = 0;
  *(_OWORD *)(result + 120) = 0;
  *(_OWORD *)(result + 144) = 0;
  return result;
}

