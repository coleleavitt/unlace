unsigned __int64 __fastcall sub_1094C0(__int64 a1, char **a2, __int64 a3, _DWORD *a4, unsigned __int64 a5)
{
  int v5; // eax
  __int64 v6; // rdx
  char *v7; // rsi
  unsigned __int64 result; // rax
  char *v10; // rsi
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rax

  v5 = *(_DWORD *)(a1 + 29996);
  if ( *(_DWORD *)(a1 + 30320) )
  {
    v10 = *a2;
    v11 = a3 - (_QWORD)v10;
    if ( v5 == 7 )
      v11 = 0;
    result = sub_108F40(a1, v10, v11, a4, a5);
    if ( result <= 0xFFFFFFFFFFFFFF88LL )
    {
      *a2 += result;
      *(_DWORD *)(a1 + 30236) = 2;
      return 0;
    }
  }
  else
  {
    v6 = *(_QWORD *)(a1 + 30288);
    v7 = (char *)(v6 + *(_QWORD *)(a1 + 30272));
    if ( v5 != 7 )
    {
      result = sub_108F40(a1, v7, *(_QWORD *)(a1 + 30280) - v6, a4, a5);
      if ( result > 0xFFFFFFFFFFFFFF88LL )
        return result;
      if ( !result )
      {
        *(_DWORD *)(a1 + 30236) = 2;
        return result;
      }
LABEL_12:
      v12 = *(_QWORD *)(a1 + 30288) + result;
      *(_DWORD *)(a1 + 30236) = 4;
      *(_QWORD *)(a1 + 30296) = v12;
      return 0;
    }
    result = sub_108F40(a1, v7, 0, a4, a5);
    if ( result <= 0xFFFFFFFFFFFFFF88LL )
      goto LABEL_12;
  }
  return result;
}

