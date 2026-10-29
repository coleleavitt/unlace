__int64 __fastcall sub_957CC0(__int64 a1)
{
  _QWORD *v1; // rbx
  _QWORD *v3; // r12
  __int64 v4; // rsi
  bool v5; // zf
  __int64 v6; // rsi
  __int64 v7; // rdi
  __int64 result; // rax

  v1 = *(_QWORD **)(a1 + 48);
  if ( v1 )
  {
    v3 = &v1[2 * *((unsigned int *)v1 - 1)];
    if ( v3 == v1 )
      goto LABEL_12;
    do
    {
      while ( 1 )
      {
        v6 = *v1;
        v7 = *(_QWORD *)(a1 + 8);
        if ( *v1 )
        {
          v5 = (*(_DWORD *)(v6 + 8))-- == 1;
          if ( v5 )
          {
            result = sub_15D7BC0(v7, v6);
            v7 = *(_QWORD *)(a1 + 8);
          }
        }
        v4 = v1[1];
        if ( v4 )
        {
          v5 = (*(_DWORD *)(v4 + 8))-- == 1;
          if ( v5 )
            break;
        }
        v1 += 2;
        if ( v3 == v1 )
          goto LABEL_11;
      }
      result = sub_15D7BC0(v7, v4);
      v1 += 2;
    }
    while ( v3 != v1 );
LABEL_11:
    v1 = *(_QWORD **)(a1 + 48);
    if ( v1 )
LABEL_12:
      *((_DWORD *)v1 - 1) = 0;
  }
  return result;
}

