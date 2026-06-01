__int64 __fastcall sub_8CA760(__int64 *a1, __int64 a2)
{
  __int64 *v2; // r12
  __int64 *v3; // rbp
  __int64 v4; // rdi
  __int64 v5; // rdx
  int v6; // eax
  unsigned int v7; // eax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rcx
  char v13; // dl
  int v14; // edx
  unsigned int v15; // eax
  __int64 v16; // rax
  __int64 v17; // rcx
  char v18; // dl
  __int64 v19; // rax
  __int64 v20; // [rsp+8h] [rbp-20h]

  while ( 1 )
  {
    v2 = (__int64 *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
    v3 = a1;
    v4 = *(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
    v5 = *(_QWORD *)(*(_QWORD *)(v4 + 8) & 0xFFFFFFFFFFFFFFF0LL);
    v6 = *(unsigned __int8 *)(v5 + 16);
    if ( (_BYTE)v6 == 13 )
    {
      if ( ((*(_WORD *)(v5 + 18) >> 3) & 0x1FF) == 0x1B3 )
        goto LABEL_12;
    }
    else if ( (_BYTE)v6 == 14 || (unsigned int)(v6 - 56) <= 1 )
    {
      goto LABEL_10;
    }
    if ( (unsigned __int8)sub_B10310(v4) )
    {
      v7 = sub_70B280(*v3, a2);
      if ( v7 == 32 )
      {
        LODWORD(v20) = 4;
        BYTE4(v20) = 1;
        return v20;
      }
      if ( v7 > 0x20 )
      {
        if ( v7 == 64 )
        {
          LODWORD(v20) = 6;
          BYTE4(v20) = 1;
          return v20;
        }
      }
      else
      {
        if ( v7 == 8 )
        {
          LODWORD(v20) = 0;
          BYTE4(v20) = 1;
          return v20;
        }
        if ( v7 == 16 )
        {
          LODWORD(v20) = 2;
          BYTE4(v20) = 1;
          return v20;
        }
      }
      LODWORD(v20) = 9;
      BYTE4(v20) = 1;
      return v20;
    }
    if ( (unsigned __int8)sub_B101F0(*v2) )
      break;
    v9 = *(_QWORD *)(*(_QWORD *)(*v2 + 8) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v9 + 16) == 13 && ((*(_WORD *)(v9 + 18) >> 3) & 0x1FF) == 0x1E7 )
    {
LABEL_16:
      LODWORD(v20) = 13;
      BYTE4(v20) = 1;
      return v20;
    }
    if ( (unsigned __int8)sub_B07F70(*v2) )
    {
      LODWORD(v20) = 12;
      BYTE4(v20) = 1;
      return v20;
    }
    v10 = *v2;
    v11 = *v2;
    v12 = *(_QWORD *)(*(_QWORD *)(*v2 + 8) & 0xFFFFFFFFFFFFFFF0LL);
    v13 = *(_BYTE *)(v12 + 16);
    if ( v13 == 13 )
    {
      if ( ((*(_WORD *)(v12 + 18) >> 3) & 0x1FF) == 0x1F2 )
        goto LABEL_36;
      v14 = *(unsigned __int8 *)(v10 + 16);
      if ( (_BYTE)v14 != 41 )
      {
        if ( (unsigned int)(v14 - 42) > 1 )
        {
          v17 = *v2;
          v18 = 13;
          goto LABEL_64;
        }
LABEL_48:
        while ( 1 )
        {
          v16 = *(_QWORD *)(v11 + 32);
          if ( (*(_BYTE *)(v11 + 18) & 0x10) == 0 )
            break;
          v11 = *(_QWORD *)(v16 & 0xFFFFFFFFFFFFFFF0LL);
          if ( (unsigned int)*(unsigned __int8 *)(v11 + 16) - 42 > 1 )
            v11 = sub_B0D320(v11);
        }
        if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v16 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                                          & 0xFFFFFFFFFFFFFFF0LL)
                                              + 16LL)
           - 25 <= 1 )
        {
LABEL_22:
          LODWORD(v20) = 14;
          BYTE4(v20) = 1;
          return v20;
        }
LABEL_55:
        v10 = *v2;
        goto LABEL_56;
      }
LABEL_21:
      if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v11 + 32)
                                                                                & 0xFFFFFFFFFFFFFFF0LL)
                                                                    + 8LL)
                                                        & 0xFFFFFFFFFFFFFFF0LL)
                                            + 16LL)
         - 25 <= 1 )
        goto LABEL_22;
      goto LABEL_44;
    }
    if ( v13 == 32 )
    {
LABEL_36:
      LODWORD(v20) = 15;
      BYTE4(v20) = 1;
      return v20;
    }
    if ( *(_BYTE *)(v10 + 16) == 41 )
      goto LABEL_21;
    if ( v13 != 41 )
      goto LABEL_45;
    v11 = sub_B0D320(v11);
    if ( v11 )
      goto LABEL_21;
LABEL_44:
    v10 = *v2;
LABEL_45:
    v11 = v10;
    if ( (unsigned int)*(unsigned __int8 *)(v10 + 16) - 42 <= 1 )
      goto LABEL_48;
    if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v10 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 42 <= 1 )
    {
      v11 = sub_B0D320(v10);
      if ( v11 )
        goto LABEL_48;
      goto LABEL_55;
    }
LABEL_56:
    v17 = v10;
    v18 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v10 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
    if ( v18 == 33 )
      goto LABEL_16;
    if ( (unsigned __int8)v18 > 0x21u )
    {
      if ( (unsigned __int8)(v18 - 41) <= 2u )
        goto LABEL_16;
      if ( *(_BYTE *)(v10 + 16) == 7 )
        goto LABEL_60;
      goto LABEL_69;
    }
    if ( v18 == 11 )
      goto LABEL_22;
LABEL_64:
    if ( (unsigned __int8)(v18 - 25) <= 1u )
      goto LABEL_22;
    if ( *(_BYTE *)(v10 + 16) == 7 )
    {
LABEL_60:
      a2 = *(_QWORD *)(v17 + 32);
      goto LABEL_61;
    }
    if ( v18 == 7 )
    {
      v17 = sub_B0D320(v10);
      if ( v17 )
        goto LABEL_60;
      v10 = *v2;
    }
LABEL_69:
    if ( *(_BYTE *)(v10 + 16) != 15 )
    {
      v19 = *(_QWORD *)(*(_QWORD *)(v10 + 8) & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v19 + 16) == 13 && (((*(_WORD *)(v19 + 18) >> 3) + 57) & 0x1FFu) <= 0x17 )
      {
        LODWORD(v20) = 11;
        BYTE4(v20) = 1;
      }
      else
      {
LABEL_10:
        BYTE4(v20) = 0;
      }
      return v20;
    }
    a2 = *(_QWORD *)(v10 + 32);
LABEL_61:
    a1 = v3;
  }
  v15 = sub_70B280(*v3, a2);
  if ( v15 == 16 )
  {
    LODWORD(v20) = 3;
    BYTE4(v20) = 1;
    return v20;
  }
  if ( v15 > 0x10 )
  {
    if ( v15 == 32 )
    {
      LODWORD(v20) = 5;
      BYTE4(v20) = 1;
      return v20;
    }
    if ( v15 == 64 )
    {
      LODWORD(v20) = 7;
      BYTE4(v20) = 1;
      return v20;
    }
    goto LABEL_51;
  }
  if ( v15 != 1 )
  {
    if ( v15 == 8 )
    {
      LODWORD(v20) = 1;
      BYTE4(v20) = 1;
      return v20;
    }
LABEL_51:
    LODWORD(v20) = 8;
    BYTE4(v20) = 1;
    return v20;
  }
LABEL_12:
  LODWORD(v20) = 10;
  BYTE4(v20) = 1;
  return v20;
}

