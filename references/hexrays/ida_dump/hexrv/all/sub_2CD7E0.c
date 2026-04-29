_QWORD *__fastcall sub_2CD7E0(_QWORD *a1, __int64 *a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 *v5; // rbp
  __int64 *v6; // rbx
  __int64 i; // rax
  _QWORD *result; // rax
  _QWORD *v9; // rsi
  __int64 *v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rbx
  unsigned __int64 *v14; // rcx
  __int64 *v15; // rdx
  __int64 v16; // rax

  v5 = a2;
  v6 = (__int64 *)(*a2 & 0xFFFFFFFFFFFFFFFCLL);
  for ( i = *v6; (*v6 & 2) == 0; i = *v6 )
  {
    if ( (i & 1) == 0 )
      break;
    v9 = (_QWORD *)(i & 0xFFFFFFFFFFFFFFFCLL);
    v10 = *(__int64 **)((i & 0xFFFFFFFFFFFFFFFCLL) + 8);
    if ( v10 == v6 )
    {
      v14 = (unsigned __int64 *)v9[2];
      v15 = (__int64 *)*v14;
      if ( (*v14 & 2) == 0 && (v15 = (__int64 *)(*v14 & 1), (_DWORD)v15) )
      {
        v5 = (__int64 *)(i & 0xFFFFFFFFFFFFFFFCLL);
        *v6 = i & 0xFFFFFFFFFFFFFFFELL;
        *v14 &= ~1uLL;
        v13 = *v9 | 1LL;
        *v9 = v13;
      }
      else
      {
        if ( (__int64 *)v6[2] == v5 )
        {
          v5 = v6;
          sub_2CD660(a1, (unsigned __int64)v6, (__int64)v15, (__int64)v14, a5);
          v15 = (__int64 *)(*v6 & 0xFFFFFFFFFFFFFFFCLL);
          v16 = *v15;
          v6 = v15;
          v9 = (_QWORD *)(*v15 & 0xFFFFFFFFFFFFFFFCLL);
        }
        else
        {
          v16 = *v6;
        }
        *v6 = v16 & 0xFFFFFFFFFFFFFFFELL;
        *v9 |= 1uLL;
        sub_2CD720(a1, (unsigned __int64)v9, (__int64)v15, (__int64)v14, a5);
        v13 = *v5;
      }
    }
    else
    {
      v11 = *v10;
      if ( (*v10 & 2) != 0 || (v11 = *v10 & 1, !(_DWORD)v11) )
      {
        if ( (__int64 *)v6[1] == v5 )
        {
          v5 = v6;
          sub_2CD720(a1, (unsigned __int64)v6, (__int64)v10, v11, a5);
          v10 = (__int64 *)(*v6 & 0xFFFFFFFFFFFFFFFCLL);
          v12 = *v10;
          v6 = v10;
          v9 = (_QWORD *)(*v10 & 0xFFFFFFFFFFFFFFFCLL);
        }
        else
        {
          v12 = *v6;
        }
        *v6 = v12 & 0xFFFFFFFFFFFFFFFELL;
        *v9 |= 1uLL;
        sub_2CD660(a1, (unsigned __int64)v9, (__int64)v10, v11, a5);
        v13 = *v5;
      }
      else
      {
        v5 = (__int64 *)(i & 0xFFFFFFFFFFFFFFFCLL);
        *v6 = i & 0xFFFFFFFFFFFFFFFELL;
        *v10 &= ~1uLL;
        v13 = *v9 | 1LL;
        *v9 = v13;
      }
    }
    v6 = (__int64 *)(v13 & 0xFFFFFFFFFFFFFFFCLL);
  }
  result = (_QWORD *)(*(_QWORD *)*a1 & 0xFFFFFFFFFFFFFFFCLL);
  if ( (*result & 2) == 0 )
    *result &= ~1uLL;
  return result;
}
