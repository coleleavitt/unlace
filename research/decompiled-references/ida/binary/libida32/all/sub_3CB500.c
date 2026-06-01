__int64 __fastcall sub_3CB500(__int64 a1, unsigned int a2, __int64 a3, unsigned int a4)
{
  __int64 v5; // rdi
  __int64 v6; // rsi
  __int64 v7; // rcx
  __int64 result; // rax
  __int64 v9; // r10
  __int64 v10; // r9
  __int64 v11; // r8

  v5 = a2;
  v6 = a4;
  v7 = a1 + 1440;
  result = *(_QWORD *)(a1 + 1448);
  if ( !result )
  {
    result = 0;
    goto LABEL_8;
  }
  v9 = v7;
  do
  {
    while ( 1 )
    {
      v10 = *(_QWORD *)(result + 16);
      v11 = *(_QWORD *)(result + 24);
      if ( *(_DWORD *)(result + 32) < (unsigned int)v5 )
        break;
      v9 = result;
      result = *(_QWORD *)(result + 16);
      if ( !v10 )
        goto LABEL_6;
    }
    result = *(_QWORD *)(result + 24);
  }
  while ( v11 );
LABEL_6:
  if ( v9 == v7 || (unsigned int)v5 < *(_DWORD *)(v9 + 32) )
  {
LABEL_8:
    if ( (_DWORD)result == (_DWORD)v6 )
      return result;
    return set_aflags(v5, v6, a3);
  }
  result = *(unsigned int *)(v9 + 36);
  a3 = (unsigned int)result & ~(_DWORD)a3;
  v6 = (unsigned int)a3 | (unsigned int)v6;
  if ( (_DWORD)result != (_DWORD)v6 )
    return set_aflags(v5, v6, a3);
  return result;
}

