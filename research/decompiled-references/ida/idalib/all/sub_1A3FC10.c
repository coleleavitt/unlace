bool __fastcall sub_1A3FC10(__int64 a1, __int64 *a2)
{
  _QWORD *v3; // rsi
  unsigned __int64 v4; // rbp
  _QWORD *v5; // rsi
  __int64 v6; // rdx
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // r8
  __int64 v9; // r9
  __int64 *v10; // rbx
  unsigned __int64 v11; // r14
  __int64 v12; // r13
  __int64 v13; // r15
  int v14; // eax
  int v15; // edx
  unsigned int v16; // eax
  __int64 v18; // rax
  __int64 *v19; // rax
  int i; // ecx
  int v21; // edi
  __m128 v22[4]; // [rsp+0h] [rbp-48h] BYREF

  v3 = (_QWORD *)(*(_QWORD *)a1 + 8LL * *(unsigned int *)(a1 + 16));
  sub_1A3FBA0(v22, v3, v3, a1, 1);
  v4 = v22[0].m128_u64[0];
  if ( *(_DWORD *)(a1 + 8) )
  {
    v5 = *(_QWORD **)a1;
    sub_1A3FBA0(v22, *(_QWORD **)a1, (_QWORD *)(*(_QWORD *)a1 + 8LL * *(unsigned int *)(a1 + 16)), a1, 0);
  }
  else
  {
    v5 = (_QWORD *)(*(_QWORD *)a1 + 8LL * *(unsigned int *)(a1 + 16));
    sub_1A3FBA0(v22, v5, v5, a1, 1);
  }
  v11 = v22[0].m128_u64[1];
  v10 = (__int64 *)v22[0].m128_u64[0];
LABEL_4:
  if ( v10 != (__int64 *)v4 )
  {
    do
    {
      v12 = *v10;
      v13 = *a2;
      if ( !*(_DWORD *)(*v10 + 400) )
        sub_FF46C0(*v10, (__int64)v5, v6, v7, v8, v9);
      v14 = *(_DWORD *)(v12 + 408);
      v5 = *(_QWORD **)(v12 + 392);
      if ( v14 )
      {
        v15 = v14 - 1;
        v16 = (v14 - 1) & (((unsigned int)v13 >> 9) ^ ((unsigned int)v13 >> 4));
        v7 = v5[v16];
        if ( v13 == v7 )
          return v4 != (_QWORD)v10;
        if ( v7 != -4096 )
        {
          for ( i = 1; ; i = v21 )
          {
            v21 = i + 1;
            v16 = v15 & (i + v16);
            v7 = v5[v16];
            if ( v13 == v7 )
              break;
            if ( v7 == -4096 )
              goto LABEL_11;
          }
          return v4 != (_QWORD)v10;
        }
      }
LABEL_11:
      v6 = (__int64)(v10 + 1);
      if ( v10 + 1 != (__int64 *)v11 )
      {
        v18 = v10[1];
        if ( v18 != -8192 && v18 != -4096 )
        {
          ++v10;
          goto LABEL_4;
        }
        v19 = v10 + 2;
        while ( 1 )
        {
          v10 = v19;
          if ( v19 == (__int64 *)v11 )
            break;
          while ( 1 )
          {
            v6 = *v19++;
            if ( v6 == -8192 )
              break;
            if ( v6 != -4096 )
              goto LABEL_4;
            v10 = v19;
            if ( v19 == (__int64 *)v11 )
              goto LABEL_19;
          }
        }
      }
LABEL_19:
      v10 = (__int64 *)v11;
    }
    while ( v11 != v4 );
  }
  return 0;
}
