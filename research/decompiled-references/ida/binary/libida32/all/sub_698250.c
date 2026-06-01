__int64 __fastcall sub_698250(__int64 a1)
{
  __int64 result; // rax

  result = operator new(0xC8u);
  *(_WORD *)(result + 8) = 256;
  *(_QWORD *)result = a1;
  *(_BYTE *)(result + 10) = 0;
  *(_QWORD *)(result + 16) = 0;
  *(_DWORD *)(result + 40) = -1;
  *(_QWORD *)(result + 48) = 0;
  *(_QWORD *)(result + 72) = 0;
  *(_DWORD *)(result + 96) = 0;
  *(_BYTE *)(result + 100) = 0x80;
  *(_DWORD *)(result + 112) = 0;
  *(_QWORD *)(result + 120) = 0;
  *(_QWORD *)(result + 128) = result + 112;
  *(_QWORD *)(result + 136) = result + 112;
  *(_QWORD *)(result + 144) = 0;
  *(_QWORD *)(result + 152) = 0;
  *(_QWORD *)(result + 176) = 0;
  *(_OWORD *)(result + 24) = 0;
  *(_OWORD *)(result + 56) = 0;
  *(_OWORD *)(result + 80) = 0;
  *(_OWORD *)(result + 160) = 0;
  *(_OWORD *)(result + 184) = 0;
  return result;
}

