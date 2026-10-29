void *__fastcall sub_1096E20(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  void *result; // rax
  int v6; // eax

  result = sub_100B2E0(a1, a2, a3, a4);
  if ( !*(_BYTE *)(a1 + 516) || !*(_BYTE *)(a1 + 517) )
  {
    v6 = *(unsigned __int8 *)(a3 + 212);
    *(_BYTE *)(a3 + 20) &= 0xCFu;
    result = (void *)(v6 & 0xFFFFFFFC | 1);
    *(_BYTE *)(a3 + 212) = (_BYTE)result;
  }
  return result;
}

