_QWORD *__fastcall sub_1084830(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rcx
  int v4; // edx
  _QWORD *result; // rax

  v2 = *(unsigned int *)(a2 + 8);
  v3 = *(unsigned int *)(a2 + 12);
  if ( v2 >= v3 )
  {
    if ( v3 < v2 + 1 )
    {
      sub_2237220(a2, a2 + 16, v2 + 1, 16);
      v2 = *(unsigned int *)(a2 + 8);
    }
    result = (_QWORD *)(*(_QWORD *)a2 + 16 * v2);
    *result = "v11";
    result[1] = 3;
    ++*(_DWORD *)(a2 + 8);
  }
  else
  {
    v4 = *(_DWORD *)(a2 + 8);
    result = (_QWORD *)(*(_QWORD *)a2 + 16 * v2);
    *result = "v11";
    result[1] = 3;
    *(_DWORD *)(a2 + 8) = v4 + 1;
  }
  return result;
}
