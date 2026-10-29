_DWORD *__fastcall sub_12E9C00(__int64 a1, __int64 a2)
{
  _DWORD *result; // rax

  if ( a2 )
    ++*(_DWORD *)(a2 + 200);
  result = *(_DWORD **)(a1 + 40);
  *(_QWORD *)(a1 + 40) = a2;
  if ( result )
  {
    if ( result[50]-- == 1 )
      return (_DWORD *)(*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)result + 8LL))(result);
  }
  return result;
}
