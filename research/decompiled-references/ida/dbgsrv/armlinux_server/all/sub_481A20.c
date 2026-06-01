/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_481A20
// Address: 0x0000000000481A20

//----- (0000000000481A20) ----------------------------------------------------
void __fastcall __noreturn sub_481A20(__int64 a1, unsigned __int8 a2)
{
  __int64 v3; // x19
  __int64 v4; // x20
  unsigned __int64 v5; // x26
  __int64 v6; // x21
  unsigned __int64 v7; // x27
  void *v8; // x0
  const void *v9; // x21
  size_t v10; // x0
  size_t v11; // x28
  unsigned __int64 v12; // x22
  size_t v13; // x27
  void *v14; // x0
  unsigned __int64 v15; // x26
  __int64 v16; // x21
  unsigned __int64 v17; // x22
  unsigned __int64 v18; // x26
  void *v19; // x0
  __int64 v20; // x22
  unsigned __int64 v21; // x27
  __int64 v22; // x26
  unsigned __int64 v23; // x21
  void *v24; // x0
  int (**v25)(const char *, ...); // x19
  __int64 *v26; // x0
  const char *v27; // x0
  const char *v28; // x2
  __int64 v29; // [xsp+68h] [xbp-38h]
  int status; // [xsp+7Ch] [xbp-24h]
  const char *v31; // [xsp+80h] [xbp-20h] BYREF
  unsigned __int64 v32; // [xsp+88h] [xbp-18h]
  unsigned __int64 v33; // [xsp+90h] [xbp-10h]

  status = a2;
  v29 = *(_QWORD *)(a1 + 8);
  v31 = nullptr;
  v32 = 0;
  v33 = 0;
  if ( !v29 )
  {
LABEL_25:
    v25 = *(int (***)(const char *, ...))(a1 + 72);
    if ( !v25 )
      v25 = &printf;
    if ( *(_QWORD *)(a1 + 32) )
      v26 = *(__int64 **)(a1 + 24);
    else
      v26 = &qword_4B2D48;
    v27 = sub_48F420(v26);
    v28 = (const char *)&qword_4B2D48;
    if ( v32 )
      v28 = v31;
    ((void (*)(const char *, ...))v25)("Usage: %s [options]\n%s", v27, v28);
    if ( *(_QWORD *)(a1 + 56) > 1u )
      ((void (*)(const char *, ...))v25)("\n%s\n", *(const char **)(a1 + 48));
    sub_4922C0(status);
  }
  v3 = 0;
  v4 = 0;
  while ( 1 )
  {
    v20 = *(_QWORD *)a1 + v3;
    if ( *(_BYTE *)v20 )
    {
      sub_42D148((__int64)&v31, "  -%c%s");
      goto LABEL_13;
    }
    if ( v32 )
    {
      v21 = v32 - 1;
      v22 = v32 + 7;
      v23 = v32 + 8;
      v24 = (void *)v31;
      if ( v33 < v32 + 8 )
        goto LABEL_35;
    }
    else
    {
      v23 = 9;
      v22 = 8;
      v21 = 0;
      v24 = (void *)v31;
      if ( v33 < 9 )
      {
LABEL_35:
        v24 = sub_491288((__int64)&v31, v24, v23, 1u);
        v31 = (const char *)v24;
      }
    }
    v32 = v23;
    *((_BYTE *)v24 + v22) = 0;
    *(_QWORD *)&v31[v21] = *(_QWORD *)"        ";
LABEL_13:
    if ( *(_QWORD *)(v20 + 8) )
      sub_42D148((__int64)&v31, "  (--%s%s)");
    v6 = v32;
    if ( v32 )
    {
      v5 = v32 + 1;
      v7 = v32 - 1;
      v8 = (void *)v31;
      if ( v33 >= v32 + 1 )
        goto LABEL_4;
    }
    else
    {
      v5 = 2;
      v6 = 1;
      v7 = 0;
      v8 = (void *)v31;
      if ( v33 >= 2 )
        goto LABEL_4;
    }
    v8 = sub_491288((__int64)&v31, v8, v5, 1u);
    v31 = (const char *)v8;
LABEL_4:
    v32 = v5;
    *((_BYTE *)v8 + v6) = 0;
    v31[v7] = aAutohide[8];
    v9 = *(const void **)(v20 + 16);
    if ( !v9 )
      goto LABEL_8;
    v10 = strlen(*(const char **)(v20 + 16));
    v11 = v10;
    if ( v32 )
    {
      v12 = v32 - 1;
      v13 = v10 + v32 - 1;
      v14 = (void *)v31;
      v15 = v13 + 1;
      if ( v13 + 1 > v33 )
        goto LABEL_24;
    }
    else
    {
      v13 = v10;
      v15 = v10 + 1;
      v12 = 0;
      v14 = (void *)v31;
      if ( v15 > v33 )
      {
LABEL_24:
        v14 = sub_491288((__int64)&v31, v14, v15, 1u);
        v31 = (const char *)v14;
      }
    }
    v32 = v15;
    *((_BYTE *)v14 + v13) = 0;
    memmove((void *)&v31[v12], v9, v11);
LABEL_8:
    v16 = v32;
    if ( v32 )
    {
      v17 = v32 + 1;
      v18 = v32 - 1;
      v19 = (void *)v31;
      if ( v33 < v32 + 1 )
        goto LABEL_19;
    }
    else
    {
      v17 = 2;
      v16 = 1;
      v18 = 0;
      v19 = (void *)v31;
      if ( v33 < 2 )
      {
LABEL_19:
        v19 = sub_491288((__int64)&v31, v19, v17, 1u);
        v31 = (const char *)v19;
      }
    }
    v32 = v17;
    *((_BYTE *)v19 + v16) = 0;
    ++v4;
    v3 += 40;
    v31[v18] = 10;
    if ( v4 == v29 )
      goto LABEL_25;
  }
}
// 4B2D48: using guessed type __int64 qword_4B2D48;
