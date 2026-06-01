__int64 __fastcall sub_540330(_QWORD *a1, int *a2, unsigned __int64 a3, unsigned __int64 **a4)
{
  unsigned __int64 *v7; // r11
  __int64 v9; // rax
  unsigned __int64 *v10; // r10
  unsigned __int64 *v11; // rbx
  __int64 i; // rax
  unsigned __int64 *v13; // rdx
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rsi
  unsigned __int64 v16; // rsi
  __int64 *v17; // rax
  __int64 *v18; // rcx
  __int64 v19; // rdx
  int v20; // eax
  bool v21; // cl

  v7 = (unsigned __int64 *)a1[4];
  v9 = 4LL * a1[5];
  v10 = v7;
  v11 = &v7[v9];
  for ( i = (v9 * 8) >> 5; i > 0; i >>= 1 )
  {
    while ( 1 )
    {
      v13 = &v10[4 * (i >> 1)];
      if ( *v13 >= a3 )
        break;
      v10 = v13 + 4;
      i = i - 1 - (i >> 1);
      if ( i <= 0 )
        goto LABEL_5;
    }
  }
LABEL_5:
  if ( v11 != v10 )
  {
    v14 = *v10;
    if ( a3 >= *v10 )
    {
      if ( a3 < v14 + v10[1] )
        goto LABEL_10;
LABEL_21:
      v19 = -8;
      v20 = 7;
      v10 = nullptr;
      goto LABEL_22;
    }
  }
  if ( v7 == v10 )
    goto LABEL_21;
  v14 = *(v10 - 4);
  if ( a3 >= v14 + *(v10 - 3) )
    goto LABEL_21;
  v10 -= 4;
  if ( v11 == v10 )
    goto LABEL_21;
LABEL_10:
  v15 = a3 - v14;
  if ( !*((_BYTE *)v10 + 28) )
    v15 *= 8LL;
  v16 = v10[2] + v15;
  if ( v10 )
  {
    v17 = (__int64 *)a1[7];
    v18 = &v17[2 * a1[8]];
    if ( v18 == v17 )
    {
LABEL_29:
      v19 = v16;
      v21 = 1;
      v20 = -1;
    }
    else
    {
      while ( 1 )
      {
        v19 = *v17;
        if ( v16 >= *v17 && v16 < v17[1] )
          break;
        v17 += 2;
        if ( v18 == v17 )
          goto LABEL_29;
      }
      v20 = v16 - v19;
      v21 = (_DWORD)v16 - (_DWORD)v19 == -1;
    }
    if ( (v19 & 7) != 0 && v21 )
    {
      v20 = v19 & 7;
      v19 -= v19 & 7;
    }
  }
  else if ( (v16 & 7) != 0 )
  {
    v20 = v16 & 7;
    v19 = v16 - (v16 & 7);
  }
  else
  {
    v19 = v16;
    v20 = -1;
  }
LABEL_22:
  if ( a2 )
    *a2 = v20;
  if ( a4 )
    *a4 = v10;
  return v19;
}

