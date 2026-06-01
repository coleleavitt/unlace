void __fastcall sub_1EC5920(__int64 a1, __int64 a2)
{
  __int64 v3; // r12
  __int64 v4; // rbx
  __int64 v5; // r14
  __int64 v6; // rcx
  __int64 v7; // r15
  int v8; // eax
  int v9; // r8d
  unsigned int v10; // eax
  _QWORD *v11; // rsi
  unsigned __int64 v12; // rbx
  __int64 v13; // rcx
  unsigned __int64 *i; // rax
  unsigned __int64 v15; // rdx
  __int64 v16; // rsi
  unsigned __int64 *v17; // rcx
  int v18; // edx
  __int64 v19; // [rsp+8h] [rbp-50h]
  __m128 v20[4]; // [rsp+10h] [rbp-48h] BYREF

  v3 = *(_QWORD *)(a1 + 736);
  v4 = *(unsigned int *)(v3 + 80);
  v5 = v3 + 64;
  v6 = *(_QWORD *)(v3 + 64);
  if ( !(_DWORD)v4 )
    goto LABEL_18;
  v7 = *(_QWORD *)(a2 + 40);
  v19 = *(_QWORD *)(v3 + 64);
  v8 = sub_FDE780(v7);
  v9 = v4 - 1;
  v10 = (v4 - 1) & v8;
  v4 = *(unsigned int *)(v3 + 80);
  v11 = (_QWORD *)(v19 + 40LL * v10);
  if ( v7 != *v11 )
  {
    if ( *v11 != -1 )
    {
      v18 = 1;
      do
      {
        v10 = v9 & (v18 + v10);
        v11 = (_QWORD *)(v19 + 40LL * v10);
        if ( v7 == *v11 )
          goto LABEL_3;
        ++v18;
      }
      while ( *v11 != -1 );
    }
    v6 = *(_QWORD *)(v3 + 64);
LABEL_18:
    sub_171EC50(v20, (_QWORD *)(v6 + 40 * v4), (_QWORD *)(v6 + 40 * v4), v5, 1);
    v12 = v20[0].m128_u64[0];
    goto LABEL_4;
  }
LABEL_3:
  sub_171EC50(v20, v11, (_QWORD *)(*(_QWORD *)(v3 + 64) + 40 * v4), v5, 1);
  v12 = v20[0].m128_u64[0];
LABEL_4:
  v13 = *(_QWORD *)(a1 + 736);
  sub_171EC50(
    v20,
    (_QWORD *)(*(_QWORD *)(v13 + 64) + 40LL * *(unsigned int *)(v13 + 80)),
    (_QWORD *)(*(_QWORD *)(v13 + 64) + 40LL * *(unsigned int *)(v13 + 80)),
    v13 + 64,
    1);
  if ( v12 != v20[0].m128_u64[0] )
  {
    i = (unsigned __int64 *)(v12 + 24);
    if ( (*(_BYTE *)(a2 + 58) & 2) != 0 )
      i = (unsigned __int64 *)(v12 + 8);
    if ( i )
    {
      while ( 1 )
      {
        v15 = i[1] & 0xFFFFFFFFFFFFFFF8LL;
        if ( a2 == (*i & 0xFFFFFFFFFFFFFFF8LL) )
          break;
        i = (unsigned __int64 *)(i[1] & 0xFFFFFFFFFFFFFFF8LL);
        if ( !v15 )
          return;
      }
      v16 = *i & 7;
      if ( v15 )
      {
        v17 = i;
        for ( i = (unsigned __int64 *)(i[1] & 0xFFFFFFFFFFFFFFF8LL); ; i = (unsigned __int64 *)(i[1]
                                                                                              & 0xFFFFFFFFFFFFFFF8LL) )
        {
          *v17 = *i & 0xFFFFFFFFFFFFFFF8LL | v16;
          v17 = i;
          v16 = *i & 7;
          if ( (i[1] & 0xFFFFFFFFFFFFFFF8LL) == 0 )
            break;
        }
      }
      *i = a2 | v16;
    }
  }
}
