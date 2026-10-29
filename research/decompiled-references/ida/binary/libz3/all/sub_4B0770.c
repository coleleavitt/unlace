__int64 __fastcall sub_4B0770(_QWORD *a1)
{
  __int64 result; // rax
  _QWORD *v3; // rbx
  _QWORD *v4; // r12
  __int64 v5; // rsi
  __int64 v6; // rdi

  result = a1[6];
  if ( result )
    *(_DWORD *)(result - 4) = 0;
  v3 = (_QWORD *)a1[4];
  if ( v3 )
  {
    result = *((unsigned int *)v3 - 1);
    v4 = &v3[result];
    if ( v3 >= v4 )
      goto LABEL_11;
    do
    {
      while ( 1 )
      {
        v5 = *v3;
        if ( *v3 )
        {
          v6 = a1[3];
          if ( (*(_DWORD *)(v5 + 8))-- == 1 )
            break;
        }
        if ( ++v3 >= v4 )
          goto LABEL_10;
      }
      result = sub_15D7BC0(v6, v5);
      ++v3;
    }
    while ( v3 < v4 );
LABEL_10:
    v3 = (_QWORD *)a1[4];
    if ( v3 )
LABEL_11:
      *((_DWORD *)v3 - 1) = 0;
  }
  return result;
}

