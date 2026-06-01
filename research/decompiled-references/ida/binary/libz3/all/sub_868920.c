__int64 __fastcall sub_868920(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  __int64 v3; // rax
  __int64 v5; // rbx

  v2 = *(_QWORD *)(a1 + 8);
  v3 = *(_QWORD *)(a1 + 16);
  if ( v3 != *(_QWORD *)(v2 + 856) )
  {
    if ( *(_QWORD *)(v2 + 864) == v3 && !*(_BYTE *)(a1 + 32) )
    {
      std::__ostream_insert<char,std::char_traits<char>>();
      v5 = sub_160EBE0(a2, a1);
      std::__ostream_insert<char,std::char_traits<char>>();
      return v5;
    }
LABEL_3:
    sub_1648CA0(a2, *(_QWORD *)(a1 + 8), *(_QWORD *)a1, 2);
    std::__ostream_insert<char,std::char_traits<char>>();
    sub_1648CA0(a2, v2, *(_QWORD *)(a1 + 16), 2);
    return a2;
  }
  if ( *(_BYTE *)(a1 + 32) )
    goto LABEL_3;
  return sub_160EBE0(a2, a1);
}

