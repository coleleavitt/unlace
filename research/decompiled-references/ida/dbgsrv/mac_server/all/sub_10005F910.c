/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10005F910
// Address: 0x000000010005F910

//----- (000000010005F910) ----------------------------------------------------
__int64 __fastcall sub_10005F910(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v4; // r12
  __int64 v5; // r15
  char *v6; // r13
  void *v7; // rdi
  unsigned __int64 v9; // r12
  __int64 v10; // r13
  __int64 v11; // r12
  __int64 v12; // rdi
  unsigned __int64 v13; // r13
  __int64 v14; // r12
  __int64 v15; // rdi
  int v17; // [rsp+0h] [rbp-50h] BYREF
  __int128 v18; // [rsp+8h] [rbp-48h]
  __int64 v19; // [rsp+18h] [rbp-38h]

  v4 = *(_QWORD *)(a1 + 8);
  if ( v4 > a2 )
  {
    v5 = 32 * a2;
    do
    {
      v6 = *(char **)a1;
      if ( *(int *)(*(_QWORD *)a1 + v5) >= -1 )
      {
        v7 = *(void **)&v6[v5 + 8];
        if ( v7 )
        {
          *(_QWORD *)&v6[v5 + 16] = 0;
          qfree(v7);
          *(_QWORD *)&v6[v5 + 8] = 0;
          *(_QWORD *)&v6[v5 + 24] = 0;
        }
        *(_DWORD *)&v6[v5] = -2;
      }
      --v4;
      v5 += 32;
    }
    while ( a2 != v4 );
LABEL_23:
    *(_QWORD *)(a1 + 8) = a2;
    return __stack_chk_guard;
  }
  if ( v4 < a2 )
  {
    if ( *(_QWORD *)a1 > a3 || *(_QWORD *)a1 + 32LL * *(_QWORD *)(a1 + 16) <= a3 )
    {
      if ( *(_QWORD *)(a1 + 16) < a2 )
      {
        *(_QWORD *)a1 = qvector_reserve(a1, *(void **)a1, a2, 0x20u);
        v4 = *(_QWORD *)(a1 + 8);
      }
      v13 = a2 - v4;
      if ( a2 > v4 )
      {
        v14 = 32 * v4;
        do
        {
          v15 = *(_QWORD *)a1 + v14;
          *(_DWORD *)v15 = -2;
          *(_OWORD *)(v15 + 8) = 0;
          *(_QWORD *)(v15 + 24) = 0;
          sub_10005FB50(v15, a3);
          v14 += 32;
          --v13;
        }
        while ( v13 );
      }
      goto LABEL_23;
    }
    v17 = -2;
    v18 = 0;
    v19 = 0;
    sub_10005FB50((__int64)&v17, a3);
    if ( *(_QWORD *)(a1 + 16) < a2 )
      *(_QWORD *)a1 = qvector_reserve(a1, *(void **)a1, a2, 0x20u);
    v9 = *(_QWORD *)(a1 + 8);
    v10 = a2 - v9;
    if ( a2 > v9 )
    {
      v11 = 32 * v9;
      do
      {
        v12 = *(_QWORD *)a1 + v11;
        *(_DWORD *)v12 = -2;
        *(_OWORD *)(v12 + 8) = 0;
        *(_QWORD *)(v12 + 24) = 0;
        sub_10005FB50(v12, (__int64)&v17);
        v11 += 32;
        --v10;
      }
      while ( v10 );
    }
    *(_QWORD *)(a1 + 8) = a2;
    if ( v17 >= -1 && (_QWORD)v18 )
    {
      *((_QWORD *)&v18 + 1) = 0;
      qfree((void *)v18);
    }
  }
  return __stack_chk_guard;
}
