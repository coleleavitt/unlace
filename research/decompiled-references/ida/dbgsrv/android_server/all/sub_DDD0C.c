/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_DDD0C
// Address: 0x00000000000DDD0C

//----- (00000000000DDD0C) ----------------------------------------------------
__int64 __fastcall sub_DDD0C(unsigned __int8 **a1)
{
  unsigned __int8 *v1; // x9
  unsigned __int8 *v2; // x11
  unsigned __int8 *v3; // x8
  unsigned __int8 *v4; // x12
  unsigned __int8 *v5; // x10
  unsigned __int8 *v7; // x8
  unsigned __int8 *v8; // x12
  unsigned __int8 *v9; // x10
  unsigned __int8 *v10; // x10
  int v11; // t1
  unsigned __int8 *v12; // x11
  bool v13; // zf
  unsigned int v14; // w8
  unsigned __int8 *v15; // x9
  unsigned __int8 *v16; // x10
  int v17; // t1
  unsigned __int8 *v18; // x11
  unsigned __int8 *v19; // x8
  unsigned __int8 *v20; // x12
  unsigned __int8 *v21; // x11
  unsigned __int8 *v22; // x10
  int v23; // t1
  unsigned __int8 *v24; // x10

  v2 = *a1;
  v1 = a1[1];
  if ( *a1 == v1 )
    return 1;
  if ( *v2 == 104 )
  {
    v3 = v2 + 1;
    *a1 = v2 + 1;
    if ( v2 + 1 == v1 )
    {
      v5 = v1;
    }
    else
    {
      v4 = v2 + 1;
      v5 = v2 + 1;
      if ( *v3 == 110 )
      {
        v5 = v2 + 2;
        v4 = v2 + 2;
        *a1 = v2 + 2;
      }
      if ( v4 != v1 && (unsigned int)*v5 - 48 <= 9 )
      {
        v10 = v5 + 1;
        while ( 1 )
        {
          *a1 = v10;
          if ( v1 == v10 )
            break;
          v11 = *v10++;
          if ( (unsigned int)(v11 - 48) >= 0xA )
          {
            v5 = v10 - 1;
            v12 = v5;
            goto LABEL_23;
          }
        }
        v5 = v1;
        v12 = v1;
        goto LABEL_23;
      }
    }
    v12 = nullptr;
    v3 = nullptr;
LABEL_23:
    v13 = v3 == v12;
    v14 = 1;
    if ( v13 || v5 == v1 )
      return v14;
    if ( *v5 != 95 )
      return 1;
    v14 = 0;
    v15 = v5 + 1;
LABEL_27:
    *a1 = v15;
    return v14;
  }
  if ( *v2 != 118 )
    return 1;
  v7 = v2 + 1;
  *a1 = v2 + 1;
  if ( v2 + 1 == v1 )
  {
    v9 = v1;
LABEL_35:
    v18 = nullptr;
    v7 = nullptr;
    goto LABEL_36;
  }
  v8 = v2 + 1;
  v9 = v2 + 1;
  if ( *v7 == 110 )
  {
    v9 = v2 + 2;
    v8 = v2 + 2;
    *a1 = v2 + 2;
  }
  if ( v8 == v1 || (unsigned int)*v9 - 48 > 9 )
    goto LABEL_35;
  v16 = v9 + 1;
  while ( 1 )
  {
    *a1 = v16;
    if ( v1 == v16 )
      break;
    v17 = *v16++;
    if ( (unsigned int)(v17 - 48) >= 0xA )
    {
      v9 = v16 - 1;
      v18 = v9;
      goto LABEL_36;
    }
  }
  v9 = v1;
  v18 = v1;
LABEL_36:
  v13 = v7 == v18;
  v14 = 1;
  if ( v13 || v9 == v1 )
    return v14;
  if ( *v9 != 95 )
    return 1;
  v19 = v9 + 1;
  *a1 = v9 + 1;
  if ( v9 + 1 == v1 )
  {
    v21 = v1;
    v20 = v9 + 1;
  }
  else
  {
    v20 = v9 + 1;
    v21 = v9 + 1;
    if ( *v19 == 110 )
    {
      v21 = v9 + 2;
      *a1 = v9 + 2;
      if ( v9 + 2 == v1 )
        goto LABEL_53;
      goto LABEL_48;
    }
  }
  if ( v20 == v1 )
  {
LABEL_53:
    v24 = nullptr;
    v19 = nullptr;
    goto LABEL_54;
  }
LABEL_48:
  if ( (unsigned int)*v21 - 48 > 9 )
    goto LABEL_53;
  v22 = v21 + 1;
  while ( 1 )
  {
    *a1 = v22;
    if ( v1 == v22 )
      break;
    v23 = *v22++;
    if ( (unsigned int)(v23 - 48) >= 0xA )
    {
      v21 = v22 - 1;
      v24 = v22 - 1;
      goto LABEL_54;
    }
  }
  v21 = v1;
  v24 = v1;
LABEL_54:
  v13 = v19 == v24;
  v14 = 1;
  if ( v13 || v21 == v1 )
    return v14;
  if ( *v21 == 95 )
  {
    v14 = 0;
    v15 = v21 + 1;
    goto LABEL_27;
  }
  return 1;
}
