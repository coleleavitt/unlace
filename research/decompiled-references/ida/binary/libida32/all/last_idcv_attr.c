const char *__fastcall last_idcv_attr(__int64 a1)
{
  const char *result; // rax
  __int64 v2; // rdx

  result = nullptr;
  if ( a1 && *(_BYTE *)a1 == 5 && *(_QWORD *)(*(_QWORD *)(a1 + 8) + 24LL) != *(_QWORD *)(a1 + 8) + 8LL )
  {
    v2 = std::_Rb_tree_decrement();
    result = haystack;
    if ( *(_QWORD *)(v2 + 40) )
      return *(const char **)(v2 + 32);
  }
  return result;
}

