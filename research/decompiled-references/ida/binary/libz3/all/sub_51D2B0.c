unsigned __int64 __fastcall sub_51D2B0(__int64 a1, __int64 a2, __int64 a3)
{
  char **exception; // rbp
  __int64 *v4; // rbx
  unsigned __int64 result; // rax
  __int64 v6; // r13
  __int64 v8; // r12
  int v9; // edi
  char *v10; // rcx
  __int64 v11; // rax
  unsigned int v12; // edx
  char *v13; // rsi
  __int64 v14; // rdx
  char *v15; // r8
  char *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rax
  unsigned __int64 v19; // rdx
  _QWORD **v20; // rbp
  _QWORD *v21; // r14
  _QWORD *v22; // rax
  _QWORD *v23; // rsi
  size_t v24; // rdx
  bool v25; // zf
  __int64 v26; // rax
  _QWORD *v27; // rsi
  unsigned int v28; // ebp
  _QWORD *v29; // rax
  size_t v30; // rdx
  __int64 v31; // r8
  unsigned int v32; // r10d
  __m128i *v33; // rbp
  unsigned int v34; // r9d
  __int64 v35; // r8
  __m128i *v36; // rax
  int v37; // esi
  __int64 v38; // r9
  __m128i *v39; // rdi
  __m128i *v40; // rdx
  __m128i *v41; // r8
  __int64 v42; // rcx
  __int64 v43; // rax
  size_t v44; // rdi
  unsigned int *v45; // rbp
  unsigned __int64 v46; // rax
  __int64 v47; // r11
  __int64 *v48; // r8
  unsigned __int64 v49; // rsi
  __int64 *v50; // rdi
  unsigned __int64 v51; // r8
  __int64 v52; // rsi
  __m128i v53; // xmm0
  unsigned __int64 v54; // r8
  __int64 *v55; // rsi
  __int64 v56; // rdi
  _QWORD *v57; // rbp
  _QWORD *v58; // r15
  __int64 v59; // r14
  __int64 *v60; // r12
  _QWORD *v61; // rbx
  void *v62; // rdi
  __m128i *v63; // rax
  int v64; // r10d
  __m128i *v65; // rdx
  const __m128i *v66; // rcx
  __m128i *v67; // r11
  __int64 v68; // rdx
  __m128i *v69; // rsi
  __m128i *v70; // rdx
  __m128i v71; // xmm0
  _DWORD *v72; // rsi
  __int64 v73; // rcx
  unsigned int v75; // [rsp+10h] [rbp-98h]
  unsigned __int64 v76; // [rsp+10h] [rbp-98h]
  unsigned __int64 v77; // [rsp+10h] [rbp-98h]
  size_t v78; // [rsp+10h] [rbp-98h]
  unsigned int v79; // [rsp+10h] [rbp-98h]
  unsigned int v80; // [rsp+18h] [rbp-90h]
  unsigned int v81; // [rsp+18h] [rbp-90h]
  __int64 v82; // [rsp+18h] [rbp-90h]
  size_t v83; // [rsp+18h] [rbp-90h]
  unsigned int *v84; // [rsp+20h] [rbp-88h]
  int v85; // [rsp+20h] [rbp-88h]
  __m128i *v86; // [rsp+20h] [rbp-88h]
  __int64 v87; // [rsp+28h] [rbp-80h]
  int v88; // [rsp+28h] [rbp-80h]
  unsigned int v89; // [rsp+38h] [rbp-70h]
  __int32 v90; // [rsp+38h] [rbp-70h]
  __int64 v91[11]; // [rsp+50h] [rbp-58h] BYREF

  v4 = *(__int64 **)a2;
  result = *(unsigned int *)(a2 + 8);
  v6 = *(_QWORD *)a2 + 8 * result;
  if ( *(_QWORD *)a2 != v6 )
  {
    while ( (unsigned __int64)*v4 <= 1 )
    {
      if ( (__int64 *)v6 == ++v4 )
        return result;
    }
    if ( (__int64 *)v6 != v4 )
    {
      v8 = *v4;
      while ( 1 )
      {
        v9 = *(_DWORD *)(v8 + 12);
        v10 = *(char **)(a1 + 24);
        v11 = *(unsigned int *)(a1 + 32);
        v12 = v11 - 1;
        v11 *= 16;
        v13 = &v10[v11];
        v14 = 16LL * (v9 & v12);
        v15 = &v10[v14];
        if ( v14 == v11 )
        {
LABEL_15:
          while ( v15 != v10 )
          {
            v18 = *(_QWORD *)v10;
            if ( *(_QWORD *)v10 > 1u )
            {
              if ( *(_DWORD *)(v18 + 12) == v9 && v18 == v8 )
              {
                v16 = v10;
                goto LABEL_24;
              }
            }
            else if ( !v18 )
            {
              break;
            }
            v10 += 16;
          }
LABEL_121:
          BUG();
        }
        v16 = &v10[v14];
        while ( 1 )
        {
          while ( 1 )
          {
            v17 = *(_QWORD *)v16;
            if ( *(_QWORD *)v16 > 1u )
              break;
            if ( !v17 )
              goto LABEL_121;
            v16 += 16;
            if ( v13 == v16 )
              goto LABEL_15;
          }
          if ( *(_DWORD *)(v17 + 12) == v9 && v17 == v8 )
            break;
          v16 += 16;
          if ( v13 == v16 )
            goto LABEL_15;
        }
LABEL_24:
        v19 = *(_QWORD *)(a1 + 48);
        v20 = (_QWORD **)(v19 + 8LL * *((unsigned int *)v16 + 2));
        v21 = *v20;
        if ( !*v20 )
          goto LABEL_29;
        v75 = _mm_cvtsi128_si32(_mm_cvtsi32_si128(*((_DWORD *)v21 - 1)));
        v89 = *((_DWORD *)v21 - 2);
        v22 = (_QWORD *)sub_186B270(8LL * v89 + 8);
        v23 = *v20;
        v21 = v22 + 1;
        *v22 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v89), _mm_cvtsi32_si128(v75)).m128i_u64[0];
        if ( v23 )
        {
          v24 = 8LL * *((unsigned int *)v23 - 1);
          v25 = v24 == 8;
          if ( v24 <= 8 )
          {
            v19 = *(_QWORD *)(a1 + 48);
            if ( v25 )
              v22[1] = *v23;
            goto LABEL_29;
          }
          memmove(v22 + 1, v23, v24);
        }
        v19 = *(_QWORD *)(a1 + 48);
LABEL_29:
        if ( v19 )
        {
          LODWORD(v26) = *(_DWORD *)(v19 - 4);
          v90 = v26;
          if ( (_DWORD)v26 == *(_DWORD *)(v19 - 8) )
          {
            v81 = (unsigned int)(3 * v26 + 1) >> 1;
            v44 = 8 * v81 + 8;
            if ( 8 * (int)v26 + 8 >= (unsigned int)v44 || (unsigned int)v26 >= (unsigned int)(3 * v26 + 1) >> 1 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v91, "Overflow encountered when expanding vector");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, v91);
              sub_233E40((__int64)v91);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v45 = (unsigned int *)sub_186B270(v44);
            v19 = (unsigned __int64)(v45 + 2);
            v46 = *(_QWORD *)(a1 + 48);
            if ( v46 )
            {
              v47 = *(unsigned int *)(v46 - 4);
              v45[1] = v47;
              v48 = (__int64 *)(v46 + 8 * v47);
              if ( (__int64 *)v46 != v48 )
              {
                v49 = 8 * v47 - 8;
                v50 = (__int64 *)v46;
                if ( v49 <= 8 || v19 < v46 + 16 && v46 < (unsigned __int64)(v45 + 6) )
                {
                  v72 = v45 + 2;
                  do
                  {
                    v73 = *v50;
                    *v50++ = 0;
                    v72 += 2;
                    *((_QWORD *)v72 - 1) = v73;
                  }
                  while ( v50 != v48 );
                }
                else
                {
                  v51 = (v49 >> 3) + 1;
                  v52 = 0;
                  do
                  {
                    v53 = _mm_loadu_si128((const __m128i *)(v46 + v52 * 4));
                    *(_OWORD *)(v46 + v52 * 4) = 0;
                    *(__m128i *)&v45[v52 + 2] = v53;
                    v52 += 4;
                  }
                  while ( v52 != 4 * (v51 >> 1) );
                  if ( (v51 & 1) != 0 )
                  {
                    v54 = v51 & 0xFFFFFFFFFFFFFFFELL;
                    v55 = (__int64 *)(v46 + 8 * v54);
                    v56 = *v55;
                    *v55 = 0;
                    *(_QWORD *)(v19 + 8 * v54) = v56;
                  }
                }
              }
              if ( (_DWORD)v47 )
              {
                v84 = v45;
                v57 = (_QWORD *)(v46 + 8 * v47);
                v87 = a3;
                v58 = v21;
                v59 = v8;
                v60 = v4;
                v61 = (_QWORD *)v46;
                do
                {
                  while ( *v61 )
                  {
                    v62 = (void *)(*v61++ - 8LL);
                    v76 = v19;
                    sub_186B220(v62);
                    v19 = v76;
                    if ( v57 == v61 )
                      goto LABEL_67;
                  }
                  ++v61;
                }
                while ( v61 != v57 );
LABEL_67:
                v4 = v60;
                v45 = v84;
                v8 = v59;
                v21 = v58;
                a3 = v87;
                v46 = *(_QWORD *)(a1 + 48);
              }
              v77 = v19;
              sub_186B220((void *)(v46 - 8));
              v19 = v77;
              v26 = v45[1];
              v27 = (_QWORD *)(v77 + 8 * v26);
            }
            else
            {
              v45[1] = 0;
              v27 = v45 + 2;
              LODWORD(v26) = 0;
            }
            *(_QWORD *)(a1 + 48) = v19;
            *v45 = v81;
          }
          else
          {
            v27 = (_QWORD *)(v19 + 8LL * (unsigned int)v26);
          }
        }
        else
        {
          v26 = sub_186B270(0x18u);
          v19 = v26 + 8;
          v90 = 0;
          v27 = (_QWORD *)(v26 + 8);
          *(_QWORD *)v26 = 2;
          *(_QWORD *)(a1 + 48) = v26 + 8;
          LODWORD(v26) = 0;
        }
        *v27 = 0;
        if ( v21 )
        {
          v28 = *((_DWORD *)v21 - 1);
          v80 = *((_DWORD *)v21 - 2);
          v29 = (_QWORD *)sub_186B270(8LL * v80 + 8);
          v30 = 8LL * *((unsigned int *)v21 - 1);
          *v29 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v80), _mm_cvtsi32_si128(v28)).m128i_u64[0];
          *v27 = v29 + 1;
          if ( v30 <= 8 )
          {
            if ( v30 == 8 )
              v29[1] = *v21;
            v19 = *(_QWORD *)(a1 + 48);
            LODWORD(v26) = *(_DWORD *)(v19 - 4);
          }
          else
          {
            memcpy(v29 + 1, v21, v30);
            v19 = *(_QWORD *)(a1 + 48);
            LODWORD(v26) = *(_DWORD *)(v19 - 4);
          }
        }
        *(_DWORD *)(v19 - 4) = v26 + 1;
        v31 = *(unsigned int *)(a3 + 8);
        v32 = 2 * v31;
        if ( 3 * (int)v31 < (unsigned int)(4 * (*(_DWORD *)(a3 + 12) + *(_DWORD *)(a3 + 16))) )
        {
          v85 = 2 * v31;
          v82 = v32;
          v78 = 16LL * v32;
          v63 = (__m128i *)sub_186B270(v78);
          v64 = v85;
          v33 = v63;
          v35 = v78;
          v65 = &v63[v82];
          if ( v85 )
          {
            do
            {
              v63->m128i_i64[0] = 0;
              ++v63;
              v63[-1].m128i_i32[2] = 0;
            }
            while ( v63 != v65 );
          }
          v66 = *(const __m128i **)a3;
          v34 = v85 - 1;
          v36 = &v33[v78 / 0x10];
          v67 = (__m128i *)(*(_QWORD *)a3 + 16LL * *(unsigned int *)(a3 + 8));
          if ( *(__m128i **)a3 != v67 )
          {
            do
            {
              while ( v66->m128i_i64[0] <= 1uLL )
              {
                if ( v67 == ++v66 )
                  goto LABEL_92;
              }
              v68 = 16LL * (*(_DWORD *)(v66->m128i_i64[0] + 12) & v34);
              v69 = &v33[(unsigned __int64)v68 / 0x10];
              if ( v78 == v68 )
              {
LABEL_96:
                if ( v33 == v69 )
                {
LABEL_104:
                  sub_1872CE0("");
                  sub_1873130(114, 213);
                }
                v70 = v33;
                while ( v70->m128i_i64[0] )
                {
                  if ( v69 == ++v70 )
                    goto LABEL_104;
                }
              }
              else
              {
                v70 = &v33[(unsigned __int64)v68 / 0x10];
                while ( v70->m128i_i64[0] )
                {
                  if ( v36 == ++v70 )
                    goto LABEL_96;
                }
              }
              v71 = _mm_loadu_si128(v66++);
              *v70 = v71;
            }
            while ( v67 != v66 );
LABEL_92:
            v67 = *(__m128i **)a3;
          }
          if ( v67 )
          {
            v88 = v85;
            v86 = &v33[v78 / 0x10];
            v83 = v78;
            v79 = v64 - 1;
            sub_186B220(v67);
            v64 = v88;
            v36 = v86;
            v35 = v83;
            v34 = v79;
          }
          *(_QWORD *)a3 = v33;
          *(_DWORD *)(a3 + 8) = v64;
          *(_DWORD *)(a3 + 16) = 0;
        }
        else
        {
          v33 = *(__m128i **)a3;
          v34 = v31 - 1;
          v35 = 16 * v31;
          v36 = (__m128i *)(*(_QWORD *)a3 + v35);
        }
        v37 = *(_DWORD *)(v8 + 12);
        v38 = 16LL * (v37 & v34);
        v39 = &v33[(unsigned __int64)v38 / 0x10];
        if ( v38 != v35 )
        {
          v40 = &v33[(unsigned __int64)v38 / 0x10];
          v41 = nullptr;
          while ( 1 )
          {
            v42 = v40->m128i_i64[0];
            if ( v40->m128i_i64[0] > 1uLL )
            {
              if ( *(_DWORD *)(v42 + 12) == v37 && v42 == v8 )
              {
                v40->m128i_i64[0] = v8;
                v40->m128i_i32[2] = v90;
                goto LABEL_73;
              }
            }
            else
            {
              if ( !v42 )
              {
                if ( v41 )
                  goto LABEL_102;
                v41 = v40;
                goto LABEL_103;
              }
              v41 = v40;
            }
            if ( ++v40 == v36 )
              goto LABEL_48;
          }
        }
        v41 = nullptr;
        while ( 1 )
        {
LABEL_48:
          if ( v39 == v33 )
          {
            sub_1872CE0("");
            sub_1873130(114, 405);
          }
          v43 = v33->m128i_i64[0];
          if ( v33->m128i_i64[0] <= 1uLL )
            break;
          if ( *(_DWORD *)(v43 + 12) == v37 && v43 == v8 )
          {
            v33->m128i_i64[0] = v8;
            v33->m128i_i32[2] = v90;
            goto LABEL_73;
          }
LABEL_47:
          ++v33;
        }
        if ( v43 )
        {
          v41 = v33;
          goto LABEL_47;
        }
        if ( v41 )
LABEL_102:
          --*(_DWORD *)(a3 + 16);
        else
          v41 = v33;
LABEL_103:
        v41->m128i_i64[0] = v8;
        v41->m128i_i32[2] = v90;
        ++*(_DWORD *)(a3 + 12);
LABEL_73:
        if ( v21 )
          sub_186B220(v21 - 1);
        result = (unsigned __int64)(v4 + 1);
        if ( (__int64 *)v6 != v4 + 1 )
        {
          while ( 1 )
          {
            v8 = *(_QWORD *)result;
            v4 = (__int64 *)result;
            if ( *(_QWORD *)result > 1u )
              break;
            result += 8LL;
            if ( v6 == result )
              return result;
          }
          if ( v6 != result )
            continue;
        }
        return result;
      }
    }
  }
  return result;
}

