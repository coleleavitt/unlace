void __fastcall sub_20CDC10(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  int v6; // r12d
  unsigned __int64 *v9; // rax
  __int64 *v10; // rdx
  unsigned __int64 v11; // rdx
  _QWORD *v12; // rdi
  unsigned __int64 *v13; // rsi
  _QWORD *v14; // rdi
  __int64 *v15; // rdx

  v6 = a3;
  if ( (*(_BYTE *)(a1 + 1) & 1) != 0 )
    sub_20CD350(a1, a2, a3, a4, a5, a6);
  if ( v6 == 1 && (*(_BYTE *)(a1 + 7) & 8) != 0 )
    sub_20BD370(a1, a2);
  v9 = *(unsigned __int64 **)(a1 + 16);
  if ( a2 )
  {
    for ( ; v9; v9 = *(unsigned __int64 **)(a1 + 16) )
    {
      while ( 1 )
      {
        v12 = (_QWORD *)v9[3];
        if ( *(_BYTE *)v12 > 0x15u || (unsigned __int8)(*(_BYTE *)v12 - 13) <= 3u )
          break;
        sub_20611F0(v12, (char *)a1, (char *)a2, a4);
        v9 = *(unsigned __int64 **)(a1 + 16);
        if ( !v9 )
          goto LABEL_19;
      }
      v10 = (__int64 *)v9[2];
      if ( v10 )
      {
        a4 = v9[1];
        *v10 = a4;
        if ( a4 )
        {
          *(_QWORD *)(a4 + 16) = v10;
          v9[1] = 0;
        }
        v9[2] = 0;
      }
      *v9 = a2;
      if ( *(_BYTE *)a2 > 9u )
      {
        v11 = *(_QWORD *)(a2 + 16);
        v9[1] = v11;
        if ( v11 )
        {
          a4 = (__int64)(v9 + 1);
          *(_QWORD *)(v11 + 16) = v9 + 1;
        }
        v9[2] = a2 + 16;
        *(_QWORD *)(a2 + 16) = v9;
      }
    }
  }
  else
  {
LABEL_22:
    v13 = v9;
    if ( v9 )
    {
      do
      {
        v14 = (_QWORD *)v9[3];
        if ( *(_BYTE *)v14 <= 0x15u && (unsigned __int8)(*(_BYTE *)v14 - 13) > 3u )
        {
          sub_20611F0(v14, (char *)a1, nullptr, a4);
          v9 = *(unsigned __int64 **)(a1 + 16);
          goto LABEL_22;
        }
        v15 = (__int64 *)v9[2];
        if ( v15 )
        {
          a4 = v9[1];
          *v15 = a4;
          if ( a4 )
          {
            *(_QWORD *)(a4 + 16) = v15;
            v9[1] = 0;
          }
          v9[2] = 0;
          v9 = *(unsigned __int64 **)(a1 + 16);
        }
        *v13 = 0;
        v13 = v9;
      }
      while ( v9 );
      if ( *(_BYTE *)a1 == 23 )
        goto LABEL_20;
      return;
    }
  }
LABEL_19:
  if ( *(_BYTE *)a1 == 23 )
LABEL_20:
    sub_204C540(a1, a2);
}
