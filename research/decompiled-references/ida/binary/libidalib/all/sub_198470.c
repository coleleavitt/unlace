void sub_198470()
{
  __int64 **v0; // rbp
  __int64 **v1; // r12
  __int64 *v2; // rbx
  __int64 v3; // rax
  void (__fastcall *v4)(__int64, unsigned __int64); // rax

  v0 = (__int64 **)qword_256B00;
  v1 = (__int64 **)(qword_256B00 + 8 * xmmword_256B08);
  if ( v1 != (__int64 **)qword_256B00 )
  {
    do
    {
      while ( 1 )
      {
        v2 = *v0;
        v3 = **v0;
        *((_BYTE *)*v0 + 2120) = 0;
        v4 = *(void (__fastcall **)(__int64, unsigned __int64))(v3 + 328);
        if ( v4 != sub_198430 )
          break;
        ++v0;
        sub_17F9E0((__int64)(v2 + 20), 0xFFFFFFFFFFFFFFFFLL);
        *((_DWORD *)v2 + 527) &= 0xFFFFFF87;
        if ( v1 == v0 )
          return;
      }
      ++v0;
      v4((__int64)v2, -1uLL);
    }
    while ( v1 != v0 );
  }
}

