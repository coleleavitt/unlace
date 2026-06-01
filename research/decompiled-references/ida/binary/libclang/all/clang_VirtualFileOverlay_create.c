_OWORD *clang_VirtualFileOverlay_create()
{
  _OWORD *result; // rax

  result = (_OWORD *)operator new(0x40u);
  result[2] = 0;
  *result = 0;
  *((_QWORD *)result + 4) = result + 3;
  result[1] = 0;
  result[3] = 0;
  return result;
}

