__int64 sub_559ED0()
{
  __int64 result; // rax

  result = operator new(0x50u);
  *(_QWORD *)(result + 8) = 0;
  *(_QWORD *)result = off_2B2E3A8;
  *(_QWORD *)(result + 16) = 0;
  *(_QWORD *)(result + 48) = 0;
  *(_QWORD *)(result + 40) = &off_2B2E380;
  *(_QWORD *)(result + 56) = result;
  *(_QWORD *)(result + 64) = 0;
  *(_BYTE *)(result + 72) = 0;
  *(_OWORD *)(result + 24) = 0;
  return result;
}
