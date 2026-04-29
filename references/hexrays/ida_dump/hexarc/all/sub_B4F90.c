__int64 sub_B4F90()
{
  __int64 result; // rax

  result = operator new(0x20u);
  *(_QWORD *)result = 0;
  *(_BYTE *)(result + 24) = 0;
  *(_OWORD *)(result + 8) = 0;
  return result;
}
