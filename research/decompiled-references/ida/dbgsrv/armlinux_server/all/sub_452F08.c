/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_452F08
// Address: 0x0000000000452F08

//----- (0000000000452F08) ----------------------------------------------------
__int64 *__fastcall sub_452F08(
        __int64 a1,
        __int64 a2,
        double a3,
        __int64 a4,
        __int64 a5,
        int a6,
        int a7,
        int a8,
        int a9)
{
  unsigned int v11; // w1
  void *v13; // x1
  size_t v14; // x22
  unsigned __int64 v15; // x22
  void *v16; // x0
  char *v17; // x21
  char *p_s; // x0
  void *v19; // x0
  unsigned __int64 v20; // x5
  char v21; // w0
  unsigned __int64 v22; // x3
  int v23; // w2
  char *v24; // x4
  int v25; // w0
  const char *v26; // x2
  __int64 v27; // x2
  char *v28; // x1
  int v29; // w2
  const char *v30; // x2
  const char *v31; // x3
  void *v32; // x0
  _DWORD *v33; // x1
  char v34; // [xsp+0h] [xbp-460h]
  void *ptr; // [xsp+30h] [xbp-430h] BYREF
  __int64 v36; // [xsp+38h] [xbp-428h]
  __int64 v37; // [xsp+40h] [xbp-420h]
  char v38[16]; // [xsp+48h] [xbp-418h] BYREF
  char s; // [xsp+58h] [xbp-408h] BYREF
  _BYTE v40[7]; // [xsp+59h] [xbp-407h] BYREF

  v11 = *(unsigned __int16 *)(a2 + 24);
  if ( v11 == 4 )
  {
    v27 = *(_QWORD *)(a2 + 8);
    ptr = nullptr;
    v36 = 0;
    v37 = 0;
    if ( v27 )
    {
      v28 = *(char **)a2;
      v29 = v27 - 1;
    }
    else
    {
      v29 = 0;
      v28 = (char *)&qword_4B2D48;
    }
    sub_47E018((__int64)&ptr, v28, v29, 0, a6, a7, a8, a9, v34);
    v30 = &byte_4B31F0;
    v31 = (const char *)ptr;
    if ( *(_BYTE *)(a2 + 40) )
      v30 = "L";
    if ( !v36 )
      v31 = (const char *)&qword_4B2D48;
    sub_40CD68(a1, "%s\"%s\"", v30, v31);
    if ( ptr )
    {
      v36 = 0;
      j__free(ptr);
    }
    goto LABEL_8;
  }
  if ( v11 <= 4 )
  {
    if ( v11 == 2 )
    {
LABEL_20:
      if ( a2 == a1 )
        goto LABEL_8;
      v15 = *(_QWORD *)(a2 + 8);
      if ( v15 < 2 )
        goto LABEL_18;
      v16 = *(void **)a1;
      v17 = *(char **)a2;
      if ( v15 > *(_QWORD *)(a1 + 16) )
      {
        v16 = sub_491288(a1, *(void **)a1, v15, 1u);
        *(_QWORD *)a1 = v16;
      }
      *(_QWORD *)(a1 + 8) = v15;
      memmove(v16, v17, v15 - 1);
      *(_BYTE *)(*(_QWORD *)a1 + v15 - 1) = 0;
      goto LABEL_8;
    }
    if ( v11 > 2 )
    {
      sub_40CD68(a1, "0x%a", a3);
      goto LABEL_8;
    }
    if ( v11 == 1 )
    {
      v13 = *(void **)a1;
      if ( *(_QWORD *)(a1 + 16) <= 5u )
      {
        v13 = sub_491288(a1, v13, 6u, 1u);
        *(_QWORD *)a1 = v13;
      }
      *(_QWORD *)(a1 + 8) = 6;
      qmemcpy(v13, "<END>", 5);
      *(_BYTE *)(*(_QWORD *)a1 + 5LL) = 0;
      goto LABEL_8;
    }
  }
  else
  {
    if ( v11 == 6 )
    {
      if ( *(_QWORD *)(a2 + 8) )
        v26 = *(const char **)a2;
      else
        v26 = (const char *)&qword_4B2D48;
      sub_40CD68(a1, "@type %s", v26);
      goto LABEL_8;
    }
    if ( v11 < 6 )
    {
      v20 = *(_QWORD *)(a2 + 32);
      if ( v20 )
      {
        v21 = 1;
        v22 = 8;
        v23 = 1;
        if ( (v20 & 0xFFFFFFFFFFFFFF00LL) == 0 )
          v22 = 1;
        v24 = v38;
        do
        {
          v25 = (unsigned __int8)(v20 >> (8 * ((unsigned __int8)v22 - v21)));
          if ( v25 )
            *v24++ = v25;
          v21 = ++v23;
        }
        while ( v23 <= v22 );
        *v24 = 0;
        sub_47E028((unsigned __int64)&s, v38, 1024, v22, (int)v24, v20, a8, a9);
        sub_40CD68(a1, "'%s'", &s);
      }
      else
      {
        v33 = *(_DWORD **)a1;
        if ( *(_QWORD *)(a1 + 16) <= 4u )
        {
          v33 = sub_491288(a1, v33, 5u, 1u);
          *(_QWORD *)a1 = v33;
        }
        *(_QWORD *)(a1 + 8) = 5;
        *v33 = *(_DWORD *)"'\\0'";
        *(_BYTE *)(*(_QWORD *)a1 + 4LL) = 0;
      }
      goto LABEL_8;
    }
    if ( v11 == 7 )
    {
      sub_4890C8(&s, 0x400u, (__int64 *)(a2 + 48), 50);
      v14 = strlen(&s);
      if ( v14 )
      {
LABEL_30:
        v19 = *(void **)a1;
        if ( v14 + 1 > *(_QWORD *)(a1 + 16) )
        {
          v19 = sub_491288(a1, *(void **)a1, v14 + 1, 1u);
          *(_QWORD *)a1 = v19;
        }
        *(_QWORD *)(a1 + 8) = v14 + 1;
        memmove(v19, &s, v14);
        *(_BYTE *)(*(_QWORD *)a1 + v14) = 0;
        goto LABEL_8;
      }
LABEL_18:
      *(_QWORD *)(a1 + 8) = 0;
      return &qword_4B2D48;
    }
    if ( v11 == 8 )
    {
      sub_40CD68(a1, "0x%llxi64", *(_QWORD *)(a2 + 48));
      goto LABEL_8;
    }
  }
  if ( (unsigned __int16)(v11 - 128) <= 0x37Fu )
    goto LABEL_20;
  if ( v11 != 11868 )
  {
    p_s = &s;
    if ( (v11 & 0xFF00) != 0 )
    {
      p_s = v40;
      s = BYTE1(v11);
    }
    *p_s = v11;
    p_s[1] = 0;
    v14 = strlen(&s);
    if ( v14 )
      goto LABEL_30;
    goto LABEL_18;
  }
  v32 = *(void **)a1;
  if ( *(_QWORD *)(a1 + 16) <= 3u )
  {
    v32 = sub_491288(a1, *(void **)a1, 4u, 1u);
    *(_QWORD *)a1 = v32;
  }
  *(_QWORD *)(a1 + 8) = 4;
  qmemcpy(v32, "...", 3);
  *(_BYTE *)(*(_QWORD *)a1 + 3LL) = 0;
LABEL_8:
  if ( *(_QWORD *)(a1 + 8) )
    return *(__int64 **)a1;
  return &qword_4B2D48;
}
// 4531F4: variable 'v34' is possibly undefined
// 4B2D48: using guessed type __int64 qword_4B2D48;
// 4B31F0: using guessed type char byte_4B31F0;
// 4C5B88: using guessed type __int64 qword_4C5B88[239];
