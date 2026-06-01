void __fastcall ClpModel::stopPermanentArrays(ClpModel *this)
{
  void *v2; // rdi
  void *v3; // rdi

  *((_DWORD *)this + 84) &= ~0x10000u;
  *((_QWORD *)this + 60) = -1;
  v2 = *((void **)this + 84);
  if ( *((void **)this + 28) != v2 )
  {
    if ( v2 )
      operator delete[](v2);
    v3 = *((void **)this + 85);
    if ( v3 )
      operator delete[](v3);
  }
  *((_QWORD *)this + 84) = 0;
  *((_QWORD *)this + 85) = 0;
}

