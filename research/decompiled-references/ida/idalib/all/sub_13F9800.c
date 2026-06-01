unsigned __int64 __fastcall sub_13F9800(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // r13
  char *v7; // r15
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // r14
  __int64 v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rdx
  unsigned int v13; // ecx
  __int64 *v14; // rsi
  __int64 v15; // r9
  unsigned __int64 v16; // rax
  _QWORD *v17; // rdx
  __int64 v18; // rax
  unsigned __int64 v19; // rdx
  __int64 v20; // rax
  char v21; // dl
  int v22; // esi
  int v23; // r9d
  __int64 v24; // [rsp+0h] [rbp-60h]
  unsigned __int64 v25; // [rsp+8h] [rbp-58h]
  __m128 v26[4]; // [rsp+18h] [rbp-48h] BYREF

  if ( !*(_DWORD *)(a1 + 448) )
    return 0;
  v6 = *(_QWORD *)(a2 + 16);
  v7 = (char *)sub_FDBEF0(*(_QWORD *)(*(_QWORD *)a1 + 16LL), v6);
  v9 = v8;
  v24 = a1 + 440;
  while ( 1 )
  {
    v10 = *(unsigned int *)(a1 + 456);
    v11 = *(_QWORD *)(v6 + 8);
    v12 = *(_QWORD *)(a1 + 440);
    if ( (_DWORD)v10 )
    {
      v13 = (v10 - 1) & (((unsigned int)v11 >> 9) ^ ((unsigned int)v11 >> 4));
      v14 = (__int64 *)(v12 + 16LL * v13);
      v15 = *v14;
      if ( v11 == *v14 )
        goto LABEL_6;
      v22 = 1;
      if ( v15 != -4096 )
      {
        while ( 1 )
        {
          v23 = v22 + 1;
          v13 = (v10 - 1) & (v22 + v13);
          v14 = (__int64 *)(v12 + 16LL * v13);
          if ( v11 == *v14 )
            break;
          if ( *v14 == -4096 )
            goto LABEL_17;
          v22 = v23;
        }
LABEL_6:
        sub_13F9790(v26, v14, (_QWORD *)(16 * v10 + v12), v24, 1);
        v16 = v26[0].m128_u64[0];
        goto LABEL_7;
      }
    }
LABEL_17:
    sub_13F9790(v26, (_QWORD *)(v12 + 16LL * (unsigned int)v10), (_QWORD *)(v12 + 16LL * (unsigned int)v10), v24, 1);
    v16 = v26[0].m128_u64[0];
LABEL_7:
    v25 = v16;
    v17 = (_QWORD *)(*(_QWORD *)(a1 + 440) + 16LL * *(unsigned int *)(a1 + 456));
    sub_13F9790(v26, v17, v17, v24, 1);
    if ( v26[0].m128_u64[0] != v25 )
      return *(_QWORD *)(v25 + 8) & 0xFFFFFFFFFFFFFFF8LL;
    v18 = *(unsigned int *)(a3 + 8);
    if ( v18 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
    {
      sub_2237220(a3, a3 + 16, v18 + 1, 8);
      v18 = *(unsigned int *)(a3 + 8);
    }
    *(_QWORD *)(*(_QWORD *)a3 + 8 * v18) = v6;
    ++*(_DWORD *)(a3 + 8);
    v7 = (char *)sub_228A4B0(v7, v9, 0);
    v9 = v19;
    if ( !v19 )
      return 0;
    sub_FD9440((__int64)v26, *(_QWORD *)(*(_QWORD *)a1 + 16LL), v7, v19, 1);
    v20 = sub_A05D80(v26);
    if ( !v21 )
    {
      sub_A04D70((__int64 *)v26);
      return 0;
    }
    v6 = v20;
    sub_A04D70((__int64 *)v26);
    if ( !v6 )
      return 0;
  }
}
