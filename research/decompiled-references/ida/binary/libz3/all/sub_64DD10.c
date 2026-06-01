__int64 __fastcall sub_64DD10(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 *v6; // rcx
  int v7; // edi
  unsigned int v8; // edx
  __int64 *v9; // rsi
  __int64 v10; // rdx
  __int64 *v11; // r8
  __int64 *i; // rax
  __int64 v13; // rdx
  __int64 v14; // rbx
  __int64 v16; // rax
  __int64 v17; // [rsp+8h] [rbp-1D0h] BYREF
  void *v18; // [rsp+10h] [rbp-1C8h] BYREF
  __int64 v19; // [rsp+20h] [rbp-1B8h] BYREF
  _BYTE v20[16]; // [rsp+30h] [rbp-1A8h] BYREF
  __int64 v21; // [rsp+40h] [rbp-198h] BYREF
  _BYTE v22[400]; // [rsp+48h] [rbp-190h] BYREF

  v4 = a3;
  v5 = *(unsigned int *)(a1 + 2344);
  v6 = *(__int64 **)(a1 + 2336);
  v7 = *(_DWORD *)(a2 + 12);
  v8 = v5 - 1;
  v5 *= 16;
  v9 = (__int64 *)((char *)v6 + v5);
  v10 = 16LL * (v7 & v8);
  v11 = &v6[(unsigned __int64)v10 / 8];
  if ( v10 != v5 )
  {
    for ( i = &v6[(unsigned __int64)v10 / 8]; v9 != i; i += 2 )
    {
      v13 = *i;
      if ( (unsigned __int64)*i > 1 )
      {
        if ( *(_DWORD *)(v13 + 12) == v7 && a2 == v13 )
          return *(_QWORD *)(i[1] + 8 * v4);
      }
      else if ( !v13 )
      {
        goto LABEL_8;
      }
    }
  }
  for ( ; v11 != v6; v6 += 2 )
  {
    v16 = *v6;
    if ( (unsigned __int64)*v6 > 1 )
    {
      if ( *(_DWORD *)(v16 + 12) == v7 && a2 == v16 )
      {
        i = v6;
        return *(_QWORD *)(i[1] + 8 * v4);
      }
    }
    else if ( !v16 )
    {
      break;
    }
  }
LABEL_8:
  std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::basic_stringstream(v20);
  LOBYTE(v18) = 35;
  if ( *(_QWORD *)&v22[*(_QWORD *)(v21 - 24) + 8] )
    std::__ostream_insert<char,std::char_traits<char>>();
  else
    std::ostream::put((std::ostream *)&v21, 35);
  std::ostream::_M_insert<unsigned long>();
  std::stringbuf::str(&v18, v22);
  sub_180C5A0(&v17, v18);
  v14 = v17;
  if ( v18 != &v19 )
    operator delete(v18, v19 + 1);
  std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::~basic_stringstream();
  return v14;
}

