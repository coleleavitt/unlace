__int64 __fastcall sub_578760(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned int v3; // ebp
  __int64 result; // rax
  __int64 v5; // rdx

  v2 = *(_QWORD *)(a1 + 32);
  if ( !v2 || !*(_DWORD *)(v2 - 4) )
    return std::__ostream_insert<char,std::char_traits<char>>();
  v3 = 0;
  std::__ostream_insert<char,std::char_traits<char>>();
  for ( result = *(_QWORD *)(a1 + 32); result; result = *(_QWORD *)(a1 + 32) )
  {
    if ( v3 >= *(_DWORD *)(result - 4) )
      break;
    v5 = v3++;
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(result + 8 * v5) + 120LL))(*(_QWORD *)(result + 8 * v5), a2);
  }
  return result;
}

