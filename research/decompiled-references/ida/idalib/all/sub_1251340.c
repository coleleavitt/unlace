char *__fastcall sub_1251340(__int64 a1, char **a2)
{
  char *result; // rax
  char v3; // bl

  if ( *(_QWORD *)(a1 + 352) == *(_QWORD *)(a1 + 320) )
    abort();
  result = *a2;
  v3 = **a2;
  if ( v3 )
  {
    if ( *(_DWORD *)(a1 + 152) == 18 )
    {
      sub_9EE8A0(a1 + 272, a1 + 208);
      sub_12510C0((unsigned __int8 *)(a1 + 8));
      result = *a2;
    }
    else
    {
      v3 = 0;
    }
  }
  *result = v3;
  return result;
}
