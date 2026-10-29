void __fastcall sub_76F5E0(_DWORD *a1, int a2)
{
  char *v2; // rbp
  char v3; // bl
  int v5; // r15d
  unsigned __int8 *i; // rdi
  char *v7; // r14
  unsigned __int64 v8; // r12
  int v9; // eax
  int v10; // eax
  unsigned __int8 v11; // al
  bool v12; // sf
  unsigned int v13; // eax
  __int64 v14; // rsi
  _BYTE *v15; // rdi
  int v16; // eax
  __int64 v17; // rcx
  __int64 j; // rdx
  unsigned __int64 v19; // rax

  v2 = qword_2CD44C0;
  *a1 = 0;
  v3 = *v2;
  if ( !*v2 )
    goto LABEL_8;
  v5 = 0;
  for ( i = (unsigned __int8 *)v2; ; v3 = *i )
  {
    v7 = (char *)(i + 1);
    if ( v3 > 64 )
    {
      if ( v3 != 95 && ((*__ctype_b_loc())[v3] & 8) == 0 )
      {
        if ( a2 != 4 )
          goto LABEL_7;
        v11 = (v3 & 0xDF) == 92;
LABEL_25:
        if ( (v11 & 1) != 0 )
        {
          v2 = (char *)(i + 1);
          goto LABEL_9;
        }
      }
LABEL_16:
      ++v5;
      ++i;
      continue;
    }
    if ( v3 > 35 )
    {
      switch ( v3 )
      {
        case '$':
          if ( !a2 )
            goto LABEL_16;
          goto LABEL_13;
        case '%':
          if ( a2 != 3 )
            goto LABEL_7;
          goto LABEL_13;
        case '.':
          if ( a2 != 1 )
            goto LABEL_40;
          goto LABEL_16;
        case '<':
        case '>':
          if ( a2 )
            goto LABEL_28;
          goto LABEL_16;
        case '@':
          if ( a2 == 1 )
            goto LABEL_28;
          if ( v5 )
            goto LABEL_33;
          goto LABEL_14;
        default:
          goto LABEL_18;
      }
    }
    if ( !v3 )
      break;
LABEL_18:
    v8 = (unsigned int)v3;
    if ( (unsigned int)v8 <= 0x7F )
    {
      if ( ((*__ctype_b_loc())[v3] & 8) != 0 )
        goto LABEL_16;
      if ( v3 != 45 )
      {
        if ( a2 == 4 && (unsigned __int8)v3 > 0x1Fu )
        {
          v19 = 0xA400840400000000LL;
          v11 = _bittest64((const __int64 *)&v19, v8);
          goto LABEL_25;
        }
LABEL_7:
        v2 = (char *)(i + 1);
LABEL_8:
        if ( a2 <= 1 )
          goto LABEL_28;
LABEL_9:
        byte_2CD44A1 = 1;
        goto LABEL_10;
      }
      if ( a2 != 3 || v5 )
        goto LABEL_40;
      ++i;
      v5 = 1;
    }
    else
    {
      if ( a2 == 1 )
        goto LABEL_28;
      v9 = sub_76F430(i);
      if ( !v9 )
      {
LABEL_40:
        if ( a2 != 4 )
          goto LABEL_7;
        goto LABEL_16;
      }
      v10 = v9 - 1;
      v5 += v10 + 1;
      i = (unsigned __int8 *)&v7[v10];
    }
  }
  if ( a2 <= 1 )
LABEL_28:
    sub_76E6C0();
LABEL_13:
  if ( v5 )
  {
LABEL_33:
    v12 = dword_2CD43F0 - 1 < 0;
    v13 = --dword_2CD43F0;
    if ( v12 )
      __longjmp_chk(env, 4294967288LL);
    v14 = 16 * (v13 + 125LL);
    v15 = &byte_2CCCDE0[v14];
    *(_QWORD *)v15 = v2;
    *((_WORD *)v15 + 4) = 0;
    *((_WORD *)v15 + 5) = v5;
    if ( (unsigned __int16)v5 <= 8u )
    {
      v16 = (unsigned __int16)v5 - 1;
      v17 = v16;
      for ( j = v16 - 1LL; ; --j )
      {
        v15[v17] = v2[v17];
        v17 = j;
        if ( v16 - 1LL - (unsigned int)v16 == j )
          break;
      }
    }
    *(_WORD *)a1 = v14;
  }
LABEL_14:
  v2 = v7;
LABEL_10:
  qword_2CD44C0 = v2;
}
