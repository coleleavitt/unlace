__int64 __fastcall sub_49EE50(__int64 *a1, __int64 a2, double a3, __int64 a4, __int64 a5)
{
  __int64 result; // rax
  __int64 v6; // rbx
  __int64 v7; // r14
  int v8; // r13d
  __int64 v9; // rbp
  __int64 v10; // rdx
  __int64 v11; // rax

  result = xmmword_8D1C28;
  v6 = qword_8D1C20;
  v7 = qword_8D1C20 + 8 * xmmword_8D1C28;
  if ( v7 == qword_8D1C20 )
    return result;
  v8 = a2;
  while ( 1 )
  {
    v9 = *(_QWORD *)v6;
    v10 = *(_QWORD *)(*(_QWORD *)v6 + 2392LL);
    result = ((*(_DWORD *)(v10 + 12) >> 19) & 0x3Fu) - 1;
    if ( *(_BYTE *)(v10 + 8) > 3u )
      break;
LABEL_7:
    if ( v8 == (_DWORD)result )
    {
      result = a1[1];
      a2 = *a1;
      if ( a1[2] < (unsigned __int64)(result + 1) )
      {
        v11 = qvector_reserve(a1, a2, result + 1, 8);
        *a1 = v11;
        a2 = v11;
        result = a1[1];
      }
      v6 += 8;
      *(_QWORD *)(a2 + 8 * result) = v9;
      ++a1[1];
      if ( v7 == v6 )
        return result;
    }
    else
    {
      v6 += 8;
      if ( v7 == v6 )
        return result;
    }
  }
  if ( ((*(_DWORD *)(v10 + 12) >> 19) & 0x3F) == 0 )
  {
    result = (unsigned int)*(char *)(v10 + 11);
    goto LABEL_7;
  }
  if ( under_debugger )
    BUG();
  interr(3451, a2, v10, a5, a3);
  return sub_49EF20();
}
