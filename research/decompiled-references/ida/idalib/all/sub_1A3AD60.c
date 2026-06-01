void __fastcall sub_1A3AD60(__int64 a1, char *a2, _QWORD *a3)
{
  char *v5; // rsi
  char *v6; // rbp
  char *v7; // r8
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // r15
  __int64 v11; // rax
  __int64 v12; // rbx
  __int64 v13; // r15
  __int64 v14; // r13
  __int64 i; // rdx
  __int64 j; // rdx
  __int64 v17; // [rsp+8h] [rbp-50h] BYREF
  char *v18; // [rsp+10h] [rbp-48h]
  _QWORD *v19; // [rsp+18h] [rbp-40h]

  v5 = *(char **)(a1 + 8);
  v6 = *(char **)a1;
  v7 = &a2[-*(_QWORD *)a1];
  v8 = (__int64)&v5[-*(_QWORD *)a1] >> 3;
  if ( !v8 )
  {
    v9 = 1;
    goto LABEL_20;
  }
  v9 = 2 * v8;
  v10 = -8;
  if ( v8 > 2 * v8 || v9 > 0x1FFFFFFFFFFFFFFFLL )
    goto LABEL_3;
  if ( v9 )
  {
LABEL_20:
    v10 = 8 * v9;
LABEL_3:
    v19 = a3;
    v18 = v7;
    v17 = (__int64)v5;
    v11 = operator new(v10);
    v7 = v18;
    a3 = v19;
    v12 = v11;
    v13 = v11 + v10;
    v14 = v11 + 8;
    goto LABEL_4;
  }
  v14 = 8;
  v13 = 0;
  v12 = 0;
LABEL_4:
  *(_QWORD *)&v7[v12] = *a3;
  if ( a2 == v6 )
  {
    if ( a2 == v5 )
      goto LABEL_13;
  }
  else
  {
    for ( i = 0; ; ++i )
    {
      *(_QWORD *)(v12 + 8 * i) = *(_QWORD *)&v6[8 * i];
      if ( i == (unsigned __int64)(a2 - 8 - v6) >> 3 )
        break;
    }
    v14 = v12 + 8 * i + 16;
    if ( a2 == v5 )
      goto LABEL_15;
  }
  for ( j = 0; ; ++j )
  {
    *(_QWORD *)(v14 + 8 * j) = *(_QWORD *)&a2[8 * j];
    if ( j == (unsigned __int64)(v5 - a2 - 8) >> 3 )
      break;
  }
  v14 += 8 * (j + 1);
LABEL_13:
  if ( v6 )
LABEL_15:
    operator delete(v6);
  v17 = v14;
  *(_QWORD *)(a1 + 16) = v13;
  *(__m128 *)a1 = _mm_loadh_ps((const double *)&v17);
}
