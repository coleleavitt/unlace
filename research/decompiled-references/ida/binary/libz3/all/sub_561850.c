__int64 __fastcall sub_561850(_QWORD *a1)
{
  __int64 result; // rax
  __int64 *v3; // rbx
  __int64 *v4; // r12
  __int64 v5; // rsi
  _QWORD *v6; // rbx
  _QWORD *v7; // r12
  __int64 v8; // rsi
  __int64 v9; // rdi

  result = a1[6];
  if ( result )
    *(_DWORD *)(result - 4) = 0;
  v3 = (__int64 *)a1[8];
  if ( v3 )
  {
    result = *((unsigned int *)v3 - 1);
    v4 = &v3[result];
    if ( v3 >= v4 )
      goto LABEL_7;
    do
    {
      v5 = *v3++;
      result = sub_62A410(a1[7], v5);
    }
    while ( v3 < v4 );
    v3 = (__int64 *)a1[8];
    if ( v3 )
LABEL_7:
      *((_DWORD *)v3 - 1) = 0;
  }
  v6 = (_QWORD *)a1[11];
  if ( v6 )
  {
    result = *((unsigned int *)v6 - 1);
    v7 = &v6[result];
    if ( v6 >= v7 )
      goto LABEL_16;
    do
    {
      while ( 1 )
      {
        v8 = *v6;
        if ( *v6 )
        {
          v9 = a1[10];
          if ( (*(_DWORD *)(v8 + 8))-- == 1 )
            break;
        }
        if ( ++v6 >= v7 )
          goto LABEL_15;
      }
      result = sub_15D7BC0(v9, v8);
      ++v6;
    }
    while ( v6 < v7 );
LABEL_15:
    v6 = (_QWORD *)a1[11];
    if ( v6 )
LABEL_16:
      *((_DWORD *)v6 - 1) = 0;
  }
  return result;
}

