/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: unpack_dq
// Address: 0x000000010007B3D0

//----- (000000010007B3D0) ----------------------------------------------------
unsigned __int64 __fastcall unpack_dq(unsigned __int64 *a1, unsigned __int64 a2)
{
  unsigned __int8 *v2; // rdx
  __int64 v3; // rax
  unsigned __int8 *v4; // r8
  unsigned int v5; // ecx
  unsigned __int8 *v6; // r8
  int v7; // r9d
  int v8; // r9d
  unsigned int v9; // esi
  int v10; // r8d
  int v11; // eax
  __int16 v12; // ax
  unsigned __int16 v13; // ax
  int v14; // ecx
  __int16 v15; // cx
  unsigned __int16 v16; // cx
  __int16 v17; // dx
  __int16 v19; // dx

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
  if ( (~(_BYTE)v5 & 0xC0) == 0 )
  {
    if ( (~(_BYTE)v5 & 0xE0) != 0 )
    {
      if ( (unsigned __int64)v4 >= a2 )
      {
        v8 = 0;
      }
      else
      {
        v8 = ((v5 & 0x3F) << 8) | v2[1];
        v4 = v2 + 2;
        if ( (unsigned __int64)(v2 + 2) < a2 )
          goto LABEL_35;
      }
    }
    else
    {
      if ( (unsigned __int64)v4 >= a2 )
      {
        v8 = 0;
      }
      else
      {
        v8 = v2[1] << 8;
        v4 = v2 + 2;
      }
      if ( (unsigned __int64)v4 < a2 )
      {
        v14 = *v4++;
        v8 |= v14;
      }
      if ( (unsigned __int64)v4 < a2 )
      {
LABEL_35:
        v15 = *v4++;
        v16 = v15 << 8;
        if ( (unsigned __int64)v4 < a2 )
          goto LABEL_45;
        goto LABEL_46;
      }
    }
    v16 = 0;
    if ( (unsigned __int64)v4 < a2 )
    {
LABEL_45:
      v19 = *v4++;
      v16 |= v19;
    }
LABEL_46:
    v5 = (v8 << 16) | v16;
    v2 = v4;
    goto LABEL_5;
  }
  if ( (unsigned __int64)v4 >= a2 )
    goto LABEL_3;
  v10 = v2[1];
  v2 += 2;
  v5 = v10 | ((v5 & 0x7F) << 8);
LABEL_5:
  *a1 = (unsigned __int64)v2;
  if ( (unsigned __int64)v2 < a2 )
  {
    v6 = v2 + 1;
    v3 = *v2;
    if ( (v3 & 0x80u) == 0LL )
      goto LABEL_41;
    if ( (~(_BYTE)v3 & 0xC0) == 0 )
    {
      if ( (~(_BYTE)v3 & 0xE0) != 0 )
      {
        if ( (unsigned __int64)v6 >= a2 )
        {
          v7 = 0;
        }
        else
        {
          v7 = ((v3 & 0x3F) << 8) | v2[1];
          v6 = v2 + 2;
          if ( (unsigned __int64)(v2 + 2) < a2 )
            goto LABEL_29;
        }
      }
      else
      {
        if ( (unsigned __int64)v6 >= a2 )
        {
          v7 = 0;
        }
        else
        {
          v7 = v2[1] << 8;
          v6 = v2 + 2;
        }
        if ( (unsigned __int64)v6 < a2 )
        {
          v11 = *v6++;
          v7 |= v11;
        }
        if ( (unsigned __int64)v6 < a2 )
        {
LABEL_29:
          v12 = *v6++;
          v13 = v12 << 8;
          if ( (unsigned __int64)v6 < a2 )
            goto LABEL_39;
          goto LABEL_40;
        }
      }
      v13 = 0;
      if ( (unsigned __int64)v6 < a2 )
      {
LABEL_39:
        v17 = *v6++;
        v13 |= v17;
      }
LABEL_40:
      v3 = (v7 << 16) | (unsigned int)v13;
      goto LABEL_41;
    }
    if ( (unsigned __int64)v6 >= a2 )
    {
LABEL_41:
      v2 = v6;
      goto LABEL_42;
    }
    v9 = v2[1];
    v2 += 2;
    v3 = ((v3 & 0x7F) << 8) | v9;
  }
LABEL_42:
  *a1 = (unsigned __int64)v2;
  return v5 | (unsigned __int64)(v3 << 32);
}
