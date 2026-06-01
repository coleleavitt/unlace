__int64 __fastcall objc::objc_headeropt_rw_t<unsigned long>::isLoaded(unsigned int *a1, unsigned int a2)
{
  if ( *a1 <= a2 )
    objc::objc_headeropt_rw_t<unsigned long>::isLoaded();
  return *(unsigned int *)((char *)a1 + a1[1] * a2 + 8) & 1;
}
