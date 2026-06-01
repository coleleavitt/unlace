__int64 __fastcall sub_3CBE80(_QWORD *a1, int a2, __int64 a3)
{
  __int64 v3; // rax
  unsigned int v6; // esi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  int v10; // edx
  __int64 v11; // rdi
  const char **v12; // r8
  _DWORD **v13; // rcx
  __int64 v14; // rax
  _DWORD *v15; // rcx
  const char *v16; // rdx
  __int64 v17; // rax
  unsigned int v18; // edx
  __int64 v19; // rcx
  __int64 v20; // rdx
  _QWORD *v21; // rcx
  _QWORD *v22; // rbp
  void *v23; // r13
  __int64 *v24; // rsi
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r14
  unsigned __int64 v28; // rdx
  __m128i si128; // xmm0
  __int64 v30; // rdi
  const void *v31; // rsi
  void *v32; // r13
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r14
  size_t v36; // r12
  __m128i v37; // xmm0
  __int64 v38; // rdi
  void *v39; // r12
  __int64 v40; // r13
  __int64 v41; // rdx
  __m128i v42; // xmm0
  __int64 v43; // rdi
  _DWORD *v44; // rdx
  _QWORD **v45; // rsi
  __int64 v46; // r12
  size_t v47; // rbx
  __int64 v48; // rdi
  void *v49; // rax
  __m128i v50[3]; // [rsp+0h] [rbp-38h] BYREF

  v3 = a3;
  if ( a2 == 11 )
  {
    v18 = *(_DWORD *)a3;
    if ( v18 > 0x2F )
    {
      v21 = *(_QWORD **)(v3 + 8);
      v20 = (__int64)(v21 + 1);
      *(_QWORD *)(v3 + 8) = v21 + 1;
    }
    else
    {
      v19 = v18;
      v20 = v18 + 8;
      v21 = (_QWORD *)(*(_QWORD *)(v3 + 16) + v19);
      *(_DWORD *)v3 = v20;
    }
    v22 = (_QWORD *)*v21;
    if ( *v21 )
    {
      v23 = nullptr;
      sub_3CBA40(v22 + 22, (__int64 *)(*a1 + 176LL), v20);
      v24 = (__int64 *)(*a1 + 200LL);
      sub_3CBA40(v22 + 25, v24, v25);
      v27 = *a1;
      v28 = *(_QWORD *)(*a1 + 232LL);
      si128 = _mm_unpacklo_epi64((__m128i)v28, (__m128i)v28);
      if ( v28 )
      {
        v50[0] = si128;
        v46 = 16 * v28;
        v23 = (void *)qalloc_or_throw(v46, (__int64)v24, v46, v26);
        memcpy(v23, *(const void **)(v27 + 224), v46);
        si128 = _mm_load_si128(v50);
      }
      v30 = v22[28];
      if ( v30 )
      {
        v22[29] = 0;
        v50[0] = si128;
        qfree(v30);
        si128 = _mm_load_si128(v50);
      }
      v22[28] = v23;
      v31 = v22 + 31;
      v32 = nullptr;
      *(__m128i *)(v22 + 29) = si128;
      sub_3CBDC0();
      v35 = *a1;
      v36 = *(_QWORD *)(*a1 + 112LL);
      v37 = _mm_unpacklo_epi64((__m128i)v36, (__m128i)v36);
      if ( v36 )
      {
        v48 = *(_QWORD *)(*a1 + 112LL);
        v50[0] = v37;
        v49 = (void *)qalloc_or_throw(v48, (__int64)v31, v33, v34);
        v31 = *(const void **)(v35 + 104);
        v32 = v49;
        memcpy(v49, v31, v36);
        v37 = _mm_load_si128(v50);
      }
      v38 = v22[13];
      if ( v38 )
      {
        v22[14] = 0;
        v50[0] = v37;
        qfree(v38);
        v37 = _mm_load_si128(v50);
      }
      *((__m128i *)v22 + 7) = v37;
      v39 = nullptr;
      v22[13] = v32;
      v40 = *a1;
      v41 = *(_QWORD *)(*a1 + 88LL);
      v42 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v41, (__m128i)(unsigned __int64)v41);
      if ( v41 )
      {
        v47 = 4 * v41;
        v50[0] = v42;
        v39 = (void *)qalloc_or_throw(4 * v41, (__int64)v31, v41, v34);
        memcpy(v39, *(const void **)(v40 + 80), v47);
        v42 = _mm_load_si128(v50);
      }
      v43 = v22[10];
      if ( v43 )
      {
        v22[11] = 0;
        v50[0] = v42;
        qfree(v43);
        v42 = _mm_load_si128(v50);
      }
      v22[10] = v39;
      *(__m128i *)(v22 + 11) = v42;
      return 1;
    }
    if ( under_debugger )
      BUG();
    v3 = interr();
    goto LABEL_37;
  }
  if ( a2 != 13 )
    return 0;
  v6 = *(_DWORD *)a3;
  if ( *(_DWORD *)a3 > 0x2Fu )
  {
    v44 = (_DWORD *)(*(_QWORD *)(a3 + 8) + 8LL);
LABEL_32:
    v45 = (_QWORD **)(v44 + 2);
    *(_QWORD *)(v3 + 8) = v44 + 2;
    v10 = *v44;
LABEL_33:
    v13 = (_DWORD **)(v45 + 1);
    *(_QWORD *)(v3 + 8) = v45 + 1;
    v12 = (const char **)*v45;
LABEL_34:
    *(_QWORD *)(v3 + 8) = v13 + 1;
    goto LABEL_9;
  }
  v7 = v6 + 8;
  *(_DWORD *)v3 = v7;
  if ( (unsigned int)v7 > 0x2F )
  {
    v44 = *(_DWORD **)(v3 + 8);
    goto LABEL_32;
  }
  v8 = *(_QWORD *)(v3 + 16);
  v9 = v6 + 16;
  *(_DWORD *)v3 = v9;
  v10 = *(_DWORD *)(v8 + v7);
  if ( (unsigned int)v9 > 0x2F )
  {
    v45 = *(_QWORD ***)(v3 + 8);
    goto LABEL_33;
  }
  v11 = v6 + 24;
  *(_DWORD *)v3 = v11;
  v12 = *(const char ***)(v8 + v9);
  if ( (unsigned int)v11 > 0x2F )
  {
LABEL_37:
    v13 = *(_DWORD ***)(v3 + 8);
    goto LABEL_34;
  }
  v13 = (_DWORD **)(v11 + v8);
  *(_DWORD *)v3 = v6 + 32;
LABEL_9:
  v14 = v10;
  v15 = *v13;
  v16 = s1;
  v17 = a1[1] + 32 * v14;
  if ( *(_QWORD *)(v17 + 8) )
    v16 = *(const char **)v17;
  *v12 = v16;
  if ( v15 )
    *v15 = *(_DWORD *)(v17 + 24);
  return 1;
}
