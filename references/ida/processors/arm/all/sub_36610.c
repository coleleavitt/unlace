__int64 __fastcall sub_36610(char *s, char a2, _WORD *a3, char a4)
{
  int v5; // edi
  int v8; // eax
  char v9; // bl
  const char *v10; // r14
  int v11; // r13d
  __int64 i; // rbx
  int v13; // edx
  int v14; // edi
  int v15; // eax
  int v17; // eax
  int v18; // ebx
  char *v19; // rax
  char v20; // dl
  char *v21; // rcx
  __int16 v22; // dx
  bool v23; // zf
  int v24; // eax
  __int16 v25; // r8
  int v26; // eax
  unsigned int v27; // ecx
  char v28; // cl
  char v29; // dl
  int v30; // edx
  int v31; // r13d
  int v32; // eax
  unsigned __int64 v33; // rdx
  __int64 v34; // rcx
  int v35; // [rsp+Ch] [rbp-5Ch]
  int v36; // [rsp+Ch] [rbp-5Ch]
  char *v37; // [rsp+18h] [rbp-50h] BYREF
  char *v38[9]; // [rsp+20h] [rbp-48h] BYREF

  v38[1] = (char *)__readfsqword(0x28u);
  if ( !s )
    goto LABEL_58;
  v5 = (unsigned __int8)*s;
  if ( !(_BYTE)v5 )
    goto LABEL_58;
  v8 = toupper(v5);
  v9 = v8;
  if ( v8 == 82 )
  {
    LODWORD(i) = sub_22370(s + 1, (const char *)&unk_86D1B, 15, 0);
    if ( (_DWORD)i != -1 )
    {
      LOWORD(v11) = 0;
      LOWORD(v13) = 0;
      goto LABEL_25;
    }
    goto LABEL_58;
  }
  if ( (unsigned int)(v8 - 87) <= 1 )
  {
    v14 = (unsigned __int8)s[1];
    v10 = s + 1;
    LOWORD(v11) = 64;
    if ( v8 == 87 )
      LOWORD(v11) = 32;
    if ( (unsigned __int8)(v14 - 48) > 9u )
    {
      v17 = toupper(v14);
      switch ( v17 )
      {
        case 'S':
          if ( toupper((unsigned __int8)s[2]) == 80 && !s[3] )
          {
            LOWORD(v13) = 0;
            LODWORD(i) = 161;
            goto LABEL_25;
          }
          break;
        case 'Z':
          if ( toupper((unsigned __int8)s[2]) == 82 && !s[3] )
          {
            LOWORD(v13) = 0;
            LODWORD(i) = 160;
            goto LABEL_25;
          }
          break;
        case 'L':
          if ( toupper((unsigned __int8)s[2]) == 82 && !s[3] )
          {
            LOWORD(v13) = 0;
            LODWORD(i) = 159;
            goto LABEL_25;
          }
          break;
        default:
          if ( v17 == 70 && toupper((unsigned __int8)s[2]) == 80 && !s[3] )
          {
            LOWORD(v13) = 0;
            LODWORD(i) = 158;
            goto LABEL_25;
          }
          break;
      }
LABEL_12:
      for ( i = 16; i != 45; ++i )
      {
        while ( (unsigned int)(i - 20) <= 2 )
          ++i;
        if ( !strcasecmp(v10, (const char *)*(&off_A0000 + i)) )
        {
          LOWORD(v11) = 32;
          LOWORD(v13) = 0;
          goto LABEL_25;
        }
      }
      i = 125;
      while ( strcasecmp(v10, (const char *)*(&off_A0000 + i)) )
      {
        if ( ++i == 129 )
        {
          LOWORD(v13) = 0;
          LODWORD(i) = -1;
          goto LABEL_25;
        }
      }
      LOWORD(v11) = 1;
      LOWORD(v13) = 0;
      goto LABEL_25;
    }
    v15 = sub_22370(s + 1, (const char *)&unk_86D1B, 30, 0);
    if ( v15 != -1 )
    {
      LODWORD(i) = v15 + 129;
      LOWORD(v13) = 0;
      goto LABEL_25;
    }
    goto LABEL_58;
  }
  if ( v8 == 68 && a4 != 1 )
  {
    v18 = sub_22370(s + 1, "[", 31, 0);
    if ( v18 == -1 )
      goto LABEL_58;
    v19 = strchr(s, 91);
    if ( v19 )
    {
      v20 = v19[1];
      if ( (unsigned __int8)(v20 - 48) <= 9u )
      {
        v27 = v19[2];
        v20 = v19[2];
        if ( v27 > 0x7F )
          goto LABEL_58;
        if ( v27 - 48 > 9 )
        {
          v21 = v19 + 2;
        }
        else
        {
          v20 = v19[3];
          v21 = v19 + 3;
        }
      }
      else
      {
        if ( (unsigned int)v20 > 0x7F )
          goto LABEL_58;
        v21 = v19 + 1;
      }
      if ( v20 != 93 || v21[1] )
        goto LABEL_58;
    }
    if ( a2 )
    {
      LOWORD(v11) = 64;
      v22 = v18 & 1;
      LODWORD(i) = (v18 >> 1) + 45;
      LOWORD(v13) = v22 << 6;
      goto LABEL_25;
    }
    goto LABEL_67;
  }
  switch ( v8 )
  {
    case 'S':
      if ( toupper((unsigned __int8)s[1]) == 80 && !s[2] )
      {
        v23 = a4 == 0;
        LOWORD(v13) = 0;
        LOWORD(v11) = 0;
        LODWORD(i) = 13;
        if ( !v23 )
          LODWORD(i) = 161;
        goto LABEL_25;
      }
LABEL_54:
      v35 = dword_8B080[(unsigned __int8)(v9 - 66)];
      v24 = sub_22370(s + 1, ".", 31, &v37);
      v25 = v35;
      v18 = v24;
      if ( v24 == -1 )
        goto LABEL_11;
      if ( a4 )
        goto LABEL_79;
      if ( v35 == 128 && v24 > 15 )
      {
LABEL_58:
        LODWORD(i) = -1;
        return (unsigned int)i;
      }
      if ( v35 == 32 )
      {
        if ( !a2 )
        {
          LOWORD(v11) = 0;
          LOWORD(v13) = 0;
          LODWORD(i) = v24 + 93;
          goto LABEL_25;
        }
        goto LABEL_64;
      }
      if ( v35 != 64 )
      {
        if ( v35 == 128 || !a2 )
        {
          LOWORD(v11) = 0;
          LOWORD(v13) = 0;
          LODWORD(i) = v24 + 45;
          goto LABEL_25;
        }
        if ( !v35 )
        {
          if ( !under_debugger )
            interr(10388);
          BUG();
        }
LABEL_64:
        LOWORD(v11) = v35;
        LOWORD(v13) = v35 * (v24 % (128 / v35));
        LODWORD(i) = v24 / (128 / v35) + 45;
        goto LABEL_25;
      }
      if ( a2 )
        goto LABEL_64;
LABEL_67:
      LOWORD(v11) = 0;
      LOWORD(v13) = 0;
      LODWORD(i) = v18 + 61;
      goto LABEL_25;
    case 'F':
      if ( toupper((unsigned __int8)s[1]) == 80 && !s[2] )
      {
        v23 = a4 == 0;
        LOWORD(v13) = 0;
        LOWORD(v11) = 0;
        LODWORD(i) = 11;
        if ( !v23 )
          LODWORD(i) = 158;
        goto LABEL_25;
      }
      goto LABEL_11;
    case 'L':
      if ( toupper((unsigned __int8)s[1]) == 82 && !s[2] )
      {
        v23 = a4 == 0;
        LOWORD(v13) = 0;
        LOWORD(v11) = 0;
        LODWORD(i) = 14;
        if ( !v23 )
          LODWORD(i) = 159;
        goto LABEL_25;
      }
      goto LABEL_11;
    case 'P':
      if ( toupper((unsigned __int8)s[1]) == 67 && !s[2] )
      {
        v23 = a4 == 0;
        LOWORD(v13) = 0;
        LOWORD(v11) = 0;
        LODWORD(i) = 162;
        if ( v23 )
          LODWORD(i) = 15;
        goto LABEL_25;
      }
      goto LABEL_11;
  }
  if ( (v8 & 0xFFFFFFFD) == 0x51 )
    goto LABEL_54;
  if ( !a4 || ((v8 - 68) & 0xFFFFFFFB) != 0 && v8 != 66 && v8 != 86 )
    goto LABEL_11;
  v36 = dword_8B080[(unsigned __int8)(v8 - 66)];
  v26 = sub_22370(s + 1, ".", 31, &v37);
  v25 = v36;
  v18 = v26;
  if ( v26 == -1 )
    goto LABEL_11;
LABEL_79:
  LODWORD(i) = v18 + 163;
  if ( !*v37 )
  {
    LOWORD(v11) = v25;
    LOWORD(v13) = 0;
    goto LABEL_25;
  }
  v28 = v37[1];
  v38[0] = v37 + 1;
  if ( (unsigned __int8)(v28 - 66) <= 0x14u )
  {
    v11 = dword_8B080[(unsigned __int8)(v28 - 66)];
    if ( v11 != -1 )
    {
      v29 = v37[2];
      if ( !v29 )
      {
        LOWORD(v13) = 0;
        LOWORD(v11) = 128;
        goto LABEL_25;
      }
      if ( v29 == 91 )
      {
        v30 = sub_22370(v37 + 3, "]", 15, v38);
        if ( *v38[0] == 93 && v30 != -1 )
        {
          v13 = v11 * v30;
          if ( v11 + v13 <= 128 && (v11 & 7) == 0 )
            goto LABEL_92;
        }
      }
LABEL_11:
      v10 = s;
      LOWORD(v11) = 0;
      goto LABEL_12;
    }
  }
  v31 = sub_22370(v37 + 1, "BHSD", 16, v38);
  if ( (unsigned int)(v31 + 1) <= 1 )
    goto LABEL_11;
  if ( (unsigned __int8)(*v38[0] - 66) > 0x14u )
    goto LABEL_11;
  v32 = dword_8B080[(unsigned __int8)(*v38[0] - 66)];
  v33 = (unsigned int)(v32 - 8);
  if ( (unsigned int)v33 > 0x38 )
    goto LABEL_11;
  v34 = 0x100000001000101LL;
  if ( !_bittest64(&v34, v33) )
    goto LABEL_11;
  v11 = v32 * v31;
  if ( ((v11 - 64) & 0xFFFFFFBF) != 0 )
    goto LABEL_11;
  LOWORD(v13) = 0;
LABEL_92:
  if ( (v11 & (v11 - 1)) != 0 )
    goto LABEL_11;
LABEL_25:
  if ( a3 )
  {
    *a3 = v13;
    a3[1] = v11;
  }
  return (unsigned int)i;
}
