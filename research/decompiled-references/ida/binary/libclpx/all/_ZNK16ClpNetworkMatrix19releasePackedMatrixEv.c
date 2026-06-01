void __fastcall ClpNetworkMatrix::releasePackedMatrix(ClpNetworkMatrix *this)
{
  __int64 v2; // rdi
  void *v3; // rdi

  v2 = *((_QWORD *)this + 11);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  v3 = *((void **)this + 12);
  if ( v3 )
    operator delete[](v3);
  *((_QWORD *)this + 11) = 0;
  *((_QWORD *)this + 12) = 0;
}

