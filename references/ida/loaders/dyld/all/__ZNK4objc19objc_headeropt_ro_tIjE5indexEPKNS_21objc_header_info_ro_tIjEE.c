unsigned __int64 __fastcall objc::objc_headeropt_ro_t<unsigned int>::index(_DWORD *a1, unsigned __int64 a2)
{
  _DWORD *v2; // x8
  unsigned __int64 v3; // x10

  if ( !*a1 )
    objc::objc_headeropt_ro_t<unsigned int>::index();
  v2 = a1 + 2;
  if ( (unsigned __int64)(a1 + 2) > a2
    || (v3 = (unsigned int)a1[1], (unsigned __int64)v2 + (unsigned int)(v3 * *a1) <= a2) )
  {
    objc::objc_headeropt_ro_t<unsigned int>::index();
  }
  return (a2 - (unsigned __int64)v2) / v3;
}
