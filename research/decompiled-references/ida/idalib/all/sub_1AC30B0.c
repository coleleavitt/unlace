void **__fastcall sub_1AC30B0(__int64 a1, __int64 a2)
{
  void **result; // rax

  *(_BYTE *)a1 = *(_BYTE *)a2;
  *(_QWORD *)(a1 + 8) = a1 + 24;
  *(_QWORD *)(a1 + 16) = 0x600000000LL;
  result = (void **)*(unsigned int *)(a2 + 16);
  if ( (_DWORD)result )
    return sub_1AC2FD0((void **)(a1 + 8), (char **)(a2 + 8));
  return result;
}
