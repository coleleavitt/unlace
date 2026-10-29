_QWORD *__fastcall sub_487A80(__int64 a1, __int64 a2)
{
  _QWORD *result; // rax

  result = (_QWORD *)get_func(a2);
  if ( result )
  {
    if ( *result != a2 )
      return (_QWORD *)sub_459560(*(_QWORD *)(a1 + 32), 3u, *(_DWORD *)(a1 + 12), 0xFFFFFFFF, result);
  }
  return result;
}
