__int64 __fastcall sub_3C5E00(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rax
  unsigned int v8; // esi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  int v12; // edx
  __int64 v13; // rdi
  const char **v14; // r8
  _DWORD **v15; // rcx
  __int64 v16; // rax
  _DWORD *v17; // rcx
  const char *v18; // rdx
  __int64 v19; // rax
  unsigned int v20; // edx
  __int64 v21; // rcx
  _QWORD *v22; // rdx
  _QWORD *v23; // rcx
  _QWORD *v24; // rbp
  void *v25; // r13
  __int64 v26; // r14
  unsigned __int64 v27; // rdx
  __m128i si128; // xmm0
  __int64 v29; // rdi
  void *v30; // r13
  __int64 v31; // r14
  size_t v32; // r12
  __m128i v33; // xmm0
  __int64 v34; // rdi
  void *v35; // r12
  __int64 v36; // r13
  unsigned __int64 v37; // rdx
  __m128i v38; // xmm0
  __int64 v39; // rdi
  _DWORD *v40; // rdx
  _QWORD **v41; // rsi
  size_t v42; // r12
  size_t v43; // rbx
  __int64 v44; // rdi
  __m128i v45[3]; // [rsp+0h] [rbp-38h] BYREF

  v5 = a3;
  if ( (_DWORD)a2 == 11 )
  {
    v20 = *(_DWORD *)a3;
    if ( v20 > 0x2F )
    {
      v23 = *(_QWORD **)(v5 + 8);
      v22 = v23 + 1;
      *(_QWORD *)(v5 + 8) = v23 + 1;
    }
    else
    {
      v21 = v20;
      v22 = (_QWORD *)(v20 + 8);
      v23 = (_QWORD *)(*(_QWORD *)(v5 + 16) + v21);
      *(_DWORD *)v5 = (_DWORD)v22;
    }
    v24 = (_QWORD *)*v23;
    if ( *v23 )
    {
      v25 = nullptr;
      sub_3C59C0(v24 + 22, (__int64 *)(*a1 + 176LL));
      sub_3C59C0(v24 + 25, (__int64 *)(*a1 + 200LL));
      v26 = *a1;
      v27 = *(_QWORD *)(*a1 + 232LL);
      si128 = _mm_unpacklo_epi64((__m128i)v27, (__m128i)v27);
      if ( v27 )
      {
        v45[0] = si128;
        v42 = 16 * v27;
        v25 = (void *)qalloc_or_throw(16 * v27);
        memcpy(v25, *(const void **)(v26 + 224), v42);
        si128 = _mm_load_si128(v45);
      }
      v29 = v24[28];
      if ( v29 )
      {
        v24[29] = 0;
        v45[0] = si128;
        qfree(v29);
        si128 = _mm_load_si128(v45);
      }
      v24[28] = v25;
      v30 = nullptr;
      *(__m128i *)(v24 + 29) = si128;
      sub_3C5D40(0x12Bu, v24 + 31, *a1 + 248LL);
      v31 = *a1;
      v32 = *(_QWORD *)(*a1 + 112LL);
      v33 = _mm_unpacklo_epi64((__m128i)v32, (__m128i)v32);
      if ( v32 )
      {
        v44 = *(_QWORD *)(*a1 + 112LL);
        v45[0] = v33;
        v30 = (void *)qalloc_or_throw(v44);
        memcpy(v30, *(const void **)(v31 + 104), v32);
        v33 = _mm_load_si128(v45);
      }
      v34 = v24[13];
      if ( v34 )
      {
        v24[14] = 0;
        v45[0] = v33;
        qfree(v34);
        v33 = _mm_load_si128(v45);
      }
      *((__m128i *)v24 + 7) = v33;
      v35 = nullptr;
      v24[13] = v30;
      v36 = *a1;
      v37 = *(_QWORD *)(*a1 + 88LL);
      v38 = _mm_unpacklo_epi64((__m128i)v37, (__m128i)v37);
      if ( v37 )
      {
        v43 = 4 * v37;
        v45[0] = v38;
        v35 = (void *)qalloc_or_throw(4 * v37);
        memcpy(v35, *(const void **)(v36 + 80), v43);
        v38 = _mm_load_si128(v45);
      }
      v39 = v24[10];
      if ( v39 )
      {
        v24[11] = 0;
        v45[0] = v38;
        qfree(v39);
        v38 = _mm_load_si128(v45);
      }
      v24[10] = v35;
      *(__m128i *)(v24 + 11) = v38;
      return 1;
    }
    if ( under_debugger )
      BUG();
    v5 = interr(50277, a2, v22, v23, a5);
    goto LABEL_37;
  }
  if ( (_DWORD)a2 != 13 )
    return 0;
  v8 = *(_DWORD *)a3;
  if ( *(_DWORD *)a3 > 0x2Fu )
  {
    v40 = (_DWORD *)(*(_QWORD *)(a3 + 8) + 8LL);
LABEL_32:
    v41 = (_QWORD **)(v40 + 2);
    *(_QWORD *)(v5 + 8) = v40 + 2;
    v12 = *v40;
LABEL_33:
    v15 = (_DWORD **)(v41 + 1);
    *(_QWORD *)(v5 + 8) = v41 + 1;
    v14 = (const char **)*v41;
LABEL_34:
    *(_QWORD *)(v5 + 8) = v15 + 1;
    goto LABEL_9;
  }
  v9 = v8 + 8;
  *(_DWORD *)v5 = v9;
  if ( (unsigned int)v9 > 0x2F )
  {
    v40 = *(_DWORD **)(v5 + 8);
    goto LABEL_32;
  }
  v10 = *(_QWORD *)(v5 + 16);
  v11 = v8 + 16;
  *(_DWORD *)v5 = v11;
  v12 = *(_DWORD *)(v10 + v9);
  if ( (unsigned int)v11 > 0x2F )
  {
    v41 = *(_QWORD ***)(v5 + 8);
    goto LABEL_33;
  }
  v13 = v8 + 24;
  *(_DWORD *)v5 = v13;
  v14 = *(const char ***)(v10 + v11);
  if ( (unsigned int)v13 > 0x2F )
  {
LABEL_37:
    v15 = *(_DWORD ***)(v5 + 8);
    goto LABEL_34;
  }
  v15 = (_DWORD **)(v13 + v10);
  *(_DWORD *)v5 = v8 + 32;
LABEL_9:
  v16 = v12;
  v17 = *v15;
  v18 = s1;
  v19 = a1[1] + 32 * v16;
  if ( *(_QWORD *)(v19 + 8) )
    v18 = *(const char **)v19;
  *v14 = v18;
  if ( v17 )
    *v17 = *(_DWORD *)(v19 + 24);
  return 1;
}
