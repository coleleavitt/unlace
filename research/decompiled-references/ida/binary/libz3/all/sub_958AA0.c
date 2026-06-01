__int64 __fastcall sub_958AA0(__int64 a1)
{
  _QWORD *v1; // rbx
  __int64 result; // rax
  _QWORD *v4; // rbp
  __int64 v5; // rsi
  bool v6; // zf
  __int64 v7; // rsi
  __int64 v8; // rsi
  __int64 v9; // rdi

  v1 = *(_QWORD **)(a1 + 152);
  if ( v1 )
  {
    result = 3LL * *((unsigned int *)v1 - 1);
    v4 = &v1[3 * *((unsigned int *)v1 - 1)];
    if ( v4 == v1 )
      goto LABEL_15;
    do
    {
      while ( 1 )
      {
        v8 = *v1;
        v9 = *(_QWORD *)(a1 + 8);
        if ( *v1 )
        {
          v6 = (*(_DWORD *)(v8 + 8))-- == 1;
          if ( v6 )
          {
            result = sub_15D7BC0(v9, v8);
            v9 = *(_QWORD *)(a1 + 8);
          }
        }
        v5 = v1[1];
        if ( v5 )
        {
          v6 = (*(_DWORD *)(v5 + 8))-- == 1;
          if ( v6 )
          {
            result = sub_15D7BC0(v9, v5);
            v9 = *(_QWORD *)(a1 + 8);
          }
        }
        v7 = v1[2];
        if ( v7 )
        {
          v6 = (*(_DWORD *)(v7 + 8))-- == 1;
          if ( v6 )
            break;
        }
        v1 += 3;
        if ( v4 == v1 )
          goto LABEL_14;
      }
      result = sub_15D7BC0(v9, v7);
      v1 += 3;
    }
    while ( v4 != v1 );
LABEL_14:
    v1 = *(_QWORD **)(a1 + 152);
    if ( v1 )
LABEL_15:
      *((_DWORD *)v1 - 1) = 0;
  }
  return result;
}

