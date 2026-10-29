void __fastcall std::vector<unsigned int>::reserve(__int64 a1, unsigned __int64 a2)
{
  void *v3; // rdi
  __int64 v4; // r12
  char *v5; // rax
  char *v6; // rbp
  signed __int64 v7; // rdx

  if ( a2 >> 61 )
    std::__throw_length_error("vector::reserve");
  v3 = *(void **)a1;
  if ( a2 > (__int64)(*(_QWORD *)(a1 + 16) - (_QWORD)v3) >> 2 )
  {
    v4 = *(_QWORD *)(a1 + 8) - (_QWORD)v3;
    if ( a2 )
    {
      v5 = (char *)operator new(4 * a2);
      v3 = *(void **)a1;
      v6 = v5;
      v7 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
    }
    else
    {
      v7 = *(_QWORD *)(a1 + 8) - (_QWORD)v3;
      v6 = nullptr;
    }
    if ( v7 > 0 )
    {
      memmove(v6, v3, v7);
      v3 = *(void **)a1;
    }
    if ( v3 )
      operator delete(v3, *(_QWORD *)(a1 + 16) - (_QWORD)v3);
    *(_QWORD *)a1 = v6;
    *(_QWORD *)(a1 + 8) = &v6[v4];
    *(_QWORD *)(a1 + 16) = &v6[4 * a2];
  }
}
