__int64 __fastcall sub_2E8C0(_QWORD *a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  unsigned __int64 v5; // rax
  const void *v7; // rbp
  __int64 *v8; // rbp
  __int64 v9; // rdx
  __int64 v10; // rsi
  __int64 v11; // rbx
  __m128i v12; // xmm0
  __int64 v13; // rbp
  __m128i *v14; // rsi
  __int64 v15; // rbp
  __int64 v16; // rax
  __int64 (__fastcall *v17)(); // rdx
  __int64 (__fastcall *v18)(); // rcx
  __int64 v19; // r8
  int v20; // r9d
  __int64 (__fastcall **v22)(); // rdi
  size_t v23; // rbx
  __int64 v24; // r14
  __int64 (__fastcall **v25)(); // rbx
  __m128i v26; // xmm1
  double v27; // xmm0_8
  __m128i v28; // xmm1
  __int64 v29; // rax
  void *v30; // r8
  void *v31; // rax
  __int64 v32; // rsi
  __m128i v33; // [rsp+0h] [rbp-298h] BYREF
  void *src; // [rsp+10h] [rbp-288h] BYREF
  __m128i v35; // [rsp+18h] [rbp-280h]
  __m128i v36; // [rsp+30h] [rbp-268h] BYREF
  char v37; // [rsp+40h] [rbp-258h]
  __int64 (__fastcall **v38)(); // [rsp+50h] [rbp-248h] BYREF
  _BYTE v39[24]; // [rsp+58h] [rbp-240h] BYREF
  __int64 v40; // [rsp+70h] [rbp-228h]
  int v41; // [rsp+78h] [rbp-220h]
  char v42; // [rsp+7Ch] [rbp-21Ch]
  __int64 v43; // [rsp+80h] [rbp-218h]
  char v44; // [rsp+88h] [rbp-210h]
  __int64 v45; // [rsp+98h] [rbp-200h]
  __int128 v46; // [rsp+A0h] [rbp-1F8h]
  __m128i si128; // [rsp+B0h] [rbp-1E8h]
  char v48; // [rsp+C0h] [rbp-1D8h]
  __m128i v49; // [rsp+C8h] [rbp-1D0h]
  __int64 v50; // [rsp+D8h] [rbp-1C0h]
  __int128 v51; // [rsp+E0h] [rbp-1B8h]
  __int16 v52; // [rsp+F0h] [rbp-1A8h]
  __int64 v53; // [rsp+118h] [rbp-180h]
  __int128 v54; // [rsp+120h] [rbp-178h]
  __int64 v55; // [rsp+130h] [rbp-168h]
  __int128 v56; // [rsp+138h] [rbp-160h]
  __int64 v57; // [rsp+148h] [rbp-150h]
  __int128 v58; // [rsp+150h] [rbp-148h]
  __int64 v59; // [rsp+160h] [rbp-138h]
  __int128 v60; // [rsp+168h] [rbp-130h]
  __int64 v61; // [rsp+178h] [rbp-120h]
  __int128 v62; // [rsp+180h] [rbp-118h]
  __int64 v63; // [rsp+190h] [rbp-108h]
  __int128 v64; // [rsp+198h] [rbp-100h]
  __int64 v65; // [rsp+1A8h] [rbp-F0h]
  __int128 v66; // [rsp+1B0h] [rbp-E8h]
  __int64 v67; // [rsp+1C0h] [rbp-D8h]
  __int128 v68; // [rsp+1C8h] [rbp-D0h]
  __int64 v69; // [rsp+1D8h] [rbp-C0h]
  __int128 v70; // [rsp+1E0h] [rbp-B8h]
  __int64 v71; // [rsp+1F0h] [rbp-A8h]
  __int128 v72; // [rsp+1F8h] [rbp-A0h]
  __int16 v73; // [rsp+208h] [rbp-90h]
  char v74; // [rsp+20Ah] [rbp-8Eh]
  int v75; // [rsp+20Ch] [rbp-8Ch]
  __int128 v76; // [rsp+210h] [rbp-88h]
  __int64 v77; // [rsp+220h] [rbp-78h]
  __int64 v78; // [rsp+228h] [rbp-70h]
  int v79; // [rsp+230h] [rbp-68h]
  __int64 v80; // [rsp+238h] [rbp-60h]
  __int128 v81; // [rsp+240h] [rbp-58h]
  __int64 v82; // [rsp+250h] [rbp-48h]
  unsigned __int64 v83; // [rsp+258h] [rbp-40h]

  v5 = *(unsigned int *)(a2 + 24);
  v83 = __readfsqword(0x28u);
  v35 = 0;
  src = 0;
  v7 = (const void *)(v5 + a3);
  if ( (v5 + a3 >= a4) | __CFADD__(v5, a3) || v5 <= 0x1F )
  {
    src = (void *)qvector_reserve(&src, 0, 12, 1);
    v35.m128i_i64[0] = 12;
    strcpy((char *)src, "<bad entry>");
  }
  else
  {
    *(_OWORD *)v39 = 0;
    v22 = 0;
    v38 = 0;
    v23 = a4 - (_QWORD)v7;
    v24 = a4 - (_QWORD)v7 + 1;
    if ( a4 - (_QWORD)v7 != -1 )
    {
      v38 = (__int64 (__fastcall **)())qvector_reserve(&v38, 0, v24, 1);
      v22 = v38;
    }
    *(_QWORD *)v39 = v24;
    memmove(v22, v7, v23);
    *((_BYTE *)v38 + v23) = 0;
    v25 = v38;
    v26 = _mm_loadu_si128((const __m128i *)v39);
    *(_OWORD *)v39 = 0;
    v38 = 0;
    if ( src )
    {
      v33 = v26;
      v35.m128i_i64[0] = 0;
      v27 = qfree(src, (const char *)v7);
      v28 = _mm_load_si128(&v33);
      src = v25;
      v35 = v28;
      if ( v38 )
      {
        *(_QWORD *)v39 = 0;
        qfree(v38, (const char *)v7, v27);
      }
    }
    else
    {
      src = v25;
      v35 = v26;
    }
  }
  v8 = (__int64 *)a1[3];
  v9 = v8[1];
  v10 = *v8;
  if ( v8[2] < (unsigned __int64)(v9 + 1) )
  {
    v29 = qvector_reserve(a1[3], v10, v9 + 1, 80);
    *v8 = v29;
    v9 = v8[1];
    v10 = v29;
  }
  v11 = v10 + 80 * v9;
  *(_OWORD *)v11 = 0;
  *(_OWORD *)(v11 + 16) = 0;
  *(_OWORD *)(v11 + 48) = 0;
  *(_QWORD *)(v11 + 32) = 0;
  *(_QWORD *)(v11 + 40) = 0;
  *(_OWORD *)(v11 + 64) = 0;
  ++v8[1];
  v12 = _mm_loadl_epi64((const __m128i *)(a2 + 8));
  *(_QWORD *)v11 = -1;
  *(_QWORD *)(v11 + 8) = v12.m128i_i64[0];
  if ( (void **)(v11 + 40) != &src )
  {
    v13 = v35.m128i_i64[0];
    if ( v35.m128i_i64[0] > 1uLL )
    {
      v30 = src;
      v31 = *(void **)(v11 + 40);
      if ( *(_QWORD *)(v11 + 56) < v35.m128i_i64[0] )
      {
        v32 = *(_QWORD *)(v11 + 40);
        v33.m128i_i64[0] = (__int64)src;
        v31 = (void *)qvector_reserve(v11 + 40, v32, v35.m128i_i64[0], 1);
        *(_QWORD *)(v11 + 40) = v31;
        v30 = (void *)v33.m128i_i64[0];
      }
      *(_QWORD *)(v11 + 48) = v13;
      memmove(v31, v30, v13 - 1);
      *(_BYTE *)(*(_QWORD *)(v11 + 40) + v13 - 1) = 0;
      v12 = _mm_loadl_epi64((const __m128i *)(v11 + 8));
    }
    else
    {
      *(_QWORD *)(v11 + 48) = 0;
    }
  }
  v14 = *(__m128i **)(a2 + 16);
  *(__m128i *)(v11 + 24) = _mm_unpacklo_epi64(v12, (__m128i)(unsigned __int64)v14);
  v15 = sub_29210(a1[2]);
  if ( !v15 )
  {
    if ( !under_debugger )
      interr(20141);
    BUG();
  }
  v16 = a1[1];
  v42 = 1;
  v38 = &off_62AA0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_57480);
  *(__m128i *)&v39[8] = _mm_load_si128((const __m128i *)&xmmword_574B0);
  v49 = _mm_load_si128((const __m128i *)&xmmword_574C0);
  *(_QWORD *)v39 = v16;
  v40 = -1;
  v41 = 8;
  v43 = v15;
  v44 = 0;
  v45 = 0;
  v48 = 0;
  v50 = 0;
  v52 = 0;
  v53 = 0;
  v55 = 0;
  v57 = 0;
  v59 = 0;
  v61 = 0;
  v63 = 0;
  v46 = 0;
  v51 = 0;
  v54 = 0;
  v56 = 0;
  v58 = 0;
  v60 = 0;
  v62 = 0;
  v64 = 0;
  v65 = 0;
  v67 = 0;
  v69 = 0;
  v71 = 0;
  v73 = 0;
  v74 = 0;
  v75 = 0;
  v77 = 0;
  v78 = 0;
  v79 = 0;
  v80 = 0;
  v82 = 0;
  v66 = 0;
  v68 = 0;
  v70 = 0;
  v72 = 0;
  v76 = -1;
  v81 = 0;
  if ( (unsigned __int8)sub_25BB0(&v38) )
  {
    v14 = 0;
    if ( (unsigned __int8)sub_25EF0(&v38, 0, 0, 0) )
    {
      v14 = &v36;
      v36.m128i_i64[1] = v11 + 64;
      v36.m128i_i64[0] = (__int64)off_63268;
      v37 = 0;
      sub_27280((__int64)&v38, &v36, v17, v18, v19, v20);
    }
  }
  sub_162E0(&v38);
  close_linput(v15);
  if ( src )
  {
    v35.m128i_i64[0] = 0;
    qfree(src, v14->m128i_i8);
  }
  return 0;
}
