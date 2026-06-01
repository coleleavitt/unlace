/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3FD54
// Address: 0x0003FD54

//----- (0003FD54) --------------------------------------------------------
const char *__fastcall sub_3FD54(const char *a1, const char *a2, void **a3, int a4, char a5)
{
  const char *v6; // r6
  size_t v7; // r0
  const char *v8; // r5
  int v9; // r3
  int v10; // r0
  char v11; // r0
  const char *v12; // r4
  int v13; // r7
  unsigned int v14; // r1
  const char *v15; // r3
  unsigned __int8 *v16; // r12
  unsigned int v17; // r2
  char v18; // r0
  int v19; // r0
  int v20; // r5
  unsigned __int8 *i; // r3
  int v22; // t1
  int v24; // r2
  size_t v25; // r8
  char **v26; // r5
  const char *v27; // r7
  const char *v28; // t1
  int v29; // r7
  int v30; // r12
  const char *v31; // r2
  int v32; // r3
  const char *v33; // r8
  int v34; // lr
  int v35; // r2
  bool v36; // zf
  int v37; // r2
  int v38; // t1
  bool v39; // zf
  void *ptr; // [sp+18h] [bp-14h] BYREF
  int v42; // [sp+1Ch] [bp-10h]
  int v43; // [sp+20h] [bp-Ch]

  v6 = a2;
  if ( !a2 )
    return v6;
  ptr = nullptr;
  v42 = 0;
  v43 = 0;
  sub_188E0((int)&ptr, "static %s(){", a1);
  v7 = strlen(v6);
  v8 = &v6[v7];
  if ( v6 >= &v6[v7] )
  {
LABEL_8:
    if ( v6 == v8 )
      goto LABEL_34;
    v9 = *((unsigned __int8 *)v8 - 1);
    goto LABEL_11;
  }
  v9 = *((unsigned __int8 *)v8 - 1);
  v10 = v9;
  if ( (v9 & 0x80) == 0 )
  {
    while ( isspace(v10) )
    {
      if ( v6 == --v8 )
        goto LABEL_34;
      v10 = *((unsigned __int8 *)v8 - 1);
      v9 = v10;
      if ( (v10 & 0x80) != 0 )
        goto LABEL_11;
    }
    goto LABEL_8;
  }
LABEL_11:
  if ( v9 == 125 )
    goto LABEL_34;
  if ( v9 == 59 )
    --v8;
  if ( v6 >= v8 )
  {
    v12 = v6;
    goto LABEL_24;
  }
  v11 = 0;
  v12 = v6;
  v13 = 0;
  v14 = 0;
  v15 = v6;
  do
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v16 = (unsigned __int8 *)(v15 + 1);
        v17 = *(unsigned __int8 *)v15;
        if ( !v14 )
          break;
        if ( v17 == v14 )
        {
          ++v15;
          v14 = 0;
          if ( v8 <= (const char *)v16 )
            goto LABEL_20;
        }
        else if ( v17 == 92 )
        {
          if ( !v15[1] )
            goto LABEL_20;
          v15 += 2;
          if ( v8 <= v15 )
            goto LABEL_20;
        }
        else
        {
LABEL_50:
          v15 = (const char *)v16;
          if ( v8 <= (const char *)v16 )
            goto LABEL_20;
        }
      }
      if ( v17 == 41 )
        break;
      if ( v17 <= 0x29 )
      {
        if ( v17 != 39 )
        {
          if ( v17 > 0x27 )
          {
            ++v13;
            ++v15;
            goto LABEL_45;
          }
          if ( v17 != 34 )
            goto LABEL_50;
        }
        ++v15;
        v14 = v17;
        if ( v8 <= (const char *)v16 )
          goto LABEL_20;
      }
      else
      {
        if ( v17 == 59 )
          goto LABEL_70;
        if ( v17 <= 0x3B )
        {
          if ( v17 != 47 )
            goto LABEL_50;
          v24 = *((unsigned __int8 *)v15 + 1);
          if ( v24 == 47 )
          {
            v35 = *((unsigned __int8 *)v15 + 2);
            v15 += 2;
            v36 = v35 == 10;
            if ( v35 != 10 )
              v36 = v35 == 0;
            if ( !v36 )
            {
              do
              {
                v38 = *(unsigned __int8 *)++v15;
                v37 = v38;
                v39 = v38 == 0;
                if ( v38 )
                  v39 = v37 == 10;
              }
              while ( !v39 );
            }
          }
          else
          {
            if ( v24 != 42 )
              goto LABEL_50;
            v30 = *((unsigned __int8 *)v15 + 2);
            v15 += 2;
            if ( v30 )
            {
              v31 = v15;
              v32 = v30;
              while ( 1 )
              {
                v16 = (unsigned __int8 *)(v31 + 1);
                v33 = v31;
                v34 = *(unsigned __int8 *)++v31;
                if ( v32 == 42 && v34 == 47 )
                  break;
                v32 = v34;
                if ( !v34 )
                  goto LABEL_50;
              }
              v15 = v33 + 2;
            }
          }
LABEL_45:
          if ( v8 <= v15 )
            goto LABEL_20;
        }
        else
        {
          if ( v17 == 123 )
          {
            ++v15;
            v12 = nullptr;
            goto LABEL_45;
          }
          if ( v17 != 125 )
            goto LABEL_50;
LABEL_70:
          ++v15;
          v11 = 0;
          v12 = (const char *)v16;
          v13 = 0;
          if ( v8 <= (const char *)v16 )
            goto LABEL_20;
        }
      }
    }
    --v13;
    ++v15;
    if ( v13 < 0 )
      v11 = 1;
  }
  while ( v8 > (const char *)v16 );
LABEL_20:
  v18 = v11 ^ 1;
  if ( v12 )
    v19 = v18 & 1;
  else
    v19 = 0;
  if ( v19 )
  {
LABEL_24:
    v20 = *(unsigned __int8 *)v12;
LABEL_25:
    while ( (v20 & 0x80) == 0 )
    {
      if ( !isspace(v20) )
        break;
      v20 = *(unsigned __int8 *)++v12;
    }
    if ( v20 == 47 && (v20 = *((unsigned __int8 *)v12 + 1), v20 == 47) )
    {
      for ( i = (unsigned __int8 *)(v12 + 1); ; ++i )
      {
        v12 = (const char *)i;
        if ( !v20 )
          break;
        if ( v20 == 10 )
          goto LABEL_25;
        v22 = i[1];
        v20 = v22;
      }
    }
    else
    {
      v25 = 2;
      v26 = off_D0AC4;
      v27 = "if";
      while ( 1 )
      {
        if ( !strncmp(v12, v27, v25) )
        {
          v29 = (unsigned __int8)v12[v25];
          if ( ((v29 & 0x80) != 0 || !isalnum((unsigned __int8)v12[v25])) && v29 != 95 )
            break;
        }
        if ( v26 == off_D0AEC )
        {
          if ( !v12 )
            break;
          sub_34260((int)&ptr, "%*.*sreturn %s\n;}", v12 - v6, v12 - v6, v6, v12);
          goto LABEL_35;
        }
        v28 = v26[1];
        ++v26;
        v27 = v28;
        v25 = strlen(v28);
      }
    }
  }
LABEL_34:
  sub_34260((int)&ptr, "%s\n;}", v6);
LABEL_35:
  v6 = (const char *)sub_3C93C((int)ptr, a3, a4, a5);
  if ( ptr )
  {
    v42 = 0;
    sub_77F70(ptr);
  }
  return v6;
}
// D0AC4: using guessed type char *off_D0AC4[6];
// D0AEC: using guessed type char *off_D0AEC[2];
