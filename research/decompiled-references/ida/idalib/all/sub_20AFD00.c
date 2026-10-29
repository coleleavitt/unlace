__int64 __fastcall sub_20AFD00(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rcx
  unsigned int v5; // r10d
  __int64 *v6; // r9
  __int64 v7; // rdx
  int i; // ebp
  unsigned __int8 v9; // di
  __int64 v10; // r13
  char v11; // r14
  __int64 v12; // r13
  _QWORD *v13; // rdx
  _QWORD *v14; // rdi
  _QWORD *v15; // r13
  unsigned __int64 v16; // r12
  _QWORD *v18; // rdx
  _QWORD *v19; // rdi
  __int64 v20; // r13
  __m128 v21[3]; // [rsp+0h] [rbp-38h] BYREF

  v3 = *(unsigned int *)(a1 + 16);
  v4 = *(_QWORD *)a1;
  if ( !(_DWORD)v3 || (v5 = (v3 - 1) & *(_DWORD *)(a2 + 32), v6 = (__int64 *)(v4 + 8LL * v5), v7 = *v6, *v6 == -4096) )
  {
LABEL_17:
    sub_2093B20(v21, (_QWORD *)(v4 + 8 * v3), (_QWORD *)(v4 + 8 * v3), a1, 1);
    v16 = v21[0].m128_u64[0];
    goto LABEL_18;
  }
  for ( i = 1; ; ++i )
  {
    if ( v7 == -8192 || *(_DWORD *)(a2 + 32) != *(_DWORD *)(v7 + 4) )
      goto LABEL_6;
    v9 = *(_BYTE *)(v7 - 16);
    v10 = *(_QWORD *)(a2 + 8);
    v11 = v9 & 2;
    if ( !v10 )
    {
      v12 = *(_QWORD *)(a2 + 24);
      if ( v11 )
      {
        if ( v12 != *(_DWORD *)(v7 - 24) )
          goto LABEL_6;
        v13 = *(_QWORD **)(v7 - 32);
      }
      else
      {
        if ( v12 != ((*(_WORD *)(v7 - 16) >> 6) & 0xF) )
          goto LABEL_6;
        v13 = (_QWORD *)(-16 - 8LL * ((v9 >> 2) & 0xF) + v7);
      }
      v14 = *(_QWORD **)(a2 + 16);
      v15 = &v14[v12];
      if ( v14 == v15 )
        goto LABEL_28;
      while ( *v14 == *v13 )
      {
        ++v14;
        ++v13;
        if ( v15 == v14 )
          goto LABEL_28;
      }
      goto LABEL_6;
    }
    if ( v11 )
    {
      if ( v10 != *(_DWORD *)(v7 - 24) )
        goto LABEL_6;
      v18 = *(_QWORD **)(v7 - 32);
    }
    else
    {
      if ( v10 != ((*(_WORD *)(v7 - 16) >> 6) & 0xF) )
        goto LABEL_6;
      v18 = (_QWORD *)(-16 - 8LL * ((v9 >> 2) & 0xF) + v7);
    }
    v19 = *(_QWORD **)a2;
    v20 = *(_QWORD *)a2 + 8 * v10;
    if ( v20 == *(_QWORD *)a2 )
      goto LABEL_28;
    if ( *v18 == *v19 )
      break;
LABEL_6:
    v5 = (v3 - 1) & (i + v5);
    v6 = (__int64 *)(v4 + 8LL * v5);
    v7 = *v6;
    if ( *v6 == -4096 )
      goto LABEL_17;
  }
  while ( 1 )
  {
    ++v19;
    ++v18;
    if ( (_QWORD *)v20 == v19 )
      break;
    if ( *v19 != *v18 )
      goto LABEL_6;
  }
LABEL_28:
  sub_2093B20(v21, v6, (_QWORD *)(v4 + 8 * v3), a1, 1);
  v16 = v21[0].m128_u64[0];
LABEL_18:
  sub_2093B20(
    v21,
    (_QWORD *)(*(_QWORD *)a1 + 8LL * *(unsigned int *)(a1 + 16)),
    (_QWORD *)(*(_QWORD *)a1 + 8LL * *(unsigned int *)(a1 + 16)),
    a1,
    1);
  if ( v21[0].m128_u64[0] == v16 )
    return 0;
  else
    return *(_QWORD *)v16;
}
