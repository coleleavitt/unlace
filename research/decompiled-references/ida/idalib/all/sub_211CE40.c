__int64 __fastcall sub_211CE40(__m128 *a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rdi
  __int64 v6; // rax
  __int64 result; // rax
  int v8; // eax
  unsigned __int64 v9; // rax
  __int64 v11; // r13
  __int64 (*v12)(); // rax
  char *v13; // rax
  char *v14; // rsi
  char *v15; // rsi
  _QWORD *v16; // r13
  __int64 v17; // rbp
  __int64 v18; // r14
  __int64 v19; // r15
  __int64 v20; // rsi
  __int64 v21; // rdi
  char *v22; // r15
  char *v23; // rbp
  void *v24; // rdi
  void *v25; // rdi
  unsigned __int64 v26; // rdx
  unsigned __int64 v27; // rax
  __int64 v28; // rsi
  __int64 v29; // rdi
  __int64 v30; // [rsp+0h] [rbp-78h]
  char *v31; // [rsp+8h] [rbp-70h]
  void *v32[4]; // [rsp+10h] [rbp-68h] BYREF
  __int16 v33; // [rsp+30h] [rbp-48h]

  v5 = a1->m128_i64[1];
  v6 = *(_QWORD *)(v5 + 152);
  if ( *(_DWORD *)(v6 + 312) == 4 && (v8 = *(_DWORD *)(v6 + 320), v8 != 6) && v8 )
  {
    v9 = a1[6].m128_u64[1];
    if ( v9 && !*(_QWORD *)(v9 + 8) )
    {
      v32[0] = "Starting a function before ending the previous one!";
      v33 = 259;
      sub_2100A30(v5, a3, (__int64)v32);
    }
    v11 = 1;
    v12 = *(__int64 (**)())(a1->m128_u64[0] + 88);
    if ( v12 != sub_2119CA0 )
      v11 = ((__int64 (__fastcall *)(__m128 *))v12)(a1);
    a1[7].m128_u64[0] = (__int64)(a1[5].m128_u64[1] - a1[5].m128_u64[0]) >> 3;
    v13 = (char *)operator new(0xC0u);
    v14 = (char *)a1[5].m128_u64[1];
    *(_QWORD *)v13 = v11;
    *((_QWORD *)v13 + 1) = 0;
    *((_QWORD *)v13 + 2) = 0;
    *((_QWORD *)v13 + 3) = 0;
    *((_QWORD *)v13 + 4) = a2;
    *((_QWORD *)v13 + 5) = 0;
    *((_QWORD *)v13 + 6) = 0;
    *((_QWORD *)v13 + 7) = 0;
    *((_QWORD *)v13 + 8) = 0;
    *((_QWORD *)v13 + 9) = 0;
    *((_DWORD *)v13 + 20) = 0;
    v13[84] = 1;
    *((_DWORD *)v13 + 22) = -1;
    *((_QWORD *)v13 + 12) = 0;
    *((_QWORD *)v13 + 13) = 0;
    *((_QWORD *)v13 + 14) = 0;
    *((_QWORD *)v13 + 15) = 0;
    *((_QWORD *)v13 + 16) = 0;
    *((_QWORD *)v13 + 17) = 0;
    *((_DWORD *)v13 + 36) = 0;
    *((_QWORD *)v13 + 19) = v13 + 168;
    *((_QWORD *)v13 + 20) = 0;
    *(_OWORD *)(v13 + 168) = 0;
    *((_QWORD *)v13 + 23) = 0;
    v32[0] = v13;
    if ( v14 == (char *)a1[6].m128_u64[0] )
    {
      sub_211CA30(a1 + 5, v14, (__int64 *)v32);
    }
    else
    {
      v32[0] = nullptr;
      v15 = v14 + 8;
      *((_QWORD *)v15 - 1) = v13;
      a1[5].m128_u64[1] = (unsigned __int64)v15;
    }
    v16 = v32[0];
    if ( v32[0] )
    {
      v17 = *((_QWORD *)v32[0] + 21);
      v31 = (char *)v32[0] + 168;
      v30 = *((_QWORD *)v32[0] + 22);
      if ( v30 != v17 )
      {
        do
        {
          while ( 1 )
          {
            v18 = *(_QWORD *)(v17 + 56);
            v19 = v17 + 72;
            if ( v18 == v17 + 72 )
              break;
            free(*(void **)(v17 + 56));
            v20 = *(unsigned int *)(v17 + 48);
            v21 = *(_QWORD *)(v17 + 32);
            v17 += 72;
            operator delete(v21, 16 * v20, 8);
            if ( v30 == v19 )
              goto LABEL_16;
          }
          v28 = *(unsigned int *)(v17 + 48);
          v29 = *(_QWORD *)(v17 + 32);
          v17 = *(_QWORD *)(v17 + 56);
          operator delete(v29, 16 * v28, 8);
        }
        while ( v30 != v18 );
LABEL_16:
        v17 = v16[21];
      }
      if ( v17 )
        operator delete((void *)v17);
      v22 = (char *)v16[19];
      v23 = &v22[72 * *((unsigned int *)v16 + 40)];
      if ( v22 != v23 )
      {
        do
        {
          while ( 1 )
          {
            v23 -= 72;
            v24 = *((void **)v23 + 1);
            if ( !v24 )
              break;
            operator delete(v24);
            if ( v22 == v23 )
              goto LABEL_22;
          }
        }
        while ( v22 != v23 );
LABEL_22:
        v23 = (char *)v16[19];
      }
      if ( v31 != v23 )
        free(v23);
      operator delete(v16[16], 16LL * *((unsigned int *)v16 + 36), 8);
      v25 = (void *)v16[13];
      if ( v25 )
        operator delete(v25);
      operator delete(v16, 0xC0u);
    }
    v26 = a1[18].m128_u64[0];
    v27 = *(_QWORD *)(a1[5].m128_u64[1] - 8);
    a1[6].m128_u64[1] = v27;
    *(_QWORD *)(v27 + 64) = *(_QWORD *)(v26 + 8);
    result = a1[6].m128_i64[1];
    *(_QWORD *)(result + 40) = a3;
  }
  else
  {
    v33 = 259;
    v32[0] = ".seh_* directives are not supported on this target";
    return sub_2100A30(v5, a3, (__int64)v32);
  }
  return result;
}
