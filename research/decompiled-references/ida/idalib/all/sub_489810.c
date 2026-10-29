unsigned __int64 __fastcall sub_489810(__int64 a1, int *a2, __m128i *a3, int a4, int a5)
{
  __int64 v8; // rax
  __int64 v9; // rdi
  __int64 v10; // r12
  __int64 v11; // rdi
  __int64 v12; // r12
  __int64 v13; // rax
  unsigned __int8 v14; // r14
  __int64 v15; // r12
  void *v16; // rax
  unsigned int v17; // r15d
  _QWORD *func; // rax
  _QWORD *v19; // rax
  __int64 v20; // r8
  const char *v21; // rcx
  const char *v22; // rdx
  const char *v24; // rdx
  __int64 v25; // r15
  const char *v26; // rdx
  __int64 **v27; // r15
  __int64 **v28; // r14
  __m128i *v29; // r12
  __int64 v30; // [rsp+0h] [rbp-1C8h]
  __int64 v31; // [rsp+0h] [rbp-1C8h]
  __int64 v32; // [rsp+0h] [rbp-1C8h]
  void *v33; // [rsp+8h] [rbp-1C0h]
  __int64 v34; // [rsp+10h] [rbp-1B8h]
  void **v35; // [rsp+18h] [rbp-1B0h]
  void *v36; // [rsp+20h] [rbp-1A8h] BYREF
  __int128 v37; // [rsp+28h] [rbp-1A0h]
  int v38; // [rsp+38h] [rbp-190h]
  void *v39; // [rsp+40h] [rbp-188h] BYREF
  __int128 v40; // [rsp+48h] [rbp-180h]
  int v41; // [rsp+58h] [rbp-170h]
  void *ptr; // [rsp+60h] [rbp-168h] BYREF
  __int128 v43; // [rsp+68h] [rbp-160h]
  __int64 v44; // [rsp+78h] [rbp-150h]
  int v45; // [rsp+80h] [rbp-148h]
  int v46; // [rsp+88h] [rbp-140h]
  void *v47; // [rsp+90h] [rbp-138h] BYREF
  __int128 v48; // [rsp+98h] [rbp-130h]
  void *v49; // [rsp+A8h] [rbp-120h] BYREF
  __int128 v50; // [rsp+B0h] [rbp-118h]
  _OWORD v51[12]; // [rsp+C0h] [rbp-108h] BYREF
  unsigned __int64 v52; // [rsp+188h] [rbp-40h]

  HIDWORD(v34) = a5;
  v52 = __readfsqword(0x28u);
  v8 = switch_dbctx(a2[2]);
  v9 = *(_QWORD *)(v8 + 1672);
  v10 = v8;
  v37 = 0;
  v36 = nullptr;
  sub_510BD0(v9, &v36, a3, 0);
  v11 = *(_QWORD *)(v10 + 1672);
  v39 = nullptr;
  v40 = 0;
  sub_510630(v11, &v39, a3);
  v47 = nullptr;
  v12 = qword_2CCB598;
  v48 = 0;
  v49 = nullptr;
  v13 = *(_QWORD *)(qword_2CCB598 + 1672);
  v50 = 0;
  v35 = &v47;
  sub_504090(&v47, v13 + 1624, a3, 0);
  sub_504090(&v49, *(_QWORD *)(v12 + 1672) + 1624LL, a3, 1);
  v43 = 0;
  ptr = nullptr;
  v44 = 0;
  v45 = -1;
  v14 = sub_486AE0(a2, (__int64)&ptr, 0, (unsigned __int64 *)a3);
  v15 = switch_dbctx(*(int *)(a1 + 8));
  v16 = *(void **)(v15 + 1672);
  v51[0] = _mm_loadu_si128(a3);
  v33 = v16;
  v51[2] = _mm_loadu_si128(a3 + 2);
  v30 = *(_QWORD *)&v51[0];
  v17 = (32 * v14) | a4;
  v51[3] = _mm_loadu_si128(a3 + 3);
  v51[4] = _mm_loadu_si128(a3 + 4);
  v51[5] = _mm_loadu_si128(a3 + 5);
  v51[6] = _mm_loadu_si128(a3 + 6);
  v51[7] = _mm_loadu_si128(a3 + 7);
  v51[8] = _mm_loadu_si128(a3 + 8);
  v51[9] = _mm_loadu_si128(a3 + 9);
  v51[10] = _mm_loadu_si128(a3 + 10);
  v51[11] = _mm_loadu_si128(a3 + 11);
  v51[1] = 0;
  func = (_QWORD *)get_func(*(_QWORD *)&v51[0]);
  if ( func && v30 != *func )
    sub_459560(*(_QWORD *)(a1 + 32), 3u, *(_DWORD *)(a1 + 12), 0xFFFFFFFF, func);
  v31 = *((_QWORD *)&v51[0] + 1);
  v19 = (_QWORD *)get_func(*((_QWORD *)&v51[0] + 1));
  if ( v19 && v31 != *v19 )
    sub_459560(*(_QWORD *)(a1 + 32), 3u, *(_DWORD *)(a1 + 12), 0xFFFFFFFF, v19);
  v20 = v17;
  v21 = haystack;
  if ( (_QWORD)v40 )
    v21 = (const char *)v39;
  v22 = haystack;
  if ( (_QWORD)v37 )
    v22 = (const char *)v36;
  LOBYTE(v20) = v17 | 0x88;
  if ( (unsigned __int8)sub_686840(*(_QWORD *)(v15 + 1672), v51, v22, v21, v20) )
  {
    v32 = sub_505D70(*(_QWORD *)(v15 + 1672) + 1624LL, a3->m128i_i64[0]);
    if ( v32 )
    {
      v24 = haystack;
      v25 = qword_2CCB598;
      if ( (_QWORD)v48 )
        v24 = (const char *)v47;
      sub_5083D0(*(_QWORD *)(qword_2CCB598 + 1672) + 1624LL, v32, v24, 0);
      v26 = haystack;
      if ( (_QWORD)v50 )
        v26 = (const char *)v49;
      sub_5083D0(*(_QWORD *)(v25 + 1672) + 1624LL, v32, v26, 1);
      if ( v14 )
      {
        v27 = (__int64 **)ptr;
        v28 = (__int64 **)((char *)ptr + 16 * v43);
        if ( ptr != v28 )
        {
          do
          {
            v29 = *(__m128i **)(switch_dbctx(*(int *)(a1 + 8)) + 1672);
            sub_3D6230(v29, *v27);
            sub_3D6230(v29, v27[1]);
            if ( (unsigned int)sub_3D2F00(
                                 (int)v33,
                                 v32,
                                 v33,
                                 v34,
                                 (int)v35,
                                 (int)v36,
                                 (void *)v37,
                                 *((__int64 *)&v37 + 1),
                                 v38,
                                 (int)v39,
                                 v40,
                                 SDWORD2(v40),
                                 v41,
                                 (int)ptr,
                                 v43,
                                 SDWORD2(v43),
                                 v44,
                                 v45,
                                 v46,
                                 (__int64)v47) )
            {
              if ( !under_debugger )
                interr(2062);
              BUG();
            }
            v27 += 2;
          }
          while ( v28 != v27 );
        }
      }
      if ( BYTE4(v34) )
        sub_489200(a1, v32, a2[2], a3);
    }
  }
  if ( ptr )
  {
    *(_QWORD *)&v43 = 0;
    qfree(ptr);
  }
  if ( v49 )
  {
    *(_QWORD *)&v50 = 0;
    qfree(v49);
  }
  if ( v47 )
  {
    *(_QWORD *)&v48 = 0;
    qfree(v47);
  }
  if ( v39 )
  {
    *(_QWORD *)&v40 = 0;
    qfree(v39);
  }
  if ( v36 )
  {
    *(_QWORD *)&v37 = 0;
    qfree(v36);
  }
  return v52 - __readfsqword(0x28u);
}
