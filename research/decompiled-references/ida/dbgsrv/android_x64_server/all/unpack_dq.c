/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: unpack_dq
// Address: 0x00000000000C0310

//----- (00000000000C0310) ----------------------------------------------------
unsigned __int64 __fastcall unpack_dq(unsigned __int64 *a1, unsigned __int64 a2)
{
  unsigned __int8 *v2; // rdx
  __int64 v3; // rax
  unsigned __int8 *v4; // r8
  unsigned int v5; // r10d
  unsigned __int8 *v6; // r8
  int v7; // r9d
  unsigned __int8 *v8; // rdx
  int v9; // r9d
  __int16 v10; // ax
  unsigned __int16 v11; // ax
  int v12; // edx
  int v13; // ecx
  __int16 v14; // cx
  unsigned __int16 v15; // cx
  unsigned int v16; // ecx
  int v17; // ecx
  __int16 v18; // cx
  __int16 v20; // r9

  v2 = (unsigned __int8 *)*a1;
  v3 = 0;
  if ( *a1 >= a2 )
  {
    v5 = 0;
    goto LABEL_5;
  }
  v4 = v2 + 1;
  v5 = *v2;
  if ( (v5 & 0x80u) == 0 )
  {
LABEL_3:
    ++v2;
    goto LABEL_5;
  }
  if ( (v5 & 0xFFFFFFC0) == 0xC0 )
  {
    if ( (v5 & 0xFFFFFFE0) == 0xE0 )
    {
      if ( (unsigned __int64)v4 >= a2 )
      {
        v12 = 0;
      }
      else
      {
        v4 = v2 + 2;
        v12 = v2[1] << 8;
        if ( (unsigned __int64)v4 < a2 )
        {
          v13 = *v4++;
          v12 |= v13;
        }
      }
      if ( (unsigned __int64)v4 < a2 )
      {
LABEL_21:
        v14 = *v4++;
        v15 = v14 << 8;
        if ( (unsigned __int64)v4 < a2 )
          goto LABEL_43;
        goto LABEL_44;
      }
    }
    else if ( (unsigned __int64)v4 >= a2 )
    {
      v12 = 0;
    }
    else
    {
      v4 = v2 + 2;
      v12 = ((v5 & 0x3F) << 8) | v2[1];
      if ( (unsigned __int64)v4 < a2 )
        goto LABEL_21;
    }
    v15 = 0;
    if ( (unsigned __int64)v4 < a2 )
    {
LABEL_43:
      v20 = *v4++;
      v15 |= v20;
    }
LABEL_44:
    v5 = (v12 << 16) | v15;
    v2 = v4;
    goto LABEL_5;
  }
  if ( (unsigned __int64)v4 >= a2 )
    goto LABEL_3;
  v17 = v2[1];
  v2 += 2;
  v5 = v17 | ((v5 & 0x7F) << 8);
LABEL_5:
  *a1 = (unsigned __int64)v2;
  if ( (unsigned __int64)v2 < a2 )
  {
    v6 = v2 + 1;
    v3 = *v2;
    if ( (v3 & 0x80u) == 0LL )
      goto LABEL_39;
    if ( (v3 & 0xFFFFFFC0) == 0xC0 )
    {
      if ( (v3 & 0xFFFFFFE0) == 0xE0 )
      {
        if ( (unsigned __int64)v6 >= a2 )
        {
          v9 = 0;
        }
        else
        {
          v7 = v2[1];
          v8 = v2 + 2;
          v9 = v7 << 8;
          v6 = v8;
          if ( (unsigned __int64)v8 < a2 )
          {
            v6 = v8 + 1;
            v9 |= *v8;
          }
        }
        if ( (unsigned __int64)v6 < a2 )
        {
LABEL_13:
          v10 = *v6++;
          v11 = v10 << 8;
          if ( (unsigned __int64)v6 < a2 )
            goto LABEL_37;
          goto LABEL_38;
        }
      }
      else if ( (unsigned __int64)v6 >= a2 )
      {
        v9 = 0;
      }
      else
      {
        v9 = ((v3 & 0x3F) << 8) | v2[1];
        v6 = v2 + 2;
        if ( (unsigned __int64)(v2 + 2) < a2 )
          goto LABEL_13;
      }
      v11 = 0;
      if ( (unsigned __int64)v6 < a2 )
      {
LABEL_37:
        v18 = *v6++;
        v11 |= v18;
      }
LABEL_38:
      v3 = (v9 << 16) | (unsigned int)v11;
      goto LABEL_39;
    }
    if ( (unsigned __int64)v6 >= a2 )
    {
LABEL_39:
      v2 = v6;
      goto LABEL_40;
    }
    v16 = v2[1];
    v2 += 2;
    v3 = ((v3 & 0x7F) << 8) | v16;
  }
LABEL_40:
  *a1 = (unsigned __int64)v2;
  return v5 | (unsigned __int64)(v3 << 32);
}
