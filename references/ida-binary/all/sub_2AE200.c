unsigned __int64 __fastcall sub_2AE200(
        double a1,
        __m128 a2,
        __m128 a3,
        __m128 a4,
        double a5,
        double a6,
        __m128 a7,
        __m128 a8,
        __int64 a9,
        __int64 *a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14)
{
  const char *v16; // rsi
  unsigned __int32 v17; // ebp
  __int64 v18; // rax
  __int64 v19; // rdi
  const char *v20; // r13
  const char *v21; // rsi
  const char *v22; // r9
  size_t v23; // r8
  __m128i *v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r9
  __m128 v28; // xmm4
  __m128 v29; // xmm5
  __m128i *v30; // r8
  __int128 v31; // xmm0
  __int64 v32; // rdx
  __int64 v33; // rsi
  __int64 v34; // rsi
  __int64 v35; // rdi
  int v36; // eax
  void *v37; // rdi
  size_t v38; // rdx
  __int64 v39; // rax
  __m128i v41; // xmm0
  size_t v42; // [rsp+0h] [rbp-B8h]
  size_t v43; // [rsp+0h] [rbp-B8h]
  size_t v44; // [rsp+10h] [rbp-A8h]
  const char *v45; // [rsp+18h] [rbp-A0h]
  int v46; // [rsp+28h] [rbp-90h] BYREF
  int v47; // [rsp+2Ch] [rbp-8Ch] BYREF
  const char *v48; // [rsp+30h] [rbp-88h] BYREF
  const char *v49; // [rsp+38h] [rbp-80h] BYREF
  __int64 v50; // [rsp+40h] [rbp-78h] BYREF
  __m128 v51; // [rsp+48h] [rbp-70h]
  __int64 v52; // [rsp+58h] [rbp-60h]
  __int64 v53; // [rsp+60h] [rbp-58h]
  __m128i v54; // [rsp+68h] [rbp-50h] BYREF
  unsigned __int64 v55; // [rsp+78h] [rbp-40h]

  v16 = *(const char **)(a11 + 72);
  v55 = __readfsqword(0x28u);
  v17 = a12;
  v46 = -1;
  v51.m128_u64[0] = -1;
  v48 = nullptr;
  v50 = 56;
  v51.m128_i32[2] = 0;
  v52 = -1;
  v53 = 0;
  v54 = 0;
  if ( (unsigned __int8)get_node_info(&v50, v16, (unsigned int)a12, a12, a13, a14) && v54.m128i_i64[0] > 1uLL )
  {
    if ( !(_BYTE)byte_8CCA00 && __cxa_guard_acquire(&byte_8CCA00) )
    {
      v16 = (const char *)&qword_8CCA10;
      qword_8CCA10 = 0;
      unk_8CCA18 = 0;
      __cxa_atexit((void (*)(void *))sub_16B530, &qword_8CCA10, &off_85BC80);
      __cxa_guard_release(&byte_8CCA00);
    }
    v41 = _mm_loadu_si128(&v54);
    v19 = qword_8CCA10;
    v20 = (const char *)v53;
    v54.m128i_i64[1] = qword_8CCA20;
    qword_8CCA10 = v53;
    v53 = v19;
    unk_8CCA18 = v41;
    if ( v51.m128_i32[0] != -1 )
      v46 = v51.m128_i32[0];
    if ( !v41.m128i_i64[0] )
      v20 = &s1;
    v48 = v20;
    if ( v19 )
    {
LABEL_5:
      v54.m128i_i64[0] = 0;
      qfree(v19, v16);
    }
  }
  else
  {
    v16 = byte_9 + 4;
    v18 = sub_293760(a11, 13, a11, v17, &v48, &v46);
    v19 = v53;
    v20 = v48;
    if ( !v18 )
    {
      if ( v53 )
      {
        v54.m128i_i64[0] = 0;
        qfree(v53, &byte_9[4]);
      }
      return v55 - __readfsqword(0x28u);
    }
    if ( v53 )
      goto LABEL_5;
  }
  if ( v20 )
  {
    v49 = v48;
    while ( 1 )
    {
      v21 = (const char *)&v47;
      v22 = sub_2A7F20(&v49, &v47);
      if ( !v22 )
        return v55 - __readfsqword(0x28u);
      v51 = 0;
      v50 = 0;
      v23 = v47 + 1;
      if ( v47 == -1 )
        break;
      v37 = nullptr;
      v38 = v23 + 1;
      if ( v23 != -1 )
      {
        v43 = v23 + 1;
        v45 = v22;
        v44 = v47 + 1;
        v50 = qvector_reserve(&v50, 0, v38, 1);
        v22 = v45;
        v37 = (void *)v50;
        v23 = v44;
        v38 = v43;
      }
      v51.m128_u64[0] = v38;
      v21 = v22;
      v42 = v23;
      memmove(v37, v22, v23);
      *(_BYTE *)(v50 + v42) = 0;
      if ( !(_BYTE)byte_8CC9C0 )
        goto LABEL_19;
LABEL_11:
      v24 = (__m128i *)qalloc(16);
      v30 = v24;
      v31 = 0;
      if ( !v24 )
        sub_22DB40(
          (int)"user_graph_place",
          (__int64)v21,
          v25,
          v26,
          0,
          v27,
          (__m128)0LL,
          a2,
          a3,
          a4,
          v28,
          v29,
          a7,
          a8,
          v42);
      *v24 = _mm_load_si128((const __m128i *)&xmmword_8CC9D0);
      v24->m128i_i32[3] = v17;
      v24->m128i_i32[2] = a10[1];
      v32 = a10[1];
      v33 = *a10;
      if ( a10[2] < (unsigned __int64)(v32 + 1) )
      {
        v42 = (size_t)v24;
        v39 = qvector_reserve(a10, v33, v32 + 1, 272);
        *a10 = v39;
        v32 = a10[1];
        v33 = v39;
        v31 = 0;
        v30 = (__m128i *)v42;
      }
      a3 = 0;
      v34 = 272 * v32 + v33;
      *(_OWORD *)v34 = v31;
      *(_OWORD *)(v34 + 16) = v31;
      *(_QWORD *)(v34 + 32) = 0xFFFFFFFF00000001LL;
      *(_QWORD *)(v34 + 40) = 0;
      *(_QWORD *)(v34 + 48) = 0;
      *(_QWORD *)(v34 + 72) = 0;
      *(_QWORD *)(v34 + 128) = 0;
      *(_QWORD *)(v34 + 184) = 0;
      *(_QWORD *)(v34 + 208) = 0;
      *(_QWORD *)(v34 + 232) = 0;
      *(_QWORD *)(v34 + 256) = -1;
      *(_QWORD *)(v34 + 264) = 0;
      *(_OWORD *)(v34 + 56) = v31;
      *(_OWORD *)(v34 + 80) = v31;
      *(_OWORD *)(v34 + 96) = v31;
      *(_OWORD *)(v34 + 112) = v31;
      *(_OWORD *)(v34 + 136) = v31;
      *(_OWORD *)(v34 + 152) = 0;
      *(_OWORD *)(v34 + 168) = 0;
      *(_OWORD *)(v34 + 192) = v31;
      *(_OWORD *)(v34 + 216) = v31;
      *(_OWORD *)(v34 + 240) = v31;
      ++a10[1];
      v35 = *(_QWORD *)(v34 + 8);
      *(_QWORD *)v34 = v30;
      a2 = (__m128)_mm_loadu_si128((const __m128i *)(v34 + 16));
      *(_QWORD *)(v34 + 8) = v50;
      *(__m128 *)(v34 + 16) = v51;
      v36 = v46;
      v50 = v35;
      v51 = a2;
      *(_BYTE *)(v34 + 32) = 0;
      *(_DWORD *)(v34 + 36) = v36;
      *(_BYTE *)(v34 + 40) = v30->m128i_i32[2] == 0;
      if ( v35 )
      {
        v51.m128_u64[0] = 0;
        qfree(v35, (const char *)v34);
      }
    }
    if ( (_BYTE)byte_8CC9C0 )
      goto LABEL_11;
LABEL_19:
    if ( __cxa_guard_acquire(&byte_8CC9C0) )
    {
      *((_QWORD *)&xmmword_8CC9D0 + 1) = -1;
      *(_QWORD *)&xmmword_8CC9D0 = user_graph_place_t___vtable;
      __cxa_guard_release(&byte_8CC9C0);
    }
    goto LABEL_11;
  }
  return v55 - __readfsqword(0x28u);
}
