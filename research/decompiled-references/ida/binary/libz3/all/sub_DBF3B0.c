__int64 __fastcall sub_DBF3B0(std::ostream *this)
{
  _BYTE *v1; // rbp
  char v2; // si
  std::ostream *v3; // rax
  __int64 (__fastcall *v5)(__int64, unsigned int); // rax

  v1 = *(_BYTE **)((char *)this + *(_QWORD *)(*(_QWORD *)this - 24LL) + 240);
  if ( !v1 )
    std::__throw_bad_cast();
  if ( v1[56] )
  {
    v2 = v1[67];
  }
  else
  {
    std::ctype<char>::_M_widen_init();
    v2 = 10;
    v5 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)v1 + 48LL);
    if ( v5 != sub_26BE90 )
      v2 = v5((__int64)v1, 10u);
  }
  v3 = (std::ostream *)std::ostream::put(this, v2);
  return std::ostream::flush(v3);
}

