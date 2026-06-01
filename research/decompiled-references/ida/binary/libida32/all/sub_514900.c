__int64 __fastcall sub_514900(__int64 a1)
{
  __int64 result; // rax

  result = operator new(0x40u);
  *(_QWORD *)result = a1;
  *(_QWORD *)(result + 56) = 0;
  *(_OWORD *)(result + 8) = 0;
  *(_OWORD *)(result + 24) = 0;
  *(_OWORD *)(result + 40) = 0;
  return result;
}

