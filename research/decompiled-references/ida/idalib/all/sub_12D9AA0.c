__int64 __fastcall sub_12D9AA0(__int64 a1, int a2, unsigned __int64 a3, void **a4, size_t a5, unsigned int a6)
{
  int v8; // r12d
  int v9; // ebx
  unsigned int v10; // r15d
  __int64 v12; // r8
  const __m128i *v13; // r9
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rbp
  int v17; // edx
  int v18; // eax
  __int64 v19; // rsi
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rdi
  size_t v23; // rax
  char **v24; // rbx
  void **v25; // rdx
  __int64 v26; // rdx
  void *v27; // rdi
  unsigned __int64 v28; // rdx
  unsigned __int64 v29; // rbp
  unsigned __int64 v30; // rsi
  unsigned __int64 v31; // rcx
  __m128i v32; // xmm0
  char *v33; // rcx
  void *v34; // rax
  int v35; // esi
  int v36; // eax
  unsigned __int64 v37; // rdx
  __int64 v38; // rdi
  __int64 v39; // rsi
  __int64 v40; // rcx
  unsigned __int64 v41; // [rsp+0h] [rbp-B8h]
  unsigned int v43; // [rsp+10h] [rbp-A8h]
  __int64 v44; // [rsp+10h] [rbp-A8h]
  int v46; // [rsp+3Ch] [rbp-7Ch] BYREF
  __m128i v47; // [rsp+40h] [rbp-78h] BYREF
  void **v48; // [rsp+50h] [rbp-68h] BYREF
  __m128i v49; // [rsp+58h] [rbp-60h]
  size_t v50; // [rsp+68h] [rbp-50h]
  __int16 v51; // [rsp+70h] [rbp-48h]

  v8 = a3;
  v9 = a3;
  v41 = HIDWORD(a3);
  v43 = HIDWORD(a3);
  v10 = sub_12D96F0(a1, a2, a3);
  if ( (_BYTE)v10 && a5 )
  {
    if ( (unsigned __int8)sub_1020490(*(_QWORD *)a1, a2, nullptr) )
    {
      v47.m128i_i64[1] = 0;
      v46 = 0;
      sub_12D9370(a1, a2, &v46, (__int64)&v47);
      if ( v47.m128i_i64[0] )
      {
        v28 = *(unsigned int *)(a1 + 104);
        v29 = *(_QWORD *)(a1 + 96);
        v30 = *(unsigned int *)(a1 + 108);
        v31 = v29 + 24 * v28;
        if ( v28 >= v30 )
        {
          v49 = v47;
          v37 = v28 + 1;
          LODWORD(v48) = v46;
          v13 = (const __m128i *)&v48;
          if ( v30 < v37 )
          {
            v38 = a1 + 96;
            v39 = a1 + 112;
            if ( v29 > (unsigned __int64)&v48 || v31 <= (unsigned __int64)&v48 )
            {
              sub_2237220(v38, v39, v37, 24);
              v13 = (const __m128i *)&v48;
              v31 = *(_QWORD *)(a1 + 96) + 24LL * *(unsigned int *)(a1 + 104);
            }
            else
            {
              sub_2237220(v38, v39, v37, 24);
              v40 = *(_QWORD *)(a1 + 96);
              v13 = (const __m128i *)((char *)&v48 + v40 - v29);
              v31 = 24LL * *(unsigned int *)(a1 + 104) + v40;
            }
          }
          *(__m128i *)v31 = _mm_loadu_si128(v13);
          *(_QWORD *)(v31 + 16) = v13[1].m128i_i64[0];
          ++*(_DWORD *)(a1 + 104);
        }
        else
        {
          v32 = _mm_load_si128(&v47);
          *(_DWORD *)v31 = v46;
          *(__m128i *)(v31 + 8) = v32;
          ++*(_DWORD *)(a1 + 104);
        }
      }
    }
    v14 = *(_QWORD *)(a1 + 40);
    v15 = a1 + 32;
    v16 = a1 + 32;
    if ( !v14 )
      goto LABEL_16;
    do
    {
      while ( 1 )
      {
        v17 = *(_DWORD *)(v14 + 32);
        if ( v9 > v17 || v43 > *(_DWORD *)(v14 + 36) && v9 == v17 )
          break;
        v16 = v14;
        v14 = *(_QWORD *)(v14 + 16);
        if ( !v14 )
          goto LABEL_12;
      }
      v14 = *(_QWORD *)(v14 + 24);
    }
    while ( v14 );
LABEL_12:
    if ( v15 == v16 || (v18 = *(_DWORD *)(v16 + 32), v8 < v18) || *(_DWORD *)(v16 + 36) > (unsigned int)v41 && v18 == v8 )
    {
LABEL_16:
      v44 = a1 + 32;
      v19 = v16;
      v16 = operator new(0x40u);
      *(_DWORD *)(v16 + 32) = v8;
      *(_QWORD *)(v16 + 40) = 0;
      *(_DWORD *)(v16 + 36) = v41;
      *(_QWORD *)(v16 + 48) = 0;
      *(_DWORD *)(v16 + 56) = 0;
      v20 = sub_12D8880((_QWORD *)(a1 + 24), v19, (int *)(v16 + 32));
      if ( v21 )
      {
        if ( v44 == v21 || v20 )
        {
          v22 = 1;
        }
        else
        {
          v35 = *(_DWORD *)(v16 + 32);
          v36 = *(_DWORD *)(v21 + 32);
          v22 = 1;
          if ( v35 >= v36 )
            v22 = (v35 == v36) & (unsigned __int8)(*(_DWORD *)(v16 + 36) < *(_DWORD *)(v21 + 36));
        }
        std::_Rb_tree_insert_and_rebalance(v22, v16, v21, v44);
        ++*(_QWORD *)(a1 + 64);
      }
      else
      {
        v27 = (void *)v16;
        v16 = v20;
        operator delete(v27);
      }
    }
    v23 = *(_QWORD *)(v16 + 48);
    v24 = (char **)(v16 + 40);
    if ( v23 )
    {
      v25 = *(void ***)(v16 + 40);
      if ( (_BYTE)a6 )
      {
        v49.m128i_i64[1] = *(_QWORD *)(v16 + 40);
        v10 = a6;
        v49.m128i_i64[0] = a5;
        v48 = a4;
        v50 = v23;
        v51 = 1285;
        *v24 = sub_12D9210((_QWORD *)a1, &v48, 1285, v15, v12, (__int64)v13);
      }
      else
      {
        v49.m128i_i64[0] = *(_QWORD *)(v16 + 48);
        v48 = v25;
        v49.m128i_i64[1] = (__int64)a4;
        v50 = a5;
        v51 = 1285;
        *v24 = sub_12D9210((_QWORD *)a1, &v48, (__int64)v25, v15, v12, (__int64)v13);
      }
      *(_QWORD *)(v16 + 48) = v26;
    }
    else
    {
      v33 = *(char **)(a1 + 288);
      *(_QWORD *)(a1 + 368) += a5;
      if ( *(_QWORD *)(a1 + 296) >= (unsigned __int64)&v33[a5] && v33 )
        *(_QWORD *)(a1 + 288) = &v33[a5];
      else
        v33 = (char *)sub_986170(a1 + 288, a5, a5, 0, v12, (__int64)v13);
      v34 = memmove(v33, a4, a5);
      *(_QWORD *)(v16 + 48) = a5;
      *(_QWORD *)(v16 + 40) = v34;
    }
  }
  return v10;
}
