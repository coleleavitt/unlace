char *__fastcall sub_18050A0(__int64 a1)
{
  char *result; // rax
  __int64 v3; // rdx
  char *v4; // rsi
  __int64 v5; // r8
  char *v6; // r8
  char *v7; // rbx
  char *v8; // rdi
  char *v9; // rcx
  char *v10; // rcx

  result = *(char **)a1;
  v3 = 8LL * *(unsigned int *)(a1 + 8);
  v4 = (char *)(*(_QWORD *)a1 + v3);
  v5 = v3 >> 3;
  if ( v3 >> 5 )
  {
    if ( *(_WORD *)(*(_QWORD *)result + 36LL) == 207 )
    {
      v8 = *(char **)a1;
    }
    else if ( *(_WORD *)(*((_QWORD *)result + 1) + 36LL) == 207 )
    {
      v8 = result + 8;
    }
    else if ( *(_WORD *)(*((_QWORD *)result + 2) + 36LL) == 207 )
    {
      v8 = result + 16;
    }
    else
    {
      v6 = *(char **)a1;
      if ( *(_WORD *)(*((_QWORD *)result + 3) + 36LL) == 207 )
      {
        v8 = result + 24;
      }
      else
      {
        while ( 1 )
        {
          v8 = v6 + 32;
          if ( &result[32 * (v3 >> 5)] == v6 + 32 )
          {
            v5 = (v4 - v8) >> 3;
            goto LABEL_14;
          }
          if ( *(_WORD *)(*((_QWORD *)v6 + 4) + 36LL) == 207 )
            goto LABEL_18;
          if ( *(_WORD *)(*((_QWORD *)v6 + 5) + 36LL) == 207 )
          {
            v8 = v6 + 40;
            goto LABEL_18;
          }
          if ( *(_WORD *)(*((_QWORD *)v6 + 6) + 36LL) == 207 )
          {
            v8 = v6 + 48;
            goto LABEL_18;
          }
          if ( *(_WORD *)(*((_QWORD *)v6 + 7) + 36LL) == 207 )
            break;
          v6 += 32;
        }
        v8 = v6 + 56;
      }
    }
    goto LABEL_18;
  }
  v8 = *(char **)a1;
LABEL_14:
  if ( v5 == 2 )
    goto LABEL_31;
  if ( v5 == 3 )
  {
    if ( *(_WORD *)(*(_QWORD *)v8 + 36LL) == 207 )
      goto LABEL_18;
    v8 += 8;
LABEL_31:
    if ( *(_WORD *)(*(_QWORD *)v8 + 36LL) == 207 )
      goto LABEL_18;
    v8 += 8;
    goto LABEL_33;
  }
  if ( v5 != 1 )
  {
LABEL_17:
    v7 = v4;
    goto LABEL_25;
  }
LABEL_33:
  v7 = v4;
  if ( *(_WORD *)(*(_QWORD *)v8 + 36LL) != 207 )
    goto LABEL_25;
LABEL_18:
  if ( v4 == v8 )
    goto LABEL_17;
  v9 = v8 + 8;
  if ( v4 == v8 + 8 )
  {
    v7 = v8;
  }
  else
  {
    do
    {
      if ( *(_WORD *)(*(_QWORD *)v9 + 36LL) != 207 )
      {
        *(_QWORD *)v8 = *(_QWORD *)v9;
        v8 += 8;
      }
      v9 += 8;
    }
    while ( v4 != v9 );
    result = *(char **)a1;
    v10 = (char *)(*(_QWORD *)a1 + v3);
    v7 = &v8[v10 - v4];
    if ( v4 != v10 )
    {
      memmove(v8, v4, v10 - v4);
      result = *(char **)a1;
    }
  }
LABEL_25:
  *(_DWORD *)(a1 + 8) = (v7 - result) >> 3;
  return result;
}
