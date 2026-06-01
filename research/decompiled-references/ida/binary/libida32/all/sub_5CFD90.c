__int64 __fastcall sub_5CFD90(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbx
  char v5; // r13
  __int64 result; // rax
  __int64 *v7; // rbx
  __int64 *i; // r13
  __int64 v9; // rsi
  __int64 v10; // r13
  __int64 v11; // rsi

  v4 = a2;
  if ( !a2 )
  {
LABEL_7:
    if ( !under_debugger )
      interr(1562);
    BUG();
  }
  while ( 1 )
  {
    v5 = *(_BYTE *)(v4 + 186);
    result = v5 & 0xF;
    if ( (_BYTE)result == 12 )
      break;
    if ( (unsigned __int8)result > 0xCu )
    {
      if ( (_BYTE)result == 13 )
      {
        result = sub_5CFA60(a1, (const char **)(v4 + 72), a3);
        if ( (v5 & 0x2F) == 0xD )
        {
          result = *(_QWORD *)(v4 + 48);
          if ( result )
          {
            v7 = *(__int64 **)result;
            result = *(_QWORD *)(result + 8);
            for ( i = &v7[result]; i != v7; result = sub_5CFD90(a1, v9, a3) )
              v9 = *v7++;
          }
        }
      }
      return result;
    }
    if ( (_BYTE)result == 10 )
    {
      result = sub_5CFD90(a1, *(_QWORD *)(v4 + 48), a3);
      v4 = *(_QWORD *)(v4 + 32);
      if ( !v4 )
        return result;
    }
    else
    {
      if ( (_BYTE)result != 11 )
        return result;
      v4 = *(_QWORD *)(v4 + 48);
      if ( !v4 )
        goto LABEL_7;
    }
  }
  sub_5CFD90(a1, *(_QWORD *)(v4 + 48), a3);
  result = *(unsigned int *)(v4 + 64);
  if ( (int)result > 0 )
  {
    v10 = 0;
    do
    {
      v11 = *(_QWORD *)(*(_QWORD *)(v4 + 56) + 8 * v10++);
      result = sub_5CFD90(a1, v11, a3);
    }
    while ( *(_DWORD *)(v4 + 64) > (int)v10 );
  }
  return result;
}

