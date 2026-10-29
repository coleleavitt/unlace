__int64 __fastcall sub_9A7B10(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rax
  __int64 v4; // rbx
  int v5; // r13d
  __int64 v6; // r14
  __int64 v7; // rdx
  int *v8; // rax
  int *v9; // rcx

  v2 = *(_QWORD *)(a1 + 568);
  if ( v2 )
  {
    v3 = *(unsigned int *)(v2 - 4);
    if ( (_DWORD)v3 )
    {
      v4 = 0;
      v5 = 0;
      v6 = 24 * v3;
      while ( 1 )
      {
        v7 = v4 + v2;
        if ( *(_DWORD *)(v7 + 12) == -1 )
          goto LABEL_6;
        v8 = *(int **)v7;
        if ( *(_QWORD *)v7 )
        {
          v9 = &v8[10 * *(v8 - 1)];
          if ( v8 != v9 )
            break;
        }
LABEL_13:
        v4 += 24;
        ++v5;
        if ( v6 == v4 )
          goto LABEL_14;
LABEL_7:
        v2 = *(_QWORD *)(a1 + 568);
      }
      while ( 1 )
      {
        while ( v8[8] == -1 )
        {
          v8 += 10;
          if ( v9 == v8 )
            goto LABEL_13;
        }
        if ( (v8[1] & 1) != 0 || *v8 != 1 && *v8 != -1 || (v8[5] & 1) != 0 || v8[4] != 1 )
          break;
        v8 += 10;
        if ( v9 == v8 )
          goto LABEL_13;
      }
      sub_9A76B0(a1, a2, (int **)v7);
LABEL_6:
      v4 += 24;
      if ( v6 == v4 )
        goto LABEL_14;
      goto LABEL_7;
    }
  }
LABEL_14:
  std::__ostream_insert<char,std::char_traits<char>>();
  std::ostream::_M_insert<unsigned long>();
  return std::__ostream_insert<char,std::char_traits<char>>();
}

