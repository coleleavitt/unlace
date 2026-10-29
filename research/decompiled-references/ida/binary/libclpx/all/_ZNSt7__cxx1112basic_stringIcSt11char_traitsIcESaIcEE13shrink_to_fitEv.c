unsigned __int64 __fastcall std::string::shrink_to_fit(_QWORD *a1)
{
  unsigned __int64 result; // rax

  result = 15;
  if ( (_QWORD *)*a1 != a1 + 2 )
    result = a1[2];
  if ( a1[1] < result )
    return std::string::reserve(a1, 0);
  return result;
}

