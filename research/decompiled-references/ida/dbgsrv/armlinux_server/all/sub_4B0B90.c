/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4B0B90
// Address: 0x00000000004B0B90

//----- (00000000004B0B90) ----------------------------------------------------
unsigned __int64 *__fastcall sub_4B0B90(unsigned __int64 *a1, size_t a2, unsigned __int64 a3, char *src, size_t n)
{
  unsigned __int64 v7; // x1
  size_t v9; // x25
  unsigned __int64 v10; // x22
  unsigned __int64 v11; // x2
  unsigned __int64 v12; // x23
  _BOOL4 v13; // w24
  size_t v14; // x21
  unsigned __int64 v15; // x26
  bool v16; // cf
  unsigned __int64 v17; // x20
  char *v18; // x1
  size_t v19; // x2
  size_t v20; // x20
  void *v21; // x0
  unsigned __int64 v22; // x1
  size_t v24; // [xsp+60h] [xbp+60h]
  size_t v25; // [xsp+60h] [xbp+60h]
  size_t v26; // [xsp+60h] [xbp+60h]
  char *v27; // [xsp+68h] [xbp+68h]
  char *v28; // [xsp+68h] [xbp+68h]
  char *v29; // [xsp+68h] [xbp+68h]
  size_t v30; // [xsp+68h] [xbp+68h]

  v7 = a1[1];
  if ( n > a3 + 0x7FFFFFFFFFFFFFFFLL - v7 )
    sub_4A04D0("basic_string::_M_replace");
  v9 = n - a3;
  v10 = v7 + n - a3;
  v11 = 15;
  v12 = *a1;
  if ( (unsigned __int64 *)*a1 != a1 + 2 )
    v11 = a1[2];
  if ( v11 < v10 )
  {
    sub_4AFE60(a1, a2, a3, src, n);
    goto LABEL_34;
  }
  v13 = a3 != n;
  v14 = v7 - a2 - a3;
  if ( v7 - a2 == a3 )
    v13 = 0;
  v15 = v12 + a2;
  if ( (unsigned __int64)src < v12 || (unsigned __int64)src > v12 + v7 )
  {
    if ( v13 )
    {
      if ( v14 == 1 )
      {
        *(_BYTE *)(v15 + n) = *(_BYTE *)(v15 + a3);
        if ( !n )
          goto LABEL_34;
LABEL_12:
        if ( n != 1 )
        {
          v19 = n;
          v18 = src;
LABEL_37:
          v21 = (void *)(v12 + a2);
LABEL_38:
          memcpy(v21, v18, v19);
          goto LABEL_34;
        }
        goto LABEL_13;
      }
      v24 = n;
      v27 = src;
      memmove((void *)(v15 + n), (const void *)(v15 + a3), v7 - a2 - a3);
      n = v24;
      src = v27;
    }
    if ( !n )
      goto LABEL_34;
    goto LABEL_12;
  }
  if ( n )
    v16 = a3 >= n;
  else
    v16 = 0;
  if ( !v16 )
  {
LABEL_42:
    if ( !v13 )
      goto LABEL_24;
    goto LABEL_22;
  }
  if ( n == 1 )
  {
    *(_BYTE *)(v12 + a2) = *src;
    goto LABEL_42;
  }
  v25 = n;
  v28 = src;
  memmove((void *)(v12 + a2), src, n);
  n = v25;
  src = v28;
  if ( !v13 )
    goto LABEL_34;
LABEL_22:
  if ( v14 == 1 )
  {
    *(_BYTE *)(v15 + n) = *(_BYTE *)(v15 + a3);
  }
  else
  {
    v26 = n;
    v29 = src;
    memmove((void *)(v15 + n), (const void *)(v15 + a3), v14);
    n = v26;
    src = v29;
  }
LABEL_24:
  if ( a3 >= n )
    goto LABEL_34;
  v17 = v15 + a3;
  if ( v17 >= (unsigned __int64)&src[n] )
  {
    if ( n != 1 )
    {
      memmove((void *)(v12 + a2), src, n);
      goto LABEL_34;
    }
LABEL_13:
    *(_BYTE *)(v12 + a2) = *src;
    goto LABEL_34;
  }
  if ( v17 <= (unsigned __int64)src )
  {
    v18 = &src[v9];
    v19 = n;
    if ( n == 1 )
    {
      *(_BYTE *)(v12 + a2) = src[v9];
      goto LABEL_34;
    }
    goto LABEL_37;
  }
  v20 = v17 - (_QWORD)src;
  if ( v20 == 1 )
  {
    *(_BYTE *)(v12 + a2) = *src;
  }
  else if ( v20 )
  {
    v30 = n;
    memmove((void *)(v12 + a2), src, v20);
    n = v30;
  }
  v19 = n - v20;
  v21 = (void *)(v15 + v20);
  v18 = (char *)(v15 + n);
  if ( n - v20 == 1 )
  {
    *(_BYTE *)(v15 + v20) = *(_BYTE *)(v15 + n);
    goto LABEL_34;
  }
  if ( v19 )
    goto LABEL_38;
LABEL_34:
  v22 = *a1;
  a1[1] = v10;
  *(_BYTE *)(v22 + v10) = 0;
  return a1;
}
