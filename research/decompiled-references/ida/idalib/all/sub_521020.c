__int64 __fastcall sub_521020(__int64 a1)
{
  __int64 result; // rax

  result = operator new(0x90u);
  *(_QWORD *)result = a1;
  *(_QWORD *)(result + 128) = result + 72;
  *(_QWORD *)(result + 8) = -1;
  *(_QWORD *)(result + 16) = 0;
  *(_QWORD *)(result + 40) = 0;
  *(_DWORD *)(result + 64) = 0;
  *(_QWORD *)(result + 72) = 0;
  *(_QWORD *)(result + 80) = 4;
  *(_QWORD *)(result + 88) = 0;
  *(_QWORD *)(result + 112) = off_2B2DA00;
  *(_QWORD *)(result + 120) = result;
  *(_QWORD *)(result + 136) = result + 80;
  *(_OWORD *)(result + 24) = 0;
  *(_OWORD *)(result + 48) = 0;
  *(_OWORD *)(result + 96) = 0;
  return result;
}
