_DWORD *__fastcall sub_6B5AE0(__int64 a1, __int64 *a2)
{
  __int64 v2; // rdx
  _DWORD *result; // rax

  v2 = *a2;
  *a2 = 0;
  result = *(_DWORD **)(a1 + 18200);
  *(_QWORD *)(a1 + 18200) = v2;
  if ( result )
  {
    if ( result[2]-- == 1 )
      return (_DWORD *)(*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)result + 8LL))(result);
  }
  return result;
}

