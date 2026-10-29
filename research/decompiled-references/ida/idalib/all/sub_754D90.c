void __fastcall sub_754D90(void **a1)
{
  if ( a1 )
  {
    qmutex_free(*a1);
    operator delete(a1, (unsigned __int64)&stru_10018);
  }
}
