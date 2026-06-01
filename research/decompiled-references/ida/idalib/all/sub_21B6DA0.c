__int64 __fastcall sub_21B6DA0(__int64 a1, int *a2, __int64 a3)
{
  int *v4; // rbx
  __int64 v5; // r12
  __int64 v6; // r14
  unsigned int v7; // ebp
  unsigned int v8; // ecx
  int *v9; // rsi
  int v10; // r8d
  unsigned __int64 v11; // r13
  unsigned int v12; // eax
  __int64 v13; // rax
  int v14; // edx
  __int64 v15; // rdi
  int v17; // esi
  int v18; // r8d
  int *v19; // [rsp+8h] [rbp-50h]
  __m128 v20[4]; // [rsp+10h] [rbp-48h] BYREF

  v19 = &a2[a3];
  if ( a2 == v19 )
  {
    v5 = 0;
    goto LABEL_20;
  }
  v4 = a2;
  v5 = 0;
  v6 = a1 + 152;
  v7 = -1;
  do
  {
    v13 = *(unsigned int *)(a1 + 168);
    v14 = *v4;
    v15 = *(_QWORD *)(a1 + 152);
    if ( (_DWORD)v13 )
    {
      v8 = (v13 - 1) & (37 * v14);
      v9 = (int *)(v15 + 12LL * v8);
      v10 = *v9;
      if ( v14 == *v9 )
        goto LABEL_4;
      v17 = 1;
      if ( v10 != -1 )
      {
        while ( 1 )
        {
          v18 = v17 + 1;
          v8 = (v13 - 1) & (v17 + v8);
          v9 = (int *)(v15 + 12LL * v8);
          if ( v14 == *v9 )
            break;
          if ( *v9 == -1 )
            goto LABEL_12;
          v17 = v18;
        }
LABEL_4:
        sub_21B6D40(v20, v9, (int *)(v15 + 12 * v13), v6, 1);
        v11 = v20[0].m128_u64[0];
        goto LABEL_5;
      }
    }
LABEL_12:
    sub_21B6D40(v20, (int *)(v15 + 12 * v13), (int *)(v15 + 12 * v13), v6, 1);
    v11 = v20[0].m128_u64[0];
LABEL_5:
    sub_21B6D40(
      v20,
      (int *)(*(_QWORD *)(a1 + 152) + 12LL * *(unsigned int *)(a1 + 168)),
      (int *)(*(_QWORD *)(a1 + 152) + 12LL * *(unsigned int *)(a1 + 168)),
      v6,
      1);
    if ( v11 != v20[0].m128_u64[0] )
    {
      v12 = *(_DWORD *)(v11 + 8);
      if ( v7 > *(_DWORD *)(v11 + 4) )
        v7 = *(_DWORD *)(v11 + 4);
      if ( (unsigned int)v5 < v12 )
        v5 = v12;
    }
    ++v4;
  }
  while ( v19 != v4 );
  if ( v7 == -1 )
LABEL_20:
    v7 = 0;
  return (v5 << 32) | v7;
}
