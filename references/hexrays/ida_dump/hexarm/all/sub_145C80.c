_QWORD *__fastcall sub_145C80(_QWORD *a1, __int64 *a2, __int64 a3, __int64 a4, _QWORD *a5)
{
  __int64 *v5; // rbp
  __int64 *v6; // rbx
  __int64 v7; // rax
  unsigned __int64 v8; // rsi
  __int64 *v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  unsigned __int64 *v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rbx
  _QWORD *result; // rax
  __int64 v16; // rcx
  __int64 v17; // rax
  unsigned __int64 v18; // rcx
  _QWORD *v19; // rax

  v5 = a2;
  v6 = (__int64 *)(*a2 & 0xFFFFFFFFFFFFFFFCLL);
  v7 = *v6;
  if ( (*v6 & 2) == 0 )
  {
    while ( 1 )
    {
      if ( (v7 & 1) == 0 )
        goto LABEL_13;
      v8 = v7 & 0xFFFFFFFFFFFFFFFCLL;
      v9 = *(__int64 **)((v7 & 0xFFFFFFFFFFFFFFFCLL) + 8);
      if ( v9 != v6 )
        break;
      v9 = *(__int64 **)(v8 + 16);
      v16 = *v9;
      if ( (*v9 & 2) != 0 || (v16 = *v9 & 1, !(_DWORD)v16) )
      {
        if ( (__int64 *)v6[2] == v5 )
        {
          v5 = v6;
          sub_145B00(a1, (unsigned __int64)v6, (__int64)v9, v16, (__int64)a5);
          v9 = (__int64 *)(*v6 & 0xFFFFFFFFFFFFFFFCLL);
          v17 = *v9;
          v6 = v9;
          v8 = *v9 & 0xFFFFFFFFFFFFFFFCLL;
        }
        else
        {
          v17 = *v6;
        }
        *v6 = v17 & 0xFFFFFFFFFFFFFFFELL;
        *(_QWORD *)v8 |= 1uLL;
        sub_145BC0(a1, v8, (__int64)v9, v16, (__int64)a5);
        v14 = *v5;
        goto LABEL_12;
      }
LABEL_11:
      v5 = (__int64 *)v8;
      *v6 = v7 & 0xFFFFFFFFFFFFFFFELL;
      *v9 &= ~1uLL;
      v14 = *(_QWORD *)v8 | 1LL;
      *(_QWORD *)v8 = v14;
LABEL_12:
      v6 = (__int64 *)(v14 & 0xFFFFFFFFFFFFFFFCLL);
      v7 = *v6;
      if ( (*v6 & 2) != 0 )
        goto LABEL_13;
    }
    v10 = *v9;
    if ( (*v9 & 2) == 0 )
      goto LABEL_10;
    while ( 1 )
    {
      if ( (__int64 *)v6[1] == v5 )
      {
        v5 = v6;
        sub_145BC0(a1, (unsigned __int64)v6, (__int64)v9, v10, (__int64)a5);
        v11 = *(_QWORD *)(*v6 & 0xFFFFFFFFFFFFFFFCLL);
        v6 = (__int64 *)(*v6 & 0xFFFFFFFFFFFFFFFCLL);
        v8 = v11 & 0xFFFFFFFFFFFFFFFCLL;
      }
      else
      {
        v11 = *v6;
      }
      *v6 = v11 & 0xFFFFFFFFFFFFFFFELL;
      v12 = *(unsigned __int64 **)(v8 + 16);
      v13 = *(_QWORD *)v8 | 1LL;
      *(_QWORD *)v8 = v13;
      if ( (*(_BYTE *)v12 & 2) == 0 )
      {
        a5 = (_QWORD *)v12[1];
        *(_QWORD *)(v8 + 16) = a5;
        if ( (*a5 & 2) == 0 )
        {
          *a5 = v8 | *a5 & 3LL;
          v13 = *(_QWORD *)v8;
        }
        *v12 = *v12 & 3 | v13 & 0xFFFFFFFFFFFFFFFCLL;
        v18 = (unsigned __int64)v12 & 0xFFFFFFFFFFFFFFFCLL;
        v19 = (_QWORD *)(*(_QWORD *)v8 & 0xFFFFFFFFFFFFFFFCLL);
        if ( v19 == (_QWORD *)*a1 )
        {
          a5 = (_QWORD *)(v18 | *v19 & 3LL);
          *v19 = a5;
        }
        else if ( v8 == v19[1] )
        {
          v19[1] = v12;
        }
        else
        {
          v19[2] = v12;
        }
        v12[1] = v8;
        *(_QWORD *)v8 = v18 | *(_QWORD *)v8 & 3LL;
        v14 = *v5;
        goto LABEL_12;
      }
      if ( under_debugger )
        BUG();
      a1 = (_QWORD *)(&stru_D68 + 8);
      v7 = interr(3440, v8, v12, v10, a5);
LABEL_10:
      v10 &= 1u;
      if ( (_DWORD)v10 )
        goto LABEL_11;
    }
  }
LABEL_13:
  result = (_QWORD *)(*(_QWORD *)*a1 & 0xFFFFFFFFFFFFFFFCLL);
  if ( (*result & 2) == 0 )
    *result &= ~1uLL;
  return result;
}
