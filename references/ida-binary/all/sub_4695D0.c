void __fastcall sub_4695D0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r12
  void *v5; // rax

  *(_QWORD *)a2 = 0;
  *(_OWORD *)(a2 + 8) = 0;
  v3 = *(_QWORD *)(a3 + 8);
  if ( v3 )
  {
    v5 = (void *)qalloc_or_throw(8 * v3);
    *(_QWORD *)(a2 + 16) = v3;
    *(_QWORD *)a2 = v5;
    memcpy(v5, *(const void **)a3, 8 * v3);
    *(_QWORD *)(a2 + 8) = v3;
  }
}
