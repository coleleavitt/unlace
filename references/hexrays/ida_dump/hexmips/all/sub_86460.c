unsigned __int64 *__fastcall sub_86460(_QWORD *a1, unsigned __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rdx
  unsigned __int64 *v6; // rcx
  unsigned __int64 *result; // rax
  unsigned __int64 v8; // rsi
  _QWORD *v9; // rcx

  v5 = *(_QWORD *)(a2 + 16);
  if ( (*(_BYTE *)v5 & 2) != 0 )
  {
    if ( under_debugger )
      BUG();
    a1 = (_QWORD *)(&stru_D68 + 8);
    interr(3440, a2, v5, a4, a5);
  }
  v6 = *(unsigned __int64 **)(v5 + 8);
  result = (unsigned __int64 *)a2;
  *(_QWORD *)(a2 + 16) = v6;
  if ( (*v6 & 2) == 0 )
    *v6 = a2 & 0xFFFFFFFFFFFFFFFCLL | *v6 & 3;
  *(_QWORD *)v5 = *(_QWORD *)a2 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v5 & 3LL;
  v8 = v5 & 0xFFFFFFFFFFFFFFFCLL;
  v9 = (_QWORD *)(*result & 0xFFFFFFFFFFFFFFFCLL);
  if ( (_QWORD *)*a1 == v9 )
  {
    *v9 = v8 | *v9 & 3LL;
  }
  else if ( result == (unsigned __int64 *)v9[1] )
  {
    v9[1] = v5;
  }
  else
  {
    v9[2] = v5;
  }
  *(_QWORD *)(v5 + 8) = result;
  *result = v8 | *result & 3;
  return result;
}
