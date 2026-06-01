bool __fastcall sub_5364C0(unsigned __int8 a1, unsigned __int8 a2, char a3)
{
  unsigned __int8 v3; // r13
  unsigned __int8 v4; // r12
  int v6; // edx
  unsigned int v7; // r15d
  unsigned int v8; // r14d
  __int64 v9; // rax
  __int64 v10; // rbx
  __int64 v11; // [rsp+0h] [rbp-40h]

  if ( a1 == a2 )
    return 1;
  v3 = a2 & 0xF;
  v4 = a1 & 0xF;
  if ( ((a1 & 0xF) == 9) != ((a2 & 0xF) == 9) || ((a2 & 0x3F) == 1) != ((a1 & 0x3F) == 1) )
    return 0;
  v6 = a3 & 0x26;
  if ( v6 != 4 )
  {
    if ( v6 > 4 )
    {
      if ( v6 != 32 )
      {
        if ( !under_debugger )
          interr(993);
        BUG();
      }
      return 0;
    }
    if ( v6 )
    {
      v7 = a2;
      v8 = a1;
      if ( sub_533460(a1, a2) )
        return 1;
    }
    else
    {
      v7 = a2;
      v8 = a1;
    }
    v11 = sub_565D90(v8);
    v9 = sub_565D90(v7);
    if ( v11 == -1 || v11 != v9 )
      goto LABEL_23;
    if ( v4 == 8 )
      goto LABEL_19;
    if ( v4 > 8u )
    {
      if ( v4 == 10 )
      {
        if ( v3 == 8 )
          goto LABEL_23;
        if ( v3 <= 8u )
          goto LABEL_45;
        if ( v3 == 10 )
          return 1;
LABEL_23:
        if ( (a1 & 0xE) == 0 && (a1 & 0x30) != 0 )
          goto LABEL_25;
        goto LABEL_33;
      }
    }
    else if ( (unsigned __int8)(v4 - 2) <= 5u )
    {
      if ( (a1 & 0x30) != 0x20 )
      {
LABEL_19:
        if ( v3 == 8 || v3 <= 8u && (unsigned __int8)(v3 - 2) <= 5u && (a2 & 0x30) != 0x20 )
          return 1;
        goto LABEL_23;
      }
      if ( v3 == 8 )
      {
LABEL_32:
        if ( (a1 & 0xE) == 0 )
          goto LABEL_25;
LABEL_33:
        if ( (a2 & 0xE) == 0 )
        {
          if ( (a2 & 0x30) == 0 )
            return 0;
LABEL_25:
          v10 = sub_565B80(v8);
          return v10 == sub_565B80(v7);
        }
        return 0;
      }
      if ( v3 > 8u )
      {
        if ( v3 == 10 )
          return 1;
        goto LABEL_32;
      }
LABEL_45:
      if ( (unsigned __int8)(v3 - 2) <= 5u && (a2 & 0x30) == 0x20 )
        return 1;
      goto LABEL_23;
    }
    if ( v3 != 8 )
    {
      if ( v3 > 8u )
      {
        if ( v3 != 10 )
          return 1;
      }
      else if ( (unsigned __int8)(v3 - 2) > 5u )
      {
        return 1;
      }
    }
    goto LABEL_23;
  }
  return 1;
}
