__int64 __fastcall sub_179C8D0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  char **v7; // r12
  char *v8; // rax
  __int64 v9; // rdx
  char *v10; // rsi
  __int64 v11; // r8
  char *v12; // r8
  char *v13; // rbx
  char *v14; // rdi
  char *v15; // rcx
  char *v16; // rcx
  __int64 result; // rax

  v7 = (char **)sub_B8C3D0(a1, a2, a3, a4, a5, a6);
  v8 = *v7;
  v9 = 8LL * *((unsigned int *)v7 + 2);
  v10 = &(*v7)[v9];
  v11 = v9 >> 3;
  if ( v9 >> 5 )
  {
    if ( *(_WORD *)(*(_QWORD *)v8 + 36LL) == 197 )
    {
      v14 = *v7;
    }
    else if ( *(_WORD *)(*((_QWORD *)v8 + 1) + 36LL) == 197 )
    {
      v14 = v8 + 8;
    }
    else if ( *(_WORD *)(*((_QWORD *)v8 + 2) + 36LL) == 197 )
    {
      v14 = v8 + 16;
    }
    else
    {
      v12 = *v7;
      if ( *(_WORD *)(*((_QWORD *)v8 + 3) + 36LL) == 197 )
      {
        v14 = v8 + 24;
      }
      else
      {
        while ( 1 )
        {
          v14 = v12 + 32;
          if ( &v8[32 * (v9 >> 5)] == v12 + 32 )
          {
            v11 = (v10 - v14) >> 3;
            goto LABEL_14;
          }
          if ( *(_WORD *)(*((_QWORD *)v12 + 4) + 36LL) == 197 )
            goto LABEL_18;
          if ( *(_WORD *)(*((_QWORD *)v12 + 5) + 36LL) == 197 )
          {
            v14 = v12 + 40;
            goto LABEL_18;
          }
          if ( *(_WORD *)(*((_QWORD *)v12 + 6) + 36LL) == 197 )
          {
            v14 = v12 + 48;
            goto LABEL_18;
          }
          if ( *(_WORD *)(*((_QWORD *)v12 + 7) + 36LL) == 197 )
            break;
          v12 += 32;
        }
        v14 = v12 + 56;
      }
    }
    goto LABEL_18;
  }
  v14 = *v7;
LABEL_14:
  if ( v11 == 2 )
    goto LABEL_33;
  if ( v11 == 3 )
  {
    if ( *(_WORD *)(*(_QWORD *)v14 + 36LL) == 197 )
      goto LABEL_18;
    v14 += 8;
LABEL_33:
    if ( *(_WORD *)(*(_QWORD *)v14 + 36LL) == 197 )
      goto LABEL_18;
    v14 += 8;
    goto LABEL_35;
  }
  if ( v11 != 1 )
  {
LABEL_17:
    v13 = &v8[v9];
    goto LABEL_25;
  }
LABEL_35:
  v13 = &v8[v9];
  if ( *(_WORD *)(*(_QWORD *)v14 + 36LL) != 197 )
    goto LABEL_25;
LABEL_18:
  if ( v10 == v14 )
    goto LABEL_17;
  v15 = v14 + 8;
  if ( v10 == v14 + 8 )
  {
    v13 = v14;
  }
  else
  {
    do
    {
      if ( *(_WORD *)(*(_QWORD *)v15 + 36LL) != 197 )
      {
        *(_QWORD *)v14 = *(_QWORD *)v15;
        v14 += 8;
      }
      v15 += 8;
    }
    while ( v10 != v15 );
    v8 = *v7;
    v16 = &(*v7)[v9];
    v13 = &v14[v16 - v10];
    if ( v10 != v16 )
    {
      memmove(v14, v10, v16 - v10);
      v8 = *v7;
    }
  }
LABEL_25:
  result = (v13 - v8) >> 3;
  *((_DWORD *)v7 + 2) = result;
  if ( !(_DWORD)result )
    *(_BYTE *)(a1 + 29) &= ~1u;
  return result;
}
