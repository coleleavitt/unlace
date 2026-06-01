void __fastcall sub_16C6F10(__int64 a1, unsigned __int64 a2, double a3)
{
  unsigned __int64 v4; // rdi
  int v5; // r12d
  __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned __int64 v8; // rbx
  __int64 v9; // r8
  unsigned __int16 v10; // ax
  __int64 v11; // rax
  __int64 *v12; // r12
  __int64 *i; // rbx
  __int64 v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  unsigned __int64 v18; // r14
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  char v22; // al
  unsigned __int64 v23; // rdx

  if ( !a2 )
    return;
  v4 = a2;
  while ( 2 )
  {
    v5 = 0;
    while ( 1 )
    {
      while ( 1 )
      {
        v8 = sub_BFBAE0(v4);
        v10 = *(_WORD *)v8 & 0x1FF;
        if ( v10 == 91 )
        {
          v11 = 8 * (((*(_BYTE *)(v8 + 2) & 8) != 0) + 1LL) + 32;
          v12 = (__int64 *)(v8 + v11 + 8LL * *(unsigned int *)(v8 + 16));
          for ( i = (__int64 *)(v11 + v8); v12 != i; ++i )
          {
            v14 = *i;
            sub_16C6F10(a1, v14);
          }
          return;
        }
        if ( v10 > 0x5Bu )
          break;
        if ( v10 != 4 )
        {
          if ( v10 != 46 )
            return;
LABEL_12:
          v4 = *(_QWORD *)(v8 + 16);
          goto LABEL_13;
        }
        v4 = *(_QWORD *)(v8 + 16);
        v22 = *(_BYTE *)(v8 + 2) >> 3;
        if ( v22 == 4 )
        {
          ++v5;
        }
        else
        {
          if ( v22 != 5 )
            return;
          --v5;
        }
LABEL_13:
        if ( !v4 )
          return;
      }
      if ( v10 == 124 )
      {
        v23 = *(_QWORD *)(v8 + 32);
        if ( v23 )
          sub_16C5BF0(a1, *(_QWORD *)(v8 + 24), v23, 0, v5 > 0, 0, a3);
        return;
      }
      if ( v10 == 128 )
        break;
      if ( v10 != 123 )
        return;
      if ( sub_9EC890(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 24) + 8LL) & 0xFFFFFFFFFFFFFFF0LL), a2, v6, v7, v9) )
        v18 = *(_QWORD *)(v8 + 24);
      else
        v18 = *(_QWORD *)(v8 + 16);
      if ( sub_9EC890(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 24) + 8LL) & 0xFFFFFFFFFFFFFFF0LL), a2, v15, v16, v17) )
        a2 = *(_QWORD *)(v8 + 16);
      else
        a2 = *(_QWORD *)(v8 + 24);
      sub_16C5BF0(a1, a2, v18, v8, v5 > 0, 0, a3);
      if ( sub_9EC890(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 24) + 8LL) & 0xFFFFFFFFFFFFFFF0LL), a2, v19, v20, v21) )
        goto LABEL_12;
      v4 = *(_QWORD *)(v8 + 24);
      if ( !v4 )
        return;
    }
    a2 = *(_QWORD *)(v8 + 32);
    if ( a2 )
      sub_16C6F10(a1, a2);
    v4 = *(_QWORD *)(v8 + 40);
    if ( v4 )
      continue;
    break;
  }
}
