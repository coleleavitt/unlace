void *__fastcall sub_B700A0(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5, unsigned int a6, void *src)
{
  size_t v7; // rbx
  void *v8; // rax

  *(_QWORD *)a1 = a3;
  *(_DWORD *)(a1 + 24) = a6;
  *(_DWORD *)(a1 + 8) = a4;
  v7 = 8LL * a6;
  *(_QWORD *)(a1 + 16) = a5;
  *(_QWORD *)(a1 + 32) = 0;
  v8 = (void *)sub_180C100(a2, v7);
  *(_QWORD *)(a1 + 32) = v8;
  return memcpy(v8, src, v7);
}

