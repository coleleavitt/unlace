__int64 __fastcall sub_1187C0(unsigned int a1, __int64 a2, unsigned __int8 a3, double a4, __int64 a5, __int64 a6)
{
  if ( a2 == -1 )
  {
    sub_8F660((__int64)"%a: has no file mapping (original: %02llX patched: %02llX)...skipping...\n", a4, a1, a3);
    ++*(_QWORD *)(a6 + 16);
    return 0;
  }
  else
  {
    ++*(_QWORD *)(a6 + 24);
    qfseek();
    nbits();
    if ( (unsigned __int8)getinf_flag() )
      swap_value();
    qfwrite();
    return 0;
  }
}

