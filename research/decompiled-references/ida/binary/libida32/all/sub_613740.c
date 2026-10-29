_DWORD *__fastcall sub_613740(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rcx
  _DWORD *result; // rax

  v3 = *(_QWORD *)(a2 + 16);
  result = (_DWORD *)(*(_QWORD *)(a1 + 16) + *(_QWORD *)(a2 + 8));
  if ( v3 == 4 )
  {
    *result = a3;
  }
  else if ( v3 > 4 )
  {
    if ( v3 != 8 )
      goto LABEL_10;
    *(_QWORD *)result = a3;
  }
  else
  {
    if ( v3 != 1 )
    {
      if ( v3 == 2 )
      {
        *(_WORD *)result = a3;
        return result;
      }
LABEL_10:
      if ( !under_debugger )
        interr(1749);
      BUG();
    }
    *(_BYTE *)result = a3;
  }
  return result;
}

