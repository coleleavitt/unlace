_QWORD *__fastcall sub_11196B0(_QWORD *a1, __int64 a2, __int64 a3, const char *a4)
{
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v9; // rbx
  __int64 v10; // r15
  size_t v11; // rbp
  __int64 v12; // r15
  size_t v14; // rbp
  size_t v15; // rax

  v5 = a2 - a3;
  v6 = v5 >> 6;
  v7 = v5 >> 4;
  v9 = a2;
  if ( v6 > 0 )
  {
    v10 = v6;
    v11 = strlen(a4);
    v12 = a2 - (v10 << 6);
    while ( 1 )
    {
      if ( *(_QWORD *)(v9 - 8) == v11 )
      {
        if ( !v11 || !memcmp(*(const void **)(v9 - 16), a4, v11) )
          goto LABEL_31;
        if ( *(_QWORD *)(v9 - 24) == v11 )
          goto LABEL_6;
      }
      else if ( *(_QWORD *)(v9 - 24) == v11 )
      {
        if ( !v11 )
        {
LABEL_15:
          *a1 = v9 - 16;
          return a1;
        }
LABEL_6:
        if ( !memcmp(*(const void **)(v9 - 32), a4, v11) )
          goto LABEL_15;
        if ( *(_QWORD *)(v9 - 40) == v11 )
          goto LABEL_8;
        goto LABEL_20;
      }
      if ( *(_QWORD *)(v9 - 40) == v11 )
      {
        if ( !v11 )
        {
LABEL_19:
          *a1 = v9 - 32;
          return a1;
        }
LABEL_8:
        if ( !memcmp(*(const void **)(v9 - 48), a4, v11) )
          goto LABEL_19;
        if ( v11 == *(_QWORD *)(v9 - 56) )
          goto LABEL_10;
        goto LABEL_11;
      }
LABEL_20:
      if ( *(_QWORD *)(v9 - 56) == v11 )
      {
        if ( !v11 )
        {
LABEL_22:
          *a1 = v9 - 48;
          return a1;
        }
LABEL_10:
        if ( !memcmp(*(const void **)(v9 - 64), a4, v11) )
          goto LABEL_22;
      }
LABEL_11:
      v9 -= 64;
      if ( v12 == v9 )
      {
        v7 = (v9 - a3) >> 4;
        break;
      }
    }
  }
  if ( v7 == 2 )
  {
    v14 = strlen(a4);
LABEL_38:
    if ( *(_QWORD *)(v9 - 8) == v14 && (!v14 || !memcmp(*(const void **)(v9 - 16), a4, v14)) )
      goto LABEL_31;
    v9 -= 16;
    goto LABEL_28;
  }
  if ( v7 == 3 )
  {
    v15 = strlen(a4);
    v14 = v15;
    if ( *(_QWORD *)(v9 - 8) == v15 && (!v15 || !memcmp(*(const void **)(v9 - 16), a4, v15)) )
      goto LABEL_31;
    v9 -= 16;
    goto LABEL_38;
  }
  if ( v7 != 1 )
  {
LABEL_32:
    *a1 = a3;
    return a1;
  }
  v14 = strlen(a4);
LABEL_28:
  if ( v14 != *(_QWORD *)(v9 - 8) || v14 && memcmp(*(const void **)(v9 - 16), a4, v14) )
    goto LABEL_32;
LABEL_31:
  *a1 = v9;
  return a1;
}

