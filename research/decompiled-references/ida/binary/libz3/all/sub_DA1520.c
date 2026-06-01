__int64 __fastcall sub_DA1520(__int64 a1)
{
  __int64 v2; // rax
  int v3; // edx
  unsigned __int32 v5; // esi
  __int64 v6; // r12
  int v7; // edx
  unsigned __int32 v8; // ecx
  __int16 v9; // ax
  __int64 v10; // rbp
  void *v11; // r12
  __int64 v12; // rax
  __int64 v13; // rbp
  __int64 v14; // r14
  char v15; // di
  __int64 v16; // rcx
  int v17; // eax
  unsigned __int32 **v18; // rcx
  unsigned __int32 *v19; // r13
  _QWORD *v20; // rdx
  unsigned int v21; // eax
  unsigned int v22; // r15d
  size_t v23; // rsi
  unsigned int *v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rdi
  __int64 v27; // rax
  unsigned int v28; // edx
  __m128i v29; // xmm1
  __m128i *v30; // rbp
  __int32 v31; // r8d
  size_t v32; // r15
  __m128i *v33; // r13
  int v34; // ecx
  __m128i v35; // xmm0
  __int64 v36; // rax
  __m128i *v37; // rdi
  __m128i *v38; // rax
  __m128i *v39; // rsi
  __int64 v40; // rdx
  __int64 v41; // rax
  _QWORD *v42; // rax
  __int64 v43; // rsi
  __int64 v44; // rdi
  bool v45; // zf
  _QWORD *v46; // rax
  unsigned int v47; // ecx
  unsigned int v48; // edx
  __int64 v49; // rbp
  __int64 v50; // rsi
  int v51; // ecx
  __int64 v52; // rsi
  __int64 v53; // rdi
  unsigned int v54; // ebp
  unsigned int v55; // edx
  unsigned int *v56; // rdx
  unsigned int v57; // r12d
  unsigned int v58; // ecx
  unsigned int *v59; // rax
  __int64 v60; // rdi
  __m128i *v61; // rax
  __int32 v62; // r9d
  __m128i *v63; // rcx
  __m128i *v64; // rdi
  const __m128i *v65; // r14
  __int64 m128i_i64; // r10
  __int64 v67; // rax
  __m128i *v68; // rdx
  __m128i *v69; // rax
  _QWORD *v70; // rax
  char **exception; // rbx
  char **v72; // rbp
  char **v73; // rbp
  __m128i v74; // [rsp+0h] [rbp-98h] BYREF
  __int32 v75; // [rsp+10h] [rbp-88h]
  __int32 v76; // [rsp+14h] [rbp-84h]
  __m128i *v77; // [rsp+18h] [rbp-80h]
  __m128i v78; // [rsp+30h] [rbp-68h] BYREF
  __int64 v79[11]; // [rsp+40h] [rbp-58h] BYREF

  if ( !*(_QWORD *)(a1 + 424) )
  {
    v79[0] = 0;
    v10 = sub_186B270(8u);
    sub_1360C00(v10, a1 + 432, v79);
    v11 = *(void **)(a1 + 424);
    if ( (void *)v10 != v11 )
    {
      if ( v11 )
      {
        sub_13606C0(*(_QWORD *)(a1 + 424));
        sub_186B220(v11);
      }
      *(_QWORD *)(a1 + 424) = v10;
    }
    sub_18572D0(v79);
  }
LABEL_2:
  v2 = *(_QWORD *)(a1 + 640);
LABEL_3:
  if ( v2 )
  {
    while ( 1 )
    {
      v3 = *(_DWORD *)(v2 - 4);
      if ( !v3 )
        break;
      v5 = *(_DWORD *)(a1 + 696);
      v6 = *(_QWORD *)(v2 + 8LL * (unsigned int)(v3 - 1));
      v7 = v3 - 1;
      v8 = *(_DWORD *)v6;
      if ( *(_DWORD *)v6 >= v5 || (*(_DWORD *)(*(_QWORD *)(a1 + 704) + 4LL * (v8 >> 5)) & (1 << v8)) == 0 )
      {
        v9 = *(_WORD *)(v6 + 4);
        if ( v9 == 1 )
        {
          sub_1872CE0("");
          sub_1873130(114, 156);
        }
        if ( v9 == 2 )
        {
          sub_1872CE0("");
          sub_1873130(114, 168);
        }
        if ( v9 )
        {
          sub_1872CE0("");
          sub_1873130(114, 171);
        }
        v12 = *(unsigned int *)(v6 + 24);
        if ( (_DWORD)v12 )
        {
          v13 = v6;
          v14 = v6 + 8 * v12;
          v15 = 1;
          while ( 1 )
          {
            v19 = *(unsigned __int32 **)(v13 + 32);
            if ( *v19 >= v5 || (*(_DWORD *)(*(_QWORD *)(a1 + 704) + 4LL * (*v19 >> 5)) & (1 << *v19)) == 0 )
            {
              v20 = *(_QWORD **)(a1 + 640);
              if ( v20 )
              {
                v21 = *((_DWORD *)v20 - 1);
                if ( v21 == *((_DWORD *)v20 - 2) )
                {
                  v22 = (3 * v21 + 1) >> 1;
                  v23 = 8 * v22 + 8;
                  if ( 8 * v21 + 8 >= (unsigned int)v23 || v21 >= v22 )
                  {
                    exception = (char **)__cxa_allocate_exception(0x28u);
                    sub_24ABB0(v79, "Overflow encountered when expanding vector");
                    *exception = (char *)off_1C63128;
                    sub_2333C0(exception + 1, v79);
                    sub_233E40((__int64)v79);
                    __cxa_throw(
                      exception,
                      (struct type_info *)&`typeinfo for'default_exception,
                      (void (*)(void *))sub_230E50);
                  }
                  v24 = (unsigned int *)sub_186B300(v20 - 1, v23);
                  v25 = v24[1];
                  v20 = v24 + 2;
                  *v24 = v22;
                  *(_QWORD *)(a1 + 640) = v24 + 2;
                  LODWORD(v24) = v25;
                  v18 = (unsigned __int32 **)&v20[v25];
                  v17 = (_DWORD)v24 + 1;
                }
                else
                {
                  v16 = v21;
                  v17 = v21 + 1;
                  v18 = (unsigned __int32 **)&v20[v16];
                }
              }
              else
              {
                v42 = (_QWORD *)sub_186B270(0x18u);
                v20 = v42 + 1;
                *v42 = 2;
                v17 = 1;
                *(_QWORD *)(a1 + 640) = v20;
                v18 = (unsigned __int32 **)v20;
              }
              *v18 = v19;
              v15 = 0;
              *((_DWORD *)v20 - 1) = v17;
            }
            v13 += 8;
            if ( v14 == v13 )
              break;
            v5 = *(_DWORD *)(a1 + 696);
          }
          if ( !v15 )
            goto LABEL_2;
          v8 = *(_DWORD *)v6;
          v5 = *(_DWORD *)(a1 + 696);
        }
        if ( v8 >= v5 )
        {
          v74.m128i_i32[0] = v8;
          sub_186B510(a1 + 696, v8 + 1, 0);
          v8 = v74.m128i_i32[0];
        }
        v26 = *(_QWORD *)a1;
        *(_DWORD *)(*(_QWORD *)(a1 + 704) + 4LL * (v8 >> 5)) |= 1 << v8;
        --*(_DWORD *)(*(_QWORD *)(a1 + 640) - 4LL);
        if ( (unsigned __int8)sub_15D26C0(v26, v6) )
          goto LABEL_2;
        v27 = *(_QWORD *)a1;
        v78.m128i_i64[0] = 0;
        v78.m128i_i64[1] = v27;
        if ( !(unsigned __int8)sub_DA0F40((__int64 *)a1, v6, v78.m128i_i64) )
        {
          v43 = v78.m128i_i64[0];
          if ( !v78.m128i_i64[0] )
            return 0;
          v44 = v78.m128i_i64[1];
          v45 = (*(_DWORD *)(v78.m128i_i64[0] + 8))-- == 1;
          if ( !v45 )
            return 0;
          sub_15D7BC0(v44, v43);
          return 0;
        }
        v28 = *(_DWORD *)(a1 + 624);
        v29 = _mm_loadl_epi64(&v78);
        if ( 3 * v28 < 4 * (*(_DWORD *)(a1 + 628) + *(_DWORD *)(a1 + 632)) )
        {
          v74.m128i_i32[0] = 2 * v28;
          v32 = 32LL * v28;
          v74.m128i_i64[1] = v29.m128i_i64[0];
          v61 = (__m128i *)sub_186B270(v32);
          v62 = v74.m128i_i32[0];
          v29 = _mm_loadl_epi64((const __m128i *)&v74.m128i_u64[1]);
          v30 = v61;
          v63 = &v61[v32 / 0x10];
          if ( v74.m128i_i32[0] )
          {
            if ( (v32 & 0x10) == 0 || (*v61 = 0, ++v61, v61 != v63) )
            {
              do
              {
                *v61 = 0;
                v61 += 2;
                v61[-1] = 0;
              }
              while ( v61 != v63 );
            }
          }
          v64 = *(__m128i **)(a1 + 616);
          v31 = v62 - 1;
          v33 = v63;
          v65 = v64;
          m128i_i64 = (__int64)v64[*(unsigned int *)(a1 + 624)].m128i_i64;
          if ( v64 != (__m128i *)m128i_i64 )
          {
            do
            {
              if ( v65->m128i_i64[0] > 1uLL )
              {
                v67 = 16LL * (*(_DWORD *)(v65->m128i_i64[0] + 12) & (unsigned int)v31);
                v68 = &v30[(unsigned __int64)v67 / 0x10];
                if ( v32 == v67 )
                {
LABEL_89:
                  if ( v30 == v68 )
                  {
LABEL_103:
                    v77 = v63;
                    v76 = v62;
                    v75 = v62 - 1;
                    v74.m128i_i64[1] = m128i_i64;
                    v74.m128i_i64[0] = v29.m128i_i64[0];
                    sub_1872CE0("");
                    sub_1873130(114, 213);
                  }
                  v69 = v30;
                  while ( v69->m128i_i64[0] )
                  {
                    if ( v68 == ++v69 )
                      goto LABEL_103;
                  }
                }
                else
                {
                  v69 = &v30[(unsigned __int64)v67 / 0x10];
                  while ( v69->m128i_i64[0] )
                  {
                    if ( v63 == ++v69 )
                      goto LABEL_89;
                  }
                }
                *v69 = _mm_loadu_si128(v65);
              }
              ++v65;
            }
            while ( (const __m128i *)m128i_i64 != v65 );
            v64 = *(__m128i **)(a1 + 616);
          }
          if ( v64 )
          {
            v75 = v62;
            v74.m128i_i32[2] = v62 - 1;
            v74.m128i_i64[0] = v29.m128i_i64[0];
            sub_186B220(v64);
            v62 = v75;
            v31 = v74.m128i_i32[2];
            v29 = _mm_loadl_epi64(&v74);
          }
          *(_QWORD *)(a1 + 616) = v30;
          *(_DWORD *)(a1 + 624) = v62;
          *(_DWORD *)(a1 + 632) = 0;
        }
        else
        {
          v30 = *(__m128i **)(a1 + 616);
          v31 = v28 - 1;
          v32 = 16LL * v28;
          v33 = &v30[v32 / 0x10];
        }
        v34 = *(_DWORD *)(v6 + 12);
        v35 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v6, v29);
        v36 = 16LL * (v34 & (unsigned int)v31);
        v37 = &v30[(unsigned __int64)v36 / 0x10];
        if ( v36 != v32 )
        {
          v38 = &v30[(unsigned __int64)v36 / 0x10];
          v39 = nullptr;
          while ( 1 )
          {
            v40 = v38->m128i_i64[0];
            if ( v38->m128i_i64[0] > 1uLL )
            {
              if ( *(_DWORD *)(v40 + 12) == v34 && v6 == v40 )
              {
                *v38 = v35;
                goto LABEL_62;
              }
            }
            else
            {
              if ( !v40 )
              {
                if ( v39 )
                  --*(_DWORD *)(a1 + 632);
                else
                  v39 = v38;
                *v39 = v35;
                ++*(_DWORD *)(a1 + 628);
                goto LABEL_62;
              }
              v39 = v38;
            }
            if ( ++v38 == v33 )
              goto LABEL_53;
          }
        }
        v39 = nullptr;
        while ( 1 )
        {
LABEL_53:
          if ( v37 == v30 )
          {
            sub_1872CE0("");
            sub_1873130(114, 405);
          }
          v41 = v30->m128i_i64[0];
          if ( v30->m128i_i64[0] > 1uLL )
          {
            if ( *(_DWORD *)(v41 + 12) == v34 && v6 == v41 )
            {
              *v30 = v35;
              goto LABEL_62;
            }
          }
          else
          {
            if ( !v41 )
            {
              if ( v39 )
              {
                --*(_DWORD *)(a1 + 632);
                v30 = v39;
              }
              *v30 = v35;
              ++*(_DWORD *)(a1 + 628);
LABEL_62:
              v46 = *(_QWORD **)(a1 + 40);
              ++*(_DWORD *)(v6 + 8);
              if ( v46 )
              {
                v47 = *((_DWORD *)v46 - 1);
                v48 = *((_DWORD *)v46 - 2);
                if ( v47 == v48 )
                {
                  v54 = (3 * v47 + 1) >> 1;
                  v55 = 8 * v54 + 8;
                  if ( 8 * v47 + 8 >= v55 || v47 >= v54 )
                  {
                    v72 = (char **)__cxa_allocate_exception(0x28u);
                    sub_24ABB0(v79, "Overflow encountered when expanding vector");
                    *v72 = (char *)off_1C63128;
                    sub_2333C0(v72 + 1, v79);
                    sub_233E40((__int64)v79);
                    __cxa_throw(v72, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
                  }
                  v56 = (unsigned int *)sub_186B300(v46 - 1, v55);
                  v46 = v56 + 2;
                  *v56 = v54;
                  v47 = v56[1];
                  v48 = v54;
                  *(_QWORD *)(a1 + 40) = v46;
                }
              }
              else
              {
                v70 = (_QWORD *)sub_186B270(0x18u);
                *v70 = 2;
                v46 = v70 + 1;
                v48 = 2;
                v47 = 0;
                *(_QWORD *)(a1 + 40) = v46;
              }
              v49 = v78.m128i_i64[0];
              v46[v47] = v6;
              v50 = v47 + 1;
              *((_DWORD *)v46 - 1) = v50;
              if ( !v49 )
              {
                if ( (_DWORD)v50 == v48 )
                  goto LABEL_72;
                v46[v50] = 0;
                *((_DWORD *)v46 - 1) = v47 + 2;
                goto LABEL_2;
              }
              ++*(_DWORD *)(v49 + 8);
              v51 = *((_DWORD *)v46 - 1);
              v48 = *((_DWORD *)v46 - 2);
              if ( v51 != v48 )
              {
                v52 = v49;
                v46[v51] = v49;
                *((_DWORD *)v46 - 1) = v51 + 1;
                goto LABEL_67;
              }
LABEL_72:
              v57 = (3 * v48 + 1) >> 1;
              v58 = 8 * v57 + 8;
              if ( 8 * v48 + 8 >= v58 || v48 >= v57 )
              {
                v73 = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0(v79, "Overflow encountered when expanding vector");
                *v73 = (char *)off_1C63128;
                sub_2333C0(v73 + 1, v79);
                sub_233E40((__int64)v79);
                __cxa_throw(v73, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
              v59 = (unsigned int *)sub_186B300(v46 - 1, v58);
              v60 = v59[1];
              v52 = v78.m128i_i64[0];
              *v59 = v57;
              *(_QWORD *)(a1 + 40) = v59 + 2;
              *(_QWORD *)&v59[2 * v60 + 2] = v49;
              v59[1] = v60 + 1;
              if ( !v52 )
                goto LABEL_2;
LABEL_67:
              v53 = v78.m128i_i64[1];
              v45 = (*(_DWORD *)(v52 + 8))-- == 1;
              if ( !v45 )
                goto LABEL_2;
              sub_15D7BC0(v53, v52);
              v2 = *(_QWORD *)(a1 + 640);
              goto LABEL_3;
            }
            v39 = v30;
          }
          ++v30;
        }
      }
      *(_DWORD *)(v2 - 4) = v7;
    }
  }
  return 1;
}

