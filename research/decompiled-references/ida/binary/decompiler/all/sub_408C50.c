__int64 __fastcall sub_408C50(__int64 a1)
{
  __int64 result; // rax

  result = operator new(0x70u);
  *(_OWORD *)(result + 8) = -1;
  *(_QWORD *)result = a1;
  *(_QWORD *)(result + 64) = &off_4DE098;
  *(_QWORD *)(result + 24) = -1;
  *(_DWORD *)(result + 32) = -1;
  *(_QWORD *)(result + 40) = 0;
  *(_QWORD *)(result + 48) = 0;
  *(_QWORD *)(result + 56) = 0;
  *(_QWORD *)(result + 72) = a1;
  *(_QWORD *)(result + 80) = 0;
  *(_WORD *)(result + 104) = 0;
  *(_OWORD *)(result + 88) = 0;
  return result;
}
