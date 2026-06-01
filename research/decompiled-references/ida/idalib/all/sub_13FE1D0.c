_QWORD *__fastcall sub_13FE1D0(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rax
  __int64 v8; // rbp
  __int64 v9; // r12
  unsigned int v10; // edi
  _QWORD *result; // rax
  __int64 v12; // rdx
  __int64 v13; // rbp
  __int64 v14; // r13
  _QWORD *i; // rdx
  __int64 v16; // rbx
  unsigned __int64 *v17; // r8
  unsigned __int64 v18; // rax
  void *v19; // r10
  unsigned int v20; // r9d
  void *v21; // rax
  void *v22; // rdi
  int v23; // eax
  __int64 v24; // rdx
  _QWORD *j; // rdx
  size_t v26; // rcx
  unsigned __int64 *v27; // [rsp+8h] [rbp-60h]
  unsigned __int64 *v28; // [rsp+8h] [rbp-60h]
  unsigned int v29; // [rsp+14h] [rbp-54h]
  unsigned int v30; // [rsp+14h] [rbp-54h]
  void *v31; // [rsp+18h] [rbp-50h]
  unsigned __int64 *v32; // [rsp+28h] [rbp-40h] BYREF

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
    v13 = 32 * v8;
    *(_QWORD *)(a1 + 8) = 0;
    v14 = v9 + v13;
    for ( i = &result[4 * v12]; i != result; result += 4 )
      *result = -4096;
    if ( v14 != v9 )
    {
      v16 = v9;
      while ( 1 )
      {
        if ( *(_QWORD *)v16 == -4096 || sub_FEE490(*(_QWORD *)v16, 0xFFFFFFFFFFFFE000LL) )
          goto LABEL_10;
        sub_13F7990((__int64 *)a1, (unsigned __int64 *)v16, &v32);
        v17 = v32;
        v18 = *(_QWORD *)v16;
        v19 = (void *)(v16 + 24);
        v32[2] = 0x100000000LL;
        v20 = *(_DWORD *)(v16 + 16);
        *v17 = v18;
        v21 = v17 + 3;
        v17[1] = (unsigned __int64)(v17 + 3);
        if ( !v20 )
          break;
        v22 = *(void **)(v16 + 8);
        if ( v17 + 1 == (unsigned __int64 *)(v16 + 8) )
          goto LABEL_15;
        if ( v22 == v19 )
        {
          v26 = 8;
          if ( v20 == 1
            || (v30 = v20,
                v28 = v17,
                sub_2237220(v17 + 1, v17 + 3, v20, 8),
                v17 = v28,
                v22 = *(void **)(v16 + 8),
                v20 = v30,
                v26 = 8LL * *(unsigned int *)(v16 + 16),
                v21 = (void *)v28[1],
                v19 = (void *)(v16 + 24),
                v26) )
          {
            v31 = v19;
            v29 = v20;
            v27 = v17;
            memcpy(v21, v22, v26);
            v22 = *(void **)(v16 + 8);
            v19 = v31;
            v20 = v29;
            v17 = v27;
          }
          *((_DWORD *)v17 + 4) = v20;
          *(_DWORD *)(v16 + 16) = 0;
          goto LABEL_15;
        }
        *((_DWORD *)v17 + 4) = v20;
        v23 = *(_DWORD *)(v16 + 20);
        v17[1] = (unsigned __int64)v22;
        *((_DWORD *)v17 + 5) = v23;
        *(_QWORD *)(v16 + 8) = v19;
        *(_DWORD *)(v16 + 20) = 0;
        *(_DWORD *)(v16 + 16) = 0;
        ++*(_DWORD *)(a1 + 8);
LABEL_10:
        v16 += 32;
        if ( v14 == v16 )
          return (_QWORD *)operator delete(v9, v13, 8);
      }
      v22 = *(void **)(v16 + 8);
LABEL_15:
      ++*(_DWORD *)(a1 + 8);
      if ( v22 != v19 )
        free(v22);
      goto LABEL_10;
    }
    return (_QWORD *)operator delete(v9, v13, 8);
  }
  else
  {
    v24 = *(unsigned int *)(a1 + 16);
    *(_QWORD *)(a1 + 8) = 0;
    for ( j = &result[4 * v24]; j != result; result += 4 )
      *result = -4096;
  }
  return result;
}
