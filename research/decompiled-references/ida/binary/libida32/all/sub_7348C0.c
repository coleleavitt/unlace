void __fastcall sub_7348C0(void **a1)
{
  if ( a1 )
  {
    qmutex_free(*a1);
    operator delete(a1, 0x10018u);
  }
}

