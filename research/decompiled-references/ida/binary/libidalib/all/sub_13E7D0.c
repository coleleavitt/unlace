__int64 __fastcall sub_13E7D0(TSystemInit *this)
{
  void *v2; // rdi

  v2 = *((void **)this + 23);
  if ( v2 )
    operator delete(v2, 8u);
  return TSystemInit::suspend(this);
}

