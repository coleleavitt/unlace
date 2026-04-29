__int64 sub_3FD6E0()
{
  __int64 result; // rax

  result = operator new(0x40u);
  *(_QWORD *)(result + 48) = 0;
  *(_DWORD *)(result + 56) = -1;
  *(_OWORD *)result = 0;
  *(_OWORD *)(result + 16) = 0;
  *(_OWORD *)(result + 32) = 0;
  return result;
}
