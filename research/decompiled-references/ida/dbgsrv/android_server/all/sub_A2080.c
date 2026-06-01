/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A2080
// Address: 0x00000000000A2080

//----- (00000000000A2080) ----------------------------------------------------
size_t __fastcall sub_A2080(void **a1, unsigned int a2, unsigned __int64 a3)
{
  size_t result; // x0
  const char *v4; // x20
  int v6; // w24
  int v7; // w22
  void *v8; // x8
  __int64 v9; // x23
  _BYTE *v10; // x0
  void *v11; // x8
  __int64 v12; // x23
  _BYTE *v13; // x0
  const char *v14; // x21
  size_t v15; // x0
  void *v16; // x8
  size_t v17; // x22
  __int64 v18; // x25
  size_t v19; // x26
  unsigned __int64 v20; // x23
  _BYTE *v21; // x0

  if ( a2 > 0xC2 )
    return -1;
  v4 = (const char *)*(&off_15E6A0 + (int)a2);
  if ( a2 - 129 <= 0x1F )
  {
    v6 = 0;
    v7 = 87;
    if ( a3 - 1 >= 2 && a3 != 4 )
    {
      if ( a3 == 8 )
      {
        v6 = 0;
        v7 = 88;
        if ( !a1 )
          goto LABEL_79;
LABEL_50:
        if ( (unsigned __int64)a1[2] <= 0xF )
          *a1 = qvector_reserve((pthread_mutex_t *)a1, *a1, 0x10u, 1u);
        if ( v6 )
        {
          v8 = a1[1];
          if ( v8 )
            v9 = (__int64)v8 - 1;
          else
            v9 = 0;
          if ( (unsigned __int64)a1[2] >= v9 + 2 )
          {
            v10 = *a1;
          }
          else
          {
            v10 = qvector_reserve((pthread_mutex_t *)a1, *a1, v9 + 2, 1u);
            *a1 = v10;
          }
          a1[1] = (void *)(v9 + 2);
          v10[v9] = v6;
          *((_BYTE *)*a1 + v9 + 1) = 0;
        }
        if ( v7 )
        {
          v11 = a1[1];
          if ( v11 )
            v12 = (__int64)v11 - 1;
          else
            v12 = 0;
          if ( (unsigned __int64)a1[2] >= v12 + 2 )
          {
            v13 = *a1;
          }
          else
          {
            v13 = qvector_reserve((pthread_mutex_t *)a1, *a1, v12 + 2, 1u);
            *a1 = v13;
          }
          a1[1] = (void *)(v12 + 2);
          v13[v12] = v7;
          *((_BYTE *)*a1 + v12 + 1) = 0;
        }
        if ( v7 )
          v14 = v4 + 1;
        else
          v14 = v4;
        if ( v14 )
        {
          v15 = strlen(v14);
          v16 = a1[1];
          v17 = v15;
          if ( v16 )
            v18 = (__int64)v16 - 1;
          else
            v18 = 0;
          v19 = v18 + v15;
          v20 = v18 + v15 + 1;
          if ( (unsigned __int64)a1[2] >= v20 )
          {
            v21 = *a1;
          }
          else
          {
            v21 = qvector_reserve((pthread_mutex_t *)a1, *a1, v20, 1u);
            *a1 = v21;
          }
          a1[1] = (void *)v20;
          v21[v19] = 0;
          memmove((char *)*a1 + v18, v14, v17);
        }
        goto LABEL_79;
      }
      return -1;
    }
LABEL_49:
    if ( !a1 )
      goto LABEL_79;
    goto LABEL_50;
  }
  if ( a2 == 162 )
  {
    if ( a3 != 8 )
    {
      if ( a3 == 64 )
      {
        v7 = 0;
        v6 = 0;
        v4 = "ZA";
        if ( a1 )
          goto LABEL_50;
      }
      else
      {
        if ( a3 != 32 )
          return -1;
        v7 = 0;
        v6 = 0;
        v4 = "ZT0";
        if ( a1 )
          goto LABEL_50;
      }
LABEL_79:
      result = strlen(v4);
      if ( v6 )
        ++result;
      return result;
    }
LABEL_23:
    v7 = 0;
    v6 = 0;
    if ( a1 )
      goto LABEL_50;
    goto LABEL_79;
  }
  if ( a2 == 161 )
  {
    if ( a3 == 4 )
    {
      v7 = 0;
      v6 = 87;
      if ( a1 )
        goto LABEL_50;
      goto LABEL_79;
    }
    if ( a3 != 8 )
      return -1;
    goto LABEL_23;
  }
  if ( a2 - 163 > 0x1F )
  {
    if ( a2 <= 0xF && a3 > 4 || a2 - 93 <= 0x1F && a3 > 4 || a2 - 61 <= 0x1F && a3 > 8 )
      return -1;
    v7 = 0;
    if ( a2 - 45 > 0xF )
    {
      v6 = 0;
    }
    else
    {
      v6 = 0;
      if ( a3 > 0x10 )
        return -1;
    }
    goto LABEL_49;
  }
  result = -1;
  v6 = 0;
  v7 = 66;
  switch ( a3 )
  {
    case 1uLL:
      goto LABEL_49;
    case 2uLL:
      v6 = 0;
      v7 = 72;
      if ( !a1 )
        goto LABEL_79;
      goto LABEL_50;
    case 4uLL:
      v6 = 0;
      v7 = 83;
      if ( !a1 )
        goto LABEL_79;
      goto LABEL_50;
    case 8uLL:
      v6 = 0;
      v7 = 68;
      if ( !a1 )
        goto LABEL_79;
      goto LABEL_50;
    case 0x10uLL:
      v6 = 0;
      v7 = 81;
      if ( !a1 )
        goto LABEL_79;
      goto LABEL_50;
    case 0x20uLL:
      v6 = 0;
      v7 = 80;
      if ( !a1 )
        goto LABEL_79;
      goto LABEL_50;
    case 0x40uLL:
      v6 = 0;
      v7 = 90;
      if ( !a1 )
        goto LABEL_79;
      goto LABEL_50;
    default:
      return result;
  }
  return result;
}
// 15E6A0: using guessed type _UNKNOWN *off_15E6A0;
