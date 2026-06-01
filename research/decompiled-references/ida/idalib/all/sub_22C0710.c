void *__fastcall sub_22C0710(__int64 a1, __int64 a2)
{
  void *result; // rax
  __int64 v5; // rdi
  void *v6; // rax
  int v7; // edx
  const void *v8; // rsi

  result = (void *)operator delete(*(_QWORD *)a1, 16LL * *(unsigned int *)(a1 + 16), 8);
  v5 = *(unsigned int *)(a2 + 16);
  *(_DWORD *)(a1 + 16) = v5;
  if ( (_DWORD)v5 )
  {
    v6 = (void *)sub_22300B0(16 * v5, 8);
    v7 = *(_DWORD *)(a2 + 8);
    *(_QWORD *)a1 = v6;
    v8 = *(const void **)a2;
    *(_DWORD *)(a1 + 8) = v7;
    *(_DWORD *)(a1 + 12) = *(_DWORD *)(a2 + 12);
    return memcpy(v6, v8, 16LL * *(unsigned int *)(a1 + 16));
  }
  else
  {
    *(_QWORD *)a1 = 0;
    *(_QWORD *)(a1 + 8) = 0;
  }
  return result;
}
