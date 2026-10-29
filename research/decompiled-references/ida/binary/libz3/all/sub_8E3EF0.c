__int64 __fastcall sub_8E3EF0(_QWORD *a1, const __m128i **a2)
{
  char **exception; // r14
  char **v3; // r14
  const __m128i *v5; // rcx
  const __m128i *v6; // r14
  __int64 v7; // rsi
  __int64 v8; // rdx
  int v9; // eax
  __m128i *v10; // rdx
  __int64 v11; // rbp
  __m128i v12; // xmm0
  __int64 v13; // rbx
  __int64 v14; // r13
  unsigned int v15; // eax
  unsigned int v16; // r8d
  size_t v17; // rdi
  __int64 v18; // rax
  __int64 *v19; // r15
  __int32 v20; // r8d
  _DWORD *v21; // r9
  __int64 v22; // r10
  __int64 v23; // rdx
  __int64 *v24; // rdi
  __int64 *i; // rax
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 *v29; // rdx
  __int64 *v30; // rbp
  __int64 v31; // r15
  __int64 *v32; // rbx
  __int64 v33; // rsi
  __int64 v34; // rdi
  bool v35; // zf
  __int64 v36; // rsi
  __int64 v37; // rdi
  __int64 result; // rax
  __m128i *v39; // r14
  __m128i *v40; // rbx
  __int64 v41; // rsi
  __int64 v42; // rdi
  __int64 v43; // rsi
  __int64 v44; // rdi
  const __m128i *v45; // r13
  __int64 v46; // rax
  int v47; // eax
  int v48; // eax
  unsigned int v49; // eax
  __int64 v50; // rdx
  __m128i *v51; // rdx
  __int64 v52; // rdi
  __m128i v53; // xmm0
  __int64 v54; // rbx
  __m128i v55; // xmm0
  __int64 v56; // rbp
  unsigned int v57; // r9d
  size_t v58; // rdi
  __int64 v59; // rax
  const __m128i *v60; // r15
  int v61; // r9d
  _DWORD *v62; // r10
  __int64 v63; // rdi
  __int64 v64; // rdx
  const __m128i *v65; // rsi
  __int64 *v66; // rax
  __int64 v67; // rcx
  __int64 v68; // rcx
  __int64 v69; // rcx
  __int64 *v70; // rbx
  __int64 *v71; // rax
  _DWORD *v72; // r15
  __int64 *v73; // rbp
  __int64 v74; // rsi
  __int64 v75; // rdi
  __int64 v76; // rsi
  __int64 v77; // rdi
  const __m128i *v78; // rbp
  __int64 v79; // rsi
  __int64 v80; // rdi
  __int64 v81; // rsi
  __int64 v82; // rdi
  _QWORD *v83; // rax
  _QWORD *v84; // rax
  __m128i v85; // [rsp+0h] [rbp-A8h] BYREF
  __m128i v86; // [rsp+10h] [rbp-98h] BYREF
  __int64 v87; // [rsp+20h] [rbp-88h]
  _DWORD *v88; // [rsp+28h] [rbp-80h]
  _DWORD *v89; // [rsp+30h] [rbp-78h]
  _QWORD *v90; // [rsp+38h] [rbp-70h]
  const __m128i *v91; // [rsp+48h] [rbp-60h] BYREF
  __int64 v92[11]; // [rsp+50h] [rbp-58h] BYREF

  v5 = *a2;
  v90 = a1;
  v91 = nullptr;
  if ( v5 )
  {
    v85.m128i_i64[1] = (__int64)&v5->m128i_i64[5 * v5[-1].m128i_u32[3]];
    if ( (const __m128i *)v85.m128i_i64[1] != v5 )
    {
      v6 = v5;
      v7 = 0;
      do
      {
        v11 = v6->m128i_i64[1];
        v12 = _mm_loadl_epi64(v6);
        v85.m128i_i64[0] = v6[1].m128i_i64[0];
        if ( v11 )
          ++*(_DWORD *)(v11 + 8);
        v13 = v6[1].m128i_i64[1];
        v14 = v6[2].m128i_i64[0];
        if ( v13 )
          ++*(_DWORD *)(v13 + 8);
        if ( v7 )
        {
          v15 = *(_DWORD *)(v7 - 4);
          if ( v15 == *(_DWORD *)(v7 - 8) )
          {
            v16 = (3 * v15 + 1) >> 1;
            v17 = 40 * v16 + 8;
            if ( 40 * v15 + 8 >= (unsigned int)v17 || v15 >= v16 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v92, "Overflow encountered when expanding vector");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, v92);
              sub_233E40((__int64)v92);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v86.m128i_i32[2] = (3 * v15 + 1) >> 1;
            v86.m128i_i64[0] = v12.m128i_i64[0];
            v18 = sub_186B270(v17);
            v19 = (__int64 *)v91;
            v20 = v86.m128i_i32[2];
            v21 = (_DWORD *)v18;
            v7 = v18 + 8;
            v12 = _mm_loadl_epi64(&v86);
            if ( v91 )
            {
              v22 = v91[-1].m128i_u32[3];
              v23 = v18 + 8;
              *(_DWORD *)(v18 + 4) = v22;
              v24 = &v19[5 * v22];
              for ( i = v19; v24 != i; *(_QWORD *)(v23 - 16) = v28 )
              {
                v26 = *i;
                i += 5;
                v23 += 40;
                *(_QWORD *)(v23 - 40) = v26;
                *(_QWORD *)(v23 - 24) = *(i - 3);
                v27 = *(i - 4);
                *(i - 4) = 0;
                *(_QWORD *)(v23 - 32) = v27;
                *(_QWORD *)(v23 - 8) = *(i - 1);
                v28 = *(i - 2);
                *(i - 2) = 0;
              }
              if ( (_DWORD)v22 )
              {
                v86.m128i_i64[1] = v13;
                v29 = &v19[5 * v22];
                v87 = v11;
                v30 = v19;
                v31 = v7;
                LODWORD(v88) = v20;
                v32 = v29;
                v89 = v21;
                v86.m128i_i64[0] = v12.m128i_i64[0];
                do
                {
                  while ( 1 )
                  {
                    v36 = v30[3];
                    if ( v36 )
                    {
                      v37 = v30[4];
                      v35 = (*(_DWORD *)(v36 + 8))-- == 1;
                      if ( v35 )
                        sub_15D7BC0(v37, v36);
                    }
                    v33 = v30[1];
                    if ( v33 )
                    {
                      v34 = v30[2];
                      v35 = (*(_DWORD *)(v33 + 8))-- == 1;
                      if ( v35 )
                        break;
                    }
                    v30 += 5;
                    if ( v32 == v30 )
                      goto LABEL_26;
                  }
                  sub_15D7BC0(v34, v33);
                  v30 += 5;
                }
                while ( v32 != v30 );
LABEL_26:
                v7 = v31;
                v13 = v86.m128i_i64[1];
                v11 = v87;
                v12.m128i_i64[0] = v86.m128i_i64[0];
                v20 = (int)v88;
                v21 = v89;
                v19 = (__int64 *)v91;
              }
              v88 = v21;
              LODWORD(v87) = v20;
              v86.m128i_i64[1] = v7;
              v86.m128i_i64[0] = v12.m128i_i64[0];
              sub_186B220(v19 - 1);
              v21 = v88;
              v7 = v86.m128i_i64[1];
              v20 = v87;
              v12 = _mm_loadl_epi64(&v86);
              v10 = (__m128i *)(v86.m128i_i64[1] + 40LL * (unsigned int)v88[1]);
              v9 = v88[1] + 1;
            }
            else
            {
              *(_DWORD *)(v18 + 4) = 0;
              v10 = (__m128i *)(v18 + 8);
              v9 = 1;
            }
            v91 = (const __m128i *)v7;
            *v21 = v20;
          }
          else
          {
            v8 = v15;
            v9 = v15 + 1;
            v10 = (__m128i *)(v7 + 40 * v8);
          }
        }
        else
        {
          v86.m128i_i64[0] = v12.m128i_i64[0];
          v84 = (_QWORD *)sub_186B270(0x58u);
          v7 = (__int64)(v84 + 1);
          *v84 = 2;
          v12 = _mm_loadl_epi64(&v86);
          v9 = 1;
          v91 = (const __m128i *)v7;
          v10 = (__m128i *)v7;
        }
        v10[2].m128i_i64[0] = v14;
        v6 = (const __m128i *)((char *)v6 + 40);
        *v10 = _mm_unpacklo_epi64(v12, (__m128i)(unsigned __int64)v11);
        v10[1] = _mm_unpacklo_epi64(_mm_loadl_epi64(&v85), (__m128i)(unsigned __int64)v13);
        *(_DWORD *)(v7 - 4) = v9;
      }
      while ( (const __m128i *)v85.m128i_i64[1] != v6 );
    }
  }
  result = sub_8EB8E0(*v90, &v91);
  v39 = (__m128i *)*a2;
  if ( *a2 )
  {
    result = v39[-1].m128i_u32[3];
    if ( (_DWORD)result )
    {
      result *= 5;
      v40 = (__m128i *)((char *)v39 + 8 * result);
      do
      {
        v43 = v39[1].m128i_i64[1];
        if ( v43 )
        {
          v44 = v39[2].m128i_i64[0];
          v35 = (*(_DWORD *)(v43 + 8))-- == 1;
          if ( v35 )
            result = sub_15D7BC0(v44, v43);
        }
        v41 = v39->m128i_i64[1];
        if ( v41 )
        {
          v42 = v39[1].m128i_i64[0];
          v35 = (*(_DWORD *)(v41 + 8))-- == 1;
          if ( v35 )
            result = sub_15D7BC0(v42, v41);
        }
        v39 = (__m128i *)((char *)v39 + 40);
      }
      while ( v40 != v39 );
      v39 = (__m128i *)*a2;
    }
    v39[-1].m128i_i32[3] = 0;
  }
  v45 = v91;
  if ( !v91 )
    return result;
  v46 = v91[-1].m128i_u32[3];
  v86.m128i_i64[0] = (__int64)&v91->m128i_i64[5 * v46];
  if ( (const __m128i *)v86.m128i_i64[0] == v91 )
  {
LABEL_79:
    if ( (_DWORD)v46 )
    {
      v78 = (const __m128i *)((char *)v45 + 40 * v46);
      do
      {
        v81 = v45[1].m128i_i64[1];
        if ( v81 )
        {
          v82 = v45[2].m128i_i64[0];
          v35 = (*(_DWORD *)(v81 + 8))-- == 1;
          if ( v35 )
            sub_15D7BC0(v82, v81);
        }
        v79 = v45->m128i_i64[1];
        if ( v79 )
        {
          v80 = v45[1].m128i_i64[0];
          v35 = (*(_DWORD *)(v79 + 8))-- == 1;
          if ( v35 )
            sub_15D7BC0(v80, v79);
        }
        v45 = (const __m128i *)((char *)v45 + 40);
      }
      while ( v45 != v78 );
      v45 = v91;
    }
    return sub_186B220(&v45[-1].m128i_u64[1]);
  }
  while ( 1 )
  {
    v54 = v45->m128i_i64[1];
    v55 = _mm_loadl_epi64(v45);
    v56 = v45[1].m128i_i64[1];
    v85.m128i_i64[0] = v45[1].m128i_i64[0];
    v85.m128i_i64[1] = v45[2].m128i_i64[0];
    if ( v54 )
    {
      v47 = *(_DWORD *)(v54 + 8);
      *(_DWORD *)(v54 + 8) = v47 + 1;
      if ( v56 )
      {
        ++*(_DWORD *)(v56 + 8);
        ++*(_DWORD *)(v54 + 8);
        v48 = *(_DWORD *)(v56 + 8);
        goto LABEL_46;
      }
      *(_DWORD *)(v54 + 8) = v47 + 2;
    }
    else if ( v56 )
    {
      v48 = *(_DWORD *)(v56 + 8) + 1;
LABEL_46:
      *(_DWORD *)(v56 + 8) = v48 + 1;
      if ( !v39 )
        goto LABEL_90;
      goto LABEL_47;
    }
    v56 = 0;
    if ( !v39 )
    {
LABEL_90:
      v86.m128i_i64[1] = v55.m128i_i64[0];
      v83 = (_QWORD *)sub_186B270(0x58u);
      v39 = (__m128i *)(v83 + 1);
      *v83 = 2;
      v55 = _mm_loadl_epi64((const __m128i *)&v86.m128i_u64[1]);
      result = 1;
      *a2 = v39;
      v51 = v39;
      goto LABEL_49;
    }
LABEL_47:
    v49 = v39[-1].m128i_u32[3];
    if ( v49 == v39[-1].m128i_i32[2] )
    {
      v57 = (3 * v49 + 1) >> 1;
      v58 = 40 * v57 + 8;
      if ( 40 * v49 + 8 >= (unsigned int)v58 || v49 >= v57 )
      {
        v3 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v92, "Overflow encountered when expanding vector");
        *v3 = (char *)off_1C63128;
        sub_2333C0(v3 + 1, v92);
        sub_233E40((__int64)v92);
        __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      LODWORD(v87) = (3 * v49 + 1) >> 1;
      v86.m128i_i64[1] = v55.m128i_i64[0];
      v59 = sub_186B270(v58);
      v60 = *a2;
      v61 = v87;
      v62 = (_DWORD *)v59;
      v39 = (__m128i *)(v59 + 8);
      v55 = _mm_loadl_epi64((const __m128i *)&v86.m128i_u64[1]);
      if ( *a2 )
      {
        v63 = v60[-1].m128i_u32[3];
        v64 = v59 + 8;
        *(_DWORD *)(v59 + 4) = v63;
        v65 = (const __m128i *)((char *)v60 + 40 * v63);
        v66 = (__int64 *)v60;
        if ( v65 != v60 )
        {
          do
          {
            v67 = *v66;
            v66 += 5;
            v64 += 40;
            *(_QWORD *)(v64 - 40) = v67;
            *(_QWORD *)(v64 - 24) = *(v66 - 3);
            v68 = *(v66 - 4);
            *(v66 - 4) = 0;
            *(_QWORD *)(v64 - 32) = v68;
            *(_QWORD *)(v64 - 8) = *(v66 - 1);
            v69 = *(v66 - 2);
            *(v66 - 2) = 0;
            *(_QWORD *)(v64 - 16) = v69;
          }
          while ( v65 != (const __m128i *)v66 );
        }
        if ( (_DWORD)v63 )
        {
          v87 = v54;
          v70 = (__int64 *)v60;
          v71 = &v60->m128i_i64[5 * v63];
          v89 = (_DWORD *)v56;
          v72 = v62;
          LODWORD(v88) = v61;
          v73 = v71;
          v86.m128i_i64[1] = v55.m128i_i64[0];
          do
          {
            while ( 1 )
            {
              v76 = v70[3];
              if ( v76 )
              {
                v77 = v70[4];
                v35 = (*(_DWORD *)(v76 + 8))-- == 1;
                if ( v35 )
                  sub_15D7BC0(v77, v76);
              }
              v74 = v70[1];
              if ( v74 )
              {
                v75 = v70[2];
                v35 = (*(_DWORD *)(v74 + 8))-- == 1;
                if ( v35 )
                  break;
              }
              v70 += 5;
              if ( v73 == v70 )
                goto LABEL_73;
            }
            sub_15D7BC0(v75, v74);
            v70 += 5;
          }
          while ( v73 != v70 );
LABEL_73:
          v62 = v72;
          v55.m128i_i64[0] = v86.m128i_i64[1];
          v54 = v87;
          v61 = (int)v88;
          v56 = (__int64)v89;
          v60 = *a2;
        }
        v88 = v62;
        LODWORD(v87) = v61;
        v86.m128i_i64[1] = v55.m128i_i64[0];
        sub_186B220(&v60[-1].m128i_u64[1]);
        v62 = v88;
        v61 = v87;
        v55 = _mm_loadl_epi64((const __m128i *)&v86.m128i_u64[1]);
        v51 = (__m128i *)((char *)v39 + 40 * (unsigned int)v88[1]);
        result = (unsigned int)(v88[1] + 1);
      }
      else
      {
        *(_DWORD *)(v59 + 4) = 0;
        v51 = (__m128i *)(v59 + 8);
        result = 1;
      }
      *a2 = v39;
      *v62 = v61;
    }
    else
    {
      v50 = v49;
      result = v49 + 1;
      v51 = (__m128i *)((char *)v39 + 40 * v50);
    }
LABEL_49:
    v52 = v85.m128i_i64[1];
    *v51 = _mm_unpacklo_epi64(v55, (__m128i)(unsigned __int64)v54);
    v53 = _mm_loadl_epi64(&v85);
    v51[2].m128i_i64[0] = v52;
    v51[1] = _mm_unpacklo_epi64(v53, (__m128i)(unsigned __int64)v56);
    v39[-1].m128i_i32[3] = result;
    if ( v56 )
    {
      v35 = (*(_DWORD *)(v56 + 8))-- == 1;
      if ( v35 )
        result = sub_15D7BC0(v52, v56);
    }
    if ( v54 )
    {
      v35 = (*(_DWORD *)(v54 + 8))-- == 1;
      if ( v35 )
        break;
    }
    v45 = (const __m128i *)((char *)v45 + 40);
    if ( (const __m128i *)v86.m128i_i64[0] == v45 )
      goto LABEL_77;
LABEL_55:
    v39 = (__m128i *)*a2;
  }
  v45 = (const __m128i *)((char *)v45 + 40);
  result = sub_15D7BC0(v85.m128i_i64[0], v54);
  if ( (const __m128i *)v86.m128i_i64[0] != v45 )
    goto LABEL_55;
LABEL_77:
  v45 = v91;
  if ( v91 )
  {
    v46 = v91[-1].m128i_u32[3];
    goto LABEL_79;
  }
  return result;
}

