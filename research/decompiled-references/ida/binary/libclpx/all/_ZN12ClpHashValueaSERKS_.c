__int64 __fastcall ClpHashValue::operator=(__int64 a1, _DWORD *a2)
{
  int v3; // edx
  int v4; // eax
  void *v5; // rdi

  if ( (_DWORD *)a1 == a2 )
    return a1;
  v3 = a2[6];
  *(_DWORD *)(a1 + 16) = a2[4];
  v4 = a2[5];
  *(_DWORD *)(a1 + 24) = v3;
  *(_DWORD *)(a1 + 20) = v4;
  v5 = *(void **)(a1 + 8);
  if ( v5 )
  {
    operator delete[](v5);
    v4 = *(_DWORD *)(a1 + 20);
  }
  if ( v4 )
  {
    if ( (unsigned __int64)v4 > 0x7FFFFFFFFFFFFFFLL )
      __cxa_throw_bad_array_new_length();
    operator new[](16LL * v4);
    return a1;
  }
  *(_QWORD *)(a1 + 8) = 0;
  return a1;
}

