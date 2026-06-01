/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4749C8
// Address: 0x00000000004749C8

//----- (00000000004749C8) ----------------------------------------------------
size_t __fastcall sub_4749C8(__int64 a1, unsigned int a2, unsigned __int64 a3)
{
  __int64 *v3; // x20
  int v4; // w22
  int v7; // w21
  const char *v11; // x22
  size_t v12; // x0
  __int64 v13; // x23
  size_t v14; // x26
  size_t v15; // x25
  __int64 v16; // x23
  _BYTE *v17; // x0
  size_t result; // x0
  __int64 v19; // x23
  __int64 v20; // x25
  unsigned __int64 v21; // x24
  _BYTE *v22; // x0
  __int64 v23; // x23
  __int64 v24; // x25
  unsigned __int64 v25; // x24
  _BYTE *v26; // x0

  if ( a2 > 0xC2 )
    return -1;
  v3 = (__int64 *)*(&off_51B190 + (int)a2);
  if ( a2 - 129 > 0x1F )
  {
    if ( a2 == 161 )
    {
      if ( a3 == 4 )
      {
        v7 = 87;
        v4 = 0;
        v3 = &qword_4C8F90;
      }
      else
      {
        if ( a3 != 8 )
          return -1;
        v7 = 0;
        v4 = 0;
        v3 = &qword_4C8F90;
      }
      goto LABEL_17;
    }
    if ( a2 != 162 )
    {
      if ( a2 - 163 > 0x1F )
      {
        v4 = 0;
      }
      else if ( a3 == 8 )
      {
        v4 = 68;
      }
      else
      {
        if ( a3 <= 8 )
        {
          if ( a3 != 2 )
          {
            if ( a3 == 4 )
            {
              v7 = 0;
              v4 = 83;
            }
            else
            {
              if ( a3 != 1 )
                return -1;
              v7 = 0;
              v4 = 66;
            }
            goto LABEL_17;
          }
          v4 = 72;
LABEL_16:
          v7 = 0;
          goto LABEL_17;
        }
        if ( a3 == 32 )
        {
          v4 = 80;
        }
        else if ( a3 == 64 )
        {
          v4 = 90;
        }
        else
        {
          v4 = 81;
          if ( a3 != 16 )
            return -1;
        }
      }
LABEL_6:
      if ( a3 > 4 && a2 <= 0xF )
        return -1;
      if ( a3 > 4 && a2 - 93 <= 0x1F )
        return -1;
      goto LABEL_16;
    }
    switch ( a3 )
    {
      case 0x40uLL:
        v4 = 0;
        v3 = &qword_4C8F78;
        break;
      case 0x20uLL:
        v4 = 0;
        v3 = &qword_4C8F80;
        break;
      case 8uLL:
        v4 = 0;
        v3 = (__int64 *)"PC";
        break;
      default:
        return -1;
    }
    goto LABEL_16;
  }
  if ( a3 != 4 )
  {
    if ( a3 > 4 )
    {
      v4 = 88;
      if ( a3 == 8 )
        goto LABEL_6;
      return -1;
    }
    if ( a3 - 1 > 1 )
      return -1;
  }
  v7 = 0;
  v4 = 87;
LABEL_17:
  if ( a2 - 61 <= 0x1F && a3 > 8 )
    return -1;
  if ( a2 - 45 <= 0xF && a3 > 0x10 )
    return -1;
  if ( !a1 )
  {
LABEL_38:
    result = strlen((const char *)v3);
    if ( v7 )
      ++result;
    return result;
  }
  if ( *(_QWORD *)(a1 + 16) <= 0xFu )
  {
    *(_QWORD *)a1 = sub_491288(a1, *(void **)a1, 0x10u, 1u);
    if ( !v7 )
    {
LABEL_28:
      if ( !v4 )
        goto LABEL_29;
      goto LABEL_62;
    }
  }
  else if ( !v7 )
  {
    goto LABEL_28;
  }
  v19 = *(_QWORD *)(a1 + 8);
  if ( v19 )
  {
    v20 = v19 - 1;
    v21 = v19 + 1;
  }
  else
  {
    v19 = 1;
    v21 = 2;
    v20 = 0;
  }
  v22 = *(_BYTE **)a1;
  if ( *(_QWORD *)(a1 + 16) < v21 )
  {
    v22 = sub_491288(a1, *(void **)a1, v21, 1u);
    *(_QWORD *)a1 = v22;
  }
  *(_QWORD *)(a1 + 8) = v21;
  v22[v20] = v7;
  *(_BYTE *)(*(_QWORD *)a1 + v19) = 0;
  if ( v4 )
  {
LABEL_62:
    v23 = *(_QWORD *)(a1 + 8);
    if ( v23 )
    {
      v24 = v23 - 1;
      v25 = v23 + 1;
    }
    else
    {
      v23 = 1;
      v25 = 2;
      v24 = 0;
    }
    v26 = *(_BYTE **)a1;
    if ( *(_QWORD *)(a1 + 16) < v25 )
    {
      v26 = sub_491288(a1, *(void **)a1, v25, 1u);
      *(_QWORD *)a1 = v26;
    }
    *(_QWORD *)(a1 + 8) = v25;
    v26[v24] = v4;
    *(_BYTE *)(*(_QWORD *)a1 + v23) = 0;
  }
LABEL_29:
  if ( v4 )
    v11 = (char *)v3 + 1;
  else
    v11 = (const char *)v3;
  if ( v11 )
  {
    v12 = strlen(v11);
    v13 = *(_QWORD *)(a1 + 8);
    v14 = v12;
    if ( v13 )
    {
      v16 = v13 - 1;
      v15 = v12 + v16;
    }
    else
    {
      v15 = v12;
      v16 = 0;
    }
    v17 = *(_BYTE **)a1;
    if ( v15 + 1 > *(_QWORD *)(a1 + 16) )
    {
      v17 = sub_491288(a1, *(void **)a1, v15 + 1, 1u);
      *(_QWORD *)a1 = v17;
    }
    *(_QWORD *)(a1 + 8) = v15 + 1;
    v17[v15] = 0;
    memmove((void *)(*(_QWORD *)a1 + v16), v11, v14);
    goto LABEL_38;
  }
  result = strlen((const char *)v3);
  if ( v7 )
    ++result;
  return result;
}
// 4C8F78: using guessed type __int64 qword_4C8F78;
// 4C8F80: using guessed type __int64 qword_4C8F80;
// 4C8F90: using guessed type __int64 qword_4C8F90;
// 51B190: using guessed type __int64 (*off_51B190)[16];
