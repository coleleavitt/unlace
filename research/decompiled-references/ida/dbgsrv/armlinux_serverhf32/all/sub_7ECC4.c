/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7ECC4
// Address: 0x0007ECC4

//----- (0007ECC4) --------------------------------------------------------
unsigned int __fastcall sub_7ECC4(void **a1, int a2, unsigned int a3)
{
  unsigned int v3; // r4
  int v4; // r10
  char v5; // r9
  int v6; // r8
  unsigned __int8 *v9; // r2
  int v10; // r6
  unsigned int v11; // r7
  const unsigned __int16 **v12; // r0
  const unsigned __int16 *v13; // r0
  unsigned __int8 *v14; // r3
  int v15; // r6
  unsigned int result; // r0
  int v17; // r6
  int v18; // t1
  unsigned __int8 *v19; // r6
  unsigned __int8 *v20; // r0
  char *v21; // r0
  int v22; // r6
  unsigned __int8 *v23; // r8
  unsigned int v24; // r4
  size_t v25; // r4
  unsigned __int8 *v26; // r1
  unsigned __int8 *v27; // r0
  unsigned __int8 *ptra; // [sp+4h] [bp-8h]
  unsigned __int8 *ptr; // [sp+4h] [bp-8h]

  v3 = (unsigned int)a1[1];
  if ( v3 <= 1 )
    goto LABEL_18;
  v4 = (a3 >> 1) & 1;
  v5 = a3;
  if ( a2 )
    v6 = 1;
  else
    v6 = (a3 >> 1) & 1;
  if ( !v6 )
  {
    v11 = 0;
    goto LABEL_11;
  }
  v9 = (unsigned __int8 *)*a1;
  v10 = *(unsigned __int8 *)*a1;
  v11 = v10 & 0xFFFFFF80;
  if ( (v10 & 0xFFFFFF80) != 0 )
  {
    v11 = a2;
    if ( !a2 )
      goto LABEL_25;
    v11 = 0;
LABEL_36:
    if ( v9[v11] != a2 )
    {
      if ( (v5 & 4) == 0 )
        goto LABEL_25;
      ptr = v9;
      v21 = strchr((const char *)&v9[v11], a2);
      v9 = ptr;
      if ( !v21 )
        goto LABEL_25;
      v22 = v21 - (char *)ptr;
      if ( v21 - (char *)ptr == -1 )
        goto LABEL_25;
      if ( v22 )
      {
        v23 = (unsigned __int8 *)(v22 + 1);
        if ( v3 < v22 + 1 )
        {
          if ( v23 > a1[2] )
          {
            v27 = (unsigned __int8 *)sub_77EB0((int)a1, ptr, v22 + 1, 1u);
            v3 = (unsigned int)a1[1];
            v9 = v27;
            *a1 = v27;
          }
          memset(&v9[v3], 0, (size_t)&v23[-v3]);
          a1[1] = v23;
          v9 = (unsigned __int8 *)*a1;
        }
        else if ( v3 > v22 + 1 )
        {
          a1[1] = v23;
        }
        v9[v22] = 0;
LABEL_45:
        v3 = (unsigned int)a1[1];
        if ( v3 <= 1 )
          goto LABEL_18;
        goto LABEL_25;
      }
    }
    if ( v9 )
    {
      a1[1] = nullptr;
      sub_77E08(v9);
      *a1 = nullptr;
      a1[2] = nullptr;
      goto LABEL_45;
    }
LABEL_25:
    v6 = v11;
    if ( v11 )
      v6 = 1;
    goto LABEL_11;
  }
  ptra = (unsigned __int8 *)*a1;
  v12 = _ctype_b_loc();
  v9 = ptra;
  v13 = *v12;
  v14 = ptra;
  do
  {
    if ( (v13[v10] & 0x2000) == 0 )
    {
      if ( !a2 )
        goto LABEL_25;
      goto LABEL_10;
    }
    v18 = *++v14;
    v10 = v18;
    ++v11;
  }
  while ( (v18 & 0x80) == 0 );
  if ( !a2 )
    goto LABEL_25;
LABEL_10:
  if ( v3 - 1 > v11 )
    goto LABEL_36;
LABEL_11:
  if ( (v5 & 1) == 0 )
  {
LABEL_21:
    if ( ((unsigned __int8)v6 & (unsigned __int8)v4 & 1) == 0 )
      return v3 - 1;
    goto LABEL_48;
  }
  while ( 1 )
  {
    if ( v3 > 1 )
    {
      v17 = (unsigned __int8)*((char *)*a1 + v3 - 2);
      if ( (v17 & 0x80) != 0 )
        goto LABEL_21;
      v15 = v17;
    }
    else
    {
      v15 = 0;
    }
    if ( ((*_ctype_b_loc())[v15] & 0x2000) == 0 )
      break;
    v19 = (unsigned __int8 *)(v3 - 1);
    v20 = (unsigned __int8 *)*a1;
    if ( (int)(v3 - 1) <= 1 )
    {
      if ( v20 )
      {
        a1[1] = nullptr;
        sub_77E08(v20);
        *a1 = nullptr;
        a1[2] = nullptr;
        v3 = (unsigned int)a1[1];
      }
    }
    else
    {
      if ( v19 > a1[2] )
      {
        v20 = (unsigned __int8 *)sub_77EB0((int)a1, *a1, v3 - 1, 1u);
        *a1 = v20;
      }
      a1[1] = v19;
      v19[(_DWORD)v20 - 1] = 0;
      v3 = (unsigned int)a1[1];
    }
  }
  if ( (v6 & v4) != 0 && v3 > 1 )
  {
LABEL_48:
    v24 = v3 - 1;
    if ( v11 < v24 )
    {
      v25 = v24 - v11;
      memmove(*a1, (char *)*a1 + v11, v25);
    }
    else
    {
      v25 = 0;
    }
    v26 = (unsigned __int8 *)*a1;
    if ( v25 + 1 > (unsigned int)a1[2] )
    {
      v26 = (unsigned __int8 *)sub_77EB0((int)a1, v26, v25 + 1, 1u);
      *a1 = v26;
    }
    a1[1] = (void *)(v25 + 1);
    v26[v25] = 0;
    v3 = (unsigned int)a1[1];
  }
LABEL_18:
  result = v3;
  if ( v3 )
    return v3 - 1;
  return result;
}
// 7ED5C: conditional instruction was optimized away because r4.4>=2u
