unsigned __int64 __fastcall sub_474EE0(__int64 a1, int *a2, __m128i *a3, int a4, char a5)
{
  __int64 v8; // rax
  __int64 v9; // rdi
  __int64 v10; // r12
  __int64 v11; // rdi
  __int64 v12; // r12
  __int64 v13; // rax
  unsigned __int8 v14; // r14
  __int64 v15; // rax
  __m128i v16; // xmm0
  __int64 v17; // r12
  _QWORD *v18; // rax
  unsigned int v19; // edx
  __int64 v20; // rax
  __m128i v21; // xmm0
  __m128i v22; // xmm0
  unsigned int v23; // r15d
  _DWORD *func; // rax
  _DWORD *v25; // rax
  __int64 v26; // r8
  const char *v27; // rcx
  const char *v28; // rdx
  const char *v30; // rdx
  __int64 v31; // r15
  const char *v32; // rdx
  unsigned int *v33; // r15
  unsigned int *v34; // r14
  __int64 *v35; // r12
  unsigned int v36; // [rsp+0h] [rbp-168h]
  int v37; // [rsp+0h] [rbp-168h]
  __m128i *v38; // [rsp+0h] [rbp-168h]
  _QWORD *v39; // [rsp+8h] [rbp-160h]
  void *v41; // [rsp+20h] [rbp-148h] BYREF
  __int128 v42; // [rsp+28h] [rbp-140h]
  void *v43; // [rsp+40h] [rbp-128h] BYREF
  __int128 v44; // [rsp+48h] [rbp-120h]
  void *ptr; // [rsp+60h] [rbp-108h] BYREF
  __int128 v46; // [rsp+68h] [rbp-100h]
  __int64 v47; // [rsp+78h] [rbp-F0h]
  int v48; // [rsp+80h] [rbp-E8h]
  void *v49; // [rsp+90h] [rbp-D8h] BYREF
  __int128 v50; // [rsp+98h] [rbp-D0h]
  void *v51; // [rsp+A8h] [rbp-C0h] BYREF
  __int128 v52; // [rsp+B0h] [rbp-B8h]
  _OWORD v53[6]; // [rsp+C0h] [rbp-A8h] BYREF
  __int64 v54; // [rsp+120h] [rbp-48h]
  unsigned __int64 v55; // [rsp+128h] [rbp-40h]

  v55 = __readfsqword(0x28u);
  v8 = switch_dbctx(a2[2]);
  v9 = *(_QWORD *)(v8 + 1480);
  v10 = v8;
  v42 = 0;
  v41 = nullptr;
  sub_4F9200(v9, &v41, a3, 0);
  v11 = *(_QWORD *)(v10 + 1480);
  v43 = nullptr;
  v44 = 0;
  sub_4F8CF0(v11, &v43, a3);
  v49 = nullptr;
  v12 = qword_2CA1698;
  v50 = 0;
  v51 = nullptr;
  v13 = *(_QWORD *)(qword_2CA1698 + 1480);
  v52 = 0;
  sub_4ECB80(&v49, v13 + 1552, a3, 0);
  sub_4ECB80(&v51, *(_QWORD *)(v12 + 1480) + 1552LL, a3, 1);
  v46 = 0;
  ptr = nullptr;
  v47 = 0;
  v48 = -1;
  v14 = sub_4722B0(a2, (__int64)&ptr, 0, (unsigned int *)a3);
  v15 = switch_dbctx(*(int *)(a1 + 8));
  v16 = _mm_loadu_si128(a3);
  v17 = v15;
  v18 = *(_QWORD **)(v15 + 1480);
  v19 = _mm_cvtsi128_si32(v16);
  v53[0] = v16;
  v39 = v18;
  v20 = a3[6].m128i_i64[0];
  v53[1] = _mm_loadu_si128(a3 + 1);
  v21 = _mm_loadu_si128(a3 + 2);
  v54 = v20;
  v53[2] = v21;
  v22 = _mm_loadu_si128(a3 + 3);
  *((_QWORD *)&v53[0] + 1) = 0;
  v23 = (32 * v14) | a4;
  v53[3] = v22;
  v36 = v19;
  v53[4] = _mm_loadu_si128(a3 + 4);
  v53[5] = _mm_loadu_si128(a3 + 5);
  func = (_DWORD *)get_func(v19);
  if ( func && v36 != *func )
    sub_445720(*(_QWORD *)(a1 + 32), 3u, *(_DWORD *)(a1 + 12), 0xFFFFFFFF, func);
  v37 = DWORD1(v53[0]);
  v25 = (_DWORD *)get_func(DWORD1(v53[0]));
  if ( v25 && v37 != *v25 )
    sub_445720(*(_QWORD *)(a1 + 32), 3u, *(_DWORD *)(a1 + 12), 0xFFFFFFFF, v25);
  v26 = v23;
  v27 = haystack;
  if ( (_QWORD)v44 )
    v27 = (const char *)v43;
  v28 = haystack;
  if ( (_QWORD)v42 )
    v28 = (const char *)v41;
  LOBYTE(v26) = v23 | 0x88;
  if ( (unsigned __int8)sub_667930(*(_QWORD *)(v17 + 1480), v53, v28, v27, v26) )
  {
    v38 = (__m128i *)sub_4EE820(*(_QWORD *)(v17 + 1480) + 1552LL, a3->m128i_u32[0]);
    if ( v38 )
    {
      v30 = haystack;
      v31 = qword_2CA1698;
      if ( (_QWORD)v50 )
        v30 = (const char *)v49;
      sub_4F0D50(*(_QWORD *)(qword_2CA1698 + 1480) + 1552LL, v38, v30, 0);
      v32 = haystack;
      if ( (_QWORD)v52 )
        v32 = (const char *)v51;
      sub_4F0D50(*(_QWORD *)(v31 + 1480) + 1552LL, v38, v32, 1);
      if ( v14 )
      {
        v33 = (unsigned int *)ptr;
        v34 = (unsigned int *)((char *)ptr + 8 * v46);
        if ( ptr != v34 )
        {
          do
          {
            v35 = *(__int64 **)(switch_dbctx(*(int *)(a1 + 8)) + 1480);
            sub_3D0670(v35, *v33);
            sub_3D0670(v35, v33[1]);
            if ( (unsigned int)sub_3CD500(v39, *v33, v33[1], 0) )
            {
              if ( !under_debugger )
                interr(2062);
              BUG();
            }
            v33 += 2;
          }
          while ( v34 != v33 );
        }
      }
      if ( a5 )
        sub_474920(a1, v38, a2[2], a3);
    }
  }
  if ( ptr )
  {
    *(_QWORD *)&v46 = 0;
    qfree(ptr);
  }
  if ( v51 )
  {
    *(_QWORD *)&v52 = 0;
    qfree(v51);
  }
  if ( v49 )
  {
    *(_QWORD *)&v50 = 0;
    qfree(v49);
  }
  if ( v43 )
  {
    *(_QWORD *)&v44 = 0;
    qfree(v43);
  }
  if ( v41 )
  {
    *(_QWORD *)&v42 = 0;
    qfree(v41);
  }
  return v55 - __readfsqword(0x28u);
}

