__int64 __fastcall sub_9CAF30(__int64 a1, __int64 a2, std::ostream *a3)
{
  size_t v5; // rax
  __int64 v6; // rax
  size_t v7; // rax
  __int64 *v8; // rbx
  __int64 *v9; // r14
  __int64 v10; // rsi
  __int64 *v11; // rbx
  __int64 *v12; // r14
  __int64 v13; // rsi
  __int64 v14; // rsi

  v5 = j__strlen("BB_");
  std::__ostream_insert<char,std::char_traits<char>>(a3, "BB_", v5);
  v6 = std::ostream::operator<<(a3, *(_DWORD *)(a2 + 32) & 0x7FFFFFFF);
  std::operator<<<std::char_traits<char>>(v6, ":");
  if ( *(_QWORD *)(a2 + 128) )
  {
    v7 = j__strlen(" BB_");
    std::__ostream_insert<char,std::char_traits<char>>(a3, " BB_", v7);
    std::ostream::operator<<(a3, *(_DWORD *)(*(_QWORD *)(a2 + 128) + 32LL) & 0x7FFFFFFF);
  }
  std::operator<<<std::char_traits<char>>(a3, "\n");
  v8 = *(__int64 **)(a2 + 64);
  v9 = &v8[*(_QWORD *)(a2 + 72)];
  while ( v9 != v8 )
  {
    v10 = *v8++;
    sub_9CAE30(a1, v10, a3);
  }
  v11 = *(__int64 **)(a2 + 88);
  v12 = &v11[*(_QWORD *)(a2 + 96)];
  while ( v12 != v11 )
  {
    v13 = *v11++;
    sub_9CAE30(a1, v13, a3);
  }
  v14 = *(_QWORD *)(a2 + 112);
  if ( v14 )
  {
    sub_9CB080(a1, v14, a3, 6, 0);
    std::operator<<<std::char_traits<char>>(a3, ";");
    std::operator<<<std::char_traits<char>>(a3, "\n");
  }
  return std::operator<<<std::char_traits<char>>(a3, "\n");
}
