__int64 __fastcall sub_8F7A60(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v5; // rdi
  _QWORD *v6; // rbx
  _QWORD *v7; // r12
  __int64 v8; // rsi
  __int64 v9; // rdi
  int v11; // esi
  int v12; // eax

  v3 = *(_QWORD *)(*(_QWORD *)(a1 + 104) + 912LL);
  if ( v3 && !*(_BYTE *)(a1 + 8612) )
  {
    std::__ostream_insert<char,std::char_traits<char>>();
    v5 = std::ostream::_M_insert<unsigned long>();
    std::__ostream_insert<char,std::char_traits<char>>();
    if ( (unsigned __int8)sub_186AF30(v5, "\n") )
      goto LABEL_4;
  }
  else if ( (unsigned __int8)sub_186AF30(v3, a2) )
  {
LABEL_4:
    *(_DWORD *)(a1 + 10308) = 2;
    return 0;
  }
  sub_8EAAE0(a1);
  v6 = *(_QWORD **)(a1 + 9376);
  if ( v6 )
  {
    v7 = &v6[*((unsigned int *)v6 - 1)];
    if ( v6 >= v7 )
      goto LABEL_14;
    do
    {
      while ( 1 )
      {
        v8 = *v6;
        if ( *v6 )
        {
          v9 = *(_QWORD *)(a1 + 9368);
          if ( (*(_DWORD *)(v8 + 8))-- == 1 )
            break;
        }
        if ( ++v6 >= v7 )
          goto LABEL_13;
      }
      sub_15D7BC0(v9, v8);
      ++v6;
    }
    while ( v6 < v7 );
LABEL_13:
    v6 = *(_QWORD **)(a1 + 9376);
    if ( v6 )
LABEL_14:
      *((_DWORD *)v6 - 1) = 0;
  }
  v11 = *(_DWORD *)(a1 + 9464);
  v12 = *(_DWORD *)(a1 + 9468);
  ++*(_DWORD *)(a1 + 92);
  if ( v11 != v12 )
    sub_8F7780(a1, v11 - v12);
  sub_982B00(*(_QWORD *)(a1 + 9000));
  return 1;
}

