void __fastcall sub_20CBC00(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rdx
  unsigned int v6; // edi
  __int64 *v7; // rsi
  __int64 v8; // r8
  unsigned __int64 v9; // rax
  _QWORD *v10; // rdi
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rdi
  int v14; // esi
  unsigned int v15; // edx
  __int64 *v16; // rax
  __int64 v17; // r8
  int v18; // esi
  int v19; // r10d
  __int64 v20; // r8
  int v21; // eax
  int v22; // r9d
  __int64 v23; // r8
  __m128 v24; // [rsp+0h] [rbp-18h] BYREF

  if ( (*(_BYTE *)(a1 + 7) & 0x10) == 0 )
    goto LABEL_8;
  v2 = ***(_QWORD ***)(a1 + 8);
  v3 = *(unsigned int *)(v2 + 176);
  v4 = v2 + 160;
  v5 = *(_QWORD *)(v2 + 160);
  if ( (_DWORD)v3 )
  {
    v6 = (v3 - 1) & (((unsigned int)a1 >> 9) ^ ((unsigned int)a1 >> 4));
    v7 = (__int64 *)(v5 + 16LL * v6);
    v8 = *v7;
    if ( a1 == *v7 )
    {
LABEL_4:
      sub_20CBAA0(&v24, v7, (_QWORD *)(16 * v3 + v5), v4, 1);
      v9 = v24.m128_u64[0];
      goto LABEL_5;
    }
    v18 = 1;
    if ( v8 != -4096 )
    {
      do
      {
        v19 = v18 + 1;
        v6 = (v3 - 1) & (v18 + v6);
        v7 = (__int64 *)(v5 + 16LL * v6);
        v20 = *v7;
        if ( a1 == *v7 )
          goto LABEL_4;
        v18 = v19;
      }
      while ( v20 != -4096 );
    }
  }
  sub_20CBAA0(&v24, (_QWORD *)(v5 + 16LL * (unsigned int)v3), (_QWORD *)(v5 + 16LL * (unsigned int)v3), v4, 1);
  v9 = v24.m128_u64[0];
LABEL_5:
  v10 = *(_QWORD **)(v9 + 8);
  if ( v10 )
    operator delete(v10, *v10 + 17LL, 8);
  if ( (*(_BYTE *)(a1 + 7) & 0x10) == 0 )
    goto LABEL_8;
  v11 = ***(_QWORD ***)(a1 + 8);
  v12 = *(_DWORD *)(v11 + 176);
  v13 = *(_QWORD *)(v11 + 160);
  if ( !v12 )
    goto LABEL_8;
  v14 = v12 - 1;
  v15 = (v12 - 1) & (((unsigned int)a1 >> 9) ^ ((unsigned int)a1 >> 4));
  v16 = (__int64 *)(v13 + 16LL * v15);
  v17 = *v16;
  if ( a1 != *v16 )
  {
    v21 = 1;
    if ( v17 != -4096 )
    {
      do
      {
        v22 = v21 + 1;
        v15 = v14 & (v21 + v15);
        v16 = (__int64 *)(v13 + 16LL * v15);
        v23 = *v16;
        if ( a1 == *v16 )
          goto LABEL_11;
        v21 = v22;
      }
      while ( v23 != -4096 );
    }
LABEL_8:
    *(_BYTE *)(a1 + 7) &= ~0x10u;
    return;
  }
LABEL_11:
  *v16 = -8192;
  --*(_DWORD *)(v11 + 168);
  ++*(_DWORD *)(v11 + 172);
  *(_BYTE *)(a1 + 7) &= ~0x10u;
}
