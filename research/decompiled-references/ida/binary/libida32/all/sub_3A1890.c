__int64 __fastcall sub_3A1890(_QWORD *a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  unsigned int v4; // r14d
  unsigned __int64 v6; // rbp
  __int64 v7; // rbx
  int v8; // r13d
  __int64 result; // rax
  unsigned int v10; // ebx
  __int64 v11; // rax
  __int64 v12; // [rsp+8h] [rbp-40h]

  v4 = a2;
  v6 = a4;
  v7 = 0;
  while ( a4 != dword_2389780[v7] )
  {
    if ( ++v7 == 14 )
    {
      if ( !under_debugger )
        interr(44);
      BUG();
    }
  }
  v8 = v7;
  v12 = *(_QWORD *)(*a1 + 1344LL);
  result = getinf(10);
  if ( ((unsigned int)result & *(_DWORD *)&asc_2389740[4 * (int)v7]) == 0 )
    return result;
  if ( a3 >= a2 )
  {
    result = a3;
    a3 = a2;
    v4 = result;
  }
  v10 = -2;
  if ( v4 != -1 )
    v10 = v4;
  if ( v10 == a3 )
    return result;
  if ( (*(_BYTE *)(a1[2] + 12LL) & 8) != 0 && v10 == a3 + 1 )
  {
    if ( (unsigned int)v6 > 0x23 )
      return sub_39FD00(v12, v8, a3, v10);
    v11 = 0x840100000LL;
    if ( _bittest64(&v11, v6) )
    {
      a3 &= ~1u;
      v10 = a3 + 1;
    }
  }
  if ( (_DWORD)v6 == 30 )
  {
    result = sub_3B9AA0(a1, a3, 4);
    if ( (~(_WORD)result & 0x600) == 0 && (result & 0x10000000) != 0 )
      return result;
    result = get_aflags(a3);
    if ( (result & 0x20000000) != 0 )
      return result;
    result = get_aflags(a3);
    if ( (result & 0x10000000) != 0 )
      return result;
    return sub_39FD00(v12, v8, a3, v10);
  }
  if ( (int)v6 > 30 )
  {
    if ( (_DWORD)v6 == 35 )
    {
      result = sub_4EE820(a1 + 203, a3);
      if ( result )
        return result;
    }
    return sub_39FD00(v12, v8, a3, v10);
  }
  if ( (_DWORD)v6 == 10 )
  {
    sub_3A15E0(a1, a3, v10);
    return sub_39FD00(v12, v8, a3, v10);
  }
  if ( (_DWORD)v6 != 20 )
    return sub_39FD00(v12, v8, a3, v10);
  result = ~sub_3B9AA0(a1, a3, 4);
  if ( (result & 0x600) != 0 )
  {
    result = get_aflags(a3);
    if ( (result & 0x10000000) == 0 )
    {
      if ( *(_DWORD *)(*(_QWORD *)(*a1 + 1344LL) + 112LL) == 25 )
        v8 = 2;
      return sub_39FD00(v12, v8, a3, v10);
    }
  }
  return result;
}

