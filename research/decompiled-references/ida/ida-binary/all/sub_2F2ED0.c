void __fastcall fh_entries_chooser_t__::vfunc_6(
        __int64 a1,
        __int64 **a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        __m128 a10,
        __int64 a11,
        __int64 a12,
        unsigned __int64 a13,
        __int64 a14,
        char a15)
{
  _QWORD *v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v20; // r13
  __int64 v21; // rsi
  __int64 *v22; // r12
  __int64 *v23; // r12
  __int64 v24; // rdi
  unsigned __int64 v25; // r14
  unsigned __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rsi
  __m128i si128; // xmm0
  unsigned __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rsi
  __m128i v33; // xmm0
  __int64 v34; // rsi
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  unsigned __int64 v38; // r14
  const void *v39; // r8
  void *v40; // rax
  __int64 v41; // rax
  unsigned __int64 v42; // rbx
  const void *v43; // r13
  void *v44; // rax
  const void *v45; // r8
  void *v46; // rax
  __int64 v47; // rax
  const void *v48; // [rsp+0h] [rbp-40h]
  const void *v49; // [rsp+0h] [rbp-40h]

  if ( *(_QWORD *)(a1 + 184) )
  {
    v16 = *(_QWORD **)(a1 + 192);
    if ( v16 )
    {
      v17 = v16[1];
      v18 = v17 + 1;
      if ( a13 >= v17 + 1 )
      {
        sub_169630(
          (int)"%zu is larger than selected func entries %zu \n",
          a13,
          v18,
          v17,
          a13,
          a14,
          a3,
          a4,
          a5,
          a6,
          a7,
          a8,
          a9,
          a10,
          a15);
      }
      else
      {
        if ( a13 )
          v20 = *v16 + 16 * (5 * a13 - 5);
        else
          v20 = *(_QWORD *)(a1 + 200) + 80LL * *(int *)(a1 + 232);
        sub_169A50(*a2, (__int64)"%zu", v18 - a13);
        v21 = *(_QWORD *)(v20 + 64);
        v22 = *a2;
        if ( v21 == *(_QWORD *)(a1 + 224) )
        {
          v34 = v22[3];
          if ( (unsigned __int64)v22[5] <= 9 )
          {
            v47 = qvector_reserve(v22 + 3, v34, 10, 1);
            v22[3] = v47;
            v34 = v47;
          }
          v22[4] = 10;
          *(_QWORD *)v34 = 0x746E657272756328LL;
          *(_BYTE *)(v34 + 8) = 41;
          *(_BYTE *)(v22[3] + 9) = 0;
        }
        else
        {
          sub_2F15E0(v22 + 3, v21);
        }
        v23 = *a2;
        v24 = (__int64)(*a2 + 6);
        if ( v24 != v20 + 16 )
        {
          v25 = *(_QWORD *)(v20 + 24);
          if ( v25 > 1 )
          {
            v45 = *(const void **)(v20 + 16);
            v46 = (void *)v23[6];
            if ( v23[8] < v25 )
            {
              v48 = *(const void **)(v20 + 16);
              v46 = (void *)qvector_reserve(v24, v23[6], *(_QWORD *)(v20 + 24), 1);
              v45 = v48;
              v23[6] = (__int64)v46;
            }
            v23[7] = v25;
            memmove(v46, v45, v25 - 1);
            *(_BYTE *)(v23[6] + v25 - 1) = 0;
            v23 = *a2;
          }
          else
          {
            v23[7] = 0;
            v23 = *a2;
          }
        }
        v26 = *(int *)(v20 + 72);
        if ( (v26 & 0x80000000) == 0LL && (v27 = *(_QWORD *)(a1 + 184), v26 < *(_QWORD *)(v27 + 72)) )
        {
          v37 = *(_QWORD *)(v27 + 64) + 24 * v26;
          if ( v23 + 9 != (__int64 *)v37 )
          {
            v38 = *(_QWORD *)(v37 + 8);
            if ( v38 < 2 )
            {
              v23[10] = 0;
              v23 = *a2;
            }
            else
            {
              v39 = *(const void **)v37;
              v40 = (void *)v23[9];
              if ( v23[11] < v38 )
              {
                v49 = v39;
                v40 = (void *)qvector_reserve(v23 + 9, v23[9], v38, 1);
                v39 = v49;
                v23[9] = (__int64)v40;
              }
              v23[10] = v38;
              memmove(v40, v39, v38 - 1);
              *(_BYTE *)(v23[9] + v38 - 1) = 0;
              v23 = *a2;
            }
          }
        }
        else
        {
          v28 = v23[9];
          if ( (unsigned __int64)v23[11] <= 0x16 )
          {
            v36 = qvector_reserve(v23 + 9, v28, 23, 1);
            v23[9] = v36;
            v28 = v36;
          }
          si128 = _mm_load_si128((const __m128i *)&xmmword_5DCF70);
          v23[10] = 23;
          *(__m128i *)v28 = si128;
          *(_QWORD *)(v28 + 14) = 0x2972657672657320LL;
          *(_BYTE *)(v23[9] + 22) = 0;
          v23 = *a2;
        }
        v30 = *(int *)(v20 + 76);
        if ( (v30 & 0x80000000) == 0LL && (v31 = *(_QWORD *)(a1 + 184), v30 < *(_QWORD *)(v31 + 96)) )
        {
          v41 = *(_QWORD *)(v31 + 88) + 24 * v30;
          if ( v23 + 12 != (__int64 *)v41 )
          {
            v42 = *(_QWORD *)(v41 + 8);
            if ( v42 < 2 )
            {
              v23[13] = 0;
            }
            else
            {
              v43 = *(const void **)v41;
              v44 = (void *)v23[12];
              if ( v23[14] < v42 )
              {
                v44 = (void *)qvector_reserve(v23 + 12, v23[12], v42, 1);
                v23[12] = (__int64)v44;
              }
              v23[13] = v42;
              memmove(v44, v43, v42 - 1);
              *(_BYTE *)(v23[12] + v42 - 1) = 0;
            }
          }
        }
        else
        {
          v32 = v23[12];
          if ( (unsigned __int64)v23[14] <= 0x16 )
          {
            v35 = qvector_reserve(v23 + 12, v32, 23, 1);
            v23[12] = v35;
            v32 = v35;
          }
          v33 = _mm_load_si128((const __m128i *)&xmmword_5DCF70);
          v23[13] = 23;
          *(__m128i *)v32 = v33;
          *(_QWORD *)(v32 + 14) = 0x2972657672657320LL;
          *(_BYTE *)(v23[12] + 22) = 0;
        }
      }
    }
  }
}
