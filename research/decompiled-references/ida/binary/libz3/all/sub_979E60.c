void __fastcall sub_979E60(__int64 a1, __int64 a2)
{
  __int64 *v3; // r15
  __int64 v4; // r11
  __int64 *v5; // r14
  __int64 v6; // rsi
  __int64 v7; // rbp
  unsigned __int64 v8; // rax
  __int64 *v9; // rax
  _BYTE v10[16]; // [rsp+10h] [rbp-68h] BYREF
  _BYTE v11[88]; // [rsp+20h] [rbp-58h] BYREF

  v3 = *(__int64 **)(a1 + 24);
  v4 = 2LL * *(unsigned int *)(a1 + 32);
  v5 = &v3[v4];
  if ( v3 != &v3[v4] )
  {
    while ( (unsigned __int64)*v3 <= 1 )
    {
      v3 += 2;
      if ( v5 == v3 )
        return;
    }
    if ( v5 != v3 )
    {
      v6 = *v3;
      do
      {
        v7 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL * *((unsigned int *)v3 + 2));
        sub_1606360(v10, v6, *(_QWORD *)a1, 0, 0, 0);
        sub_160E8B0(a2, v10);
        std::__ostream_insert<char,std::char_traits<char>>();
        sub_18572D0(v11);
        v8 = v7 & 7;
        if ( v8 == 2 )
        {
          sub_979BB0(a1, a2, v7);
        }
        else if ( v8 > 2 )
        {
          if ( v8 == 3 )
            sub_979D80(a1, a2, v7);
        }
        else if ( (v7 & 7) != 0 )
        {
          sub_979A40(a1, a2, v7);
        }
        else
        {
          sub_979CA0(a1, a2, v7);
        }
        v9 = v3 + 2;
        if ( v5 == v3 + 2 )
          break;
        while ( 1 )
        {
          v6 = *v9;
          v3 = v9;
          if ( (unsigned __int64)*v9 > 1 )
            break;
          v9 += 2;
          if ( v5 == v9 )
            return;
        }
      }
      while ( v5 != v9 );
    }
  }
}

