size_t __fastcall sub_629D60(__int64 a1, void *a2, size_t a3)
{
  size_t v3; // rax
  size_t v4; // rbp

  v3 = *(_QWORD *)(a1 + 16);
  if ( a3 <= v3 )
    v3 = a3;
  v4 = v3;
  memcpy(a2, *(const void **)(a1 + 8), v3);
  *(_QWORD *)(a1 + 8) += v4;
  *(_QWORD *)(a1 + 16) -= v4;
  return v4;
}

