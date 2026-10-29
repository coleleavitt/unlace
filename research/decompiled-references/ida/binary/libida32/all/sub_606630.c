_BOOL8 __fastcall sub_606630(int a1, const void *a2, __int64 a3, __int64 a4)
{
  size_t v5; // rax
  size_t v6; // r12
  int v7; // eax
  void *v9; // rdi
  size_t v10; // r13
  __int64 v11; // rax

  *(_DWORD *)(a4 + 48) = a1;
  if ( a2 && (v5 = strlen((const char *)a2), (v6 = v5) != 0) )
  {
    v9 = *(void **)(a4 + 56);
    v10 = v5 + 1;
    if ( *(_QWORD *)(a4 + 72) < v5 + 1 )
    {
      v11 = qvector_reserve(a4 + 56, *(_QWORD *)(a4 + 56), v10, 1);
      *(_QWORD *)(a4 + 56) = v11;
      v9 = (void *)v11;
    }
    *(_QWORD *)(a4 + 64) = v10;
    memmove(v9, a2, v6);
    *(_BYTE *)(*(_QWORD *)(a4 + 56) + v6) = 0;
  }
  else
  {
    *(_QWORD *)(a4 + 64) = 0;
  }
  v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a4 + 8LL))(a4);
  *(_DWORD *)(a4 + 84) = v7;
  return v7 == 0;
}

