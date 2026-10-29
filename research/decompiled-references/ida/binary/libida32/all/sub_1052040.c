unsigned __int64 __fastcall sub_1052040(__int64 a1, char *a2, _QWORD *a3)
{
  char *v4; // rbp
  char *v5; // r14
  char *v6; // rcx
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // r15
  __int64 v10; // rax
  __int64 v11; // r13
  unsigned __int64 v12; // r15
  unsigned __int64 result; // rax
  __int64 v14; // rsi
  char *v15; // rcx
  char *v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r9
  __int64 v19; // r8
  char *v20; // rdx
  unsigned __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  unsigned __int64 v24; // [rsp+0h] [rbp-48h] BYREF
  _QWORD *v25; // [rsp+8h] [rbp-40h]

  v4 = *(char **)(a1 + 8);
  v5 = *(char **)a1;
  v6 = &a2[-*(_QWORD *)a1];
  v7 = (__int64)&v4[-*(_QWORD *)a1] >> 4;
  if ( !v7 )
  {
    v8 = 1;
    goto LABEL_19;
  }
  v8 = 2 * v7;
  v9 = -16;
  if ( v7 > 2 * v7 || v8 > 0xFFFFFFFFFFFFFFFLL )
    goto LABEL_3;
  if ( v8 )
  {
LABEL_19:
    v9 = 16 * v8;
LABEL_3:
    v25 = a3;
    v24 = (unsigned __int64)v6;
    v10 = operator new(v9);
    v6 = (char *)v24;
    a3 = v25;
    v11 = v10;
    v12 = v10 + v9;
    result = v10 + 16;
    goto LABEL_4;
  }
  result = 16;
  v12 = 0;
  v11 = 0;
LABEL_4:
  v14 = a3[1];
  v15 = &v6[v11];
  *(_QWORD *)v15 = *a3;
  *((_QWORD *)v15 + 1) = v14;
  if ( a2 != v5 )
  {
    v16 = v5;
    v17 = v11;
    do
    {
      v18 = *(_QWORD *)v16;
      v19 = *((_QWORD *)v16 + 1);
      v16 += 16;
      v17 += 16;
      *(_QWORD *)(v17 - 16) = v18;
      *(_QWORD *)(v17 - 8) = v19;
    }
    while ( a2 != v16 );
    result = v11 + ((a2 - 16 - v5) & 0xFFFFFFFFFFFFFFF0LL) + 32;
  }
  if ( a2 != v4 )
  {
    v20 = a2;
    v21 = result;
    do
    {
      v22 = *((_QWORD *)v20 + 1);
      v23 = *(_QWORD *)v20;
      v20 += 16;
      v21 += 16LL;
      *(_QWORD *)(v21 - 16) = v23;
      *(_QWORD *)(v21 - 8) = v22;
    }
    while ( v4 != v20 );
    result += ((v4 - a2 - 16) & 0xFFFFFFFFFFFFFFF0LL) + 16;
  }
  if ( v5 )
  {
    v24 = result;
    operator delete(v5);
    result = v24;
  }
  v24 = result;
  *(_QWORD *)(a1 + 16) = v12;
  *(__m128 *)a1 = _mm_loadh_ps((const double *)&v24);
  return result;
}

