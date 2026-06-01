void __fastcall __noreturn ClpSimplex::setToBaseModel(ClpSimplex *this, ClpSimplex *a2)
{
  if ( !a2 )
    a2 = *((ClpSimplex **)this + 175);
  if ( (*((_BYTE *)a2 + 338) & 1) != 0 && *((int *)this + 121) < 0 )
  {
    *((_DWORD *)this + 84) |= 0x10000u;
    *((_DWORD *)this + 121) = *((_DWORD *)a2 + 121);
    *((_DWORD *)this + 120) = *((_DWORD *)a2 + 120);
    abort();
  }
  abort();
}

