_QWORD *__fastcall sub_F839D0(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rdx
  __int64 v7; // rbp
  __int64 v8; // rbx
  unsigned int v9; // eax
  _QWORD *result; // rax
  __int64 v11; // rdx
  __int64 v12; // rbp
  _QWORD *i; // rdx
  __int64 v14; // r13
  void *v15; // rsi
  __int64 v16; // r9
  __int64 v17; // rax
  void *v18; // r11
  unsigned int v19; // r10d
  void *v20; // rax
  int v21; // eax
  size_t v22; // rcx
  __int64 v23; // rdx
  _QWORD *j; // rdx
  __int64 v25; // [rsp+0h] [rbp-68h]
  __int64 v26; // [rsp+8h] [rbp-60h]
  __int64 v27; // [rsp+8h] [rbp-60h]
  unsigned int v28; // [rsp+14h] [rbp-54h]
  unsigned int v29; // [rsp+14h] [rbp-54h]
  void *v30; // [rsp+18h] [rbp-50h]
  __int64 v31[8]; // [rsp+28h] [rbp-40h] BYREF

  v6 = (unsigned int)(a2 - 1);
  v7 = *(unsigned int *)(a1 + 16);
  v8 = *(_QWORD *)a1;
  v9 = (((((((((v6 | (v6 >> 1)) >> 2) | v6 | (v6 >> 1)) >> 4) | ((v6 | (v6 >> 1)) >> 2) | v6 | (v6 >> 1)) >> 8)
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
  if ( v9 < 0x40 )
    v9 = 64;
  *(_DWORD *)(a1 + 16) = v9;
  result = (_QWORD *)sub_22300B0(80LL * v9, 8, 64, a4, a5, a6);
  *(_QWORD *)a1 = result;
  if ( v8 )
  {
    v11 = *(unsigned int *)(a1 + 16);
    *(_QWORD *)(a1 + 8) = 0;
    v25 = 80 * v7;
    v12 = v8 + 80 * v7;
    for ( i = &result[10 * v11]; i != result; result += 10 )
      *result = -4096;
    v14 = v8;
    if ( v12 == v8 )
      return (_QWORD *)operator delete(v8, v25, 8);
    while ( 1 )
    {
      if ( *(_QWORD *)v14 == -8192 || *(_QWORD *)v14 == -4096 )
        goto LABEL_11;
      sub_F7E640((__int64 *)a1, (__int64 *)v14, v31);
      v16 = v31[0];
      v17 = *(_QWORD *)v14;
      v18 = (void *)(v14 + 24);
      *(_QWORD *)(v31[0] + 16) = 0x100000000LL;
      v19 = *(_DWORD *)(v14 + 16);
      *(_QWORD *)v16 = v17;
      v20 = (void *)(v16 + 24);
      *(_QWORD *)(v16 + 8) = v16 + 24;
      if ( !v19 )
        break;
      v15 = *(void **)(v14 + 8);
      if ( v16 + 8 == v14 + 8 )
      {
LABEL_9:
        ++*(_DWORD *)(a1 + 8);
        if ( v15 != v18 )
          free(v15);
LABEL_11:
        v14 += 80;
        if ( v12 == v14 )
          return (_QWORD *)operator delete(v8, v25, 8);
      }
      else
      {
        if ( v15 == v18 )
        {
          v22 = 56;
          if ( v19 == 1
            || (v29 = v19,
                v27 = v16,
                sub_2237220(v16 + 8, v16 + 24, v19, 56),
                v16 = v27,
                v15 = *(void **)(v14 + 8),
                v19 = v29,
                v20 = *(void **)(v27 + 8),
                v18 = (void *)(v14 + 24),
                (v22 = 56LL * *(unsigned int *)(v14 + 16)) != 0) )
          {
            v30 = v18;
            v28 = v19;
            v26 = v16;
            memcpy(v20, v15, v22);
            v15 = *(void **)(v14 + 8);
            v18 = v30;
            v19 = v28;
            v16 = v26;
          }
          *(_DWORD *)(v16 + 16) = v19;
          *(_DWORD *)(v14 + 16) = 0;
          goto LABEL_9;
        }
        *(_DWORD *)(v16 + 16) = v19;
        v21 = *(_DWORD *)(v14 + 20);
        v14 += 80;
        *(_QWORD *)(v16 + 8) = v15;
        *(_DWORD *)(v16 + 20) = v21;
        *(_QWORD *)(v14 - 72) = v18;
        *(_DWORD *)(v14 - 60) = 0;
        *(_DWORD *)(v14 - 64) = 0;
        ++*(_DWORD *)(a1 + 8);
        if ( v12 == v14 )
          return (_QWORD *)operator delete(v8, v25, 8);
      }
    }
    v15 = *(void **)(v14 + 8);
    goto LABEL_9;
  }
  v23 = *(unsigned int *)(a1 + 16);
  *(_QWORD *)(a1 + 8) = 0;
  for ( j = &result[10 * v23]; j != result; result += 10 )
    *result = -4096;
  return result;
}
