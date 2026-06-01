__int64 __fastcall sub_FFA140(__int64 a1, unsigned int a2, unsigned int a3)
{
  unsigned int v3; // eax
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // r12
  __int64 v10; // rdx
  char *v11; // rdi
  char *v12; // rax
  int v13; // r13d
  unsigned int v14; // r12d
  unsigned __int64 v15; // rsi
  unsigned __int64 v16; // rax
  int v17; // ecx
  unsigned __int64 v18; // r14
  int v19; // r13d
  __int64 v20; // rax
  unsigned __int64 v21; // rdi
  int v22; // r13d
  unsigned int v23; // esi
  int v24; // ecx
  unsigned int v25; // r12d
  unsigned __int64 v26; // r14
  void *v27; // rdi
  int v28; // r13d
  __int64 v29; // rax
  unsigned int v30; // ebp
  __int64 v31; // rax
  __int64 v32; // rdi

  v3 = *(_DWORD *)(a1 + 316);
  if ( v3 < a3 || v3 - a3 < *(_DWORD *)(a1 + 312) )
    return 0;
  v7 = *(_QWORD *)(a1 + 264) + a2;
  if ( !v7 )
  {
    *(_QWORD *)(a1 + 264) = 0;
    v32 = *(_QWORD *)(a1 + 288);
    v14 = 0;
    v13 = 0;
    if ( (v32 & 4) != 0 )
    {
      sub_A00DD0((__m128 *)(v32 & 0xFFFFFFFFFFFFFFF8LL));
      v13 = *(_QWORD *)(a1 + 264);
      v14 = (unsigned int)(v13 + 63) >> 6;
      v7 = v14;
    }
    *(_DWORD *)(a1 + 280) = 0;
    goto LABEL_12;
  }
  v8 = *(unsigned int *)(a1 + 280);
  *(_QWORD *)(a1 + 264) = v7;
  v9 = ((v7 - 1) >> 5) + 1;
  if ( v9 != v8 )
  {
    if ( v9 >= v8 )
    {
      if ( v9 > *(unsigned int *)(a1 + 284) )
      {
        sub_22134E0(a1 + 272, a1 + 288, v9, 8);
        v8 = *(unsigned int *)(a1 + 280);
      }
      v10 = *(_QWORD *)(a1 + 272);
      v11 = (char *)(v10 + 8 * v8);
      v12 = (char *)(v10 + 8 * v9);
      if ( v11 != v12 )
        memset(v11, 0, 8 * ((unsigned __int64)(v12 - 8 - v11) >> 3) + 8);
      *(_DWORD *)(a1 + 280) = v9;
      v13 = *(_QWORD *)(a1 + 264);
      v14 = (unsigned int)(v13 + 63) >> 6;
      v7 = v14;
      goto LABEL_12;
    }
    *(_DWORD *)(a1 + 280) = v9;
  }
  v13 = v7;
  v14 = (unsigned int)(v7 + 63) >> 6;
  v7 = v14;
LABEL_12:
  v15 = *(unsigned int *)(a1 + 328);
  v16 = v15;
  v17 = *(_DWORD *)(a1 + 384) & 0x3F;
  if ( v17 )
    *(_QWORD *)(*(_QWORD *)(a1 + 320) + 8 * v15 - 8) &= ~(-1LL << v17);
  *(_DWORD *)(a1 + 384) = v13;
  if ( v15 != v7 )
  {
    if ( v15 <= v7 )
    {
      v18 = v7 - v15;
      if ( *(unsigned int *)(a1 + 332) < v7 )
      {
        sub_22134E0(a1 + 320, a1 + 336, v7, 8);
        v15 = *(unsigned int *)(a1 + 328);
        v13 = *(_DWORD *)(a1 + 384);
        v14 = v18 + v15;
      }
      if ( v18 )
        memset((void *)(*(_QWORD *)(a1 + 320) + 8 * v15), 0, 8 * v18);
    }
    *(_DWORD *)(a1 + 328) = v14;
    v16 = v14;
  }
  v19 = v13 & 0x3F;
  if ( v19 )
    *(_QWORD *)(*(_QWORD *)(a1 + 320) + 8 * v16 - 8) &= ~(-1LL << v19);
  v20 = *(_QWORD *)(a1 + 264);
  v21 = *(unsigned int *)(a1 + 400);
  LOBYTE(v22) = v20;
  v23 = *(_DWORD *)(a1 + 400);
  v24 = *(_DWORD *)(a1 + 456) & 0x3F;
  if ( v24 )
    *(_QWORD *)(*(_QWORD *)(a1 + 392) + 8 * v21 - 8) &= ~(-1LL << v24);
  *(_DWORD *)(a1 + 456) = v20;
  v25 = (unsigned int)(v20 + 63) >> 6;
  if ( v25 != v21 )
  {
    if ( v25 >= v21 )
    {
      v26 = v25 - v21;
      if ( v25 > (unsigned __int64)*(unsigned int *)(a1 + 404) )
      {
        sub_22134E0(a1 + 392, a1 + 408, v25, 8);
        v21 = *(unsigned int *)(a1 + 400);
        v22 = *(_DWORD *)(a1 + 456);
        v25 = v26 + v21;
      }
      v27 = (void *)(*(_QWORD *)(a1 + 392) + 8 * v21);
      if ( v26 )
        memset(v27, 0, 8 * v26);
    }
    *(_DWORD *)(a1 + 400) = v25;
    v23 = v25;
  }
  v28 = v22 & 0x3F;
  if ( v28 )
    *(_QWORD *)(*(_QWORD *)(a1 + 392) + 8LL * v23 - 8) &= ~(-1LL << v28);
  v29 = *(unsigned int *)(a1 + 304);
  *(_DWORD *)(a1 + 316) -= a3;
  v30 = ~*(_DWORD *)(a1 + 264);
  if ( v29 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 308) )
  {
    sub_22134E0(a1 + 296, a1 + 312, v29 + 1, 4);
    v29 = *(unsigned int *)(a1 + 304);
  }
  *(_DWORD *)(*(_QWORD *)(a1 + 296) + 4 * v29) = v30;
  v31 = *(unsigned int *)(a1 + 316);
  ++*(_DWORD *)(a1 + 304);
  return (v31 << 32) | v30;
}

