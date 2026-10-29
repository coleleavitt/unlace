/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: compile_idc_snippet
// Address: 0x00000001000322E0

//----- (00000001000322E0) ----------------------------------------------------
__int64 __fastcall compile_idc_snippet(const char *a1, const char *a2, __int64 a3, __int64 a4, char a5)
{
  size_t v9; // rax
  const char *v10; // rdi
  const char *v11; // rdx
  size_t v12; // rsi
  unsigned __int64 v13; // rcx
  __int64 v14; // r8
  int v15; // eax
  unsigned int v16; // ebx
  int v17; // eax
  const char *v18; // r13
  char v19; // si
  const char *v20; // rdi
  int v21; // r9d
  const char *v22; // r8
  char v23; // r10
  bool v24; // zf
  int v25; // r9d
  char v26; // al
  __int64 i; // r15
  size_t v28; // rbx
  __int64 v29; // rax
  bool v30; // cl
  __int64 v32; // [rsp+8h] [rbp-68h]
  char v33; // [rsp+1Ch] [rbp-54h]
  __int128 v34; // [rsp+20h] [rbp-50h] BYREF
  __int64 v35; // [rsp+30h] [rbp-40h]

  if ( !a2 )
    return 0;
  v34 = 0;
  v35 = 0;
  sub_100002D00((__int64)&v34, "static %s(){", a1);
  v33 = a5;
  v32 = a4;
  v9 = strlen(a2);
  v10 = &a2[v9 - 1];
  do
  {
    v11 = v10;
    v12 = v9;
    v13 = (unsigned __int64)(v10 + 1);
    if ( v10 + 1 <= a2 )
      break;
    v14 = *v10;
    if ( v14 < 0 )
      break;
    --v10;
    --v9;
  }
  while ( (_DefaultRuneLocale.__runetype[v14] & 0x4000) != 0 );
  if ( !v12 )
    goto LABEL_66;
  v15 = *(unsigned __int8 *)v11;
  if ( v15 == 59 )
  {
    v13 = (unsigned __int64)v11;
  }
  else if ( v15 == 125 )
  {
    goto LABEL_66;
  }
  v17 = 0;
  v18 = a2;
  v19 = 0;
  v20 = a2;
LABEL_13:
  LOBYTE(v21) = 0;
LABEL_14:
  v22 = v20;
LABEL_15:
  v20 = v22 + 1;
  while ( (unsigned __int64)(v20 - 1) < v13 )
  {
    v23 = *(v20 - 1);
    if ( !(_BYTE)v21 )
    {
      switch ( v23 )
      {
        case '"':
        case '\'':
          LOBYTE(v21) = *(v20 - 1);
          goto LABEL_14;
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
          ++v17;
          goto LABEL_13;
        case ')':
          v19 |= --v17 < 0;
          goto LABEL_13;
        case '/':
          v25 = *(unsigned __int8 *)v20;
          if ( v25 == 42 )
          {
            for ( v22 += 2; ; ++v22 )
            {
              v21 = *(unsigned __int8 *)v22;
              if ( v21 == 42 )
              {
                if ( v22[1] == 47 )
                {
                  v22 += 2;
                  goto LABEL_36;
                }
              }
              else if ( !*v22 )
              {
                goto LABEL_15;
              }
            }
          }
          if ( v25 != 47 )
            goto LABEL_13;
          for ( v22 += 2; *v22 && *v22 != 10; ++v22 )
            ;
LABEL_36:
          LOBYTE(v21) = 0;
          break;
        case ';':
          goto LABEL_40;
        default:
          if ( v23 == 123 )
          {
            v18 = nullptr;
          }
          else if ( v23 == 125 )
          {
LABEL_40:
            v17 = 0;
            v18 = v20;
            v19 = 0;
          }
          goto LABEL_13;
      }
      goto LABEL_15;
    }
    if ( v23 == (_BYTE)v21 )
      goto LABEL_13;
    if ( v23 != 92 )
      goto LABEL_14;
    v24 = *v20 == 0;
    v20 += 2;
    if ( v24 )
      break;
  }
  if ( v19 & 1 | (v18 == nullptr) )
  {
LABEL_66:
    sub_10002DCA0((__int64)&v34, "%s\n;}", a2);
    goto LABEL_67;
  }
  v26 = *v18;
  if ( *v18 >= 0 )
  {
    while ( 1 )
    {
      while ( (_DefaultRuneLocale.__runetype[(unsigned __int8)v26] & 0x4000) != 0 )
      {
        v26 = *++v18;
        if ( v26 < 0 )
          goto LABEL_55;
      }
      if ( v26 != 47 || v18[1] != 47 )
        break;
      v26 = 47;
      while ( v26 != 10 )
      {
        v26 = *++v18;
        if ( !v26 )
          goto LABEL_66;
      }
    }
  }
LABEL_55:
  for ( i = 0; i != 11; ++i )
  {
    v28 = strlen(off_1000A8D00[i]);
    if ( strncmp(v18, off_1000A8D00[i], v28) )
      continue;
    v29 = v18[v28];
    if ( v29 < 0 )
    {
      v30 = 0;
    }
    else
    {
      v30 = (_DefaultRuneLocale.__runetype[v29] & 0x500) != 0;
      if ( (_BYTE)v29 == 95 )
        continue;
    }
    if ( !v30 )
      goto LABEL_66;
  }
  if ( !v18 )
    goto LABEL_66;
  sub_10002DCA0((__int64)&v34, "%*.*sreturn %s\n;}", (_DWORD)v18 - (_DWORD)a2, (_DWORD)v18 - (_DWORD)a2, a2, v18);
LABEL_67:
  v16 = compile_idc_text(v34, a3, v32, v33);
  if ( (_QWORD)v34 )
  {
    *((_QWORD *)&v34 + 1) = 0;
    qfree((void *)v34);
  }
  return v16;
}
// 100032576: conditional instruction was optimized away because al.1<0
// 1000A8D00: using guessed type char *off_1000A8D00[11];
