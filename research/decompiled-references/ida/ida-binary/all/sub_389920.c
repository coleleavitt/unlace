__int64 __fastcall sub_389920(char *a1, _BYTE *a2, double a3)
{
  char v3; // al
  char v4; // dl
  char *v6; // rdx
  __int64 v7; // rdx
  _BYTE *v8; // rcx
  _BYTE *v9; // rax
  unsigned __int64 v10; // r8

  v3 = *a1;
LABEL_2:
  if ( !v3 )
    return 0;
  while ( 1 )
  {
    v4 = a1[1];
    if ( v3 != 1 )
    {
      if ( (unsigned __int8)(v3 - 2) > 1u )
      {
        ++a1;
        v3 = v4;
        goto LABEL_2;
      }
      goto LABEL_5;
    }
    if ( v4 == 33 )
      break;
    if ( v4 == 40 )
    {
      v6 = a1 + 16;
      while ( 1 )
      {
        if ( !*a1 )
          return 0;
        if ( a1 + 1 == v6 )
          break;
        ++a1;
      }
      v3 = a1[1];
      a1 = v6;
      goto LABEL_2;
    }
LABEL_5:
    if ( v4 )
    {
      v3 = a1[2];
      a1 += 2;
      if ( v3 )
        continue;
    }
    return 0;
  }
  v7 = (unsigned __int8)a1[2];
  v8 = a1 + 2;
  v9 = a2;
  v10 = (unsigned __int64)(a2 + 1024);
  if ( (v7 & 0xFD) == 0 )
  {
LABEL_22:
    if ( (unsigned __int64)v9 >= v10 )
      goto LABEL_26;
    *v9 = 0;
    return (__int64)v8;
  }
  while ( 2 )
  {
    if ( (_BYTE)v7 == 32 )
    {
LABEL_21:
      v7 = (unsigned __int8)*++v8;
      if ( (v7 & 0xFD) == 0 )
        goto LABEL_22;
      continue;
    }
    break;
  }
  if ( (unsigned __int64)v9 < v10 )
  {
    *v9++ = v7;
    if ( (unsigned __int64)v9 >= v10 )
    {
      a2[1023] = 0;
      v9 = a2 + 1023;
    }
    goto LABEL_21;
  }
  if ( under_debugger )
    goto LABEL_28;
  interr(518, a2, v7, v8, a3);
LABEL_26:
  if ( under_debugger )
LABEL_28:
    BUG();
  interr(519, a2, v7, v8, a3);
  return struc_operand_info_t__::vfunc_2();
}
