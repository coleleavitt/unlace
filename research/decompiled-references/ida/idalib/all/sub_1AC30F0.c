void **__fastcall sub_1AC30F0(__int64 a1, __int64 a2)
{
  void **result; // rax

  *(_QWORD *)a1 = *(_QWORD *)a2;
  *(_DWORD *)(a1 + 8) = *(_DWORD *)(a2 + 8);
  *(_QWORD *)(a1 + 16) = a1 + 32;
  *(_QWORD *)(a1 + 24) = 0x600000000LL;
  result = (void **)*(unsigned int *)(a2 + 24);
  if ( (_DWORD)result )
    return sub_1AC2FD0((void **)(a1 + 16), (char **)(a2 + 16));
  return result;
}
