size_t __fastcall sub_3E70(__int64 a1, const void *a2, size_t a3)
{
  size_t v4; // rax
  void *v5; // rdi
  size_t v6; // rbp

  v4 = *(_QWORD *)(a1 + 16);
  v5 = *(void **)(a1 + 8);
  if ( a3 <= v4 )
    v4 = a3;
  v6 = v4;
  memcpy(v5, a2, v4);
  *(_QWORD *)(a1 + 8) += v6;
  *(_QWORD *)(a1 + 16) -= v6;
  return v6;
}

