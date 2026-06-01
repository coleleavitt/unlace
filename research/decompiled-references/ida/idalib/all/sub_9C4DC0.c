void __fastcall sub_9C4DC0(_QWORD *a1)
{
  __int64 v2; // rsi
  void *v3; // rdi

  v2 = *((unsigned int *)a1 + 12);
  *a1 = &off_2B40578;
  operator delete(a1[4], 16 * v2, 8);
  v3 = (void *)a1[1];
  if ( v3 )
    operator delete(v3);
  nullsub_331();
  operator delete(a1, 0x38u);
}
