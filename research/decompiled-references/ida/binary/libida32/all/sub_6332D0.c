char *__fastcall sub_6332D0(__int64 a1, __int64 *a2, int a3, char a4)
{
  char *result; // rax
  char v6; // dl
  __int64 v7; // rdx
  _DWORD *v8; // r12
  __int64 v9; // rax

  result = (char *)(*(_QWORD *)(a1 + 32) + (unsigned int)(a3 - 1));
  v6 = *result;
  if ( (*result & 4) == 0 && (v6 & 1) == 0 )
  {
    *result = v6 | 4;
    if ( (a4 & 2) != 0 )
    {
      v7 = a2[1];
      v8 = (_DWORD *)*a2;
      if ( a2[2] < (unsigned __int64)(v7 + 1) )
      {
        v9 = qvector_reserve(a2, *a2, v7 + 1, 4);
        v7 = a2[1];
        *a2 = v9;
        v8 = (_DWORD *)v9;
      }
      result = (char *)memmove(v8 + 1, v8, 4 * v7);
      *v8 = a3;
      ++a2[1];
    }
  }
  return result;
}

