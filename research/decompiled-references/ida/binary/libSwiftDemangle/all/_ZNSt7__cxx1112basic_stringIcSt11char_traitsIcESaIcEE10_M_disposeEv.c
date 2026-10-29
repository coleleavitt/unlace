void __fastcall std::string::_M_dispose(void **a1)
{
  if ( *a1 != a1 + 2 )
    operator delete(*a1);
}

