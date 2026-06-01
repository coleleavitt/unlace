__int64 __fastcall sub_79B300(__int64 a1, char a2)
{
  int v2; // eax
  __int64 v3; // rax
  unsigned __int64 v4; // rax
  __int64 v5; // rdi
  __int64 *v6; // rbx
  int v7; // edx
  __int64 v8; // rax
  unsigned __int64 v9; // rax
  __int64 v11; // rax
  __int64 *v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax

  v2 = *(_BYTE *)(a1 + 28) & 0x7F;
  if ( (unsigned int)(v2 - 24) > 0x1A )
  {
    if ( (unsigned int)(v2 - 62) > 2 )
      return 0;
    v12 = (__int64 *)(*(_QWORD *)(a1 + 80) & 0xFFFFFFFFFFFFFFF8LL);
    if ( (*(_QWORD *)(a1 + 80) & 4) != 0 )
      v3 = v12[1];
    else
      v3 = *v12;
  }
  else
  {
    v3 = *(_QWORD *)(a1 + 48);
  }
  if ( (v3 & 0xFFFFFFFFFFFFFFF8LL) <= 0xF )
    return 0;
  v4 = v3 & 0xFFFFFFFFFFFFFFF0LL;
  v5 = *(_QWORD *)v4;
  v6 = (__int64 *)v4;
  v7 = *(unsigned __int8 *)(*(_QWORD *)v4 + 16LL);
  if ( (_BYTE)v7 == 41 )
  {
    if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 32)
                                                                              & 0xFFFFFFFFFFFFFFF0LL)
                                                                  + 8LL)
                                                      & 0xFFFFFFFFFFFFFFF0LL)
                                          + 16LL)
       - 25 <= 1 )
    {
LABEL_6:
      v8 = *(_QWORD *)(v5 + 32);
LABEL_7:
      v9 = v8 & 0xFFFFFFFFFFFFFFF0LL;
      v5 = *(_QWORD *)v9;
      v7 = *(unsigned __int8 *)(*(_QWORD *)v9 + 16LL);
      goto LABEL_8;
    }
  }
  else
  {
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v5 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 41 )
    {
      v11 = sub_B0D320(v5);
      v5 = *v6;
      v7 = *(unsigned __int8 *)(*v6 + 16);
      if ( v11 )
      {
        if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v11 + 32)
                                                                                  & 0xFFFFFFFFFFFFFFF0LL)
                                                                      + 8LL)
                                                          & 0xFFFFFFFFFFFFFFF0LL)
                                              + 16LL)
           - 25 <= 1 )
        {
          if ( (_BYTE)v7 == 41 )
            goto LABEL_6;
LABEL_14:
          v5 = sub_B0D320(v5);
          goto LABEL_6;
        }
      }
    }
    if ( (_BYTE)v7 == 32 )
    {
      v13 = *(_QWORD *)(*(_QWORD *)(v5 + 32) & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v13 + 16) == 26 )
        goto LABEL_6;
      goto LABEL_23;
    }
  }
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v5 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 32 )
    goto LABEL_31;
  v14 = sub_B0D320(v5);
  if ( v14 )
  {
    v13 = *(_QWORD *)(*(_QWORD *)(v14 + 32) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v13 + 16) == 26 )
    {
LABEL_25:
      v5 = *v6;
      if ( *(_BYTE *)(*v6 + 16) == 32 )
        goto LABEL_6;
      goto LABEL_14;
    }
LABEL_23:
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v13 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 26 || !sub_B0D320(v13) )
      goto LABEL_30;
    goto LABEL_25;
  }
LABEL_30:
  v5 = *v6;
  v7 = *(unsigned __int8 *)(*v6 + 16);
LABEL_31:
  if ( (unsigned int)(unsigned __int8)v7 - 42 > 1 )
  {
    if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v5 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 42 > 1 )
      goto LABEL_45;
    v5 = sub_B0D320(v5);
    if ( !v5 )
    {
      v5 = *v6;
      v7 = *(unsigned __int8 *)(*v6 + 16);
      goto LABEL_45;
    }
  }
  while ( 1 )
  {
    v15 = *(_QWORD *)(v5 + 32);
    if ( (*(_BYTE *)(v5 + 18) & 0x10) == 0 )
      break;
    v5 = *(_QWORD *)(v15 & 0xFFFFFFFFFFFFFFF0LL);
    if ( (unsigned int)*(unsigned __int8 *)(v5 + 16) - 42 > 1 )
      v5 = sub_B0D320(v5);
  }
  v5 = *v6;
  v7 = *(unsigned __int8 *)(*v6 + 16);
  if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v15 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                                    & 0xFFFFFFFFFFFFFFF0LL)
                                        + 16LL)
     - 25 <= 1 )
  {
    if ( (unsigned int)(v7 - 42) > 1 )
      goto LABEL_41;
    while ( 1 )
    {
      v8 = *(_QWORD *)(v5 + 32);
      if ( (*(_BYTE *)(v5 + 18) & 0x10) == 0 )
        break;
      v5 = *(_QWORD *)(v8 & 0xFFFFFFFFFFFFFFF0LL);
      if ( (unsigned int)*(unsigned __int8 *)(v5 + 16) - 42 > 1 )
LABEL_41:
        v5 = sub_B0D320(v5);
    }
    goto LABEL_7;
  }
LABEL_45:
  if ( a2 && *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v5 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 11 )
  {
    if ( (_BYTE)v7 == 11 )
      goto LABEL_6;
    goto LABEL_14;
  }
LABEL_8:
  if ( (unsigned int)(v7 - 25) <= 1 )
    return v5;
  if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v5 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 25 > 1 )
    return 0;
  return sub_B0D320(v5);
}

