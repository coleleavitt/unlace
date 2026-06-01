__int64 __fastcall sub_41F7C0(__int64 a1)
{
  __int64 result; // rax

  result = operator new(0x60u);
  *(_QWORD *)result = a1;
  *(_QWORD *)(result + 8) = 0;
  *(_QWORD *)(result + 32) = 5;
  *(_QWORD *)(result + 40) = result + 88;
  *(_QWORD *)(result + 48) = 1;
  *(_QWORD *)(result + 56) = 0;
  *(_QWORD *)(result + 64) = 0;
  *(_DWORD *)(result + 72) = 1065353216;
  *(_QWORD *)(result + 80) = 0;
  *(_QWORD *)(result + 88) = 0;
  *(_OWORD *)(result + 16) = 0;
  return result;
}

