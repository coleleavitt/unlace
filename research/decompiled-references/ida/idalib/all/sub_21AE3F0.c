__int64 __fastcall sub_21AE3F0(__int64 a1, char *a2, __int64 a3)
{
  char *v6; // rbx
  char *v7; // r12
  char *v8; // r13
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // rdx
  char *v12; // r13
  int v13; // r8d
  int v14; // edi
  __int64 v15; // r14
  char *v16; // r13
  int v17; // ecx
  int v18; // eax
  int v19; // esi
  char *v20; // r14
  unsigned __int64 v21; // r13
  int v22; // edx
  int v23; // eax
  int v24; // eax
  char *i; // rbp
  char *v26; // rdi
  __int64 result; // rax
  __m128 v28; // xmm0
  char **v29; // rsi
  void **v30; // rdi
  unsigned __int64 v31; // [rsp+8h] [rbp-50h] BYREF
  __int64 v32; // [rsp+10h] [rbp-48h]
  __int64 v33; // [rsp+18h] [rbp-40h]

  v6 = *(char **)(a1 + 8);
  v7 = *(char **)a1;
  v8 = &a2[-*(_QWORD *)a1];
  v9 = (__int64)&v6[-*(_QWORD *)a1] >> 6;
  if ( !v9 )
  {
    v10 = 1;
    goto LABEL_38;
  }
  v10 = 2 * v9;
  v11 = -64;
  if ( v9 > 2 * v9 || v10 > 0x3FFFFFFFFFFFFFFLL )
    goto LABEL_3;
  if ( v10 )
  {
LABEL_38:
    v11 = v10 << 6;
LABEL_3:
    v31 = v11;
    v32 = operator new(v11);
    v33 = v32 + v31;
    v31 = v32 + 64;
    goto LABEL_4;
  }
  v31 = 64;
  v33 = 0;
  v32 = 0;
LABEL_4:
  v12 = &v8[v32];
  v13 = *(_DWORD *)(a3 + 8);
  *(_QWORD *)v12 = v12 + 16;
  *((_QWORD *)v12 + 1) = 0x100000000LL;
  if ( v13 )
    sub_2124940((char ***)v12, (char ***)a3);
  v14 = *(_DWORD *)(a3 + 32);
  *((_QWORD *)v12 + 3) = v12 + 40;
  *((_QWORD *)v12 + 4) = 0x400000000LL;
  if ( v14 )
    sub_2124940((char ***)v12 + 3, (char ***)(a3 + 24));
  *((_QWORD *)v12 + 7) = *(_QWORD *)(a3 + 56);
  if ( a2 != v7 )
  {
    v15 = v32;
    v16 = v7;
    do
    {
      *(_DWORD *)(v15 + 8) = 0;
      *(_DWORD *)(v15 + 12) = 1;
      v19 = *((_DWORD *)v16 + 2);
      *(_QWORD *)v15 = v15 + 16;
      if ( v19 )
        sub_2124860((void **)v15, (char **)v16);
      *(_DWORD *)(v15 + 32) = 0;
      *(_DWORD *)(v15 + 36) = 4;
      v17 = *((_DWORD *)v16 + 8);
      *(_QWORD *)(v15 + 24) = v15 + 40;
      if ( v17 )
        sub_2124860((void **)(v15 + 24), (char **)v16 + 3);
      v18 = *((_DWORD *)v16 + 14);
      v16 += 64;
      v15 += 64;
      *(_DWORD *)(v15 - 8) = v18;
      *(_DWORD *)(v15 - 4) = *((_DWORD *)v16 - 1);
    }
    while ( a2 != v16 );
    v31 = v32 + ((a2 - 64 - v7) & 0xFFFFFFFFFFFFFFC0LL) + 128;
  }
  v20 = a2;
  v21 = v31;
  if ( a2 != v6 )
  {
    do
    {
      while ( 1 )
      {
        v22 = *((_DWORD *)v20 + 2);
        *(_DWORD *)(v21 + 8) = 0;
        *(_QWORD *)v21 = v21 + 16;
        *(_DWORD *)(v21 + 12) = 1;
        if ( v22 )
          sub_2124860((void **)v21, (char **)v20);
        *(_DWORD *)(v21 + 32) = 0;
        *(_QWORD *)(v21 + 24) = v21 + 40;
        v23 = *((_DWORD *)v20 + 8);
        *(_DWORD *)(v21 + 36) = 4;
        if ( v23 )
          break;
        v24 = *((_DWORD *)v20 + 14);
        v20 += 64;
        v21 += 64LL;
        *(_DWORD *)(v21 - 8) = v24;
        *(_DWORD *)(v21 - 4) = *((_DWORD *)v20 - 1);
        if ( v20 == v6 )
          goto LABEL_21;
      }
      v29 = (char **)(v20 + 24);
      v30 = (void **)(v21 + 24);
      v20 += 64;
      v21 += 64LL;
      sub_2124860(v30, v29);
      *(_DWORD *)(v21 - 8) = *((_DWORD *)v20 - 2);
      *(_DWORD *)(v21 - 4) = *((_DWORD *)v20 - 1);
    }
    while ( v6 != v20 );
LABEL_21:
    v31 += ((v6 - a2 - 64) & 0xFFFFFFFFFFFFFFC0LL) + 64;
  }
  for ( i = v7; i != v6; i += 64 )
  {
    while ( 1 )
    {
      v26 = *((char **)i + 3);
      if ( v26 != i + 40 )
        free(v26);
      if ( *(char **)i == i + 16 )
        break;
      free(*(void **)i);
      i += 64;
      if ( v6 == i )
        goto LABEL_27;
    }
  }
LABEL_27:
  if ( v7 )
    operator delete(v7);
  result = v33;
  v28 = _mm_loadh_ps((const double *)&v31);
  *(_QWORD *)(a1 + 16) = v33;
  *(__m128 *)a1 = v28;
  return result;
}
