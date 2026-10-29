__int64 (__fastcall **__fastcall sub_7AC610(__int64 a1))()
{
  __m128i v2; // xmm0
  __int64 *v3; // rbp
  __int64 v4; // r13
  __int64 *v5; // r14
  __int64 v6; // rax
  __int64 *v7; // rbp
  __int64 *v8; // r14
  __int64 v9; // rax
  __int64 v10; // rdi
  __int64 v11; // rdi
  __int64 v12; // rdi
  __int64 v13; // rdi
  __int64 v14; // rdi
  __int64 v15; // rdi
  __int64 v16; // rdi
  _QWORD *v17; // rbp
  __int64 v18; // rax
  _QWORD *v19; // r14
  void *v20; // rdi
  _QWORD *v21; // rbp
  __int64 v22; // rax
  _QWORD *v23; // r14
  void *v24; // rdi
  __int64 v25; // rdi
  __int64 v26; // rdi
  __int64 v27; // rdi
  __int64 v28; // rdi
  __int64 v29; // rdi
  __int64 v30; // rdi
  __int64 v31; // rdi
  __int64 v32; // rdi
  __int64 v33; // rdi
  __int64 v34; // rdi
  __int64 v35; // rdi
  __int64 v36; // rdi
  __int64 v37; // rdi
  __int64 v38; // rdi
  void *v39; // rbp
  __int64 v40; // rbp
  __int64 v41; // rax
  __int64 v42; // r14
  __int64 v43; // rdi
  __int64 v44; // rbp
  __int64 v45; // rax
  __int64 v46; // r15
  void *v47; // r14
  __int64 v48; // rsi
  __m128i si128; // xmm4
  __int64 v50; // rdi
  __int64 (__fastcall **result)(); // rax
  __int64 v52; // rdi
  __m128i v53[4]; // [rsp+0h] [rbp-48h] BYREF

  v2 = _mm_loadl_epi64((const __m128i *)off_1C548D8);
  v3 = *(__int64 **)(a1 + 744);
  *(_QWORD *)a1 = &off_1C6AEC0;
  v53[0] = _mm_unpacklo_epi64((__m128i)(unsigned __int64)qword_1C6C4D8, (__m128i)(unsigned __int64)qword_1C6C528);
  *(_QWORD *)(a1 + 48) = off_1C6B1C8;
  *(__m128i *)(a1 + 32) = _mm_unpacklo_epi64(v2, (__m128i)(unsigned __int64)off_1C6B1A0);
  *(_OWORD *)(a1 + 192) = 0;
  *(_QWORD *)(a1 + 80) = off_1C6B220;
  *(_OWORD *)(a1 + 176) = 0;
  *(_OWORD *)(a1 + 204) = 0;
  if ( !v3 || (v4 = a1 + 224, v5 = &v3[*((unsigned int *)v3 - 1)], v5 == v3) )
  {
    v4 = a1 + 224;
  }
  else
  {
    do
    {
      v6 = *v3++;
      sub_17E9C40(v4, *(_QWORD *)(v6 + 40), v6 - 8);
    }
    while ( v5 != v3 );
  }
  v7 = *(__int64 **)(a1 + 752);
  if ( v7 )
  {
    v8 = &v7[*((unsigned int *)v7 - 1)];
    while ( v8 != v7 )
    {
      v9 = *v7++;
      sub_17E9C40(v4, *(_QWORD *)(v9 + 40), v9 - 8);
    }
  }
  v10 = *(_QWORD *)(a1 + 1032);
  if ( v10 )
    sub_186B220((void *)(v10 - 8));
  v11 = *(_QWORD *)(a1 + 1016);
  if ( v11 )
    sub_186B220((void *)(v11 - 8));
  v12 = *(_QWORD *)(a1 + 1000);
  if ( v12 )
    sub_186B220((void *)(v12 - 8));
  v13 = *(_QWORD *)(a1 + 984);
  if ( v13 )
    sub_186B220((void *)(v13 - 8));
  v14 = *(_QWORD *)(a1 + 976);
  if ( v14 )
    sub_186B220((void *)(v14 - 8));
  v15 = *(_QWORD *)(a1 + 968);
  if ( v15 )
    sub_186B220((void *)(v15 - 8));
  v16 = *(_QWORD *)(a1 + 960);
  if ( v16 )
    sub_186B220((void *)(v16 - 8));
  v17 = *(_QWORD **)(a1 + 944);
  if ( v17 )
  {
    v18 = *((unsigned int *)v17 - 1);
    if ( (_DWORD)v18 )
    {
      v19 = &v17[2 * v18];
      do
      {
        while ( *v17 )
        {
          v20 = (void *)(*v17 - 8LL);
          v17 += 2;
          sub_186B220(v20);
          if ( v19 == v17 )
          {
            v17 = *(_QWORD **)(a1 + 944);
            goto LABEL_27;
          }
        }
        v17 += 2;
      }
      while ( v17 != v19 );
      v17 = *(_QWORD **)(a1 + 944);
    }
LABEL_27:
    sub_186B220(v17 - 1);
  }
  v21 = *(_QWORD **)(a1 + 936);
  if ( v21 )
  {
    v22 = *((unsigned int *)v21 - 1);
    if ( (_DWORD)v22 )
    {
      v23 = &v21[v22];
      do
      {
        while ( *v21 )
        {
          v24 = (void *)(*v21++ - 8LL);
          sub_186B220(v24);
          if ( v23 == v21 )
          {
            v21 = *(_QWORD **)(a1 + 936);
            goto LABEL_34;
          }
        }
        ++v21;
      }
      while ( v21 != v23 );
      v21 = *(_QWORD **)(a1 + 936);
    }
LABEL_34:
    sub_186B220(v21 - 1);
  }
  v25 = *(_QWORD *)(a1 + 896);
  if ( v25 )
    sub_186B220((void *)(v25 - 8));
  v26 = *(_QWORD *)(a1 + 872);
  if ( v26 )
    sub_186B220((void *)(v26 - 8));
  v27 = *(_QWORD *)(a1 + 864);
  if ( v27 )
    sub_186B220((void *)(v27 - 8));
  v28 = *(_QWORD *)(a1 + 856);
  if ( v28 )
    sub_186B220((void *)(v28 - 8));
  v29 = *(_QWORD *)(a1 + 840);
  if ( v29 )
    sub_186B220((void *)(v29 - 8));
  v30 = *(_QWORD *)(a1 + 832);
  if ( v30 )
    sub_186B220((void *)(v30 - 8));
  v31 = *(_QWORD *)(a1 + 824);
  if ( v31 )
    sub_186B220((void *)(v31 - 8));
  v32 = *(_QWORD *)(a1 + 816);
  if ( v32 )
    sub_186B220((void *)(v32 - 8));
  v33 = *(_QWORD *)(a1 + 800);
  if ( v33 )
    sub_186B220((void *)(v33 - 8));
  v34 = *(_QWORD *)(a1 + 792);
  if ( v34 )
    sub_186B220((void *)(v34 - 8));
  v35 = *(_QWORD *)(a1 + 768);
  if ( v35 )
    sub_186B220((void *)(v35 - 8));
  v36 = *(_QWORD *)(a1 + 760);
  if ( v36 )
    sub_186B220((void *)(v36 - 8));
  v37 = *(_QWORD *)(a1 + 752);
  if ( v37 )
    sub_186B220((void *)(v37 - 8));
  v38 = *(_QWORD *)(a1 + 744);
  if ( v38 )
    sub_186B220((void *)(v38 - 8));
  sub_17E9B80(v4);
  v39 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, a1 + 128);
  sub_182CBA0(v39, a1 + 144);
  v40 = *(_QWORD *)(a1 + 120);
  if ( v40 )
  {
    v41 = *(unsigned int *)(v40 - 4);
    if ( (_DWORD)v41 )
    {
      v42 = v40 + 16 * v41;
      do
      {
        v43 = v40;
        v40 += 16;
        sub_15D0DF0(v43);
      }
      while ( v40 != v42 );
      v40 = *(_QWORD *)(a1 + 120);
    }
    sub_186B220((void *)(v40 - 8));
  }
  v44 = *(_QWORD *)(a1 + 112);
  if ( v44 )
  {
    v45 = *(unsigned int *)(v44 - 4);
    if ( (_DWORD)v45 )
    {
      v46 = v44 + 32 * v45;
      do
      {
        v47 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v44);
        v48 = v44 + 16;
        v44 += 32;
        sub_182CBA0(v47, v48);
      }
      while ( v44 != v46 );
      v44 = *(_QWORD *)(a1 + 112);
    }
    sub_186B220((void *)(v44 - 8));
  }
  si128 = _mm_load_si128(v53);
  v50 = *(_QWORD *)(a1 + 64);
  *(_QWORD *)a1 = qword_1C6C2C8;
  result = off_1C6A6A8;
  *(_QWORD *)(a1 + 48) = off_1C6A6A8;
  *(__m128i *)(a1 + 32) = si128;
  if ( v50 )
    result = (__int64 (__fastcall **)())sub_186B220((void *)(v50 - 8));
  v52 = *(_QWORD *)(a1 + 56);
  if ( v52 )
    return (__int64 (__fastcall **)())sub_186B220((void *)(v52 - 8));
  return result;
}

