__int64 __fastcall sub_2E130(_QWORD *a1, __int64 a2)
{
  __int64 result; // rax

  result = operator new(0xC8u);
  *(_OWORD *)result = 0;
  *(_OWORD *)(result + 72) = 0;
  *(_OWORD *)(result + 104) = 0;
  *(_OWORD *)(result + 136) = 0;
  *(_OWORD *)(result + 160) = 0;
  *(_QWORD *)(result + 16) = 0;
  *(_QWORD *)(result + 24) = 0;
  *(_QWORD *)(result + 32) = -1;
  *(_QWORD *)(result + 40) = 0;
  *(_QWORD *)(result + 48) = -1;
  *(_QWORD *)(result + 56) = a2;
  *(_QWORD *)(result + 64) = 0;
  *(_QWORD *)(result + 88) = 0;
  *(_BYTE *)(result + 96) = 0;
  *(_QWORD *)(result + 120) = 0;
  *(_BYTE *)(result + 128) = 0;
  *(_QWORD *)(result + 152) = 0;
  *(_QWORD *)(result + 192) = -1;
  *a1 = result;
  *(_OWORD *)(result + 176) = -1;
  return result;
}

