_QWORD *__fastcall sub_AF7BC0(__int64 a1, unsigned int a2, unsigned int a3)
{
  _QWORD *result; // rax
  _QWORD *v5; // r14
  int v6; // r12d
  _QWORD *v7; // r15
  __int64 v8; // r13
  __int64 v9; // rax

  result = (_QWORD *)sub_966380(
                       a1,
                       **(_DWORD ***)(*(_QWORD *)(a1 + 32) + 8LL * a2),
                       **(_DWORD ***)(*(_QWORD *)(a1 + 32) + 8LL * a3));
  v5 = *(_QWORD **)(a1 + 96);
  v6 = (int)result;
  v7 = &v5[2 * *(unsigned int *)(a1 + 104)];
  if ( v5 != v7 )
  {
    while ( *v5 <= 1u )
    {
      v5 += 2;
      if ( v7 == v5 )
        return result;
    }
    while ( v7 != v5 )
    {
      v8 = v5[1];
      if ( !(unsigned __int8)sub_AF79A0(v8, v6, a2, a3) )
      {
        v9 = *(_QWORD *)(v8 + 544);
        if ( v9 )
          *(_DWORD *)(v9 - 4) = 0;
        sub_AF0E00(v8 + 64, v8);
        return (_QWORD *)sub_AF22A0(a1, v8);
      }
      result = v5 + 2;
      if ( v7 == v5 + 2 )
        return result;
      while ( 1 )
      {
        v5 = result;
        if ( *result > 1u )
          break;
        result += 2;
        if ( v7 == result )
          return result;
      }
    }
  }
  return result;
}

