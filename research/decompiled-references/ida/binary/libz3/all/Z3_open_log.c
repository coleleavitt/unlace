__int64 Z3_open_log()
{
  std::ostream *v0; // rbx
  __int64 v1; // rbx
  __int64 v2; // r13
  __int64 v3; // r15
  __int64 v4; // rdi
  __int64 v5; // rsi
  void (__fastcall **v6)(__int64, __int64); // rax
  int v7; // edx
  char v8; // al
  unsigned int v9; // edx
  std::ostream *v11; // rbx
  _BYTE *v12; // rbp
  char v13; // si
  std::ostream *v14; // rax
  __int64 (__fastcall *v15)(__int64, unsigned int); // rax

  if ( ptr )
  {
    byte_1C7EBA0 = 0;
    v0 = ptr;
    (**(void (__fastcall ***)(std::ostream *))ptr)(ptr);
    sub_186B220(v0);
    ptr = nullptr;
  }
  v1 = sub_186B270(0x200u);
  std::ios_base::ios_base((std::ios_base *)(v1 + 248));
  *(_OWORD *)(v1 + 480) = 0;
  *(_OWORD *)(v1 + 496) = 0;
  *(_QWORD *)(v1 + 248) = (char *)&`vtable for'std::ios + 16;
  *(_WORD *)(v1 + 472) = 0;
  *(_QWORD *)(v1 + 464) = 0;
  v2 = `VTT for'std::ofstream[1];
  v3 = `VTT for'std::ofstream[2];
  v4 = *(_QWORD *)(v2 - 24);
  *(_QWORD *)v1 = v2;
  *(_QWORD *)(v1 + v4) = v3;
  std::ios::init();
  *(_QWORD *)v1 = (char *)&`vtable for'std::ofstream + 24;
  *(_QWORD *)(v1 + 248) = (char *)&`vtable for'std::ofstream + 64;
  std::filebuf::basic_filebuf();
  std::ios::init();
  if ( std::filebuf::open() )
    v5 = 0;
  else
    v5 = *(_DWORD *)(v1 + *(_QWORD *)(*(_QWORD *)v1 - 24LL) + 32) | 4u;
  std::ios::clear();
  v6 = *(void (__fastcall ***)(__int64, __int64))v1;
  ptr = (std::ostream *)v1;
  v7 = *(_DWORD *)((char *)*(v6 - 3) + v1 + 32);
  if ( (v7 & 1) != 0 || (v7 & 5) != 0 )
  {
    (*v6)(v1, v5);
    sub_186B220((void *)v1);
    v8 = 0;
    v9 = 0;
    ptr = nullptr;
  }
  else
  {
    std::__ostream_insert<char,std::char_traits<char>>();
    std::ostream::operator<<();
    std::__ostream_insert<char,std::char_traits<char>>();
    std::ostream::operator<<();
    std::__ostream_insert<char,std::char_traits<char>>();
    std::ostream::operator<<();
    std::__ostream_insert<char,std::char_traits<char>>();
    v11 = (std::ostream *)std::ostream::operator<<();
    if ( *(_QWORD *)((char *)v11 + *(_QWORD *)(*(_QWORD *)v11 - 24LL) + 16) )
      v11 = (std::ostream *)std::__ostream_insert<char,std::char_traits<char>>();
    else
      std::ostream::put(v11, 34);
    v12 = *(_BYTE **)((char *)v11 + *(_QWORD *)(*(_QWORD *)v11 - 24LL) + 240);
    if ( !v12 )
      std::__throw_bad_cast();
    if ( v12[56] )
    {
      v13 = v12[67];
    }
    else
    {
      std::ctype<char>::_M_widen_init();
      v13 = 10;
      v15 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)v12 + 48LL);
      if ( v15 != sub_26BE90 )
        v13 = v15((__int64)v12, 10u);
    }
    v14 = (std::ostream *)std::ostream::put(v11, v13);
    std::ostream::flush(v14);
    v8 = 1;
    v9 = 1;
  }
  byte_1C7EBA0 = v8;
  return v9;
}

