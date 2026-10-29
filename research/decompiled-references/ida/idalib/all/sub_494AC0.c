__int64 __fastcall sub_494AC0(__int64 a1, __int64 a2)
{
  size_t v2; // r12
  void *v4; // rax

  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  v2 = *(_QWORD *)(a2 + 80);
  if ( v2 )
  {
    v4 = (void *)qalloc_or_throw(*(_QWORD *)(a2 + 80));
    *(_QWORD *)(a1 + 16) = v2;
    *(_QWORD *)a1 = v4;
    memcpy(v4, *(const void **)(a2 + 72), v2);
    *(_QWORD *)(a1 + 8) = v2;
  }
  return a1;
}
