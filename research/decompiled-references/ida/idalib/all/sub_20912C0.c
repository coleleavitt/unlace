__int64 __fastcall sub_20912C0(__int64 a1, unsigned int a2)
{
  char *v3; // rax
  size_t v4; // rdx
  void *v5; // rdi
  size_t v6; // rbp

  v3 = sub_2090FC0(a2);
  v5 = *(void **)(a1 + 32);
  v6 = v4;
  if ( *(_QWORD *)(a1 + 24) - (_QWORD)v5 < v4 )
  {
    sub_227BF10(a1, v3, v4);
    return a1;
  }
  else
  {
    if ( v4 )
    {
      memcpy(v5, v3, v4);
      *(_QWORD *)(a1 + 32) += v6;
    }
    return a1;
  }
}
