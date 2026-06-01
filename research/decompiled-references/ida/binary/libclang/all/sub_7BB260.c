unsigned __int64 __fastcall sub_7BB260(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v4; // rbp
  unsigned __int64 v5; // rax
  unsigned __int64 i; // rax
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rax
  __int64 v11; // rbx
  unsigned __int64 v12; // rax
  unsigned __int64 v14; // rax
  unsigned __int64 j; // rax
  unsigned __int64 v16; // rdx

  v4 = a1;
  v5 = *(_QWORD *)(a1 + 120);
  if ( !v5 )
  {
    sub_7B9840((unsigned __int64 *)(*(_QWORD *)(a1 + 96) + 88LL), *(_QWORD *)(a1 + 96));
    v5 = *(_QWORD *)(a1 + 120);
  }
  if ( v5 > 7 )
  {
    if ( (*(_BYTE *)((v5 & 0xFFFFFFFFFFFFFFF8LL) + 72) & 1) != 0 )
      sub_7B7DB0(a1);
    do
    {
      for ( i = sub_7A0650(v4 + 48, a2); i; i = *(_QWORD *)(v7 + 8) )
      {
        v7 = i & 0xFFFFFFFFFFFFFFF8LL;
        v8 = i & 0xFFFFFFFFFFFFFFF8LL;
        if ( (i & 4) == 0 )
        {
          if ( (*(_BYTE *)(v7 + 28) & 0x7F) == 0x30 )
          {
LABEL_36:
            *a3 = v4;
            return v8;
          }
          break;
        }
        if ( !v7 )
LABEL_10:
          BUG();
        v8 = *(_QWORD *)v7;
        if ( (*(_BYTE *)(*(_QWORD *)v7 + 28LL) & 0x7F) == 0x30 )
          goto LABEL_36;
      }
      v9 = *(_QWORD *)(v4 + 120);
      if ( !v9 )
      {
        sub_7B9840((unsigned __int64 *)(*(_QWORD *)(v4 + 96) + 88LL), *(_QWORD *)(v4 + 96));
        v9 = *(_QWORD *)(v4 + 120);
      }
      if ( v9 > 7 )
      {
        v10 = v9 & 0xFFFFFFFFFFFFFFF8LL;
        if ( (*(_BYTE *)(v10 + 72) & 1) != 0 )
        {
          sub_7B7DB0(v4);
          v10 = *(_QWORD *)(v4 + 120) & 0xFFFFFFFFFFFFFFF8LL;
        }
        v11 = *(_QWORD *)(v10 + 56);
        if ( v11 )
        {
          while ( 1 )
          {
            if ( *(char *)(v11 + 28) >= 0 )
            {
              v12 = *(_QWORD *)(v11 + 40);
              if ( ((v12 & 7) != 0 || v12 <= 7) && (*(_BYTE *)(v11 + 8) & 6) == 0 )
                break;
            }
            v11 = *(_QWORD *)(v11 + 128);
            if ( !v11 )
              goto LABEL_23;
          }
LABEL_31:
          for ( j = sub_7A0650(v11 + 48, a2); j; j = *(_QWORD *)(v16 + 8) )
          {
            v16 = j & 0xFFFFFFFFFFFFFFF8LL;
            v8 = j & 0xFFFFFFFFFFFFFFF8LL;
            if ( (j & 4) == 0 )
            {
              if ( (*(_BYTE *)(v16 + 28) & 0x7F) != 0x30 )
                break;
              goto LABEL_36;
            }
            if ( !v16 )
              goto LABEL_10;
            v8 = *(_QWORD *)v16;
            if ( (*(_BYTE *)(*(_QWORD *)v16 + 28LL) & 0x7F) == 0x30 )
              goto LABEL_36;
          }
          while ( 1 )
          {
            v11 = *(_QWORD *)(v11 + 128);
            if ( !v11 )
              break;
            if ( *(char *)(v11 + 28) >= 0 )
            {
              v14 = *(_QWORD *)(v11 + 40);
              if ( ((v14 & 7) != 0 || v14 <= 7) && (*(_BYTE *)(v11 + 8) & 6) == 0 )
                goto LABEL_31;
            }
          }
        }
      }
LABEL_23:
      v4 = sub_7BACE0(v4);
    }
    while ( v4 );
  }
  return 0;
}

