__int64 __fastcall sub_84AB10(__int64 *a1, unsigned int *a2, const __m128i *a3, double a4)
{
  char **v4; // rbp
  char **exception; // r14
  __int64 v7; // rbp
  __int64 v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rdx
  bool v11; // zf
  __int64 v12; // rdi
  __int64 v13; // r12
  __int64 v14; // r13
  _QWORD *v15; // rbx
  unsigned __int64 v16; // r12
  unsigned int i; // r13d
  __int64 v18; // rsi
  int v19; // eax
  _QWORD *v20; // rsi
  __int64 v21; // r15
  unsigned int v22; // eax
  unsigned int v23; // r8d
  size_t v24; // rsi
  _DWORD *v25; // rax
  __int64 v26; // rsi
  __m128i v27; // xmm1
  _QWORD *v28; // rcx
  __int64 v29; // rsi
  __int64 result; // rax
  __m128i v31; // xmm0
  __m128i v32; // xmm3
  int v33; // edx
  __int64 v34; // r13
  __int64 *v35; // rbx
  unsigned __int64 v36; // rbp
  __int64 v37; // rsi
  __int64 v38; // r12
  __int64 v39; // r13
  unsigned int v40; // edx
  unsigned int v41; // eax
  unsigned int v42; // edx
  size_t v43; // rdi
  __int64 v44; // rax
  const __m128i *v45; // r13
  _DWORD *v46; // rsi
  __int64 v47; // rdi
  __int64 v48; // r8
  __int64 v49; // r10
  const __m128i *v50; // rdi
  const __m128i *v51; // r10
  __int32 v52; // eax
  __m128i v53; // xmm0
  __int64 v54; // rax
  __int64 v55; // rdi
  const __m128i *v56; // r15
  __int64 *v57; // rbx
  _DWORD *v58; // r13
  __int64 v59; // rsi
  __int64 v60; // rdi
  __int64 *v61; // rbp
  __int64 *v62; // r12
  __int64 v63; // rsi
  __int64 v64; // rdi
  unsigned int v65; // edx
  _QWORD *v66; // rax
  _QWORD *v67; // rax
  __m128i v68; // [rsp+0h] [rbp-108h] BYREF
  __m128i v69; // [rsp+10h] [rbp-F8h] BYREF
  int v70; // [rsp+2Ch] [rbp-DCh]
  __m128i *v71; // [rsp+30h] [rbp-D8h]
  int v72; // [rsp+38h] [rbp-D0h]
  unsigned int v73; // [rsp+3Ch] [rbp-CCh]
  _QWORD *v74; // [rsp+40h] [rbp-C8h]
  _DWORD *v75; // [rsp+48h] [rbp-C0h]
  unsigned __int64 v76; // [rsp+50h] [rbp-B8h]
  __int64 v77; // [rsp+58h] [rbp-B0h]
  __m128i v78; // [rsp+70h] [rbp-98h] BYREF
  __int64 v79[4]; // [rsp+80h] [rbp-88h] BYREF
  __int64 v80[2]; // [rsp+A0h] [rbp-68h] BYREF
  char v81[8]; // [rsp+B0h] [rbp-58h] BYREF
  __m128i v82; // [rsp+B8h] [rbp-50h]

  v7 = (__int64)a1;
  v8 = *a1;
  v9 = *(_QWORD *)(v8 + 1720);
  if ( v9 )
  {
    v10 = *a2;
    if ( (unsigned int)v10 >= *(_DWORD *)(v9 - 4) )
      v9 = 0;
    else
      v9 = *(_QWORD *)(v9 + 8 * v10);
  }
  v11 = *((_WORD *)a2 + 2) == 2;
  v70 = 2 * *(_DWORD *)(v9 + 28);
  if ( v11 && a2[4] == 1 )
    v70 ^= 1u;
  v12 = v8 + 2192;
  sub_14B9B80(v12, a3);
  if ( (unsigned int)sub_180B130(v12) > 0xA )
  {
    if ( (unsigned __int8)sub_186A530(a4) )
    {
      sub_186A4C0(a4);
      v13 = sub_180B150(v12, a3);
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_1606360(v80, a2, *(_QWORD *)(v7 + 16), 0, 0, 0);
      v14 = sub_160E8B0(v13, v80);
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_160EBE0(v14, a3);
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_18572D0(v81);
      sub_186A500(v81, "\n");
    }
    else
    {
      v38 = sub_180B150(v12, a3);
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_1606360(v80, a2, *(_QWORD *)(v7 + 16), 0, 0, 0);
      v39 = sub_160E8B0(v38, v80);
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_160EBE0(v39, a3);
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_18572D0(v81);
    }
  }
  ++*(_DWORD *)(v7 + 24);
  v15 = nullptr;
  v72 = sub_79D990(*(_QWORD *)v7, a3->m128i_i64[0]);
  v71 = &v78;
  sub_84A320(&v78, v7, (__int64)a2);
  v16 = v78.m128i_u64[1];
  v68.m128i_i64[0] = v78.m128i_i64[0];
  if ( v78.m128i_i64[1] )
  {
    for ( i = 0; i < *(_DWORD *)(v16 - 4); ++i )
    {
      v21 = *(_QWORD *)(v16 + 8LL * i);
      if ( v21 )
        ++*(_DWORD *)(v21 + 8);
      if ( v15 )
      {
        v22 = *((_DWORD *)v15 - 1);
        if ( v22 == *((_DWORD *)v15 - 2) )
        {
          v23 = (3 * v22 + 1) >> 1;
          v24 = 8 * v23 + 8;
          if ( 8 * v22 + 8 >= (unsigned int)v24 || v22 >= v23 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v80, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v80);
            sub_233E40((__int64)v80);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v69.m128i_i32[0] = (3 * v22 + 1) >> 1;
          v25 = (_DWORD *)sub_186B300(v15 - 1, v24);
          v26 = (unsigned int)v25[1];
          v15 = v25 + 2;
          *v25 = v69.m128i_i32[0];
          LODWORD(v25) = v26;
          v20 = &v15[v26];
          v19 = (_DWORD)v25 + 1;
        }
        else
        {
          v18 = v22;
          v19 = v22 + 1;
          v20 = &v15[v18];
        }
      }
      else
      {
        v66 = (_QWORD *)sub_186B270(0x18u);
        v15 = v66 + 1;
        *v66 = 2;
        v19 = 1;
        v20 = v15;
      }
      *v20 = v21;
      *((_DWORD *)v15 - 1) = v19;
    }
  }
  v27 = _mm_loadu_si128(a3);
  v69 = v27;
  v82 = v27;
  if ( v27.m128i_i64[0] )
    ++*(_DWORD *)(v27.m128i_i64[0] + 8);
  v28 = *(_QWORD **)(v7 + 272);
  if ( v28 )
  {
    v29 = *((unsigned int *)v28 - 1);
    if ( (_DWORD)v29 == *((_DWORD *)v28 - 2) )
    {
      v40 = 3 * v29 + 1;
      v41 = v40 & 0xFFFFFFFE;
      v42 = v40 >> 1;
      v73 = v42;
      v43 = 16 * (v41 + v42) + 8;
      if ( 48 * (int)v29 + 8 >= (unsigned int)v43 || (unsigned int)v29 >= v42 )
      {
        v4 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v79, "Overflow encountered when expanding vector");
        *v4 = (char *)off_1C63128;
        sub_2333C0(v4 + 1, v79);
        sub_233E40((__int64)v79);
        __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v44 = sub_186B270(v43);
      v45 = *(const __m128i **)(v7 + 272);
      v46 = (_DWORD *)v44;
      v28 = (_QWORD *)(v44 + 8);
      if ( v45 )
      {
        v47 = v45[-1].m128i_u32[3];
        v48 = v44 + 8;
        v49 = 3 * v47;
        *(_DWORD *)(v44 + 4) = v47;
        v50 = v45;
        v51 = &v45[v49];
        if ( v45 != v51 )
        {
          do
          {
            v52 = v50->m128i_i32[0];
            v50 += 3;
            v48 += 48;
            *(_DWORD *)(v48 - 48) = v52;
            *(_QWORD *)(v48 - 40) = v50[-3].m128i_i64[1];
            v53 = _mm_loadu_si128(v50 - 2);
            v54 = v50[-1].m128i_i64[0];
            v50[-2].m128i_i64[0] = 0;
            *(__m128i *)(v48 - 32) = v53;
            *(_QWORD *)(v48 - 16) = v54;
            LODWORD(v54) = v50[-1].m128i_i32[2];
            v50[-2].m128i_i64[1] = 0;
            *(_DWORD *)(v48 - 8) = v54;
          }
          while ( v51 != v50 );
        }
        v55 = v45[-1].m128i_u32[3];
        if ( (_DWORD)v55 )
        {
          v74 = v28;
          v76 = v16;
          v77 = v7;
          v56 = &v45[3 * v55];
          v75 = v15;
          v57 = (__int64 *)v45;
          v58 = v46;
          do
          {
            v59 = v57[3];
            if ( v59 )
            {
              v60 = v57[4];
              v11 = (*(_DWORD *)(v59 + 8))-- == 1;
              if ( v11 )
                sub_15D7BC0(v60, v59);
            }
            v61 = (__int64 *)v57[2];
            if ( v61 )
            {
              v62 = &v61[*((unsigned int *)v61 - 1)];
              if ( v61 >= v62 )
                goto LABEL_53;
              do
              {
                while ( 1 )
                {
                  v63 = *v61;
                  if ( *v61 )
                  {
                    v64 = v57[1];
                    v11 = (*(_DWORD *)(v63 + 8))-- == 1;
                    if ( v11 )
                      break;
                  }
                  if ( ++v61 >= v62 )
                    goto LABEL_52;
                }
                sub_15D7BC0(v64, v63);
                ++v61;
              }
              while ( v61 < v62 );
LABEL_52:
              v61 = (__int64 *)v57[2];
              if ( v61 )
LABEL_53:
                sub_186B220(v61 - 1);
            }
            v57 += 6;
          }
          while ( v57 != (__int64 *)v56 );
          v7 = v77;
          v46 = v58;
          v28 = v74;
          v15 = v75;
          v16 = v76;
          v45 = *(const __m128i **)(v77 + 272);
        }
        v75 = v46;
        v74 = v28;
        sub_186B220(&v45[-1].m128i_u64[1]);
        v28 = v74;
        result = (__int64)&v74[6 * (unsigned int)v46[1]];
      }
      else
      {
        *(_DWORD *)(v44 + 4) = 0;
        result = v44 + 8;
      }
      v65 = v73;
      *(_QWORD *)(v7 + 272) = v28;
      *v46 = v65;
    }
    else
    {
      result = (__int64)&v28[6 * v29];
    }
  }
  else
  {
    v67 = (_QWORD *)sub_186B270(0x68u);
    v28 = v67 + 1;
    *v67 = 2;
    *(_QWORD *)(v7 + 272) = v67 + 1;
    result = (__int64)(v67 + 1);
  }
  v31 = _mm_loadl_epi64(&v68);
  v32 = _mm_load_si128(&v69);
  *(_DWORD *)result = v72;
  v33 = v70;
  *(__m128i *)(result + 8) = _mm_unpacklo_epi64(v31, (__m128i)(unsigned __int64)v15);
  *(_DWORD *)(result + 40) = v33;
  *(__m128i *)(result + 24) = v32;
  ++*((_DWORD *)v28 - 1);
  if ( v16 )
  {
    v34 = v68.m128i_i64[0];
    v35 = (__int64 *)v16;
    v36 = v16 + 8LL * *(unsigned int *)(v16 - 4);
    if ( v16 < v36 )
    {
      do
      {
        while ( 1 )
        {
          v37 = *v35;
          if ( *v35 )
          {
            v11 = (*(_DWORD *)(v37 + 8))-- == 1;
            if ( v11 )
              break;
          }
          if ( (unsigned __int64)++v35 >= v36 )
            return sub_186B220((void *)(v16 - 8));
        }
        ++v35;
        sub_15D7BC0(v34, v37);
      }
      while ( (unsigned __int64)v35 < v36 );
    }
    return sub_186B220((void *)(v16 - 8));
  }
  return result;
}

