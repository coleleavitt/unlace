__int64 __fastcall sub_1863E0(__int64 a1, _DWORD *a2, _DWORD *a3, char *a4, const char *a5, char a6, int *a7)
{
  const char *v9; // rbp
  char *v10; // rax
  bool v11; // zf
  int v12; // ebp
  int utf8_char; // eax
  const char *v14; // rdx
  __int64 v15; // rsi
  int v16; // ebp
  unsigned int v17; // eax
  char *v18; // rdx
  int v19; // eax
  const char *v21; // rax
  const char *v22; // rbx
  char *v23; // rax
  unsigned int v24; // eax
  char *v25; // rax
  int v26; // r12d
  int v27; // eax
  char *v28; // rdx
  int v29; // r12d
  size_t v30; // rbx
  int v31; // [rsp+8h] [rbp-90h]
  int v32; // [rsp+Ch] [rbp-8Ch]
  int v33; // [rsp+10h] [rbp-88h]
  int v34; // [rsp+14h] [rbp-84h]
  char *s; // [rsp+30h] [rbp-68h]
  char *v38; // [rsp+38h] [rbp-60h]
  const char *v39; // [rsp+40h] [rbp-58h]
  unsigned __int8 *v40; // [rsp+40h] [rbp-58h]

  v9 = a5;
  v10 = strrchr(a5, 35);
  if ( v10 )
    v9 = v10 + 1;
  v11 = *v9 == 0;
  v39 = v9;
  v12 = 0;
  if ( !v11 )
  {
    do
    {
      utf8_char = get_utf8_char();
      v14 = v39;
      if ( utf8_char == -1 )
      {
        ++v39;
        utf8_char = *(unsigned __int8 *)v14++;
      }
      v12 += utf8_char != 126;
    }
    while ( *v14 );
  }
  v15 = *(unsigned int *)(a1 + 476);
  v33 = *(_DWORD *)(a1 + 480);
  v16 = v33 + v12;
  v17 = a4[1];
  v31 = *(_DWORD *)(a1 + 476);
  v18 = (char *)v17;
  if ( v17 > 0x7F )
    goto LABEL_8;
  while ( v17 - 48 <= 9 )
  {
    v17 = a4[2];
    ++a4;
    v18 = (char *)v17;
    if ( v17 > 0x7F )
      goto LABEL_46;
  }
  if ( (_BYTE)v18 != 62 )
  {
LABEL_8:
    v40 = nullptr;
    if ( a4 )
    {
LABEL_46:
      v30 = strlen(a4);
      v15 = (__int64)a4;
      v40 = (unsigned __int8 *)qvector_reserve();
      memmove(v40, a4, v30);
      v40[v30] = 0;
      a4 = (char *)v40;
    }
    s = a4;
    v32 = 1;
    v34 = v31;
LABEL_10:
    while ( *a4 )
    {
      while ( 1 )
      {
        v19 = get_utf8_char();
        a4 = s;
        if ( v19 == -1 )
        {
          v18 = ++s;
          v19 = (unsigned __int8)*a4++;
        }
        if ( v19 == 60 )
          break;
        if ( v19 != 92 )
          goto LABEL_10;
        s = a4 + 1;
        if ( !a4[1] )
          goto LABEL_16;
      }
      v21 = (const char *)sub_18C440(a4);
      v22 = v21;
      if ( !v21 )
      {
        sub_92200((__int64)"form: error at %s", s);
        goto LABEL_17;
      }
      if ( *v21 == a6 )
      {
        ++v32;
        v25 = strrchr(a4, 35);
        if ( v25 )
          a4 = v25 + 1;
        v38 = a4;
        if ( *a4 )
        {
          v26 = 0;
          do
          {
            v27 = get_utf8_char();
            v28 = v38;
            if ( v27 == -1 )
            {
              ++v38;
              v27 = (unsigned __int8)*v28++;
            }
            v26 += v27 != 126;
          }
          while ( *v28 );
          v29 = v33 + v26;
        }
        else
        {
          v29 = v33;
        }
        if ( v16 < v29 )
          v16 = v29;
        v34 += v31;
      }
      v15 = 62;
      v23 = strchr(v22, 62);
      s = v23;
      a4 = v23;
      if ( !v23 )
      {
        sub_92200((__int64)"form: no '>' at %s", v22);
        goto LABEL_17;
      }
      if ( *v22 == a6 )
      {
        v24 = v23[1];
        v18 = (char *)v24;
        if ( v24 <= 0x7F )
        {
          while ( v24 - 48 <= 9 )
          {
            s = ++a4;
            v24 = a4[1];
            v18 = (char *)v24;
            if ( v24 > 0x7F )
              goto LABEL_34;
          }
          if ( (_BYTE)v18 != 62 )
          {
LABEL_34:
            a4 = s;
            continue;
          }
          if ( v40 )
            qfree();
          v31 = v34;
          goto LABEL_24;
        }
      }
    }
LABEL_16:
    sub_92200((__int64)"AUTOHIDE NONE\nbad form: can't find end of check/radioboxes", v15, v18);
LABEL_17:
    if ( v40 )
      qfree();
    return 0;
  }
  v32 = 1;
LABEL_24:
  if ( a7 )
    *a7 = v32;
  *a2 = v16;
  *a3 = v31;
  return 1;
}

