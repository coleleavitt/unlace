void __fastcall sub_9C4D80(__int64 a1)
{
  __int64 v1; // rsi
  void *v2; // rdi

  v1 = *(unsigned int *)(a1 + 48);
  *(_QWORD *)a1 = &off_2B40578;
  operator delete(*(_QWORD *)(a1 + 32), 16 * v1, 8);
  v2 = *(void **)(a1 + 8);
  if ( v2 )
    operator delete(v2);
  nullsub_331();
}
