__int64 __fastcall sub_386C00(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  size_t v4; // r12
  void *v6; // rax

  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  v4 = *(_QWORD *)(a2 + 24);
  if ( v4 )
  {
    v6 = (void *)qalloc_or_throw(*(_QWORD *)(a2 + 24), a2, a3, a4);
    *(_QWORD *)(a1 + 16) = v4;
    *(_QWORD *)a1 = v6;
    memcpy(v6, *(const void **)(a2 + 16), v4);
    *(_QWORD *)(a1 + 8) = v4;
  }
  return a1;
}
