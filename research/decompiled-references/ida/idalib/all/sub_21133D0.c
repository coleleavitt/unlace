__int64 __fastcall sub_21133D0(__int64 a1, const __m128i *a2, _DWORD *a3)
{
  int v5; // eax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 *v9; // rax
  __int64 v10; // rbx
  void *v11; // rdi
  _QWORD *v12; // r15
  __int64 v13; // r14
  _QWORD *v14; // rbp
  void *v15; // rdi
  void *v16; // rdi
  void *v17; // rdi
  _QWORD *v18; // rdi
  __int64 v19; // rax
  __int64 v20; // rbx
  __int32 v21; // edx
  __int64 v22; // rax
  _QWORD *v23; // r12
  _QWORD *v24; // rax
  __int64 v25; // rdx
  __int64 *v26; // rax
  void **v27; // rbp
  void *v28; // rdi
  _QWORD *v29; // r15
  __int64 v30; // r14
  void *v31; // rdi
  void **v32; // rdi
  __int64 v33; // rax
  _QWORD *v34; // rbx
  _QWORD *v35; // rax
  __int64 v36; // rdx
  __int64 *v37; // rax
  void **v38; // r12
  __int64 *v39; // r14
  void *v40; // rdi
  _QWORD *v41; // rbp
  __int64 v42; // r15
  _QWORD *v43; // r13
  void *v44; // rdi
  void *v45; // rdi
  void **v46; // rdi
  const __m128i *v47; // rsi
  const __m128i *v49; // rsi
  __int64 *v50; // [rsp+0h] [rbp-98h]
  _QWORD *v51; // [rsp+0h] [rbp-98h]
  __int64 *v52; // [rsp+10h] [rbp-88h]
  void *v54; // [rsp+38h] [rbp-60h] BYREF
  __m128i v55; // [rsp+40h] [rbp-58h] BYREF
  __m128i v56[4]; // [rsp+50h] [rbp-48h] BYREF

  v5 = a3[2];
  v55.m128i_i32[0] = 0;
  v55.m128i_i64[1] = 0;
  if ( v5 )
    v6 = *(_QWORD *)(*(_QWORD *)a3 + 8LL);
  else
    v6 = a2[1].m128i_i64[0];
  v55.m128i_i64[1] = v6;
  v7 = operator new(0x60u);
  *(_QWORD *)(v7 + 8) = 1;
  *(_QWORD *)v7 = v7 + 48;
  v8 = v55.m128i_i64[1];
  *(_QWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 80) = v8;
  *(_QWORD *)(v7 + 24) = 0;
  *(_DWORD *)(v7 + 32) = 1065353216;
  *(_QWORD *)(v7 + 40) = 0;
  *(_QWORD *)(v7 + 48) = 0;
  *(_QWORD *)(v7 + 56) = 0;
  *(_QWORD *)(v7 + 64) = 0;
  *(_QWORD *)(v7 + 72) = 0;
  *(_QWORD *)(v7 + 88) = 0;
  v56[0].m128i_i64[0] = v7;
  v9 = sub_2112F00(a1, &v55, v56[0].m128i_i64);
  v10 = v56[0].m128i_i64[0];
  v50 = v9;
  if ( v56[0].m128i_i64[0] )
  {
    v11 = *(void **)(v56[0].m128i_i64[0] + 56);
    if ( v11 )
      operator delete(v11);
    v12 = *(_QWORD **)(v10 + 16);
    if ( v12 )
    {
      do
      {
        v13 = v12[3];
        v14 = (_QWORD *)*v12;
        if ( v13 )
        {
          v15 = *(void **)(v13 + 56);
          if ( v15 )
            operator delete(v15);
          sub_2102C60(v13);
          if ( *(_QWORD *)v13 != v13 + 48 )
            operator delete(*(void **)v13);
          operator delete((void *)v13, 0x60u);
        }
        v16 = v12;
        v12 = v14;
        operator delete(v16);
      }
      while ( v14 );
    }
    memset(*(void **)v10, 0, 8LL * *(_QWORD *)(v10 + 8));
    v17 = *(void **)v10;
    *(_QWORD *)(v10 + 24) = 0;
    *(_QWORD *)(v10 + 16) = 0;
    if ( v17 != (void *)(v10 + 48) )
      operator delete(v17);
    operator delete((void *)v10, 0x60u);
  }
  v18 = (_QWORD *)v50[3];
  v19 = (unsigned int)a3[2];
  v18[11] = a1;
  if ( (_DWORD)v19 )
  {
    v20 = *(_QWORD *)a3 + 16LL;
    v21 = **(_DWORD **)a3;
    if ( v20 != *(_QWORD *)a3 + 16 * v19 )
    {
      do
      {
        v22 = *(_QWORD *)(v20 + 8);
        v23 = v18;
        v56[0].m128i_i32[0] = v21;
        v56[0].m128i_i64[1] = v22;
        v24 = (_QWORD *)operator new(0x60u);
        v24[1] = 1;
        *v24 = v24 + 6;
        v25 = v56[0].m128i_i64[1];
        v24[2] = 0;
        v24[10] = v25;
        v24[3] = 0;
        *((_DWORD *)v24 + 8) = 1065353216;
        v24[5] = 0;
        v24[6] = 0;
        v24[7] = 0;
        v24[8] = 0;
        v24[9] = 0;
        v24[11] = 0;
        v54 = v24;
        v26 = sub_2112F00((__int64)v18, v56, (__int64 *)&v54);
        v27 = (void **)v54;
        v52 = v26;
        if ( v54 )
        {
          v28 = *((void **)v54 + 7);
          if ( v28 )
            operator delete(v28);
          v29 = v27[2];
          if ( v29 )
          {
            do
            {
              v30 = v29[3];
              v51 = (_QWORD *)*v29;
              if ( v30 )
              {
                v31 = *(void **)(v30 + 56);
                if ( v31 )
                  operator delete(v31);
                sub_2102C60(v30);
                if ( *(_QWORD *)v30 != v30 + 48 )
                  operator delete(*(void **)v30);
                operator delete((void *)v30, 0x60u);
              }
              operator delete(v29);
              v29 = v51;
            }
            while ( v51 );
          }
          memset(*v27, 0, 8LL * (_QWORD)v27[1]);
          v32 = (void **)*v27;
          v27[3] = nullptr;
          v27[2] = nullptr;
          if ( v32 != v27 + 6 )
            operator delete(v32);
          operator delete(v27, 0x60u);
        }
        v21 = *(_DWORD *)v20;
        v20 += 16;
        v18 = (_QWORD *)v52[3];
        v33 = (unsigned int)a3[2];
        v18[11] = v23;
      }
      while ( v20 != *(_QWORD *)a3 + 16 * v33 );
    }
    v34 = v18;
    v56[0].m128i_i32[0] = v21;
    v56[0].m128i_i64[1] = a2[1].m128i_i64[0];
    v35 = (_QWORD *)operator new(0x60u);
    v35[1] = 1;
    *v35 = v35 + 6;
    v36 = v56[0].m128i_i64[1];
    v35[2] = 0;
    v35[10] = v36;
    v35[3] = 0;
    *((_DWORD *)v35 + 8) = 1065353216;
    v35[5] = 0;
    v35[6] = 0;
    v35[7] = 0;
    v35[8] = 0;
    v35[9] = 0;
    v35[11] = 0;
    v54 = v35;
    v37 = sub_2112F00((__int64)v18, v56, (__int64 *)&v54);
    v38 = (void **)v54;
    v39 = v37;
    if ( v54 )
    {
      v40 = *((void **)v54 + 7);
      if ( v40 )
        operator delete(v40);
      v41 = v38[2];
      if ( v41 )
      {
        do
        {
          v42 = v41[3];
          v43 = (_QWORD *)*v41;
          if ( v42 )
          {
            v44 = *(void **)(v42 + 56);
            if ( v44 )
              operator delete(v44);
            sub_2102C60(v42);
            if ( *(_QWORD *)v42 != v42 + 48 )
              operator delete(*(void **)v42);
            operator delete((void *)v42, 0x60u);
          }
          v45 = v41;
          v41 = v43;
          operator delete(v45);
        }
        while ( v43 );
      }
      memset(*v38, 0, 8LL * (_QWORD)v38[1]);
      v46 = (void **)*v38;
      v38[3] = nullptr;
      v38[2] = nullptr;
      if ( v46 != v38 + 6 )
        operator delete(v46);
      operator delete(v38, 0x60u);
    }
    v18 = (_QWORD *)v39[3];
    v18[11] = v34;
  }
  v47 = (const __m128i *)v18[8];
  if ( v47 == (const __m128i *)v18[9] )
    return sub_2113250((__int64)(v18 + 7), v47, a2);
  v49 = v47 + 2;
  v49[-2] = _mm_loadu_si128(a2);
  v49[-1] = _mm_loadu_si128(a2 + 1);
  v18[8] = v49;
  return (__int64)a2;
}
