unsigned __int64 __fastcall sub_71B770(__int64 a1, unsigned int a2, __int64 (*a3)(void))
{
  _QWORD *v4; // rbp
  __int64 v5; // rbx
  char v6; // r14
  char v7; // dl
  __int64 v8; // rsi
  int v9; // r8d
  unsigned __int64 result; // rax
  int v11; // edx
  unsigned __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rdx
  unsigned __int64 v15; // rsi
  __int64 v16; // rax
  unsigned int **v17; // rdx
  int v18; // eax
  unsigned int *v19; // rdx
  __int64 v20; // rdi
  unsigned __int64 v21; // rax
  __int64 v22; // rsi
  unsigned int *v23; // r12
  int v24; // r13d
  __int64 v25; // rdx
  unsigned int *v26; // rsi
  unsigned int *v27; // r14
  int v28; // r13d
  __int64 v29; // rdx
  unsigned int *v30; // rbx
  __int64 v31; // rdx
  unsigned int *v32; // rsi

  v4 = *(_QWORD **)(*(_QWORD *)(a1 + 2664) + 8LL);
  if ( !v4 && *(__int16 *)(a1 + 1634) > 0 )
  {
    v30 = (unsigned int *)(a1 + 1640);
    do
    {
      v31 = *v30;
      v32 = v30;
      LODWORD(v4) = (_DWORD)v4 + 1;
      v30 += 8;
      sub_724B00(a1, v32, v31);
    }
    while ( (int)v4 < *(__int16 *)(a1 + 1634) );
    v4 = *(_QWORD **)(*(_QWORD *)(a1 + 2664) + 8LL);
  }
  v5 = *v4;
  if ( *(_DWORD *)*v4 )
  {
    v7 = sub_721320(*v4, a2);
  }
  else
  {
    v6 = sub_722620(*v4, a2);
    v7 = sub_721320(v5, a2) | v6;
  }
  v8 = *v4;
  v9 = 6 * (*(__int16 *)(*v4 + 4LL) + 4) + 6;
  result = (unsigned int)*(unsigned __int16 *)(*v4 + 6LL * *(__int16 *)(*v4 + 4LL) + 10) - v9;
  *((_WORD *)v4 + 4) = *(_WORD *)(*v4 + 6LL * *(__int16 *)(*v4 + 4LL) + 10) - v9;
  if ( v7 )
  {
    *((_DWORD *)v4 + 8) = -1;
    result = sub_71A620(a1, (__int64)v4);
    v8 = *v4;
    if ( a3 )
    {
      v11 = *(__int16 *)(v8 + 4);
      dword_2CA26D8 += v11;
      result = (unsigned int)(10000 * (dword_2CA26D8 / 10000));
      if ( v11 > dword_2CA26D8 % 10000 )
      {
        result = a3();
        v8 = *v4;
      }
    }
  }
  if ( *(_DWORD *)v8 )
  {
    v12 = 0;
    do
    {
      v13 = *(_QWORD *)(a1 + 2664);
      v14 = *(_QWORD *)(v13 + 8);
      if ( !v14 && *(__int16 *)(a1 + 1634) > 0 )
      {
        v23 = (unsigned int *)(a1 + 1640);
        v24 = 0;
        do
        {
          v25 = *v23;
          v26 = v23;
          ++v24;
          v23 += 8;
          sub_724B00(a1, v26, v25);
        }
        while ( v24 < *(__int16 *)(a1 + 1634) );
        v13 = *(_QWORD *)(a1 + 2664);
        v14 = *(_QWORD *)(v13 + 8);
      }
      v15 = *(__int16 *)(*(_QWORD *)v14 + 4LL);
      if ( v12 == 0x80000000 || v12 >= v15 && (_DWORD)v15 != (_DWORD)v12 )
      {
        if ( !under_debugger )
          interr(835);
        BUG();
      }
      *(_DWORD *)(v13 + 24) = v12;
      *(_WORD *)(v13 + 30) = 0;
      *(_BYTE *)(v13 + 28) = 0;
      v16 = *(_QWORD *)(a1 + 2664);
      v17 = *(unsigned int ***)(v16 + 8);
      if ( !v17 && *(__int16 *)(a1 + 1634) > 0 )
      {
        v27 = (unsigned int *)(a1 + 1640);
        v28 = 0;
        do
        {
          v29 = *v27;
          v15 = (unsigned __int64)v27;
          ++v28;
          v27 += 8;
          sub_724B00(a1, v15, v29);
        }
        while ( v28 < *(__int16 *)(a1 + 1634) );
        v16 = *(_QWORD *)(a1 + 2664);
        v17 = *(unsigned int ***)(v16 + 8);
      }
      v18 = *(_DWORD *)(v16 + 24);
      v19 = *v17;
      if ( v18 )
        v20 = *(unsigned int *)((char *)v19 + 6 * v18);
      else
        v20 = *v19;
      if ( !(_DWORD)v20 )
        sub_722BF0(v20, v15, v19);
      v21 = *(__int16 *)(a1 + 1634);
      if ( v21 > 0x1E )
        sub_722BC0(24, 0, v21);
      ++v12;
      v22 = a1 + 32 * v21 + 1640;
      *(_WORD *)(a1 + 1634) = v21 + 1;
      *(_QWORD *)(a1 + 2664) = v22;
      sub_724B00(a1, v22, (unsigned int)v20);
      sub_71B770(a1, a2, a3);
      sub_724BA0(a1, (unsigned int)(__int16)(*(_WORD *)(a1 + 1634) - 1));
      result = *(__int16 *)(*v4 + 4LL);
    }
    while ( result >= v12 );
  }
  return result;
}

