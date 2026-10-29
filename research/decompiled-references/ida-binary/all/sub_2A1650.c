__int64 __fastcall interactive_graph_t__::vfunc_26(_QWORD *a1, int a2, int a3, __int64 *a4)
{
  __int64 v6; // rax
  __int64 *v8; // r14
  __int64 v9; // rdx
  _DWORD *v10; // rcx
  _DWORD *v11; // rax
  unsigned __int64 v13; // rdx
  __int64 v14; // r14
  __int64 v15; // rax
  _DWORD *v16; // rsi
  _QWORD *v17; // rdi
  __int64 v18; // rax
  __int64 v19; // r12
  void *v20; // rbp
  __int64 v21; // rdx
  __m128i v22; // xmm0
  __int64 v23; // rdi
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rdx
  size_t v27; // rbx
  void *v28; // rax
  __m128i v29; // [rsp+0h] [rbp-58h] BYREF
  _DWORD v30[2]; // [rsp+18h] [rbp-40h] BYREF
  __int64 *v31[7]; // [rsp+20h] [rbp-38h] BYREF

  v6 = a1[22];
  v31[1] = (__int64 *)__readfsqword(0x28u);
  v8 = (__int64 *)(v6 + 24LL * a2);
  v9 = v8[1];
  v10 = (_DWORD *)(*v8 + 4 * v9);
  if ( (_DWORD *)*v8 != v10 )
  {
    v11 = (_DWORD *)*v8;
    while ( *v11 != a3 )
    {
      if ( v10 == ++v11 )
        goto LABEL_7;
    }
    if ( v10 != v11 )
      return 0;
  }
LABEL_7:
  v13 = v9 + 1;
  if ( v8[2] < v13 )
  {
    v25 = qvector_reserve(v8, *v8, v13, 4);
    v26 = v8[1];
    *v8 = v25;
    v10 = (_DWORD *)(v25 + 4 * v26);
  }
  *v10 = a3;
  ++v8[1];
  v14 = a1[25] + 24LL * a3;
  v15 = *(_QWORD *)(v14 + 8);
  v16 = *(_DWORD **)v14;
  if ( *(_QWORD *)(v14 + 16) < (unsigned __int64)(v15 + 1) )
  {
    v24 = qvector_reserve(a1[25] + 24LL * a3, v16, v15 + 1, 4);
    *(_QWORD *)v14 = v24;
    v16 = (_DWORD *)v24;
    v15 = *(_QWORD *)(v14 + 8);
  }
  v16[v15] = a2;
  ++*(_QWORD *)(v14 + 8);
  v17 = (_QWORD *)a1[31];
  if ( !a4 )
    a4 = &qword_8CC900;
  v30[0] = a2;
  v18 = v17[2];
  v30[1] = a3;
  v19 = (__int64)(v17 + 1);
  if ( !v18 )
  {
LABEL_31:
    v16 = (_DWORD *)v19;
    v31[0] = (__int64 *)v30;
    v19 = sub_2A1110(v17, v19, v31);
    goto LABEL_23;
  }
  do
  {
    while ( 1 )
    {
      if ( *(_DWORD *)(v18 + 32) < a2 )
      {
        v18 = *(_QWORD *)(v18 + 24);
        goto LABEL_19;
      }
      if ( *(_DWORD *)(v18 + 32) == a2 && *(_DWORD *)(v18 + 36) < a3 )
        break;
      v19 = v18;
      v18 = *(_QWORD *)(v18 + 16);
      if ( !v18 )
        goto LABEL_20;
    }
    v18 = *(_QWORD *)(v18 + 24);
LABEL_19:
    ;
  }
  while ( v18 );
LABEL_20:
  if ( v17 + 1 == (_QWORD *)v19
    || *(_DWORD *)(v19 + 32) > a2
    || *(_DWORD *)(v19 + 32) == a2 && *(_DWORD *)(v19 + 36) > a3 )
  {
    goto LABEL_31;
  }
LABEL_23:
  v20 = nullptr;
  *(_DWORD *)(v19 + 40) = *(_DWORD *)a4;
  *(_DWORD *)(v19 + 44) = *((_DWORD *)a4 + 1);
  *(_DWORD *)(v19 + 48) = *((_DWORD *)a4 + 2);
  *(_DWORD *)(v19 + 52) = *((_DWORD *)a4 + 3);
  v21 = a4[3];
  v22 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v21, (__m128i)(unsigned __int64)v21);
  if ( v21 )
  {
    v27 = 8 * v21;
    v29 = v22;
    v28 = (void *)qalloc_or_throw(8 * v21);
    v16 = (_DWORD *)a4[2];
    v20 = v28;
    memcpy(v28, v16, v27);
    v22 = _mm_load_si128(&v29);
  }
  v23 = *(_QWORD *)(v19 + 56);
  if ( v23 )
  {
    *(_QWORD *)(v19 + 64) = 0;
    v29 = v22;
    qfree(v23, (const char *)v16);
    v22 = _mm_load_si128(&v29);
  }
  *(_QWORD *)(v19 + 56) = v20;
  *(__m128i *)(v19 + 64) = v22;
  return 1;
}
