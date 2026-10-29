/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8C660
// Address: 0x0008C660

//----- (0008C660) --------------------------------------------------------
unsigned int *__fastcall sub_8C660(unsigned int *a1, size_t a2, unsigned int a3, char *src, size_t a5)
{
  unsigned int v6; // r0
  size_t v8; // r10
  unsigned int v9; // r8
  unsigned int v10; // r7
  unsigned int v12; // r2
  size_t v13; // r2
  _BYTE *v14; // r11
  bool v15; // zf
  size_t v16; // r1
  int v17; // r2
  unsigned int v18; // r3
  _BOOL4 v20; // r2
  unsigned int v21; // r5
  size_t v22; // r5
  size_t v23; // r2
  void *srca; // [sp+Ch] [bp-10h]
  char *srcb; // [sp+Ch] [bp-10h]
  char *srcc; // [sp+Ch] [bp-10h]
  size_t n; // [sp+10h] [bp-Ch]
  char *v28; // [sp+14h] [bp-8h]

  v6 = a1[1];
  if ( a5 > a3 + 0x7FFFFFFF - v6 )
    sub_83AE4("basic_string::_M_replace");
  v8 = a5 - a3;
  v9 = *a1;
  v10 = v6 + a5 - a3;
  if ( (unsigned int *)*a1 == a1 + 2 )
    v12 = 15;
  else
    v12 = a1[2];
  if ( v12 < v10 )
  {
    sub_8BECC(a1, a2, a3, src, a5);
    goto LABEL_18;
  }
  v13 = v6 - a2;
  v14 = (_BYTE *)(v9 + a2);
  v15 = a3 == a5;
  if ( a3 != a5 )
    v15 = v13 == a3;
  v16 = v13 - a3;
  v17 = !v15;
  n = v16;
  srca = (void *)v17;
  if ( (unsigned int)src < v9 || (unsigned int)src > v6 + v9 )
  {
    if ( v17 )
    {
      if ( v16 == 1 )
      {
        v14[a5] = v14[a3];
        if ( !a5 )
          goto LABEL_18;
LABEL_16:
        if ( a5 != 1 )
        {
          memcpy(v14, src, a5);
          goto LABEL_18;
        }
        goto LABEL_17;
      }
      srcb = src;
      memmove(&v14[a5], &v14[a3], v16);
      src = srcb;
    }
    if ( !a5 )
      goto LABEL_18;
    goto LABEL_16;
  }
  v20 = a3 >= a5;
  if ( !a5 )
    v20 = 0;
  if ( !v20 )
  {
LABEL_37:
    if ( !srca )
      goto LABEL_27;
    goto LABEL_25;
  }
  if ( a5 == 1 )
  {
    *(_BYTE *)(v9 + a2) = *src;
    goto LABEL_37;
  }
  v28 = src;
  memmove(v14, src, a5);
  src = v28;
  if ( !srca )
    goto LABEL_18;
LABEL_25:
  if ( n == 1 )
  {
    v14[a5] = v14[a3];
  }
  else
  {
    srcc = src;
    memmove(&v14[a5], &v14[a3], n);
    src = srcc;
  }
LABEL_27:
  if ( a3 >= a5 )
    goto LABEL_18;
  v21 = (unsigned int)&v14[a3];
  if ( v21 >= (unsigned int)&src[a5] )
  {
    if ( a5 != 1 )
    {
      memmove(v14, src, a5);
      goto LABEL_18;
    }
LABEL_17:
    *(_BYTE *)(v9 + a2) = *src;
    goto LABEL_18;
  }
  if ( v21 > (unsigned int)src )
  {
    v22 = v21 - (_DWORD)src;
    if ( v22 == 1 )
    {
      *(_BYTE *)(v9 + a2) = *src;
    }
    else if ( v22 )
    {
      memmove(v14, src, v22);
    }
    v23 = a5 - v22;
    if ( a5 - v22 == 1 )
    {
      v14[v22] = v14[a5];
    }
    else if ( v23 )
    {
      memcpy(&v14[v22], &v14[a5], v23);
    }
  }
  else if ( a5 == 1 )
  {
    *(_BYTE *)(v9 + a2) = src[v8];
  }
  else
  {
    memcpy(v14, &src[v8], a5);
  }
LABEL_18:
  v18 = *a1;
  a1[1] = v10;
  *(_BYTE *)(v18 + v10) = 0;
  return a1;
}
