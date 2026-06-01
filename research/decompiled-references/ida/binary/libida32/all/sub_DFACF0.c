__int64 __fastcall sub_DFACF0(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v8; // r13
  int v9; // r8d
  int v10; // eax
  __int64 *v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rax
  unsigned int v14; // edx
  __int64 result; // rax
  size_t v16; // r13
  void *v17; // rax
  void *v18; // rax
  void *v19; // rdi
  __int64 *v20; // rsi
  __int64 *v21; // r8
  __int64 v22; // rax
  __int64 v23; // rdi
  __int64 v24; // r9
  __int64 v25; // r10
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rsi
  __int64 v30; // rax
  __int64 v31; // rdi

  v8 = a2[50];
  v9 = *(_DWORD *)(a3 + 28) + a5;
  *(_QWORD *)(a1 + 16) = a2;
  *(_QWORD *)(a1 + 8) = v8;
  *(_QWORD *)a1 = &off_2B217D8;
  v10 = 0;
  if ( v8 )
    v10 = *(_DWORD *)(v8 + 24) + 1;
  *(_DWORD *)(a1 + 24) = v10;
  *(_QWORD *)(a1 + 32) = a3;
  *(_QWORD *)(a1 + 40) = 0;
  *(_OWORD *)(a1 + 48) = 0;
  *(_DWORD *)(a1 + 64) = 1;
  *(_QWORD *)(a1 + 80) = 0;
  *(_QWORD *)(a1 + 72) = 0;
  *(_QWORD *)(a1 + 88) = 0;
  *(_OWORD *)(a1 + 96) = 0;
  *(_DWORD *)(a1 + 112) = 1;
  *(_QWORD *)(a1 + 128) = 0;
  *(_QWORD *)(a1 + 120) = 0;
  *(_QWORD *)(a1 + 136) = a4;
  *(_DWORD *)(a1 + 144) = v9;
  v11 = (__int64 *)a2[22];
  v12 = *v11;
  if ( *v11 )
    v12 = sub_DFDA20(v11, 0);
  *(_QWORD *)(a1 + 152) = v12;
  *(_QWORD *)(a1 + 160) = 0;
  v13 = *(_QWORD *)(a2[22] + 8LL);
  *(_BYTE *)(a1 + 200) = v8 == 0;
  *(_QWORD *)(a1 + 176) = 0;
  *(_QWORD *)(a1 + 168) = v13;
  *(_QWORD *)(a1 + 184) = 0;
  *(_DWORD *)(a1 + 192) = 0;
  v14 = *(_DWORD *)(a3 + 24);
  if ( !v14 )
    goto LABEL_6;
  v16 = v14;
  v17 = (void *)operator new[](v14);
  v18 = memset(v17, 0, v16);
  v19 = *(void **)(a1 + 160);
  *(_QWORD *)(a1 + 160) = v18;
  if ( v19 )
    operator delete[](v19);
  v20 = *(__int64 **)(a3 + 80);
  v21 = &v20[18 * *(unsigned int *)(a3 + 88)];
  if ( v20 == v21 )
  {
LABEL_6:
    result = *(unsigned __int8 *)(a3 + 504);
    if ( (result & 8) != 0 )
      goto LABEL_17;
  }
  else
  {
    do
    {
      v22 = *v20;
      v23 = *v20 + 16LL * *((unsigned int *)v20 + 2);
      if ( *v20 != v23 )
      {
        v24 = *(_QWORD *)(a1 + 160);
        do
        {
          v25 = *(_QWORD *)(v22 + 8);
          v22 += 16;
          v26 = *(unsigned int *)(v22 - 16);
          v27 = v24 + v26 - 40;
          v28 = v24 + v26;
          *(_DWORD *)v27 = *(_DWORD *)(a2[23] + 32LL);
          *(_QWORD *)(v27 + 8) = 0;
          *(_DWORD *)(v27 + 16) = -1;
          *(_BYTE *)(v27 + 20) = 1;
          *(_DWORD *)(v27 + 24) = 0;
          *(_WORD *)(v27 + 28) = 0;
          *(_QWORD *)(v27 + 32) = v25;
          *(_DWORD *)v28 = 16;
          *(_WORD *)(v28 + 4) &= 0xFE28u;
          *(_BYTE *)(v28 + 6) = 0;
          *(_QWORD *)(v28 + 8) = v25;
        }
        while ( v23 != v22 );
      }
      v20 += 18;
    }
    while ( v21 != v20 );
    result = *(unsigned __int8 *)(a3 + 504);
    if ( (result & 8) != 0 )
    {
LABEL_17:
      result = sub_DFF5C0(a1 + 88, *(_QWORD *)(a1 + 152) - *(unsigned int *)(a1 + 144));
      if ( (*(_BYTE *)(a3 + 504) & 4) != 0 )
      {
        v29 = *(_QWORD *)(a1 + 152);
        v30 = *(unsigned int *)(a1 + 144);
        v31 = a1 + 40;
        if ( (*(_BYTE *)(a3 + 504) & 8) != 0 )
          return sub_DFF5C0(v31, v29 - v30 + 48);
        return sub_DFF5C0(v31, v29 - v30);
      }
      return result;
    }
  }
  if ( (result & 4) != 0 )
  {
    v30 = *(unsigned int *)(a1 + 144);
    v29 = *(_QWORD *)(a1 + 152);
    v31 = a1 + 40;
    return sub_DFF5C0(v31, v29 - v30);
  }
  return result;
}

