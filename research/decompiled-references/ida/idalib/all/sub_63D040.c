__int64 __fastcall sub_63D040(__int64 a1)
{
  __int64 result; // rax

  result = operator new(0x30u);
  *(_QWORD *)result = a1;
  *(_QWORD *)(result + 8) = -1;
  *(_QWORD *)(result + 16) = 0;
  *(_DWORD *)(result + 40) = 0;
  *(_OWORD *)(result + 24) = 0;
  return result;
}
