void __fastcall sub_FDD4D0(__int64 a1, __int64 a2, void *a3, double a4)
{
  unsigned __int64 i; // rbx
  double *v7; // rdx
  double *v8; // rbp
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rsi
  __int64 v11; // rsi
  __int64 v12; // r12
  bool v13; // cf
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // r12
  _QWORD *v16; // rcx
  __int64 v17; // rdx
  double *v18; // rcx
  double *v19; // [rsp+0h] [rbp-58h]
  void *v20; // [rsp+0h] [rbp-58h]
  __int64 v21; // [rsp+8h] [rbp-50h]
  void *v22; // [rsp+10h] [rbp-48h]

  if ( a4 >= 9.999999717180685e-10 || *(_QWORD *)a1 != *(_QWORD *)(a1 + 8) )
  {
    for ( i = 0; i > 0x3F; ++i )
    {
      if ( _bittest64((const __int64 *)&a3, i) )
        goto LABEL_5;
LABEL_10:
      if ( (_DWORD)i == 74 )
        return;
LABEL_11:
      ;
    }
    if ( !_bittest64(&a2, i) )
      goto LABEL_11;
LABEL_5:
    v7 = *(double **)(a1 + 8);
    v8 = *(double **)a1;
    v9 = ((__int64)v7 - *(_QWORD *)a1) >> 3;
    if ( v9 > 0x4A )
    {
      if ( v9 != 75 && v8 + 75 != v7 )
        *(_QWORD *)(a1 + 8) = v8 + 75;
      goto LABEL_9;
    }
    v10 = 75 - v9;
    if ( (__int64)(*(_QWORD *)(a1 + 16) - (_QWORD)v7) >> 3 >= 75 - v9 )
    {
      v11 = 8 * v10;
      *v7 = 0.0;
      *(double *)((char *)v7 + (unsigned int)v11 - 8) = 0.0;
      memset(
        (void *)((unsigned __int64)(v7 + 1) & 0xFFFFFFFFFFFFFFF8LL),
        0,
        8LL * (((unsigned int)v11 + (_DWORD)v7 - (((_DWORD)v7 + 8) & 0xFFFFFFF8)) >> 3));
      *(_QWORD *)(a1 + 8) = &v7[(unsigned __int64)v11 / 8];
LABEL_9:
      v8[i] = a4;
      goto LABEL_10;
    }
    v12 = (__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 3;
    if ( v10 >= v9 )
      v12 = 75 - v9;
    v13 = __CFADD__(v12, v9);
    v14 = v12 + v9;
    if ( v13 )
      v15 = 0x1FFFFFFFFFFFFFFFLL;
    else
      v15 = v14;
    v22 = a3;
    v21 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
    v8 = (double *)operator new(v15 * 8);
    v16 = (_QWORD *)((char *)v8 + v21);
    *v16 = 0;
    *(_QWORD *)((char *)v16 + (unsigned int)(8 * v10) - 8) = 0;
    memset(
      (void *)(((unsigned __int64)v8 + v21 + 8) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((8 * (_DWORD)v10 + (_DWORD)v8 + (_DWORD)v21 - (((_DWORD)v8 + (_DWORD)v21 + 8) & 0xFFFFFFF8)) >> 3));
    v17 = *(_QWORD *)(a1 + 8);
    v18 = *(double **)a1;
    a3 = v22;
    if ( v17 == *(_QWORD *)a1 )
    {
      if ( !v18 )
        goto LABEL_25;
    }
    else
    {
      v19 = *(double **)a1;
      memmove(v8, *(const void **)a1, v17 - (_QWORD)v18);
      v18 = v19;
      a3 = v22;
    }
    v20 = a3;
    operator delete(v18);
    a3 = v20;
LABEL_25:
    *(_QWORD *)a1 = v8;
    *(_QWORD *)(a1 + 8) = v8 + 75;
    *(_QWORD *)(a1 + 16) = &v8[v15];
    goto LABEL_9;
  }
}

