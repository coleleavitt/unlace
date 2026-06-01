_OWORD *sub_20C09B0()
{
  _OWORD *result; // rax

  result = (_OWORD *)operator new(0x30u);
  result[1] = 0;
  *result = 0;
  result[2] = 0;
  *((_DWORD *)result + 4) = 1;
  return result;
}
