__int64 __fastcall sub_19CF160(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // r12
  unsigned __int64 v5; // rbx
  __int64 v6; // rdi
  __int64 v7; // rdx
  unsigned __int64 v8; // rbx
  __int64 v9; // rax
  char v10; // bp
  __int64 v11; // rdx
  char v12; // cl
  unsigned __int64 v14; // rbx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 i; // rbx
  __int64 v18; // rax

  v4 = a1 & 0xFFFFFFFFFFFFFFF0LL;
  v5 = a1;
  v6 = *(_QWORD *)(a1 & 0xFFFFFFFFFFFFFFF0LL);
  v7 = *(unsigned __int8 *)(v6 + 16);
  if ( (unsigned int)(v7 - 43) <= 1 )
    goto LABEL_36;
  v10 = 0;
  if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v6 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 43 > 1 )
    goto LABEL_7;
  v6 = sub_F63050(v6, a2, v7, a4);
  if ( v6 )
  {
LABEL_36:
    while ( 1 )
    {
      v5 = *(_QWORD *)(v6 + 32);
      if ( (*(_BYTE *)(v6 + 18) & 0x10) == 0 )
        break;
      while ( 1 )
      {
        v8 = v5 & 0xFFFFFFFFFFFFFFF0LL;
        v6 = *(_QWORD *)v8;
        if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)v8 + 16LL) - 43 <= 1 )
          break;
        v9 = sub_F63050(v6, a2, v7, a4);
        v5 = *(_QWORD *)(v9 + 32);
        if ( (*(_BYTE *)(v9 + 18) & 0x10) == 0 )
          goto LABEL_5;
      }
    }
LABEL_5:
    v6 = *(_QWORD *)(v5 & 0xFFFFFFFFFFFFFFF0LL);
    goto LABEL_6;
  }
  v6 = *(_QWORD *)v4;
  v7 = *(unsigned __int8 *)(*(_QWORD *)v4 + 16LL);
  while ( 1 )
  {
LABEL_7:
    if ( (_BYTE)v7 != 42 )
    {
      v14 = v5 & 0xFFFFFFFFFFFFFFF0LL;
      v15 = *(_QWORD *)(*(_QWORD *)(v6 + 8) & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v15 + 16) != 42 )
        goto LABEL_15;
      v6 = sub_F63050(v6, a2, v7, v15);
      if ( !v6 )
      {
        v6 = *(_QWORD *)v14;
        LODWORD(v7) = *(unsigned __int8 *)(*(_QWORD *)v14 + 16LL);
LABEL_15:
        v16 = (unsigned int)(v7 - 2);
        if ( (unsigned __int8)v16 <= 4u )
        {
LABEL_16:
          for ( i = *(_QWORD *)(*(_QWORD *)(v6 + 32) & 0xFFFFFFFFFFFFFFF0LL);
                ;
                i = *(_QWORD *)(*(_QWORD *)(i + 32) & 0xFFFFFFFFFFFFFFF0LL) )
          {
            if ( (unsigned __int8)(*(_BYTE *)(i + 16) - 2) > 4u )
            {
              if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(i + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 2) > 4u
                || (v18 = sub_F63050(i, a2, v16, v15)) == 0 )
              {
                v5 = i & 0xFFFFFFFFFFFFFFF0LL;
                v6 = *(_QWORD *)v5;
                goto LABEL_6;
              }
              i = v18;
            }
          }
        }
        if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v6 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 2) <= 4u )
        {
          v6 = sub_F63050(v6, a2, v16, v15);
          if ( v6 )
            goto LABEL_16;
          v6 = *(_QWORD *)v14;
        }
        if ( v10 )
          return 2 * (unsigned int)((unsigned __int8)sub_F5EA40(v6) != 0);
        else
          return (unsigned __int8)sub_F5EA40(v6);
      }
    }
    v5 = *(_QWORD *)(v6 + 32);
    if ( v10 )
      goto LABEL_5;
    v6 = *(_QWORD *)(v5 & 0xFFFFFFFFFFFFFFF0LL);
    v11 = *(_QWORD *)(*(_QWORD *)(v6 + 8) & 0xFFFFFFFFFFFFFFF0LL);
    v12 = *(_BYTE *)(v11 + 16);
    if ( v12 == 13 )
      break;
    if ( v12 == 48 )
      return 4;
LABEL_6:
    v7 = *(unsigned __int8 *)(v6 + 16);
    v10 = 1;
  }
  if ( ((*(_WORD *)(v11 + 18) >> 3) & 0x1FF) != 0x1B3 )
    goto LABEL_6;
  return 3;
}
