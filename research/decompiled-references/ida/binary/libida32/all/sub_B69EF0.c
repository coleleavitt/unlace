__int64 __fastcall sub_B69EF0(__int64 a1, __int64 a2)
{
  int v2; // eax
  __int64 v3; // rax
  __int64 *v4; // rax
  __int64 *v5; // rbx
  __int64 result; // rax
  unsigned __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 *v10; // rdx
  __int64 v11; // rdi
  __int64 v12; // rcx
  __int64 v13; // rax
  unsigned __int64 v14; // rax
  __int64 v15; // rcx
  unsigned __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rdx
  bool v19; // zf

  v2 = *(_BYTE *)(a1 + 28) & 0x7F;
  if ( (unsigned int)(v2 - 26) > 0x1A )
  {
    if ( (unsigned int)(v2 - 64) > 2 )
      return 0;
    v10 = (__int64 *)(*(_QWORD *)(a1 + 80) & 0xFFFFFFFFFFFFFFF8LL);
    if ( (*(_QWORD *)(a1 + 80) & 4) != 0 )
      v3 = v10[1];
    else
      v3 = *v10;
  }
  else
  {
    v3 = *(_QWORD *)(a1 + 48);
  }
  v4 = (__int64 *)(v3 & 0xFFFFFFFFFFFFFFF0LL);
  v5 = v4;
  if ( !v4 )
    return 0;
  result = *v4;
  v7 = *(unsigned __int8 *)(result + 16);
  if ( (_BYTE)v7 != 42 )
  {
    v8 = *(_QWORD *)(*(_QWORD *)(result + 8) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v8 + 16) == 42 )
    {
      v8 = sub_F3F310(result, a2, v7, v8);
      result = *v5;
      v7 = *(unsigned __int8 *)(*v5 + 16);
      if ( v8 )
      {
        v8 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 32)
                                                                                  & 0xFFFFFFFFFFFFFFF0LL)
                                                                      + 8LL)
                                                          & 0xFFFFFFFFFFFFFFF0LL)
                                              + 16LL)
           - 25;
        if ( (unsigned int)v8 <= 1 )
        {
          if ( (_BYTE)v7 == 42 )
            goto LABEL_6;
LABEL_13:
          result = sub_F3F310(result, a2, v7, v8);
          goto LABEL_6;
        }
      }
    }
    if ( (_BYTE)v7 == 33 )
    {
      v7 = *(_QWORD *)(result + 32) & 0xFFFFFFFFFFFFFFF0LL;
      v11 = *(_QWORD *)v7;
      if ( *(_BYTE *)(*(_QWORD *)v7 + 16LL) == 26 )
        goto LABEL_6;
      goto LABEL_22;
    }
    v12 = *(_QWORD *)(*(_QWORD *)(result + 8) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v12 + 16) != 33 )
    {
LABEL_32:
      if ( (unsigned int)(unsigned __int8)v7 - 43 <= 1 )
        goto LABEL_33;
      goto LABEL_47;
    }
LABEL_28:
    v13 = sub_F3F310(result, a2, v7, v12);
    if ( !v13 )
    {
LABEL_31:
      result = *v5;
      v7 = *(unsigned __int8 *)(*v5 + 16);
      goto LABEL_32;
    }
    v14 = *(_QWORD *)(v13 + 32) & 0xFFFFFFFFFFFFFFF0LL;
    v11 = *(_QWORD *)v14;
    if ( *(_BYTE *)(*(_QWORD *)v14 + 16LL) == 26 )
      goto LABEL_24;
LABEL_22:
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v11 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 26
      && sub_F3F310(v11, a2, v7, v8) )
    {
LABEL_24:
      result = *v5;
      if ( *(_BYTE *)(*v5 + 16) == 33 )
        goto LABEL_6;
      goto LABEL_13;
    }
    goto LABEL_31;
  }
  v8 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(result + 32)
                                                                            & 0xFFFFFFFFFFFFFFF0LL)
                                                                + 8LL)
                                                    & 0xFFFFFFFFFFFFFFF0LL)
                                        + 16LL)
     - 25;
  if ( (unsigned int)v8 <= 1 )
  {
LABEL_6:
    result = *(_QWORD *)(*(_QWORD *)(result + 32) & 0xFFFFFFFFFFFFFFF0LL);
    LODWORD(v7) = *(unsigned __int8 *)(result + 16);
    goto LABEL_7;
  }
  v12 = *(_QWORD *)(*(_QWORD *)(result + 8) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v12 + 16) == 33 )
    goto LABEL_28;
LABEL_47:
  v8 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(result + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 43;
  if ( (unsigned int)v8 > 1 )
    goto LABEL_39;
  result = sub_F3F310(result, a2, v7, v8);
  if ( !result )
  {
    result = *v5;
    v7 = *(unsigned __int8 *)(*v5 + 16);
    goto LABEL_39;
  }
LABEL_33:
  while ( 1 )
  {
    v15 = *(_QWORD *)(result + 32);
    if ( (*(_BYTE *)(result + 18) & 0x10) == 0 )
      break;
    v16 = v15 & 0xFFFFFFFFFFFFFFF0LL;
    result = *(_QWORD *)v16;
    v17 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)v16 + 16LL) - 43;
    if ( (unsigned int)v17 > 1 )
      result = sub_F3F310(result, a2, v17, v16);
  }
  result = *v5;
  v7 = *(unsigned __int8 *)(*v5 + 16);
  v8 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v15 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                                    & 0xFFFFFFFFFFFFFFF0LL)
                                        + 16LL)
     - 25;
  if ( (unsigned __int8)v8 <= 1u )
  {
    do
    {
      v18 = (unsigned int)(v7 - 43);
      if ( (unsigned int)v18 > 1 )
        result = sub_F3F310(result, a2, v18, v8);
      v19 = (*(_BYTE *)(result + 18) & 0x10) == 0;
      result = *(_QWORD *)(*(_QWORD *)(result + 32) & 0xFFFFFFFFFFFFFFF0LL);
      LODWORD(v7) = *(unsigned __int8 *)(result + 16);
    }
    while ( !v19 );
    goto LABEL_7;
  }
LABEL_39:
  if ( (_BYTE)a2 )
  {
    v8 = *(_QWORD *)(*(_QWORD *)(result + 8) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v8 + 16) == 11 )
    {
      if ( (_BYTE)v7 == 11 )
        goto LABEL_6;
      goto LABEL_13;
    }
  }
LABEL_7:
  if ( (unsigned int)(v7 - 25) > 1 )
  {
    v9 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(result + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 25;
    if ( (unsigned int)v9 <= 1 )
      return sub_F3F310(result, a2, v9, v8);
    return 0;
  }
  return result;
}

