__int64 __fastcall sub_5345E0(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // r8
  _QWORD *v5; // rax
  _QWORD *v6; // rdx
  _QWORD *v7; // r9
  __int64 v8; // rax
  _QWORD *v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // rsi

  v4 = -1;
  if ( a3 )
  {
    v5 = *(_QWORD **)(a1 + 56);
    v6 = &v5[10 * *(_QWORD *)(a1 + 64)];
    if ( v6 != v5 )
    {
      while ( a2 != *v5 )
      {
        v5 += 10;
        if ( v6 == v5 )
          return -1;
      }
      if ( !v5 )
        return -1;
      if ( (unsigned __int64)a3 < v5[2] )
        return *(_QWORD *)(v5[1] + 8LL * a3);
      v7 = v5 + 5;
      v8 = v5[6];
      if ( !v8 )
        return -1;
      v9 = v7;
      do
      {
        while ( 1 )
        {
          v10 = *(_QWORD *)(v8 + 16);
          v11 = *(_QWORD *)(v8 + 24);
          if ( *(_DWORD *)(v8 + 32) >= a3 )
            break;
          v8 = *(_QWORD *)(v8 + 24);
          if ( !v11 )
            goto LABEL_13;
        }
        v9 = (_QWORD *)v8;
        v8 = *(_QWORD *)(v8 + 16);
      }
      while ( v10 );
LABEL_13:
      v4 = -1;
      if ( v7 != v9 && a3 >= *((_DWORD *)v9 + 8) )
        return v9[5];
    }
  }
  return v4;
}
