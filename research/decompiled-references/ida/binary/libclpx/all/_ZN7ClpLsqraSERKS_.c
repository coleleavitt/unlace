int *__fastcall ClpLsqr::operator=(int *a1, __int64 a2)
{
  void *v3; // rdi
  const void *v4; // r13
  unsigned __int64 v5; // r12
  unsigned __int64 v6; // r12
  void *v7; // rax
  void *v8; // rcx
  int v9; // eax
  __int64 v10; // xmm0_8
  __int64 v11; // rax

  if ( a1 != (int *)a2 )
  {
    v3 = *((void **)a1 + 2);
    if ( v3 )
      operator delete[](v3);
    v4 = *(const void **)(a2 + 16);
    v5 = *a1;
    if ( v4 )
    {
      if ( v5 > 0xFFFFFFFFFFFFFFFLL )
        __cxa_throw_bad_array_new_length();
      v6 = 8 * v5;
      v7 = (void *)operator new[](v6);
      v8 = memcpy(v7, v4, v6);
    }
    else
    {
      v8 = nullptr;
    }
    v9 = *(_DWORD *)a2;
    v10 = *(_QWORD *)(a2 + 24);
    *((_QWORD *)a1 + 2) = v8;
    *a1 = v9;
    a1[1] = *(_DWORD *)(a2 + 4);
    v11 = *(_QWORD *)(a2 + 8);
    *((_QWORD *)a1 + 3) = v10;
    *((_QWORD *)a1 + 1) = v11;
  }
  return a1;
}

