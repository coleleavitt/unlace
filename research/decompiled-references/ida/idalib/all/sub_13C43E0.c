__int64 __fastcall sub_13C43E0(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  signed __int64 v4; // rbx
  __int64 v5; // rdx
  int v6; // ecx
  __int64 v7; // r12
  unsigned __int64 i; // rbx
  unsigned __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // r8
  unsigned int v12; // edx
  int *v13; // rsi
  unsigned __int64 v14; // rax
  int *v15; // rdx
  _QWORD *v16; // rax
  __int64 v18; // r12
  char *v19; // rax
  char *v20; // rdx
  __int64 v21; // rbx
  int j; // ecx
  unsigned __int64 v23; // [rsp+8h] [rbp-50h]
  __m128 v24[4]; // [rsp+10h] [rbp-48h] BYREF

  v3 = *(_QWORD *)(*(_QWORD *)a2 + 40LL) - *(_QWORD *)(*(_QWORD *)a2 + 32LL);
  *(_QWORD *)a1 = 0;
  *(_DWORD *)(a1 + 8) = 0;
  v4 = 0xCCCCCCCCCCCCCCCDLL * (v3 >> 3);
  *(_QWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 32) = 0;
  if ( v4 )
  {
    v18 = v4 + 63;
    v19 = (char *)operator new(8 * ((unsigned __int64)(v4 + 63) >> 6));
    *(_DWORD *)(a1 + 8) = 0;
    *(_QWORD *)a1 = v19;
    if ( v4 >= 0 )
      v18 = v4;
    *(_QWORD *)(a1 + 32) = &v19[8 * ((unsigned __int64)(v4 + 63) >> 6)];
    v20 = &v19[8 * (v18 >> 6)];
    v21 = v4 % 64;
    if ( v21 >= 0 )
    {
      *(_QWORD *)(a1 + 16) = v20;
    }
    else
    {
      LODWORD(v21) = v21 + 64;
      *(_QWORD *)(a1 + 16) = v20 - 8;
    }
    *(_DWORD *)(a1 + 24) = v21;
    memset(v19, 0, *(_QWORD *)(a1 + 32) - (_QWORD)v19);
  }
  v5 = *(_QWORD *)(a2 + 72);
  v6 = *(_DWORD *)(a2 + 80);
  if ( *(_DWORD *)(a2 + 96) + 8 * (*(_DWORD *)(a2 + 88) - (_DWORD)v5) != v6 )
  {
    v7 = (unsigned int)(*(_DWORD *)(a2 + 96) + 8 * (*(_DWORD *)(a2 + 88) - v5) - v6 - 1);
    for ( i = 0; ; i = v9 )
    {
      if ( ((1LL << i) & *(_QWORD *)(v5 + 8 * (i >> 6))) == 0 )
      {
LABEL_4:
        v9 = i + 1;
        if ( v7 == i )
          return a1;
        goto LABEL_5;
      }
      v10 = *(unsigned int *)(a2 + 24);
      v11 = *(_QWORD *)(a2 + 8);
      if ( (_DWORD)v10 )
      {
        v12 = (v10 - 1) & (37 * i);
        v13 = (int *)(v11 + 8LL * v12);
        if ( *v13 == (_DWORD)i )
          goto LABEL_9;
        if ( *v13 != -1 )
          break;
      }
LABEL_14:
      sub_13C4380(v24, (int *)(v11 + 8 * v10), (int *)(v11 + 8 * v10), a2 + 8, 1);
      v14 = v24[0].m128_u64[0];
LABEL_10:
      v23 = v14;
      v15 = (int *)(*(_QWORD *)(a2 + 8) + 8LL * *(unsigned int *)(a2 + 24));
      sub_13C4380(v24, v15, v15, a2 + 8, 1);
      if ( v24[0].m128_u64[0] == v23 )
        goto LABEL_4;
      v16 = (_QWORD *)(*(_QWORD *)a1 + ((*(_DWORD *)(v23 + 4) >> 3) & 0x1FFFFFF8));
      *v16 |= 1LL << *(_DWORD *)(v23 + 4);
      v9 = i + 1;
      if ( v7 == i )
        return a1;
LABEL_5:
      v5 = *(_QWORD *)(a2 + 72);
    }
    for ( j = 1; ; ++j )
    {
      v12 = (v10 - 1) & (j + v12);
      v13 = (int *)(v11 + 8LL * v12);
      if ( *v13 == (_DWORD)i )
        break;
      if ( *v13 == -1 )
        goto LABEL_14;
    }
LABEL_9:
    sub_13C4380(v24, v13, (int *)(v11 + 8 * v10), a2 + 8, 1);
    v14 = v24[0].m128_u64[0];
    goto LABEL_10;
  }
  return a1;
}
