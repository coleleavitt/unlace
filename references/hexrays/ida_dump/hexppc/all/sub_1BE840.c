__int64 __fastcall sub_1BE840(__int64 a1, unsigned int a2)
{
  unsigned int v2; // r15d
  _QWORD *v4; // r12
  unsigned __int64 v5; // rdx
  int v6; // ebp
  __int64 v7; // rax
  __int64 v8; // rbx
  int v9; // eax
  __int64 v10; // rsi
  __int64 v11; // rcx
  __int64 v12; // rdx

  v2 = 0;
  v4 = *(_QWORD **)(a1 + 8);
  v5 = v4[1];
  if ( v5 > 1 )
  {
    v6 = 1;
    v7 = 1;
    do
    {
      while ( 1 )
      {
        v8 = *v4 + 24 * v7;
        v9 = *(_DWORD *)v8;
        if ( *(_DWORD *)(v8 - 24) == *(_DWORD *)v8 )
          break;
LABEL_3:
        ++v6;
        v5 = v4[1];
        v7 = v6;
        if ( v6 >= v5 )
          goto LABEL_12;
      }
      if ( v9 == 5 )
      {
        v10 = **(_QWORD **)(v8 - 16);
        v11 = **(_QWORD **)(v8 + 8);
        goto LABEL_10;
      }
      if ( v9 > 5 )
      {
        if ( v9 == 6 )
        {
LABEL_25:
          v10 = *(_QWORD *)(v8 - 16);
          goto LABEL_19;
        }
      }
      else
      {
        if ( v9 == 1 )
          goto LABEL_25;
        if ( v9 == 3 )
        {
          v10 = *(unsigned __int16 *)(v8 - 16);
          v11 = *(unsigned __int16 *)(v8 + 8);
          goto LABEL_10;
        }
      }
      v10 = -1;
LABEL_19:
      if ( v9 > 5 )
      {
        v11 = -1;
        if ( v9 != 6 )
          goto LABEL_10;
      }
      else if ( v9 != 1 )
      {
        v11 = -1;
        goto LABEL_10;
      }
      v11 = *(_QWORD *)(v8 + 8);
LABEL_10:
      v12 = *(unsigned __int16 *)(v8 - 6);
      if ( v10 + v12 != v11 )
        goto LABEL_3;
      v2 = 1;
      *(_WORD *)(v8 - 6) = *(_WORD *)(v8 + 18) + v12;
      cleanup_argloc(v8);
      memmove((void *)v8, (const void *)(v8 + 24), *v4 + 24LL * v4[1] - v8 - 24);
      v5 = v4[1] - 1LL;
      v7 = v6;
      v4[1] = v5;
    }
    while ( v6 < v5 );
  }
LABEL_12:
  if ( v5 == 1 || (_BYTE)v2 )
  {
    if ( a2 )
      optimize_argloc(a1, a2, 0);
  }
  return v2;
}
