__int64 __fastcall sub_5C7040(__int64 a1)
{
  __int64 result; // rax

  result = operator new(0x40u);
  *(_OWORD *)(result + 8) = -1;
  *(_QWORD *)result = a1;
  *(_QWORD *)(result + 24) = 0;
  *(_QWORD *)(result + 48) = 35;
  *(_BYTE *)(result + 56) = 0;
  *(_OWORD *)(result + 32) = 0;
  return result;
}
