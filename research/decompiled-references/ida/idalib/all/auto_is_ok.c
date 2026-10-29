__int64 auto_is_ok()
{
  unsigned int v0; // r8d
  __int64 v1; // rdi
  int v2; // r9d
  _QWORD *i; // rdi
  _QWORD *v4; // rax
  _QWORD *v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rcx

  v0 = 0;
  v1 = *(_QWORD *)(**(_QWORD **)(qword_2CCB598 + 1672) + 1536LL);
  v2 = *(_DWORD *)(v1 + 148);
  for ( i = (_QWORD *)(v1 + 184); ; i += 13 )
  {
    if ( !_bittest(&v2, v0) )
    {
      v4 = (_QWORD *)i[1];
      if ( v4 )
      {
        v5 = i;
        do
        {
          while ( 1 )
          {
            v6 = v4[2];
            v7 = v4[3];
            if ( v4[4] )
              break;
            v4 = (_QWORD *)v4[3];
            if ( !v7 )
              goto LABEL_8;
          }
          v5 = v4;
          v4 = (_QWORD *)v4[2];
        }
        while ( v6 );
LABEL_8:
        if ( i != v5 && v5[5] )
          break;
      }
    }
    if ( ++v0 == 14 )
      return 1;
  }
  return 0;
}
