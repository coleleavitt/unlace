_QWORD *__fastcall sub_20B22E0(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rax
  __int64 v8; // rbx
  __int64 v9; // rbp
  unsigned int v10; // edi
  _QWORD *result; // rax
  __int64 v12; // rdx
  __int64 v13; // r13
  _QWORD *i; // rdx
  __int64 v15; // rbx
  void *v16; // rsi
  __int64 v17; // r9
  __int64 v18; // rax
  void *v19; // r11
  unsigned int v20; // r10d
  void *v21; // rax
  int v22; // eax
  size_t v23; // rcx
  __int64 v24; // rdx
  _QWORD *j; // rdx
  __int64 v26; // [rsp+0h] [rbp-68h]
  __int64 v27; // [rsp+8h] [rbp-60h]
  __int64 v28; // [rsp+8h] [rbp-60h]
  unsigned int v29; // [rsp+14h] [rbp-54h]
  unsigned int v30; // [rsp+14h] [rbp-54h]
  void *v31; // [rsp+18h] [rbp-50h]
  __int64 v32[8]; // [rsp+28h] [rbp-40h] BYREF

  v6 = (unsigned int)(a2 - 1);
  v8 = *(unsigned int *)(a1 + 16);
  v9 = *(_QWORD *)a1;
  v10 = (((((((((v6 | (v6 >> 1)) >> 2) | v6 | (v6 >> 1)) >> 4) | ((v6 | (v6 >> 1)) >> 2) | v6 | (v6 >> 1)) >> 8)
         | ((((v6 | (v6 >> 1)) >> 2) | v6 | (v6 >> 1)) >> 4)
         | ((v6 | (v6 >> 1)) >> 2)
         | v6
         | (v6 >> 1)) >> 16)
       | ((((((v6 | (v6 >> 1)) >> 2) | v6 | (v6 >> 1)) >> 4) | ((v6 | (v6 >> 1)) >> 2) | v6 | (v6 >> 1)) >> 8)
       | ((((v6 | (v6 >> 1)) >> 2) | v6 | (v6 >> 1)) >> 4)
       | ((v6 | (v6 >> 1)) >> 2)
       | v6
       | (v6 >> 1))
      + 1;
  if ( v10 < 0x40 )
    v10 = 64;
  *(_DWORD *)(a1 + 16) = v10;
  result = (_QWORD *)sub_22300B0(32LL * v10, 8, a3, a4, a5, a6);
  *(_QWORD *)a1 = result;
  if ( v9 )
  {
    v12 = *(unsigned int *)(a1 + 16);
    *(_QWORD *)(a1 + 8) = 0;
    v26 = 32 * v8;
    v13 = v9 + 32 * v8;
    for ( i = &result[4 * v12]; i != result; result += 4 )
      *result = -4096;
    v15 = v9;
    if ( v13 == v9 )
      return (_QWORD *)operator delete(v9, v26, 8);
    while ( 1 )
    {
      if ( *(_QWORD *)v15 == -8192 || *(_QWORD *)v15 == -4096 )
        goto LABEL_11;
      sub_20A1660((__int64 *)a1, (__int64 *)v15, v32);
      v17 = v32[0];
      v18 = *(_QWORD *)v15;
      v19 = (void *)(v15 + 24);
      *(_QWORD *)(v32[0] + 16) = 0x100000000LL;
      v20 = *(_DWORD *)(v15 + 16);
      *(_QWORD *)v17 = v18;
      v21 = (void *)(v17 + 24);
      *(_QWORD *)(v17 + 8) = v17 + 24;
      if ( !v20 )
        break;
      v16 = *(void **)(v15 + 8);
      if ( v17 + 8 == v15 + 8 )
      {
LABEL_9:
        ++*(_DWORD *)(a1 + 8);
        if ( v16 != v19 )
          free(v16);
LABEL_11:
        v15 += 32;
        if ( v13 == v15 )
          return (_QWORD *)operator delete(v9, v26, 8);
      }
      else
      {
        if ( v19 == v16 )
        {
          v23 = 8;
          if ( v20 == 1
            || (v30 = v20,
                v28 = v17,
                sub_2237220(v17 + 8, v17 + 24, v20, 8),
                v17 = v28,
                v16 = *(void **)(v15 + 8),
                v20 = v30,
                v23 = 8LL * *(unsigned int *)(v15 + 16),
                v21 = *(void **)(v28 + 8),
                v19 = (void *)(v15 + 24),
                v23) )
          {
            v31 = v19;
            v29 = v20;
            v27 = v17;
            memcpy(v21, v16, v23);
            v16 = *(void **)(v15 + 8);
            v19 = v31;
            v20 = v29;
            v17 = v27;
          }
          *(_DWORD *)(v17 + 16) = v20;
          *(_DWORD *)(v15 + 16) = 0;
          goto LABEL_9;
        }
        *(_DWORD *)(v17 + 16) = v20;
        v22 = *(_DWORD *)(v15 + 20);
        v15 += 32;
        *(_QWORD *)(v17 + 8) = v16;
        *(_DWORD *)(v17 + 20) = v22;
        *(_QWORD *)(v15 - 24) = v19;
        *(_DWORD *)(v15 - 12) = 0;
        *(_DWORD *)(v15 - 16) = 0;
        ++*(_DWORD *)(a1 + 8);
        if ( v13 == v15 )
          return (_QWORD *)operator delete(v9, v26, 8);
      }
    }
    v16 = *(void **)(v15 + 8);
    goto LABEL_9;
  }
  v24 = *(unsigned int *)(a1 + 16);
  *(_QWORD *)(a1 + 8) = 0;
  for ( j = &result[4 * v24]; j != result; result += 4 )
    *result = -4096;
  return result;
}
