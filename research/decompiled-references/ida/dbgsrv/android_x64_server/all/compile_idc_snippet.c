/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: compile_idc_snippet
// Address: 0x000000000006B380

//----- (000000000006B380) ----------------------------------------------------
__int64 __fastcall compile_idc_snippet(
        const char *a1,
        _BYTE *a2,
        __int64 a3,
        __int64 a4,
        char a5,
        double a6,
        __m128 a7)
{
  const char *v10; // r13
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // rbp
  int v13; // edi
  char v14; // al
  unsigned int v15; // ebx
  int v16; // eax
  char *v17; // r15
  int v18; // edx
  char v19; // di
  int v20; // ebx
  bool v21; // zf
  _BYTE *v22; // rdi
  bool v23; // sf
  char v24; // bl
  const char **v25; // rbp
  unsigned __int64 i; // r12
  const char *v27; // r14
  size_t v28; // rbx
  int v29; // ebx
  bool v30; // al
  char v32; // [rsp+Ch] [rbp-6Ch]
  __int64 v33; // [rsp+10h] [rbp-68h]
  __int64 v34; // [rsp+18h] [rbp-60h]
  void *ptr[2]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v36; // [rsp+30h] [rbp-48h]
  unsigned __int64 v37; // [rsp+40h] [rbp-38h]

  v37 = __readfsqword(0x28u);
  if ( !a2 )
    return 0;
  v10 = a2;
  *(_OWORD *)ptr = 0;
  v36 = 0;
  sub_3BBA0((__int64)ptr, "static %s(){", a1);
  v32 = a5;
  v33 = a3;
  v34 = a4;
  v11 = (unsigned __int64)&a2[strlen(a2)];
  do
  {
    v12 = v11;
    if ( v11 <= (unsigned __int64)a2 )
      break;
    v13 = *(unsigned __int8 *)(v11 - 1);
    if ( (v13 & 0x80u) != 0 )
      break;
    --v11;
  }
  while ( isspace(v13) );
  if ( a2 == (_BYTE *)v12 )
    goto LABEL_65;
  v14 = *(_BYTE *)(v12 - 1);
  if ( v14 == 59 )
  {
    --v12;
  }
  else if ( v14 == 125 )
  {
    goto LABEL_65;
  }
  v16 = 0;
  v17 = a2;
  v18 = 0;
LABEL_13:
  v19 = 0;
LABEL_15:
  ++a2;
  while ( (unsigned __int64)(a2 - 1) < v12 )
  {
    v20 = (unsigned __int8)*(a2 - 1);
    if ( !v19 )
    {
      switch ( (char)v20 )
      {
        case '"':
        case '\'':
          v19 = *(a2 - 1);
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
          ++v16;
          goto LABEL_13;
        case ')':
          v23 = --v16 < 0;
          LOBYTE(v20) = 1;
          if ( !v23 )
            v20 = v18;
          v18 = v20;
          goto LABEL_13;
        case '/':
          if ( *a2 != 42 )
          {
            if ( *a2 == 47 )
            {
              do
                ++a2;
              while ( *a2 && *a2 != 10 );
            }
            goto LABEL_13;
          }
          do
          {
            v22 = a2 + 1;
            while ( 1 )
            {
              a2 = v22;
              v19 = *v22;
              if ( v19 != 42 )
                break;
              v22 = a2 + 1;
              if ( a2[1] == 47 )
              {
                a2 += 2;
                goto LABEL_13;
              }
            }
          }
          while ( v19 );
          break;
        case ';':
          goto LABEL_36;
        default:
          if ( (char)v20 == 123 )
          {
            v17 = nullptr;
          }
          else if ( (char)v20 == 125 )
          {
LABEL_36:
            v16 = 0;
            v17 = a2;
            v18 = 0;
          }
          goto LABEL_13;
      }
      goto LABEL_15;
    }
    if ( (_BYTE)v20 == v19 )
      goto LABEL_13;
    if ( (_BYTE)v20 != 92 )
      goto LABEL_15;
    v21 = *a2 == 0;
    a2 += 2;
    if ( v21 )
      break;
  }
  if ( !v17 || (v18 & 1) != 0 )
  {
LABEL_65:
    sub_4E030((__int64)ptr, "%s\n;}", v10);
    goto LABEL_66;
  }
  v24 = *v17;
  if ( *v17 >= 0 )
  {
    while ( 1 )
    {
      while ( isspace((unsigned __int8)v24) )
      {
        v24 = *++v17;
        if ( v24 < 0 )
          goto LABEL_55;
      }
      if ( v24 != 47 || v17[1] != 47 )
        break;
      v24 = 47;
      while ( v24 != 10 )
      {
        v24 = *++v17;
        if ( !v24 )
          goto LABEL_65;
      }
    }
  }
LABEL_55:
  v25 = (const char **)off_14DE70;
  for ( i = 0; i < 0xB; ++i )
  {
    v27 = *v25;
    v28 = strlen(*v25);
    if ( strncmp(v17, v27, v28) )
      goto LABEL_62;
    v29 = (unsigned __int8)v17[v28];
    if ( (v29 & 0x80u) != 0 )
    {
      v30 = 0;
    }
    else
    {
      v30 = isalnum(v29) != 0;
      if ( (_BYTE)v29 == 95 )
        goto LABEL_62;
    }
    if ( !v30 )
      goto LABEL_65;
LABEL_62:
    ++v25;
  }
  if ( !v17 )
    goto LABEL_65;
  sub_4E030((__int64)ptr, "%*.*sreturn %s\n;}", (_DWORD)v17 - (_DWORD)v10, (_DWORD)v17 - (_DWORD)v10, v10, v17);
LABEL_66:
  v15 = compile_idc_text((__int64)ptr[0], v33, v34, v32, 0.0, a7);
  if ( ptr[0] )
  {
    ptr[1] = nullptr;
    qfree(ptr[0]);
    ptr[0] = nullptr;
    v36 = 0;
  }
  return v15;
}
// 6B626: conditional instruction was optimized away because bl.1<0
// 14DE70: using guessed type char *off_14DE70[11];
