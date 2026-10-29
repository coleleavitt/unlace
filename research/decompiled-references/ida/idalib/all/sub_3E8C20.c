const char *__fastcall sub_3E8C20(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  const char *result; // rax
  __int64 v6; // rdi
  __int64 v7; // rbx

  v4 = *(_QWORD *)(*(_QWORD *)a1 + 1552LL);
  result = &byte_22F0C30;
  v6 = *(_QWORD *)(v4 + 48);
  v7 = v4 + 32;
  if ( v6 != v7 )
  {
    while ( (_DWORD)a2 != *(_DWORD *)(v6 + 56) )
    {
      v6 = std::_Rb_tree_increment(v6, a2, a3, a4);
      if ( v7 == v6 )
        return &byte_22F0C30;
    }
    result = haystack;
    if ( *(_QWORD *)(v6 + 40) )
      return *(const char **)(v6 + 32);
  }
  return result;
}
