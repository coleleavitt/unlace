__int64 __fastcall sub_62F2B0(__int64 a1)
{
  __int64 result; // rax

  result = operator new(0x50u);
  *(_QWORD *)result = a1;
  *(_QWORD *)(result + 8) = 0;
  *(_QWORD *)(result + 48) = 0;
  *(_OWORD *)(result + 16) = 0;
  *(_OWORD *)(result + 32) = 0;
  *(_OWORD *)(result + 56) = 0;
  return result;
}

