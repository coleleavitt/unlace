void __fastcall sub_7DCEA0(_QWORD *a1, __int64 a2)
{
  size_t v2; // r12
  void *v3; // rax

  v2 = *(_QWORD *)(a2 + 8);
  if ( v2 )
  {
    v3 = (void *)qalloc_or_throw(*(_QWORD *)(a2 + 8));
    a1[2] = v2;
    *a1 = v3;
    memcpy(v3, *(const void **)a2, v2);
    a1[1] = v2;
  }
}
