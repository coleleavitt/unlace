char *__fastcall sub_B6F990(__int64 a1)
{
  int v1; // ebp
  char *result; // rax
  __int64 v3; // r12

  v1 = sub_B39350(*(_QWORD *)(a1 + 8), *(_DWORD *)(a1 + 16));
  sub_B39480(*(_QWORD *)(a1 + 8), *(_DWORD *)(a1 + 16));
  result = *(char **)(a1 + 8);
  v3 = *((_QWORD *)result + 1);
  if ( result != (char *)v3 )
  {
    result = (char *)sub_B39350(*((_QWORD *)result + 1), *(_DWORD *)(a1 + 16));
    if ( v1 == (_DWORD)result )
      return sub_B39480(v3, *(_DWORD *)(a1 + 16));
  }
  return result;
}

