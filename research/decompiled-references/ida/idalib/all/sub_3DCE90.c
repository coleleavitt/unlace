__int64 sub_3DCE90()
{
  __int64 result; // rax

  result = operator new(0x50u);
  *(_DWORD *)(result + 8) = 0;
  *(_QWORD *)(result + 16) = 0;
  *(_QWORD *)(result + 24) = result + 8;
  *(_QWORD *)(result + 32) = result + 8;
  *(_QWORD *)(result + 40) = 0;
  *(_QWORD *)(result + 48) = 0;
  *(_BYTE *)(result + 72) = 0;
  *(_OWORD *)(result + 56) = 0;
  return result;
}
