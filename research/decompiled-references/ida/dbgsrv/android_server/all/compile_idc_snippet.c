/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: compile_idc_snippet
// Address: 0x00000000000682D4

//----- (00000000000682D4) ----------------------------------------------------
__int64 __fastcall compile_idc_snippet(const char *a1, const char *a2, __int64 a3, __int64 a4, char a5)
{
  const char *v9; // x23
  unsigned __int64 v10; // x24
  int v11; // w9
  char v12; // w19
  int v13; // w9
  char v14; // w8
  char *v15; // x23
  const char *v16; // x11
  int v17; // w12
  int v18; // w13
  int v19; // t1
  int v20; // w12
  const char *v21; // x12
  int v22; // w8
  unsigned __int64 i; // x27
  const char *v24; // x25
  size_t v25; // x24
  int v26; // w8
  int v27; // w24
  _BOOL4 v28; // w8
  char v29; // t1
  int v30; // w24
  int v31; // t1
  pthread_mutex_t ptr; // [xsp+0h] [xbp-80h] BYREF

  ptr.__list.__prev = *(struct __pthread_internal_list **)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( !a2 )
  {
    v12 = 0;
    return v12 & 1;
  }
  memset(&ptr, 0, 24);
  sub_3C748((__int64)&ptr, "static %s(){", a1);
  v9 = &a2[strlen(a2)];
  do
  {
    v10 = (unsigned __int64)v9;
    if ( v9 <= a2 )
      break;
    --v9;
    if ( *(char *)(v10 - 1) < 0 )
      break;
  }
  while ( isspace(*(unsigned __int8 *)(v10 - 1)) );
  if ( a2 == (const char *)v10 )
    goto LABEL_62;
  v11 = *(unsigned __int8 *)(v10 - 1);
  if ( v11 == 59 )
  {
    --v10;
  }
  else if ( v11 == 125 )
  {
    goto LABEL_62;
  }
  v13 = 0;
  v14 = 0;
  v15 = (char *)a2;
  v16 = a2;
LABEL_15:
  LOBYTE(v17) = 0;
LABEL_17:
  ++v16;
  while ( (unsigned __int64)(v16 - 1) < v10 )
  {
    v18 = *((unsigned __int8 *)v16 - 1);
    if ( !(_BYTE)v17 )
    {
      switch ( *(v16 - 1) )
      {
        case '"':
        case '\'':
          LOBYTE(v17) = *(v16 - 1);
          goto LABEL_17;
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
          goto LABEL_15;
        case '(':
          ++v13;
          goto LABEL_15;
        case ')':
          v14 |= --v13 < 0;
          goto LABEL_15;
        case '/':
          v20 = *(unsigned __int8 *)v16;
          if ( v20 != 42 )
          {
            if ( v20 == 47 )
            {
              do
                ++v16;
              while ( *v16 && *v16 != 10 );
            }
            goto LABEL_15;
          }
          do
          {
            v21 = v16 + 1;
            while ( 1 )
            {
              v16 = v21;
              v17 = *(unsigned __int8 *)v21;
              if ( v17 != 42 )
                break;
              v21 = v16 + 1;
              if ( v16[1] == 47 )
              {
                LOBYTE(v17) = 0;
                v16 += 2;
                goto LABEL_17;
              }
            }
          }
          while ( v17 );
          break;
        case ';':
          goto LABEL_13;
        default:
          if ( v18 == 123 )
          {
            v15 = nullptr;
          }
          else if ( v18 == 125 )
          {
LABEL_13:
            v13 = 0;
            v14 = 0;
            v15 = (char *)v16;
          }
          goto LABEL_15;
      }
      goto LABEL_17;
    }
    if ( v18 == (unsigned __int8)v17 )
      goto LABEL_15;
    if ( v18 != 92 )
      goto LABEL_17;
    v19 = *(unsigned __int8 *)v16;
    v16 += 2;
    if ( !v19 )
      break;
  }
  if ( (v15 == nullptr) | v14 & 1 )
  {
LABEL_62:
    sub_4C730(&ptr, "%s\n;}", a2);
    goto LABEL_63;
  }
  v22 = *v15;
  if ( (v22 & 0x80000000) == 0 )
  {
LABEL_59:
    while ( 1 )
    {
      v30 = (unsigned __int8)v22;
      if ( !isspace((unsigned __int8)v22) )
        break;
      v31 = *++v15;
      LOBYTE(v22) = v31;
      if ( v31 < 0 )
        goto LABEL_43;
    }
    if ( v30 != 47 )
      goto LABEL_43;
    v22 = (unsigned __int8)v15[1];
    if ( v22 != 47 )
      goto LABEL_43;
    while ( (_BYTE)v22 )
    {
      if ( (unsigned __int8)v22 == 10 )
        goto LABEL_59;
      v29 = *++v15;
      LOBYTE(v22) = v29;
    }
    goto LABEL_62;
  }
LABEL_43:
  for ( i = 0; i < 0xB; ++i )
  {
    v24 = (const char *)*(&off_15D6D8 + i);
    v25 = strlen(v24);
    if ( strncmp(v15, v24, v25) )
      continue;
    v26 = v15[v25];
    v27 = (unsigned __int8)v15[v25];
    if ( v26 < 0 )
    {
      v28 = 0;
      if ( v27 == 95 )
        continue;
    }
    else
    {
      v28 = isalnum(v27) != 0;
      if ( v27 == 95 )
        continue;
    }
    if ( !v28 )
      goto LABEL_62;
  }
  if ( !v15 )
    goto LABEL_62;
  sub_4C730(&ptr, "%*.*sreturn %s\n;}", (_DWORD)v15 - (_DWORD)a2, (_DWORD)v15 - (_DWORD)a2, a2, v15);
LABEL_63:
  v12 = compile_idc_text(ptr.__align, a3, a4, a5 & 1);
  if ( ptr.__align )
  {
    *(&ptr.__align + 1) = 0;
    qfree((void *)ptr.__align);
    ptr.__align = 0;
    *(&ptr.__align + 2) = 0;
  }
  return v12 & 1;
}
// 15D6D8: using guessed type _UNKNOWN *off_15D6D8;
