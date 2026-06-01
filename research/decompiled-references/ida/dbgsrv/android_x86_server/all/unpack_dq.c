/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: unpack_dq
// Address: 0x000AD890

//----- (000AD890) --------------------------------------------------------
int __cdecl unpack_dq(unsigned __int8 **a1, unsigned int a2)
{
  unsigned __int8 **v2; // eax
  unsigned __int8 *v3; // ebx
  unsigned __int8 *v4; // edi
  int v5; // ecx
  int v6; // ebx
  int v7; // eax
  __int16 v8; // ax
  unsigned __int16 v9; // ax
  int v10; // eax
  __int16 v11; // cx
  unsigned __int8 *v12; // edi
  int v13; // edx

  v2 = a1;
  v3 = *a1;
  if ( (unsigned int)*a1 >= a2 )
  {
    v5 = 0;
    goto LABEL_25;
  }
  v4 = v3 + 1;
  v5 = *v3;
  if ( (v5 & 0x80u) == 0 )
  {
    ++v3;
    goto LABEL_25;
  }
  if ( (v5 & 0xFFFFFFC0) == 0xC0 )
  {
    if ( (v5 & 0xFFFFFFE0) == 0xE0 )
    {
      if ( (unsigned int)v4 >= a2 )
      {
        v6 = 0;
      }
      else
      {
        v4 = v3 + 2;
        v6 = v3[1] << 8;
        if ( (unsigned int)v4 < a2 )
        {
          v7 = *v4++;
          v6 |= v7;
        }
      }
      if ( (unsigned int)v4 < a2 )
      {
LABEL_11:
        v8 = *v4++;
        v9 = v8 << 8;
        if ( (unsigned int)v4 < a2 )
          goto LABEL_21;
        goto LABEL_22;
      }
    }
    else if ( (unsigned int)v4 >= a2 )
    {
      v6 = 0;
    }
    else
    {
      v4 = v3 + 2;
      v6 = ((v5 & 0x3F) << 8) | v3[1];
      if ( (unsigned int)v4 < a2 )
        goto LABEL_11;
    }
    v9 = 0;
    if ( (unsigned int)v4 < a2 )
    {
LABEL_21:
      v11 = *v4++;
      v9 |= v11;
    }
LABEL_22:
    v5 = (v6 << 16) | v9;
    goto LABEL_23;
  }
  if ( (unsigned int)v4 >= a2 )
  {
LABEL_23:
    v3 = v4;
    goto LABEL_24;
  }
  v10 = v3[1];
  v3 += 2;
  v5 = v10 | ((v5 & 0x7F) << 8);
LABEL_24:
  v2 = a1;
LABEL_25:
  *v2 = v3;
  if ( (unsigned int)v3 < a2 )
  {
    v12 = v3 + 1;
    v13 = *v3;
    if ( (v13 & 0x80u) == 0 )
    {
LABEL_46:
      v3 = v12;
      goto LABEL_47;
    }
    if ( (v13 & 0xFFFFFFC0) == 0xC0 )
    {
      if ( (v13 & 0xFFFFFFE0) == 0xE0 )
      {
        if ( (unsigned int)v12 < a2 )
        {
          v12 = v3 + 2;
          if ( (unsigned int)(v3 + 2) < a2 )
            v12 = v3 + 3;
        }
        if ( (unsigned int)v12 < a2 )
        {
LABEL_33:
          if ( (unsigned int)++v12 < a2 )
            goto LABEL_44;
          goto LABEL_45;
        }
      }
      else if ( (unsigned int)v12 < a2 )
      {
        v12 = v3 + 2;
        if ( (unsigned int)(v3 + 2) < a2 )
          goto LABEL_33;
      }
      if ( (unsigned int)v12 < a2 )
LABEL_44:
        ++v12;
LABEL_45:
      v2 = a1;
      goto LABEL_46;
    }
    if ( (unsigned int)v12 >= a2 )
      ++v3;
    else
      v3 += 2;
    v2 = a1;
  }
LABEL_47:
  *v2 = v3;
  return v5;
}
