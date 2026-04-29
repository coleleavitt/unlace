unsigned __int64 __fastcall sub_1DA800(__int64 a1, int *a2, __int64 a3, int a4)
{
  unsigned __int64 result; // rax
  unsigned __int64 v8; // rcx
  unsigned __int8 v9; // si
  unsigned __int64 v10; // rdx
  unsigned __int8 v11; // r8
  _QWORD *v12; // r8
  char v13; // si
  unsigned __int64 v14; // rcx
  __int64 v15; // rcx
  unsigned __int64 v16; // rcx
  int v17; // edx
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // rdi
  __int64 v21; // rdx
  unsigned __int64 v22; // rcx

  result = *(_QWORD *)(a1 + 8);
  if ( !result )
    goto LABEL_25;
  v8 = *(_QWORD *)result & 0xFFFFFFFFFFFFFFFCLL;
  if ( v8 )
  {
    if ( (*(_BYTE *)(*(_QWORD *)result & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
    {
      v10 = *(_QWORD *)(a1 + 8);
      if ( !*(_QWORD *)(a1 + 16) )
        goto LABEL_25;
      goto LABEL_13;
    }
    v9 = *(_BYTE *)(a3 + 8);
    v10 = *(_QWORD *)(a1 + 8);
    do
    {
      v11 = *(_BYTE *)(v8 + 32);
      if ( v11 < v9 || v9 >= v11 && *(_QWORD *)(v8 + 24) < *(_QWORD *)a3 )
      {
        v8 = *(_QWORD *)(v8 + 16);
      }
      else
      {
        v10 = v8;
        v8 = *(_QWORD *)(v8 + 8);
      }
    }
    while ( (*(_BYTE *)v8 & 2) == 0 );
    if ( result == v10 )
    {
      if ( !*(_QWORD *)(a1 + 16) )
        goto LABEL_25;
      goto LABEL_13;
    }
    v12 = (_QWORD *)(v10 + 24);
    if ( v9 != *(_BYTE *)(v10 + 32) )
    {
LABEL_12:
      if ( !*(_QWORD *)(a1 + 16) )
      {
LABEL_14:
        v13 = 0;
        goto LABEL_15;
      }
LABEL_13:
      if ( v10 == *(_QWORD *)(result + 8) )
      {
        result = v10;
        goto LABEL_25;
      }
      goto LABEL_14;
    }
  }
  else
  {
    v10 = 0;
    if ( *(_BYTE *)(a3 + 8) != 64 )
      goto LABEL_12;
    v10 = 0;
    v12 = &qword_18;
  }
  if ( *v12 >= *(_QWORD *)a3 + a4 )
  {
    if ( !*(_QWORD *)(a1 + 16) )
    {
      if ( v10 == result )
        goto LABEL_25;
      goto LABEL_14;
    }
    goto LABEL_13;
  }
  if ( *(_QWORD *)(a1 + 16) )
    result = *(_QWORD *)(result + 8);
  v13 = 1;
  if ( v10 == result )
    goto LABEL_45;
LABEL_15:
  if ( (*(_QWORD *)v10 & 2) != 0 )
  {
    result = *(_QWORD *)(v10 + 16);
LABEL_29:
    v18 = result + 24;
    if ( *(_BYTE *)(result + 32) != *(_BYTE *)(a3 + 8) )
      goto LABEL_31;
LABEL_30:
    if ( *(_QWORD *)v18 + *(int *)(v18 + 20) <= *(__int64 *)a3 )
    {
LABEL_31:
      if ( (*(_QWORD *)result & 2) == 0 )
      {
        v19 = *(_QWORD *)(result + 16);
        if ( (*(_BYTE *)v19 & 2) != 0 )
        {
          v20 = *(_QWORD *)result & 0xFFFFFFFFFFFFFFFCLL;
          v21 = *(_QWORD *)v20;
          if ( (*(_QWORD *)v20 & 2) == 0 )
          {
            while ( result == *(_QWORD *)(v20 + 16) )
            {
              result = v20;
              v22 = v21 & 0xFFFFFFFFFFFFFFFCLL;
              v21 = *(_QWORD *)(v21 & 0xFFFFFFFFFFFFFFFCLL);
              if ( (v21 & 2) != 0 )
              {
                result = v22;
                goto LABEL_20;
              }
              v20 = v22;
            }
          }
LABEL_57:
          result = v20;
        }
        else
        {
          while ( (**(_BYTE **)(v19 + 8) & 2) == 0 )
            v19 = *(_QWORD *)(v19 + 8);
          result = v19;
        }
      }
LABEL_20:
      v16 = result + 24;
      if ( v13 )
        goto LABEL_21;
LABEL_25:
      v17 = 0;
      goto LABEL_26;
    }
LABEL_45:
    v16 = result + 24;
    goto LABEL_21;
  }
  v14 = *(_QWORD *)(v10 + 8);
  if ( (*(_BYTE *)v14 & 2) == 0 )
  {
    do
    {
      result = v14;
      v14 = *(_QWORD *)(v14 + 16);
    }
    while ( (*(_BYTE *)v14 & 2) == 0 );
    goto LABEL_29;
  }
  result = *(_QWORD *)v10 & 0xFFFFFFFFFFFFFFFCLL;
  v15 = *(_QWORD *)result;
  if ( (*(_QWORD *)result & 2) == 0 )
  {
    while ( *(_QWORD *)(result + 8) == v10 )
    {
      v20 = v15 & 0xFFFFFFFFFFFFFFFCLL;
      v15 = *(_QWORD *)(v15 & 0xFFFFFFFFFFFFFFFCLL);
      if ( (v15 & 2) != 0 )
      {
        v18 = v20 + 24;
        if ( *(_BYTE *)(a3 + 8) != *(_BYTE *)(v20 + 32) )
          goto LABEL_57;
        result = v20;
        goto LABEL_30;
      }
      v10 = result;
      result = v20;
    }
    goto LABEL_29;
  }
  v16 = result + 24;
  if ( *(_BYTE *)(result + 32) != *(_BYTE *)(a3 + 8)
    || *(_QWORD *)a3 >= *(_QWORD *)(result + 24) + *(int *)(result + 44) )
  {
    goto LABEL_20;
  }
LABEL_21:
  v17 = 2;
  if ( *(_QWORD *)(result + 24) == *(_QWORD *)a3 )
  {
    v17 = 1;
    if ( a4 != *(_DWORD *)(v16 + 20) )
    {
      *a2 = 2;
      return result;
    }
  }
LABEL_26:
  *a2 = v17;
  return result;
}
