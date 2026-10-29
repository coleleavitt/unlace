const char *__fastcall last_idcv_attr(__int64 a1)
{
  const char *result; // rax
  __int64 v2; // rdx
  __int64 v3; // rdx

  result = nullptr;
  if ( a1 )
  {
    if ( *(_BYTE *)a1 == 5 )
    {
      v2 = *(_QWORD *)(a1 + 8);
      if ( *(_QWORD *)(v2 + 24) != v2 + 8 )
      {
        v3 = std::_Rb_tree_decrement(v2 + 8);
        result = haystack;
        if ( *(_QWORD *)(v3 + 40) )
          return *(const char **)(v3 + 32);
      }
    }
  }
  return result;
}
