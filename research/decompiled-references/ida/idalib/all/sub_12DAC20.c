_DWORD *__fastcall sub_12DAC20(__int64 a1, __int64 a2, int a3)
{
  _DWORD *result; // rax

  result = *(_DWORD **)(a1 + 64);
  *result = a3;
  return result;
}
