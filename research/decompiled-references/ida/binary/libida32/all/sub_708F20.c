void __fastcall sub_708F20(void **a1)
{
  void *v2; // rdi

  sub_708E30(a1, (__int64)&unk_2C57BE0);
  sub_708E30(a1, (__int64)&unk_2C57C40);
  qmutex_free(a1[1]);
  if ( a1 )
  {
    v2 = a1[3];
    if ( v2 )
    {
      a1[4] = nullptr;
      qfree(v2);
    }
    operator delete(a1, 0x38u);
  }
}

