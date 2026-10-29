__int64 __fastcall compile_idc_snippet(__int64 a1, const char *a2, __int64 a3, __int64 a4, unsigned __int8 a5)
{
  size_t v5; // rax
  unsigned __int64 v6; // rbp
  unsigned int v7; // edi
  char v8; // al
  char *v9; // r13
  const char *v10; // rdx
  int v11; // r10d
  int v12; // r8d
  char v13; // cl
  char *v14; // rax
  unsigned int v15; // edi
  char v16; // bp
  const char **v17; // r12
  size_t i; // r14
  char v19; // r14
  unsigned int v20; // ebx
  int v22; // eax
  char v23; // cl
  char v24; // al
  _BYTE *v25; // rcx
  char v26; // dl
  char v27; // al
  char v28; // si
  char v29; // al
  void *ptr; // [rsp+20h] [rbp-58h] BYREF
  __int128 v34; // [rsp+28h] [rbp-50h]
  unsigned __int64 v35; // [rsp+38h] [rbp-40h]

  v35 = __readfsqword(0x28u);
  if ( !a2 )
    return 0;
  v34 = 0;
  ptr = nullptr;
  sub_3573A0((char **)&ptr);
  v5 = strlen(a2);
  v6 = (unsigned __int64)&a2[v5];
  if ( a2 >= &a2[v5] )
  {
    if ( a2 == &a2[v5] )
      goto LABEL_26;
    v27 = *(_BYTE *)(v6 - 1);
    if ( v27 == 125 )
      goto LABEL_26;
    v9 = (char *)a2;
    if ( v27 != 59 )
      goto LABEL_14;
LABEL_62:
    --v6;
    goto LABEL_7;
  }
  while ( 1 )
  {
    v7 = *(char *)(v6 - 1);
    if ( v7 > 0x7F || !isspace(v7) )
      break;
    if ( a2 == (const char *)--v6 )
      goto LABEL_26;
  }
  if ( a2 == (const char *)v6 )
    goto LABEL_26;
  v8 = *(_BYTE *)(v6 - 1);
  if ( v8 == 125 )
    goto LABEL_26;
  if ( v8 == 59 )
    goto LABEL_62;
LABEL_7:
  v9 = (char *)a2;
  if ( (unsigned __int64)a2 >= v6 )
    goto LABEL_14;
  v10 = a2;
  v11 = 0;
  v12 = 0;
LABEL_9:
  v13 = *v10;
  v14 = (char *)(v10 + 1);
  while ( 2 )
  {
    while ( v13 > 59 )
    {
      if ( v13 == 123 )
      {
        if ( (unsigned __int64)v14 >= v6 )
          goto LABEL_26;
        v13 = *v14;
        v10 = v14;
        v9 = nullptr;
        ++v14;
      }
      else
      {
        if ( v13 != 125 )
          goto LABEL_38;
LABEL_63:
        if ( (unsigned __int64)v14 >= v6 )
        {
          v9 = v14;
          goto LABEL_14;
        }
        v13 = *v14;
        v9 = v14;
        v10 = v14;
        v11 = 0;
        ++v14;
        v12 = 0;
      }
    }
    if ( v13 <= 33 )
      goto LABEL_38;
    switch ( v13 )
    {
      case '"':
      case '\'':
        if ( (unsigned __int64)v14 >= v6 )
          goto LABEL_50;
        v28 = *v14;
        v10 = v14 + 1;
LABEL_67:
        if ( v28 == v13 )
          goto LABEL_72;
        while ( 2 )
        {
          if ( v28 == 92 )
          {
            if ( v14[1] && (unsigned __int64)(v14 + 2) < v6 )
            {
              v28 = v14[2];
              v10 = v14 + 3;
              v14 += 2;
              if ( v28 == v13 )
                goto LABEL_72;
              continue;
            }
          }
          else if ( (unsigned __int64)v10 < v6 )
          {
            v28 = *v10;
            v14 = (char *)v10++;
            goto LABEL_67;
          }
          goto LABEL_50;
        }
      case '(':
        ++v12;
        if ( (unsigned __int64)v14 >= v6 )
          goto LABEL_50;
        goto LABEL_39;
      case ')':
        v11 |= (unsigned int)--v12 >> 31;
        if ( (unsigned __int64)v14 >= v6 )
          goto LABEL_50;
        goto LABEL_39;
      case '/':
        v23 = v10[1];
        if ( v23 != 47 )
        {
          if ( v23 != 42 )
            goto LABEL_38;
          v24 = v10[2];
          v25 = v10 + 2;
          if ( v24 )
          {
            while ( 1 )
            {
              v26 = v24;
              v24 = v25[1];
              if ( v26 == 42 && v24 == 47 )
                break;
              ++v25;
              if ( !v24 )
              {
                v10 = v25;
                goto LABEL_72;
              }
            }
            v10 = v25 + 2;
            if ( (unsigned __int64)(v25 + 2) >= v6 )
              goto LABEL_50;
            v14 = v25 + 3;
            v13 = v25[2];
          }
          else
          {
            if ( (unsigned __int64)v25 >= v6 )
              goto LABEL_50;
            v14 = (char *)(v10 + 3);
LABEL_38:
            if ( (unsigned __int64)v14 >= v6 )
              goto LABEL_50;
LABEL_39:
            v13 = *v14;
            v10 = v14++;
          }
          continue;
        }
        v13 = v10[2];
        if ( v13 == 10 || !v13 )
        {
          if ( (unsigned __int64)(v10 + 2) >= v6 )
            goto LABEL_50;
          v14 = (char *)(v10 + 3);
          v10 += 2;
          continue;
        }
        v10 += 2;
        do
          v29 = *++v10;
        while ( v29 && v29 != 10 );
LABEL_72:
        if ( (unsigned __int64)v10 < v6 )
          goto LABEL_9;
LABEL_50:
        if ( (_BYTE)v11 != 1 && v9 )
        {
          while ( 1 )
          {
LABEL_14:
            v15 = *v9;
            v16 = *v9;
            if ( v15 > 0x7F )
              goto LABEL_23;
            if ( !isspace(v15) )
              break;
            ++v9;
          }
          if ( v16 != 47 || v9[1] != 47 )
          {
LABEL_23:
            v17 = (const char **)&off_2B10020;
            for ( i = 2; ; i = strlen(*v17) )
            {
              if ( !strncmp(v9, *v17, i) )
              {
                v19 = v9[i];
                if ( (unsigned int)v19 > 0x7F )
                  break;
                v22 = isalnum(v19);
                if ( v19 != 95 && !v22 )
                  break;
              }
              if ( algn_2B10078 == (_BYTE *)++v17 )
                break;
            }
            goto LABEL_26;
          }
          while ( *v9 )
          {
            if ( *v9 == 10 )
              goto LABEL_14;
            ++v9;
          }
        }
LABEL_26:
        sub_357520((__int64 *)&ptr);
        v20 = compile_idc_text(ptr, a3, a4, a5);
        if ( ptr )
        {
          *(_QWORD *)&v34 = 0;
          qfree(ptr);
        }
        return v20;
      case ';':
        goto LABEL_63;
      default:
        goto LABEL_38;
    }
  }
}

