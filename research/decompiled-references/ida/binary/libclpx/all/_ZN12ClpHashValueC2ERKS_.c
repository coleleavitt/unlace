// Alternative name is '_ZN12ClpHashValueC1ERKS_'
void __fastcall ClpHashValue::ClpHashValue(ClpHashValue *this, const ClpHashValue *a2)
{
  int v2; // edx
  int v3; // eax

  v2 = *((_DWORD *)a2 + 6);
  *((_QWORD *)this + 1) = 0;
  *(_QWORD *)this = off_4D0A20;
  *((_DWORD *)this + 4) = *((_DWORD *)a2 + 4);
  v3 = *((_DWORD *)a2 + 5);
  *((_DWORD *)this + 6) = v2;
  *((_DWORD *)this + 5) = v3;
  if ( v3 )
  {
    if ( (unsigned __int64)v3 > 0x7FFFFFFFFFFFFFFLL )
      __cxa_throw_bad_array_new_length();
    operator new[](16LL * v3);
  }
}

