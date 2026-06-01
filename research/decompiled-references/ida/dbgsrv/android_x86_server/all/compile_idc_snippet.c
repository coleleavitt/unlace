/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: compile_idc_snippet
// Address: 0x00051340

//----- (00051340) --------------------------------------------------------
int __cdecl compile_idc_snippet(int a1, char *s, int a3, int a4, char a5)
{
  char *v5; // esi
  char *v6; // edi
  char v7; // al
  int v8; // ecx
  char *v9; // edx
  char v10; // al
  char v11; // cl
  bool v12; // zf
  int v13; // eax
  char *v14; // eax
  bool v15; // sf
  char *v16; // edi
  char v17; // al
  int v18; // eax
  const char **v19; // esi
  const char *v20; // edi
  bool v21; // al
  int v22; // esi
  int v24; // [esp+Ch] [ebp-30h]
  char v25; // [esp+Ch] [ebp-30h]
  int v26; // [esp+Ch] [ebp-30h]
  size_t v27; // [esp+10h] [ebp-2Ch]
  size_t v28; // [esp+10h] [ebp-2Ch]
  unsigned __int8 v29; // [esp+10h] [ebp-2Ch]
  char *v30; // [esp+14h] [ebp-28h]
  const char *v31; // [esp+14h] [ebp-28h]
  void *v32; // [esp+18h] [ebp-24h] BYREF
  int v33; // [esp+1Ch] [ebp-20h]
  int v34; // [esp+20h] [ebp-1Ch]
  unsigned int v35; // [esp+28h] [ebp-14h]

  v35 = __readgsdword(0x14u);
  if ( !s )
    return 0;
  v32 = nullptr;
  v33 = 0;
  v34 = 0;
  sub_1F400((int)&v32, "static %s(){", a1);
  v5 = &s[strlen(s)];
  do
  {
    v6 = v5;
    if ( v5 <= s )
      break;
    if ( *(v5 - 1) < 0 )
      break;
    --v5;
  }
  while ( isspace((unsigned __int8)*(v6 - 1)) );
  if ( s == v6 )
    goto LABEL_65;
  v7 = *(v6 - 1);
  if ( v7 == 59 )
  {
    --v6;
  }
  else if ( v7 == 125 )
  {
    goto LABEL_65;
  }
  v27 = 0;
  v30 = s;
  v24 = 0;
  v9 = s;
LABEL_13:
  v10 = 0;
LABEL_15:
  ++v9;
  while ( v9 - 1 < v6 )
  {
    v11 = *(v9 - 1);
    if ( !v10 )
    {
      v13 = v11;
      switch ( v11 )
      {
        case '"':
        case '\'':
          v10 = *(v9 - 1);
          goto LABEL_15;
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
          goto LABEL_13;
        case '(':
          ++v27;
          goto LABEL_13;
        case ')':
          v15 = (--v27 & 0x80000000) != 0;
          LOBYTE(v13) = 1;
          if ( !v15 )
            v13 = v24;
          v24 = v13;
          goto LABEL_13;
        case '/':
          if ( *v9 != 42 )
          {
            if ( *v9 == 47 )
            {
              do
                ++v9;
              while ( *v9 && *v9 != 10 );
            }
            goto LABEL_13;
          }
          do
          {
            v14 = v9 + 1;
            while ( 1 )
            {
              v9 = v14;
              v10 = *v14;
              if ( v10 != 42 )
                break;
              v14 = v9 + 1;
              if ( v9[1] == 47 )
              {
                v9 += 2;
                goto LABEL_13;
              }
            }
          }
          while ( v10 );
          break;
        case ';':
          goto LABEL_36;
        default:
          if ( v11 == 123 )
          {
            v30 = nullptr;
          }
          else if ( v11 == 125 )
          {
LABEL_36:
            v27 = 0;
            v30 = v9;
            v24 = 0;
          }
          goto LABEL_13;
      }
      goto LABEL_15;
    }
    if ( v11 == v10 )
      goto LABEL_13;
    if ( v11 != 92 )
      goto LABEL_15;
    v12 = *v9 == 0;
    v9 += 2;
    if ( v12 )
      break;
  }
  v16 = v30;
  if ( !v30 || (v24 & 1) != 0 )
  {
LABEL_65:
    sub_31370((int)&v32, "%s\n;}", s);
    goto LABEL_66;
  }
  v17 = *v30;
  if ( *v30 >= 0 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v25 = v17;
        if ( !isspace((unsigned __int8)v17) )
          break;
        v17 = *++v16;
        if ( v17 < 0 )
          goto LABEL_55;
      }
      if ( v25 != 47 || v16[1] != 47 )
        break;
      v17 = 47;
      while ( v17 != 10 )
      {
        v17 = *++v16;
        if ( !v17 )
          goto LABEL_65;
      }
    }
  }
LABEL_55:
  v18 = 0;
  v19 = (const char **)off_137F64;
  v31 = v16;
  do
  {
    v26 = v18;
    v20 = *v19;
    v28 = strlen(*v19);
    if ( strncmp(v31, v20, v28) )
      goto LABEL_62;
    if ( v31[v28] < 0 )
    {
      v21 = 0;
    }
    else
    {
      v29 = v31[v28];
      v21 = isalnum(v29) != 0;
      if ( v29 == 95 )
        goto LABEL_62;
    }
    if ( !v21 )
      goto LABEL_65;
LABEL_62:
    v18 = v26 + 1;
    ++v19;
  }
  while ( (unsigned int)(v26 + 1) < 0xB );
  if ( !v31 )
    goto LABEL_65;
  sub_31370((int)&v32, "%*.*sreturn %s\n;}", v31 - s, v31 - s, s, v31);
LABEL_66:
  v8 = compile_idc_text(v32, a3, a4, a5);
  if ( v32 )
  {
    v22 = v8;
    v33 = 0;
    qfree(v32);
    v32 = nullptr;
    v34 = 0;
    return v22;
  }
  return v8;
}
// 51631: conditional instruction was optimized away because cl.1<0
// 4E2D0: using guessed type _DWORD __cdecl compile_idc_text(_DWORD, _DWORD, _DWORD, char);
// 137F64: using guessed type char *off_137F64[11];
