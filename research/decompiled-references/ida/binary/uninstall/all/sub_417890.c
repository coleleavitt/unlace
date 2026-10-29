__int64 __fastcall sub_417890(unsigned __int8 *a1, unsigned __int8 *a2)
{
  unsigned int v2; // r15d
  unsigned __int8 v5; // r13
  unsigned __int8 v6; // bl
  const unsigned __int16 **v7; // rax
  unsigned int v8; // r14d
  unsigned __int16 v9; // bx
  unsigned __int16 v10; // ax
  unsigned int v11; // r14d
  const unsigned __int16 **v12; // rax
  const unsigned __int16 *v13; // rcx
  __int64 result; // rax
  unsigned __int16 v15; // [rsp+4h] [rbp-34h] BYREF
  _WORD v16[25]; // [rsp+6h] [rbp-32h] BYREF

  v2 = 0;
  while ( 1 )
  {
    v5 = *a2;
    v6 = *a1;
    while ( 1 )
    {
      v7 = __ctype_b_loc();
      if ( ((*v7)[v5] & 0x800) == 0 )
        break;
      v8 = 0;
      if ( ((*v7)[v6] & 0x800) == 0 )
        break;
      while ( 1 )
      {
        if ( v5 != 48 )
        {
          if ( v6 != 48 )
            goto LABEL_19;
          goto LABEL_16;
        }
        if ( ((*__ctype_b_loc())[a2[1]] & 0x800) == 0 )
          break;
        ++a2;
        --v8;
        v5 = *a2;
      }
      while ( v6 == 48 )
      {
LABEL_16:
        if ( ((*__ctype_b_loc())[a1[1]] & 0x800) == 0 )
          break;
        ++a1;
        ++v8;
        v6 = *a1;
      }
LABEL_19:
      if ( !v2 )
        v2 = v8;
      v11 = 0;
      while ( 1 )
      {
        if ( !v11 )
          v11 = v6 - v5;
        ++a2;
        ++a1;
        v12 = __ctype_b_loc();
        v5 = *a2;
        v13 = *v12;
        if ( ((*v12)[*a2] & 0x800) == 0 )
          break;
        v6 = *a1;
        if ( (v13[*a1] & 0x800) == 0 )
          return 0xFFFFFFFFLL;
      }
      v6 = *a1;
      if ( (v13[*a1] & 0x800) != 0 )
        return 1;
      if ( v11 )
        return v11;
    }
    if ( !v6 || !v5 )
      break;
    a1 += (int)sub_49BBC0(a1, v16);
    a2 += (int)sub_49BBC0(a2, &v15);
    v9 = sub_49C170(v16[0]);
    v10 = sub_49C170(v15);
    v11 = v9 - v10;
    if ( v9 != v10 )
      return v11;
    if ( !v2 )
    {
      if ( (unsigned int)Tcl_UniCharIsUpper(v16[0]) && (unsigned int)Tcl_UniCharIsLower(v15) )
      {
        v2 = -1;
      }
      else if ( (unsigned int)Tcl_UniCharIsUpper(v15) )
      {
        if ( (unsigned int)Tcl_UniCharIsLower(v16[0]) )
          v2 = 1;
      }
    }
  }
  result = v2;
  if ( v6 != v5 )
    return v6 - (unsigned int)v5;
  return result;
}

