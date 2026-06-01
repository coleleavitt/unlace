/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_480C80
// Address: 0x0000000000480C80

//----- (0000000000480C80) ----------------------------------------------------
bool __fastcall sub_480C80(const char **a1)
{
  unsigned __int8 *v2; // x20
  const char *v3; // x19
  int v4; // w21
  char *v5; // x0
  const char *v6; // x1
  unsigned __int64 v7; // x2
  _BYTE *v8; // x0
  unsigned __int64 v9; // x21
  unsigned __int64 v10; // x20
  int v11; // w0
  unsigned __int64 v12; // x20
  unsigned __int64 v13; // x19
  void *v14; // x0
  char *v15; // x0
  unsigned __int8 *v16; // x2
  unsigned __int8 *v17; // x1
  unsigned __int8 *v18; // x4
  _BOOL8 result; // x0
  unsigned __int64 v20; // x28
  unsigned __int64 v21; // x20
  void *v22; // x0
  unsigned __int64 v23; // x2
  bool v24; // zf
  unsigned __int64 v26; // x20
  unsigned __int64 v27; // x21
  _BYTE *v28; // x0
  char v29; // w21
  char v30; // t1
  _BYTE *v31; // [xsp+60h] [xbp-20h] BYREF
  unsigned __int64 v32; // [xsp+68h] [xbp-18h]
  unsigned __int64 v33; // [xsp+70h] [xbp-10h]

  v2 = (unsigned __int8 *)a1[1];
  if ( v2 )
  {
    v3 = *a1;
    v4 = *(unsigned __int8 *)*a1;
    if ( **a1 )
    {
      v5 = strpbrk(*a1, " \t?*[]()<>;&$|^#");
      v6 = v3;
      if ( !v5 )
      {
        while ( 1 )
        {
          ++v6;
          result = v4 == 39 || (unsigned __int64)(v4 == 34);
          if ( result )
            break;
          v4 = *(unsigned __int8 *)v6;
          if ( !*v6 )
            return result;
        }
      }
    }
    v31 = nullptr;
    v32 = 0;
    v7 = (unsigned __int64)(v2 + 1);
    v33 = 0;
    if ( v2 == (unsigned __int8 *)-1LL )
    {
      v8 = nullptr;
      v9 = 0;
      v10 = 2;
      goto LABEL_6;
    }
  }
  else
  {
    v3 = (const char *)&qword_4B2D48;
    v7 = 2;
    v31 = nullptr;
    v32 = 0;
    v33 = 0;
  }
  v8 = sub_491288((__int64)&v31, nullptr, v7, 1u);
  v31 = v8;
  if ( v32 )
  {
    v9 = v32 - 1;
    v10 = v32 + 1;
  }
  else
  {
    v10 = 2;
    v9 = 0;
  }
  if ( v10 <= v33 )
  {
    v32 = v10;
    v8[v9] = 39;
    v31[v9 + 1] = 0;
    v11 = *(unsigned __int8 *)v3;
    if ( !*v3 )
      goto LABEL_7;
LABEL_20:
    while ( 1 )
    {
      v23 = v32;
      v24 = v11 == 34 || v11 == 39;
      if ( v24 || v11 == 92 )
        break;
LABEL_31:
      v30 = *v3++;
      v29 = v30;
      if ( v23 )
      {
        v20 = v23 + 1;
        v21 = v23 - 1;
        v22 = v31;
        if ( v33 < v23 + 1 )
          goto LABEL_33;
      }
      else
      {
        v20 = 2;
        v21 = 0;
        v22 = v31;
        if ( v33 < 2 )
        {
LABEL_33:
          v22 = sub_491288((__int64)&v31, v22, v20, 1u);
          v31 = v22;
        }
      }
      v32 = v20;
      *((_BYTE *)v22 + v21) = v29;
      v31[v21 + 1] = 0;
      v11 = *(unsigned __int8 *)v3;
      if ( !*v3 )
        goto LABEL_7;
    }
    if ( v32 )
    {
      v26 = v32 + 1;
      v27 = v32 - 1;
      v28 = v31;
      if ( v33 >= v32 + 1 )
      {
LABEL_30:
        v32 = v26;
        v28[v27] = 92;
        v31[v27 + 1] = 0;
        v23 = v32;
        goto LABEL_31;
      }
    }
    else
    {
      v26 = 2;
      v27 = 0;
      v28 = v31;
      if ( v33 >= 2 )
        goto LABEL_30;
    }
    v28 = sub_491288((__int64)&v31, v28, v26, 1u);
    v31 = v28;
    goto LABEL_30;
  }
LABEL_6:
  v31 = sub_491288((__int64)&v31, v8, v10, 1u);
  v32 = v10;
  v31[v9] = 39;
  v31[v9 + 1] = 0;
  v11 = *(unsigned __int8 *)v3;
  if ( *v3 )
    goto LABEL_20;
LABEL_7:
  if ( !v32 )
  {
    v13 = 2;
    v12 = 0;
    v14 = v31;
    if ( v33 >= 2 )
      goto LABEL_9;
LABEL_43:
    v14 = sub_491288((__int64)&v31, v14, v13, 1u);
    v31 = v14;
    goto LABEL_9;
  }
  v12 = v32 - 1;
  v13 = v32 + 1;
  v14 = v31;
  if ( v33 < v32 + 1 )
    goto LABEL_43;
LABEL_9:
  v32 = v13;
  *((_BYTE *)v14 + v12) = 39;
  v31[v12 + 1] = 0;
  v15 = (char *)*a1;
  v16 = (unsigned __int8 *)a1[1];
  v17 = (unsigned __int8 *)a1[2];
  v18 = (unsigned __int8 *)v32;
  *a1 = v31;
  a1[1] = (const char *)v18;
  a1[2] = (const char *)v33;
  v31 = v15;
  v32 = (unsigned __int64)v16;
  v33 = (unsigned __int64)v17;
  if ( v15 )
  {
    v32 = 0;
    j__free(v15);
  }
  return 1;
}
// 4B2D48: using guessed type __int64 qword_4B2D48;
