__int64 __fastcall sub_67A8F0(__int64 a1)
{
  __int64 result; // rax

  result = operator new(0x60u);
  *(_QWORD *)result = a1;
  *(_DWORD *)(result + 8) = -1;
  *(_QWORD *)(result + 16) = 0;
  *(_QWORD *)(result + 40) = 0;
  *(_QWORD *)(result + 64) = 0;
  *(_QWORD *)(result + 72) = 0;
  *(_OWORD *)(result + 24) = 0;
  *(_OWORD *)(result + 48) = 0;
  *(_OWORD *)(result + 80) = 0;
  return result;
}

