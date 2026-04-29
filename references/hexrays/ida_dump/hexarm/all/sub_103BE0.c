_QWORD *__fastcall sub_103BE0(unsigned __int64 *a1, __int64 a2)
{
  _QWORD *result; // rax
  _QWORD *v5; // rcx
  _QWORD *v6; // r12
  __int64 v7; // r8
  _QWORD *v8; // rsi
  _QWORD *v9; // rcx
  unsigned __int64 v10; // rdi
  unsigned __int8 v11; // r10
  unsigned __int64 v12; // rsi
  unsigned __int8 v13; // r11
  unsigned __int8 v14; // si
  _QWORD *v15; // rcx
  __int64 v16; // rsi
  __int64 v17; // r8
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // r8
  unsigned __int64 v21; // rsi
  __int64 v22; // r8
  unsigned __int64 v23; // r11
  unsigned __int64 v24; // r9
  unsigned __int8 v25; // si
  unsigned __int64 v26; // r8
  unsigned __int64 v27; // r11

  result = (_QWORD *)*a1;
  if ( !*a1 )
    return result;
  v5 = (_QWORD *)(*result & 0xFFFFFFFFFFFFFFFCLL);
  v6 = v5;
  if ( !v5 )
  {
    v11 = *(_BYTE *)(a2 + 32);
    v10 = 0;
    goto LABEL_20;
  }
  v7 = *v5;
  if ( (*v5 & 2) == 0 )
  {
    v11 = *(_BYTE *)(a2 + 32);
    v10 = *a1;
    v12 = *result & 0xFFFFFFFFFFFFFFFCLL;
    do
    {
      v13 = *(_BYTE *)(v12 + 56);
      if ( v13 < v11 || v11 >= v13 && *(_QWORD *)(v12 + 48) < *(_QWORD *)(a2 + 24) )
      {
        v12 = *(_QWORD *)(v12 + 16);
      }
      else
      {
        v10 = v12;
        v12 = *(_QWORD *)(v12 + 8);
      }
    }
    while ( (*(_BYTE *)v12 & 2) == 0 );
    if ( result != (_QWORD *)v10 )
    {
LABEL_20:
      v14 = *(_BYTE *)(v10 + 56);
      v15 = (_QWORD *)(v10 + 24);
      if ( v14 < v11 || v11 >= v14 && *(_QWORD *)(v10 + 48) <= *(_QWORD *)(a2 + 24) )
        goto LABEL_23;
      if ( a1[1] )
      {
        if ( result[1] != v10 )
        {
LABEL_34:
          if ( (*(_QWORD *)v10 & 2) != 0 )
          {
            v21 = *(_QWORD *)(v10 + 16);
          }
          else
          {
            v20 = *(_QWORD *)(v10 + 8);
            if ( (*(_BYTE *)v20 & 2) != 0 )
            {
              v21 = *(_QWORD *)v10 & 0xFFFFFFFFFFFFFFFCLL;
              v22 = *(_QWORD *)v21;
              if ( (*(_QWORD *)v21 & 2) == 0 )
              {
                v23 = v10;
                do
                {
                  if ( v23 != *(_QWORD *)(v21 + 8) )
                    break;
                  v23 = v21;
                  v24 = v22 & 0xFFFFFFFFFFFFFFFCLL;
                  v22 = *(_QWORD *)(v22 & 0xFFFFFFFFFFFFFFFCLL);
                  v21 = v24;
                }
                while ( (v22 & 2) == 0 );
              }
            }
            else
            {
              do
              {
                v21 = v20;
                v20 = *(_QWORD *)(v20 + 16);
              }
              while ( (*(_BYTE *)v20 & 2) == 0 );
            }
          }
          if ( *(_BYTE *)(v21 + 56) == v11 )
          {
            if ( *(_DWORD *)(a2 + 40) )
            {
              if ( *(_DWORD *)(v21 + 64) )
              {
                v26 = *(_QWORD *)(a2 + 24);
                v27 = *(_QWORD *)(v21 + 48);
                if ( *(int *)(a2 + 40) + v26 - 1 >= v27 && *(int *)(v21 + 64) + v27 - 1 >= v26 )
                  return (_QWORD *)v21;
              }
            }
          }
          goto LABEL_23;
        }
      }
      else if ( result != (_QWORD *)v10 )
      {
        goto LABEL_34;
      }
      v25 = *(_BYTE *)(v10 + 56);
      if ( v25 >= v11 && (v11 < v25 || *(_QWORD *)(a2 + 24) + *(int *)(a2 + 40) <= *(__int64 *)(v10 + 48)) )
        return result;
      goto LABEL_23;
    }
  }
  if ( !a1[1] )
    return result;
  v8 = (_QWORD *)result[1];
  if ( v8 == result )
    return result;
  if ( (*result & 2) != 0 )
  {
    v10 = result[2];
    v15 = (_QWORD *)(v10 + 24);
  }
  else
  {
    if ( (*(_BYTE *)v8 & 2) != 0 )
    {
      if ( (*v5 & 2LL) != 0 )
      {
        v10 = *result & 0xFFFFFFFFFFFFFFFCLL;
        v15 = v5 + 3;
        goto LABEL_23;
      }
      if ( (_QWORD *)v5[1] == result )
      {
        while ( 1 )
        {
          v9 = v6;
          v10 = v7 & 0xFFFFFFFFFFFFFFFCLL;
          v7 = *(_QWORD *)(v7 & 0xFFFFFFFFFFFFFFFCLL);
          if ( (v7 & 2) != 0 )
            break;
          v6 = (_QWORD *)v10;
          if ( *(_QWORD **)(v10 + 8) != v9 )
            goto LABEL_12;
        }
      }
      else
      {
LABEL_12:
        v10 = (unsigned __int64)v6;
      }
    }
    else
    {
      do
      {
        v10 = (unsigned __int64)v8;
        v8 = (_QWORD *)v8[2];
      }
      while ( (*(_BYTE *)v8 & 2) == 0 );
    }
    v15 = (_QWORD *)(v10 + 24);
  }
LABEL_23:
  if ( *(_BYTE *)(a2 + 32) == *((_BYTE *)v15 + 32) )
  {
    v16 = *(int *)(a2 + 40);
    v17 = *((int *)v15 + 10);
    if ( *(_DWORD *)(a2 + 40) )
    {
      if ( *((_DWORD *)v15 + 10) )
      {
        v18 = *(_QWORD *)(a2 + 24);
        v19 = v15[3];
        if ( v16 + v18 - 1 >= v19 && v17 + v19 - 1 >= v18 )
          return (_QWORD *)v10;
      }
    }
  }
  return result;
}
