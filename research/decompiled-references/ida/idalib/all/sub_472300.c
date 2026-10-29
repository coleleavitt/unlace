void __fastcall sub_472300(__int64 a1, const char *a2)
{
  size_t v2; // rax
  size_t v3; // r13
  size_t v4; // r12
  void *v5; // rax

  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  if ( a2 )
  {
    v2 = strlen(a2);
    v3 = v2 + 1;
    v4 = v2;
    v5 = (void *)qvector_reserve(a1, 0, v2 + 1, 1);
    *(_QWORD *)(a1 + 8) = v3;
    *(_QWORD *)a1 = v5;
    memmove(v5, a2, v4);
    *(_BYTE *)(*(_QWORD *)a1 + v4) = 0;
  }
}
