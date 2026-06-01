_QWORD *__fastcall sub_20D4560(_DWORD *a1, _QWORD *a2)
{
  _QWORD *v2; // r12
  size_t v3; // rax
  const void *v4; // rdx
  _QWORD *result; // rax
  size_t v6; // rax
  size_t v7; // rax
  size_t v8; // rax

  v2 = sub_20D1ED0(a2, 5u, "std::");
  v3 = (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 40LL))(a1);
  result = sub_20D1ED0(v2, v3, v4);
  if ( a1[3] > 1u )
  {
    v6 = j__strlen("<char, std::char_traits<char>");
    sub_20D1ED0(a2, v6, "<char, std::char_traits<char>");
    if ( a1[3] == 2 )
    {
      v8 = j__strlen(", std::allocator<char>");
      sub_20D1ED0(a2, v8, ", std::allocator<char>");
    }
    v7 = j__strlen(">");
    return sub_20D1ED0(a2, v7, ">");
  }
  return result;
}
