const char *__fastcall sub_3E29A0(__int64 a1, int a2)
{
  __int64 v2; // rbx
  const char *result; // rax
  __int64 v4; // rdi
  __int64 v5; // rbx

  v2 = *(_QWORD *)(*(_QWORD *)a1 + 1360LL);
  result = &byte_22CD811;
  v4 = *(_QWORD *)(v2 + 48);
  v5 = v2 + 32;
  if ( v4 != v5 )
  {
    while ( a2 != *(_DWORD *)(v4 + 56) )
    {
      v4 = std::_Rb_tree_increment();
      if ( v5 == v4 )
        return &byte_22CD811;
    }
    result = haystack;
    if ( *(_QWORD *)(v4 + 40) )
      return *(const char **)(v4 + 32);
  }
  return result;
}

