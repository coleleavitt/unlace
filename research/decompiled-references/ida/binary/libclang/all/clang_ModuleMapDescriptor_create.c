_OWORD *clang_ModuleMapDescriptor_create()
{
  _OWORD *result; // rax

  result = (_OWORD *)operator new(0x40u);
  *result = 0;
  *(_QWORD *)result = result + 1;
  result[2] = 0;
  result[1] = 0;
  *((_QWORD *)result + 4) = result + 3;
  result[3] = 0;
  return result;
}

