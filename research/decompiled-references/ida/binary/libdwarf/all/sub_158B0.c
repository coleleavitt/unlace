__int64 __fastcall sub_158B0(__int64 a1, unsigned __int64 a2, int a3)
{
  _QWORD *v3; // rax
  _QWORD *v4; // rdi
  _QWORD *v6; // rsi
  __int64 v7; // rdx
  __int64 result; // rax
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rdx

  v3 = (_QWORD *)(a1 + 104);
  v4 = (_QWORD *)(a1 + 152);
  if ( !a3 )
    v3 = v4;
  v6 = v3;
  if ( a2 >= v3[3] )
    return 0;
  v7 = *v3;
  if ( *v3 )
  {
    result = *(_QWORD *)(v7 + 640);
    if ( result && *(_QWORD *)(result + 72) == a2 )
      return result;
    v9 = *(_QWORD *)(v7 + 72);
    if ( a2 >= v9 )
    {
LABEL_13:
      if ( a2 < *(unsigned __int8 *)(v7 + 17) + *(unsigned __int8 *)(v7 + 16) + *(_QWORD *)(v7 + 8) + v9 )
        return v7;
      while ( 1 )
      {
        v7 = *(_QWORD *)(v7 + 640);
        if ( !v7 )
          break;
        v9 = *(_QWORD *)(v7 + 72);
        if ( a2 >= v9 )
          goto LABEL_13;
      }
    }
  }
  for ( result = v6[1]; result; result = *(_QWORD *)(result + 640) )
  {
    v10 = *(_QWORD *)(result + 72);
    if ( a2 >= v10
      && a2 < *(unsigned __int8 *)(result + 17) + *(unsigned __int8 *)(result + 16) + *(_QWORD *)(result + 8) + v10 )
    {
      break;
    }
  }
  return result;
}

