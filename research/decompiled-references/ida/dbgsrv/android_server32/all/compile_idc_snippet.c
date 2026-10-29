/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: compile_idc_snippet
// Address: 0x0003F9E0

//----- (0003F9E0) --------------------------------------------------------
int __fastcall compile_idc_snippet(const char *a1, const char *a2, int a3, int a4, char a5)
{
  int v6; // r4
  size_t v8; // r0
  const char *v9; // r6
  size_t v10; // r5
  const char *v11; // r4
  int v12; // r1
  int v13; // r0
  int v14; // r1
  int v15; // r0
  int v16; // r0
  const char *v17; // r2
  int v18; // r1
  int v19; // r3
  int v20; // r6
  int v21; // r5
  bool v22; // zf
  int v23; // r3
  const char *v24; // r3
  int i; // r4
  int v26; // r7
  const char **v27; // r6
  size_t v28; // r4
  int v29; // r0
  int v30; // r4
  _BOOL4 v31; // r1
  int v33; // [sp+18h] [bp-24h]
  int v34; // [sp+1Ch] [bp-20h]
  char *s1; // [sp+28h] [bp-14h]
  void *v37; // [sp+2Ch] [bp-10h] BYREF
  int v38; // [sp+30h] [bp-Ch]
  int v39; // [sp+34h] [bp-8h]

  v6 = 0;
  if ( !a2 )
    return v6;
  v38 = 0;
  v37 = nullptr;
  v39 = 0;
  sub_1DA58((int)&v37, "static %s(){", a1);
  v33 = a3;
  v34 = a4;
  v8 = strlen(a2);
  v9 = a2 - 1;
  do
  {
    v10 = v8;
    v11 = &a2[v8];
    if ( &a2[v8] <= a2 )
      break;
    v12 = v9[v8];
    v13 = (unsigned __int8)v9[v8];
    if ( v12 <= -1 )
      break;
    v14 = isspace(v13);
    v8 = v10 - 1;
  }
  while ( v14 );
  if ( !v10 )
    goto LABEL_69;
  v15 = (unsigned __int8)a2[v10 - 1];
  if ( v15 == 59 )
  {
    v11 = &a2[v10 - 1];
  }
  else if ( v15 == 125 )
  {
    goto LABEL_69;
  }
  v16 = 0;
  v17 = a2;
  s1 = (char *)a2;
LABEL_12:
  v18 = 0;
LABEL_13:
  v19 = 0;
LABEL_15:
  while ( v17 < v11 )
  {
    v20 = *(unsigned __int8 *)v17;
    if ( v19 << 24 )
    {
      v21 = 0;
      if ( v20 == (unsigned __int8)v19 )
        goto LABEL_14;
      if ( v20 == 92 )
      {
        v22 = v17[1] == 0;
        v17 += 2;
        if ( v22 )
          break;
      }
      else
      {
        v21 = v19;
LABEL_14:
        ++v17;
        v19 = v21;
      }
    }
    else
    {
      switch ( *v17 )
      {
        case '"':
        case '\'':
          v19 = *(unsigned __int8 *)v17++;
          continue;
        case '#':
        case '$':
        case '%':
        case '&':
        case '*':
        case '+':
        case ',':
        case '-':
        case '.':
        case '0':
        case '1':
        case '2':
        case '3':
        case '4':
        case '5':
        case '6':
        case '7':
        case '8':
        case '9':
        case ':':
          goto LABEL_31;
        case '(':
          ++v17;
          ++v16;
          goto LABEL_13;
        case ')':
          v18 |= --v16 < 0;
          ++v17;
          goto LABEL_13;
        case '/':
          v23 = *((unsigned __int8 *)v17 + 1);
          if ( v23 == 42 )
          {
            v24 = v17 + 2;
            do
            {
              while ( 1 )
              {
                v17 = v24;
                v19 = *(unsigned __int8 *)v24;
                if ( v19 == 42 )
                  break;
                if ( !v19 )
                  goto LABEL_15;
                v24 = v17 + 1;
              }
              v24 = v17 + 1;
            }
            while ( v17[1] != 47 );
            v17 += 2;
          }
          else
          {
            if ( v23 != 47 )
              goto LABEL_31;
            for ( v17 += 2; *v17 && *v17 != 10; ++v17 )
              ;
          }
          goto LABEL_13;
        case ';':
          goto LABEL_23;
        default:
          if ( v20 == 123 )
          {
            s1 = nullptr;
            ++v17;
            goto LABEL_13;
          }
          if ( v20 == 125 )
          {
LABEL_23:
            s1 = (char *)(v17 + 1);
            v16 = 0;
            ++v17;
            goto LABEL_12;
          }
LABEL_31:
          v19 = 0;
          ++v17;
          break;
      }
    }
  }
  if ( !(((s1 == nullptr) | v18) << 31) )
  {
    for ( i = *s1; ; i = *++s1 )
    {
      if ( i <= -1 )
        goto LABEL_60;
LABEL_58:
      if ( !isspace((unsigned __int8)i) )
        break;
    }
    if ( (unsigned __int8)i != 47 || s1[1] != 47 )
    {
LABEL_60:
      v26 = 0;
      v27 = (const char **)off_D9BC4;
      while ( 1 )
      {
        v28 = strlen(*v27);
        if ( !strncmp(s1, *v27, v28) )
        {
          v29 = (unsigned __int8)s1[v28];
          v30 = (char)v29;
          v31 = 0;
          if ( (char)v29 > -1 )
            v31 = isalnum(v29) != 0;
          if ( v30 != 95 && !v31 )
            goto LABEL_69;
        }
        ++v27;
        if ( (unsigned int)++v26 >= 0xB )
        {
          if ( !s1 )
            goto LABEL_69;
          sub_28C8C((int)&v37, "%*.*sreturn %s\n;}", s1 - a2, s1 - a2, a2, s1);
          goto LABEL_70;
        }
      }
    }
    LOBYTE(i) = 47;
    while ( (_BYTE)i )
    {
      if ( (unsigned __int8)i == 10 )
        goto LABEL_58;
      LOBYTE(i) = *++s1;
    }
  }
LABEL_69:
  sub_28C8C((int)&v37, "%s\n;}", a2);
LABEL_70:
  v6 = compile_idc_text((int)v37, v33, v34, a5);
  if ( v37 )
  {
    v38 = 0;
    qfree(v37);
    v39 = 0;
    v37 = nullptr;
  }
  return v6;
}
// D9BC4: using guessed type char *off_D9BC4[11];
