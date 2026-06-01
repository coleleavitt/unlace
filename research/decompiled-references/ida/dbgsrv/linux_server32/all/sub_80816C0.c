/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80816C0
// Address: 0x080816C0

//----- (080816C0) --------------------------------------------------------
int __cdecl sub_80816C0(int a1, const char *s, void **a3, int a4, char a5)
{
  size_t v5; // eax
  const char *v6; // edi
  char v7; // al
  const char *v8; // eax
  char v9; // dl
  char *v10; // ebx
  int v11; // esi
  char *v13; // esi
  char v14; // di
  char v15; // dl
  char v16; // cl
  _BYTE *v17; // edx
  char v18; // al
  size_t v19; // edx
  const char **i; // edi
  int v21; // eax
  char v22; // cl
  char v23; // dl
  char v24; // al
  char v25; // [esp+1Fh] [ebp-4Dh]
  int v26; // [esp+20h] [ebp-4Ch]
  const char *v27; // [esp+30h] [ebp-3Ch]
  size_t v28; // [esp+30h] [ebp-3Ch]
  char v29; // [esp+30h] [ebp-3Ch]
  unsigned int v30; // [esp+34h] [ebp-38h]
  void *v31; // [esp+40h] [ebp-2Ch] BYREF
  int v32; // [esp+44h] [ebp-28h]
  int v33; // [esp+48h] [ebp-24h]
  unsigned int v34; // [esp+4Ch] [ebp-20h]

  v34 = __readgsdword(0x14u);
  if ( !s )
  {
    v11 = 0;
    goto LABEL_18;
  }
  v31 = nullptr;
  v32 = 0;
  v33 = 0;
  sub_805ED10(&v31, "static %s(){", a1);
  v5 = strlen(s);
  v6 = &s[v5];
  if ( s >= &s[v5] )
  {
    if ( s == v6 )
      goto LABEL_15;
    v24 = *(v6 - 1);
    if ( v24 == 125 )
      goto LABEL_15;
    if ( v24 != 59 )
    {
LABEL_86:
      v13 = (char *)s;
      goto LABEL_27;
    }
    goto LABEL_61;
  }
  while ( (unsigned int)*(v6 - 1) <= 0x7F && isspace(*(v6 - 1)) )
  {
    if ( s == --v6 )
      goto LABEL_15;
  }
  if ( s == v6 )
    goto LABEL_15;
  v7 = *(v6 - 1);
  if ( v7 == 125 )
    goto LABEL_15;
  if ( v7 == 59 )
LABEL_61:
    --v6;
  v8 = s;
  if ( s >= v6 )
    goto LABEL_86;
  v25 = 0;
  v26 = 0;
  v27 = s;
LABEL_9:
  v30 = (unsigned int)v6;
  v9 = *v8;
  v10 = (char *)(v8 + 1);
  while ( 2 )
  {
    while ( v9 > 59 )
    {
      if ( v9 == 123 )
      {
        if ( (unsigned int)v10 >= v30 )
          goto LABEL_15;
        v9 = *v10;
        v8 = v10;
        v27 = nullptr;
        ++v10;
      }
      else
      {
        if ( v9 != 125 )
          goto LABEL_22;
LABEL_62:
        if ( (unsigned int)v10 >= v30 )
        {
          v13 = v10;
          goto LABEL_27;
        }
        v27 = v10;
        v9 = *v10;
        v8 = v10++;
        v25 = 0;
        v26 = 0;
      }
    }
    if ( v9 <= 33 )
      goto LABEL_22;
    switch ( v9 )
    {
      case '"':
      case '\'':
        if ( (unsigned int)v10 >= v30 )
          goto LABEL_25;
        v22 = *v10;
        v8 = v10 + 1;
LABEL_66:
        if ( v22 == v9 )
          goto LABEL_71;
        do
        {
          if ( v22 != 92 )
          {
            if ( (unsigned int)v8 < v30 )
            {
              v22 = *v8;
              v10 = (char *)v8++;
              goto LABEL_66;
            }
            goto LABEL_25;
          }
          if ( !v10[1] || (unsigned int)(v10 + 2) >= v30 )
            goto LABEL_25;
          v22 = v10[2];
          v8 = v10 + 3;
          v10 += 2;
        }
        while ( v22 != v9 );
LABEL_71:
        if ( (unsigned int)v8 >= v30 )
          goto LABEL_25;
        v9 = *v8;
        v10 = (char *)(v8 + 1);
        continue;
      case '(':
        ++v26;
        if ( (unsigned int)v10 >= v30 )
          goto LABEL_25;
        goto LABEL_23;
      case ')':
        v25 |= --v26 < 0;
        if ( (unsigned int)v10 >= v30 )
          goto LABEL_25;
        goto LABEL_23;
      case '/':
        v15 = v8[1];
        if ( v15 != 47 )
        {
          if ( v15 != 42 )
            goto LABEL_22;
          v16 = v8[2];
          v17 = v8 + 2;
          if ( v16 )
          {
            v6 = (const char *)v30;
            while ( 1 )
            {
              v18 = v16;
              v16 = v17[1];
              if ( v18 == 42 && v16 == 47 )
                break;
              ++v17;
              if ( !v16 )
              {
                v8 = v17;
                goto LABEL_80;
              }
            }
            v8 = v17 + 2;
            if ( (unsigned int)(v17 + 2) >= v30 )
              goto LABEL_25;
            v10 = v17 + 3;
            v9 = v17[2];
          }
          else
          {
            if ( (unsigned int)v17 >= v30 )
              goto LABEL_25;
            v10 = (char *)(v8 + 3);
LABEL_22:
            if ( (unsigned int)v10 >= v30 )
              goto LABEL_25;
LABEL_23:
            v9 = *v10;
            v8 = v10++;
          }
          continue;
        }
        v9 = v8[2];
        if ( v9 == 10 || !v9 )
        {
          if ( (unsigned int)(v8 + 2) >= v30 )
            goto LABEL_25;
          v10 = (char *)(v8 + 3);
          v8 += 2;
          continue;
        }
        v6 = (const char *)v30;
        v8 += 2;
        do
          v23 = *++v8;
        while ( v23 && v23 != 10 );
LABEL_80:
        if ( v8 < v6 )
          goto LABEL_9;
LABEL_25:
        v13 = (char *)v27;
        if ( v25 != 1 && v27 )
        {
          while ( 1 )
          {
LABEL_27:
            v14 = *v13;
            if ( (unsigned int)*v13 > 0x7F )
              goto LABEL_47;
            if ( !isspace(*v13) )
              break;
            ++v13;
          }
          if ( v14 != 47 || v13[1] != 47 )
          {
LABEL_47:
            v19 = 2;
            for ( i = (const char **)&qword_811CFF4 - 1173; ; v19 = strlen(*i) )
            {
              v28 = v19;
              if ( !strncmp(v13, *i, v19) )
              {
                v29 = v13[v28];
                if ( (unsigned int)v29 > 0x7F )
                  break;
                v21 = isalnum(v29);
                if ( v29 != 95 && !v21 )
                  break;
              }
              if ( &qword_811CFF4 - 581 == (__int64 *)++i )
              {
                if ( !v13 )
                  goto LABEL_15;
                sub_8070240(&v31, (char *)&qword_811CFF4 - 279070, v13 - s, v13 - s, s, v13);
                goto LABEL_16;
              }
            }
            goto LABEL_15;
          }
          while ( *v13 )
          {
            if ( *v13 == 10 )
              goto LABEL_27;
            ++v13;
          }
        }
LABEL_15:
        sub_8070240(&v31, (char *)&qword_811CFF4 - 279058, s);
LABEL_16:
        v11 = sub_807C560((unsigned int)v31, a3, a4, a5);
        if ( v31 )
        {
          v32 = 0;
          sub_80CF780(v31);
        }
LABEL_18:
        if ( v34 != __readgsdword(0x14u) )
          sub_80D7AB0();
        return v11;
      case ';':
        goto LABEL_62;
      default:
        goto LABEL_22;
    }
  }
}
// 811CFF4: using guessed type __int64 qword_811CFF4;
