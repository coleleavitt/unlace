__int64 sub_7CF570()
{
  __int64 result; // rax

  result = operator new(0x68u);
  *(_QWORD *)(result + 8) = 0;
  *(_QWORD *)(result + 16) = 0;
  *(_DWORD *)(result + 24) = -1;
  *(_QWORD *)result = &off_2B3AB00;
  *(_QWORD *)(result + 96) = 0;
  *(_QWORD *)(result + 64) = &byte_22F0C30;
  *(_QWORD *)(result + 72) = 0xFFFFFFFF00000000LL;
  *(_OWORD *)(result + 48) = 0;
  *(_OWORD *)(result + 32) = 0;
  *(_OWORD *)(result + 80) = 0;
  return result;
}
