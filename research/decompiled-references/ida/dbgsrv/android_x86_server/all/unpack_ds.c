/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: unpack_ds
// Address: 0x000ADA30

//----- (000ADA30) --------------------------------------------------------
_BYTE *__cdecl unpack_ds(unsigned __int8 **a1, unsigned int a2, char a3)
{
  const void **v3; // edi
  unsigned __int8 *v4; // edx
  unsigned __int8 *v5; // esi
  int v6; // ecx
  const void **v7; // esi
  unsigned __int8 *v8; // edi
  _BYTE *result; // eax
  int v10; // edx
  bool v11; // cc
  bool v12; // bh
  size_t v13; // ebx
  bool v14; // cl
  bool v15; // zf
  int v16; // ecx
  _BYTE *v17; // eax
  int v18; // edx
  int v19; // esi
  int v20; // ecx
  int v21; // edi
  unsigned __int16 v22; // di
  __int16 v23; // cx
  __int16 v24; // di
  _BYTE *v25; // [esp+14h] [ebp-18h]
  size_t v26; // [esp+18h] [ebp-14h]

  v3 = (const void **)a1;
  v4 = *a1;
  if ( (unsigned int)*a1 >= a2 )
  {
    v6 = 0;
    goto LABEL_5;
  }
  v5 = v4 + 1;
  v6 = *v4;
  if ( (v6 & 0x80u) == 0 )
  {
LABEL_3:
    ++v4;
    goto LABEL_5;
  }
  if ( (v6 & 0xFFFFFFC0) == 0xC0 )
  {
    if ( (v6 & 0xFFFFFFE0) == 0xE0 )
    {
      if ( (unsigned int)v5 >= a2 )
      {
        v18 = 0;
      }
      else
      {
        v5 = v4 + 2;
        v18 = v4[1] << 8;
      }
      if ( (unsigned int)v5 < a2 )
      {
        v21 = *v5++;
        v18 |= v21;
      }
      if ( (unsigned int)v5 >= a2 )
      {
LABEL_36:
        v22 = 0;
        if ( (unsigned int)v5 >= a2 )
        {
LABEL_38:
          v6 = (v18 << 16) | v22;
          v4 = v5;
          v3 = (const void **)a1;
          goto LABEL_5;
        }
LABEL_37:
        v23 = *v5++;
        v22 |= v23;
        goto LABEL_38;
      }
    }
    else
    {
      if ( (unsigned int)v5 >= a2 )
      {
        v18 = 0;
      }
      else
      {
        v5 = v4 + 2;
        v18 = ((v6 & 0x3F) << 8) | v4[1];
      }
      if ( (unsigned int)v5 >= a2 )
        goto LABEL_36;
    }
    v24 = *v5++;
    v22 = v24 << 8;
    if ( (unsigned int)v5 >= a2 )
      goto LABEL_38;
    goto LABEL_37;
  }
  v3 = (const void **)a1;
  if ( (unsigned int)v5 >= a2 )
    goto LABEL_3;
  v19 = (v6 & 0x7F) << 8;
  v20 = v4[1];
  v4 += 2;
  v6 = v20 | v19;
LABEL_5:
  v7 = v3;
  *v3 = v4;
  v8 = &v4[v6];
  if ( (unsigned int)&v4[v6] > a2 || v8 < v4 )
    return nullptr;
  if ( !a3 )
  {
    v13 = v6;
    v10 = v6 + 1;
    v14 = v6 + 1 > 0;
    if ( !v14 )
      v13 = 0;
    v26 = v13;
    goto LABEL_18;
  }
  if ( !v6 )
    return nullptr;
  result = nullptr;
  if ( *v4 )
  {
    v10 = v6 + 1;
    result = nullptr;
    v11 = v6 + 1 <= 0;
    v12 = v6 + 1 > 0;
    if ( v6 + 1 <= 0 )
      v6 = 0;
    v26 = v6;
    if ( !v11 )
    {
      v14 = v12;
LABEL_18:
      v15 = !v14;
      v16 = 1;
      if ( !v15 )
        v16 = v10;
      v17 = qalloc(v16);
      if ( !v17 )
        sub_54EC0((int)"unpack_ds");
      v25 = v17;
      memcpy(v17, *v7, v26);
      result = v25;
      v25[v26] = 0;
      *a1 = v8;
    }
  }
  return result;
}
// ADAAD: conditional instruction was optimized away because %arg_8.1!=0
