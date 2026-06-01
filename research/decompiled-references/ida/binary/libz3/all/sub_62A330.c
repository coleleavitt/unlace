__int64 __fastcall sub_62A330(__int64 a1, __int64 a2)
{
  __int64 v3; // rsi
  bool v4; // zf
  unsigned int v5; // r12d
  __int64 v6; // rbx
  __int64 v7; // r14
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rsi
  __int64 v10; // rsi

  v3 = *(_QWORD *)(a1 + 40);
  if ( v3 )
  {
    v4 = (*(_DWORD *)(v3 + 8))-- == 1;
    if ( v4 )
      sub_15D7BC0(a2, v3);
  }
  v5 = *(_DWORD *)(a1 + 56);
  if ( v5 )
  {
    v6 = a1;
    v7 = a1 + 8LL * v5;
    do
    {
      while ( 1 )
      {
        v8 = *(_QWORD *)(v6 + 80);
        if ( v8 > 7 )
        {
          v9 = v8 & 0xFFFFFFFFFFFFFFF8LL;
          v4 = (*(_DWORD *)(v9 + 8))-- == 1;
          if ( v4 )
            break;
        }
        v6 += 8;
        if ( v7 == v6 )
          goto LABEL_10;
      }
      v6 += 8;
      sub_15D7BC0(a2, v9);
    }
    while ( v7 != v6 );
  }
LABEL_10:
  v10 = *(_QWORD *)(a1 + 48);
  if ( v10 )
  {
    v4 = (*(_DWORD *)(v10 + 8))-- == 1;
    if ( v4 )
      sub_15D7BC0(a2, v10);
  }
  sub_629AC0((_QWORD *)a1);
  return sub_17E9C40(a2 + 40, 8 * v5 + 80, a1);
}

