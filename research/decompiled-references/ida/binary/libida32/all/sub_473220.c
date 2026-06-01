_DWORD *__fastcall sub_473220(__int64 a1, unsigned int a2)
{
  _DWORD *result; // rax

  result = (_DWORD *)get_func(a2);
  if ( result )
  {
    if ( *result != a2 )
      return (_DWORD *)sub_445720(*(_QWORD *)(a1 + 32), 3u, *(_DWORD *)(a1 + 12), 0xFFFFFFFF, result);
  }
  return result;
}

