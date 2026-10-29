__int64 __fastcall sub_704170(_QWORD *a1, char **a2, __int64 a3, char *a4, int a5, double a6, __m128i a7, __m128 a8)
{
  _QWORD *v10; // rdx
  int v12; // edx
  int v13; // r8d
  int v14; // edx
  __int64 v16; // r12
  __int64 v17; // r15
  size_t v18; // rbp
  char *v19; // rax
  unsigned __int64 v20; // rbp
  __m128i v21; // xmm0
  char *v22; // rdi
  void *v23; // rax
  __m128i v24; // xmm0
  size_t v25; // rbp
  void *v26; // rax
  __int64 v27; // rax
  char *v28; // rsi
  char *v29; // r15
  __int64 v30; // rbp
  __int64 v31; // r14
  __int64 v32; // rcx
  __m128i v33; // xmm0
  __int64 v34; // rcx
  __m128i v35; // xmm0
  void *v36; // rdi
  void *v37; // rdi
  void *v39; // rax
  char *v40; // [rsp+0h] [rbp-98h]
  __int64 i; // [rsp+10h] [rbp-88h]
  void *v42; // [rsp+20h] [rbp-78h]
  __m128i v43; // [rsp+28h] [rbp-70h] BYREF
  void *ptr; // [rsp+38h] [rbp-60h]
  __m128i v45; // [rsp+40h] [rbp-58h] BYREF
  _QWORD v46[9]; // [rsp+50h] [rbp-48h] BYREF

  v10 = (_QWORD *)a1[1];
  v46[1] = __readfsqword(0x28u);
  *v10 |= 0x1000uLL;
  if ( !a3 )
    a3 = *(_QWORD *)(*(_QWORD *)(*a1 + 1672LL) + 8LL);
  v12 = (a5 << 8) & 0x1F000;
  v13 = v12 | 0xC20;
  v14 = v12 | 0x420;
  if ( (a5 & 2) == 0 )
    v13 = v14;
  if ( (a5 & 0x20000) != 0 )
    v13 |= 0x1000000u;
  if ( (a5 & 0x400) != 0 )
    v13 |= 0x20000u;
  if ( (a5 & 0x800) != 0 )
    v13 |= 0x40000u;
  if ( (a5 & 0x1000) != 0 )
    v13 |= 0x80000u;
  if ( (a5 & 0x4000) != 0 )
    v13 |= 0x200000u;
  *(_QWORD *)a1[1] &= ~0x100uLL;
  if ( !(unsigned int)sub_7040F0(a1, a3, (__int64)&byte_22F0C30, a4, v13, a6, a7, a8) )
  {
    if ( a2 )
    {
      v16 = a1[49];
      v17 = a1[50] << 6;
      for ( i = v16 + v17; i != v16; v16 += 64 )
      {
        v42 = nullptr;
        v43 = 0;
        v25 = *(_QWORD *)(v16 + 8);
        if ( v25 )
        {
          v26 = (void *)qalloc_or_throw(*(_QWORD *)(v16 + 8));
          v43.m128i_i64[1] = v25;
          v42 = v26;
          memcpy(v26, *(const void **)v16, v25);
          v43.m128i_i64[0] = v25;
        }
        ptr = nullptr;
        v45 = 0;
        v18 = *(_QWORD *)(v16 + 32);
        if ( v18 )
        {
          v39 = (void *)qalloc_or_throw(*(_QWORD *)(v16 + 32));
          v45.m128i_i64[1] = v18;
          ptr = v39;
          memcpy(v39, *(const void **)(v16 + 24), v18);
          v45.m128i_i64[0] = v18;
        }
        v46[0] = 0;
        copy_tinfo_t(v46);
        v19 = a2[1];
        v20 = (unsigned __int64)a2[2];
        if ( v20 < (unsigned __int64)(v19 + 1) )
        {
          v27 = qvector_reserve(a2, 0, v19 + 1, 56);
          v28 = a2[2];
          v29 = *a2;
          a2[2] = (char *)v20;
          v40 = (char *)v27;
          v30 = (__int64)(a2[1] - 1);
          if ( v30 >= 0 )
          {
            v31 = v27;
            do
            {
              v32 = *(_QWORD *)v29;
              v33 = _mm_loadu_si128((const __m128i *)(v29 + 8));
              *(_QWORD *)v29 = 0;
              *(_QWORD *)v31 = v32;
              *(__m128i *)(v31 + 8) = v33;
              v34 = *((_QWORD *)v29 + 3);
              v35 = _mm_loadu_si128((const __m128i *)v29 + 2);
              *(_OWORD *)(v29 + 8) = 0;
              *((_OWORD *)v29 + 2) = 0;
              *(_QWORD *)(v31 + 24) = v34;
              *((_QWORD *)v29 + 3) = 0;
              *(_QWORD *)(v31 + 48) = 0;
              *(__m128i *)(v31 + 32) = v35;
              copy_tinfo_t(v31 + 48);
              clear_tinfo_t(v29 + 48);
              v36 = *((void **)v29 + 3);
              if ( v36 )
              {
                *((_QWORD *)v29 + 4) = 0;
                qfree(v36);
              }
              v37 = *(void **)v29;
              if ( *(_QWORD *)v29 )
              {
                *((_QWORD *)v29 + 1) = 0;
                qfree(v37);
              }
              v29 += 56;
              v31 += 56;
            }
            while ( v30-- != 0 );
            v29 = *a2;
          }
          qfree(v29);
          *a2 = v40;
          a2[2] = v28;
          v19 = a2[1];
        }
        else
        {
          v40 = *a2;
        }
        v21 = _mm_loadu_si128(&v43);
        v43 = 0;
        v22 = &v40[56 * (_QWORD)v19];
        *(__m128i *)(v22 + 8) = v21;
        v22 += 48;
        *((_QWORD *)v22 - 6) = v42;
        v23 = ptr;
        v24 = _mm_load_si128(&v45);
        *(_QWORD *)v22 = 0;
        *((_QWORD *)v22 - 3) = v23;
        *((__m128i *)v22 - 1) = v24;
        v45 = 0;
        ptr = nullptr;
        copy_tinfo_t(v22);
        ++a2[1];
        clear_tinfo_t(v46);
        if ( ptr )
        {
          v45.m128i_i64[0] = 0;
          qfree(ptr);
        }
      }
    }
  }
  return 0;
}
