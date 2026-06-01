unsigned __int8 __fastcall sub_444330(unsigned int a1, unsigned __int64 a2)
{
  unsigned __int8 result; // al
  __int64 v3; // rax
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  int v6; // edx
  __int64 v7; // rdx
  unsigned __int64 v8; // rbx
  __int64 v9; // rax

  if ( a1 == 1 )
  {
    v6 = (unsigned __int8)getinf_flag(45, 16) == 0 ? 24 : 27;
    if ( (_DWORD)a2 != 171 && (_DWORD)a2 != 64 && (_DWORD)a2 != 177 && (_DWORD)a2 != 61 )
      return v6 >= (int)a2 && (int)a2 > 20;
    return 1;
  }
  if ( a1 > 1 )
  {
    result = 0;
    if ( a1 == 2 || a1 - 4 <= 4 )
      return result;
    if ( (_DWORD)a2 != 11 )
    {
      v4 = (unsigned int)(a2 - 30);
      if ( (unsigned int)v4 <= 0x3C )
      {
        v5 = 0x100007F800000001LL;
        return _bittest64(&v5, v4);
      }
      return result;
    }
    return 1;
  }
  if ( (int)a2 > 2999 )
    return 1;
  if ( (int)a2 <= 35 )
  {
    if ( (a2 & 0x80000000) == 0LL )
    {
      v3 = 0xD01FFF40DLL;
      if ( _bittest64(&v3, a2) )
        return 1;
      if ( (_DWORD)a2 == 1 )
      {
        sub_444260((__int64)&xmmword_2CA1760, a2);
        return 1;
      }
    }
    return 0;
  }
  if ( (int)a2 > 99 )
  {
    v8 = (unsigned int)(a2 - 2001);
    if ( (unsigned int)v8 <= 0x13 )
    {
      v9 = 729083;
      return _bittest64(&v9, v8);
    }
    return 0;
  }
  v7 = 0x66B874400386CB81LL;
  result = _bittest64(&v7, (unsigned int)(a2 - 37));
  if ( (_DWORD)a2 == 36 )
    return 0;
  return result;
}

