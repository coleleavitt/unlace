__int64 __fastcall sub_4E6710(__int64 a1)
{
  __int64 result; // rax

  result = operator new(0x48u);
  *(_QWORD *)result = a1;
  *(_QWORD *)(result + 8) = 0;
  *(_QWORD *)(result + 16) = 0;
  *(_BYTE *)(result + 40) = 0;
  *(_QWORD *)(result + 48) = 0;
  *(_OWORD *)(result + 24) = 0;
  *(_OWORD *)(result + 56) = 0;
  return result;
}
