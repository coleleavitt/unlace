__int64 __fastcall sub_DFCB90(__int64 a1, unsigned __int64 *a2)
{
  _QWORD *exception; // rbx
  unsigned __int64 v3; // r10
  unsigned int v6; // esi
  __int64 v7; // rdi
  __int64 v8; // rax
  unsigned __int64 v9; // r10
  unsigned __int64 v10; // r14
  unsigned __int64 v11; // r12
  unsigned __int64 *v12; // rax
  __int64 v13; // rdx
  unsigned __int64 *v14; // rcx
  __int64 v15; // rax
  int v16; // esi
  __int64 *v17; // r8
  unsigned int v18; // edx
  __int64 *v19; // rcx
  __int64 v20; // rdx
  __int64 *v21; // rdi
  __int64 *i; // rax
  __int64 v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // rsi
  unsigned __int64 v26; // r8
  unsigned __int64 v27; // rdi
  __int64 v28; // rax
  __m128i *v29; // r9
  int v30; // edx
  __int64 result; // rax
  __m128i *v32; // rcx
  __int64 v33; // rdx
  __m128i *v34; // rsi
  __int32 v35; // edx
  char *v36; // rsi
  unsigned int v37; // edx
  __int64 v38; // rdi
  _QWORD *v39; // rsi
  __int64 v40; // rdi
  unsigned int v41; // edx
  int v42; // eax
  unsigned int v43; // eax
  __m128i *v44; // rax
  __m128i *v45; // rcx
  __m128i *v46; // rdx
  __int64 v47; // rax
  const __m128i *v48; // r15
  unsigned int v49; // r11d
  __m128i *v50; // r9
  __int64 v51; // r10
  __m128i *v52; // r8
  __int64 v53; // rax
  __m128i *v54; // rdx
  __m128i *v55; // rax
  __int32 v56; // edx
  int v57; // eax
  unsigned int v58; // r12d
  __int64 v59; // rbx
  __int64 v60; // rax
  __int64 v61; // rax
  __m128i *v62; // rdi
  unsigned int v63; // r15d
  const __m128i *v64; // rbp
  __int64 v65; // r14
  __int64 v66; // rax
  __m128i *v67; // rdx
  unsigned int v68; // [rsp+8h] [rbp-70h]
  __m128i *v69; // [rsp+8h] [rbp-70h]
  __m128i *v70; // [rsp+8h] [rbp-70h]
  unsigned __int64 v71[9]; // [rsp+30h] [rbp-48h] BYREF

  if ( !*(_BYTE *)(a1 + 257) )
  {
    exception = __cxa_allocate_exception(0x30u);
    sub_305660(
      exception,
      "function declarations can only be erased when global declarations (instead of scoped) are used");
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'cmd_exception, (void (*)(void *))sub_3053E0);
  }
  v3 = *a2;
  v6 = *(_DWORD *)(a1 + 632);
  v7 = *(_QWORD *)(a1 + 624);
  v71[0] = v3;
  v8 = sub_DF6190(v7, v6, v71);
  if ( v8 )
  {
    v10 = *(_QWORD *)(v8 + 16);
    if ( v10 )
    {
      while ( 1 )
      {
        v11 = v10 & 0xFFFFFFFFFFFFFFF8LL;
        if ( (v10 & 7) != 0 )
        {
          v12 = *(unsigned __int64 **)v11;
          v13 = *(_QWORD *)v11 + 8LL * *(unsigned int *)(v11 + 8);
          if ( *(_QWORD *)v11 == v13 )
          {
            v11 = *v12;
          }
          else
          {
            while ( 1 )
            {
              v11 = *v12;
              v14 = v12;
              if ( *v12 > 1 )
                break;
              if ( (unsigned __int64 *)v13 == ++v12 )
              {
                v11 = v14[1];
                break;
              }
            }
          }
        }
        if ( *(_QWORD *)(v11 + 16) == v9 )
          goto LABEL_17;
        v15 = *(unsigned int *)(a1 + 656);
        v16 = *(_DWORD *)(v11 + 12);
        v17 = *(__int64 **)(a1 + 648);
        v18 = v15 - 1;
        v15 *= 16;
        v19 = (__int64 *)((char *)v17 + v15);
        v20 = 16LL * (v16 & v18);
        v21 = &v17[(unsigned __int64)v20 / 8];
        if ( v20 != v15 )
        {
          for ( i = &v17[(unsigned __int64)v20 / 8]; v19 != i; i += 2 )
          {
            v23 = *i;
            if ( (unsigned __int64)*i > 1 )
            {
              if ( *(_DWORD *)(v23 + 12) == v16 && v11 == v23 )
              {
LABEL_43:
                v39 = i + 2;
                v40 = *(unsigned int *)(a1 + 660);
                if ( v19 == i + 2 )
                  v39 = *(_QWORD **)(a1 + 648);
                v41 = v40 - 1;
                if ( *v39 )
                {
                  *i = 1;
                  v42 = *(_DWORD *)(a1 + 664);
                  *(_DWORD *)(a1 + 660) = v41;
                  v43 = v42 + 1;
                  if ( v41 < 0x40 )
                    v41 = 64;
                  *(_DWORD *)(a1 + 664) = v43;
                  if ( v41 < v43 && !(unsigned __int8)sub_186AF10(v40) )
                  {
                    v68 = *(_DWORD *)(a1 + 656);
                    v44 = (__m128i *)sub_186B270(16LL * v68);
                    v45 = v44;
                    v46 = &v44[v68];
                    if ( v68 )
                    {
                      if ( ((16 * (_BYTE)v68) & 0x10) == 0 || (*v44 = 0, ++v44, v46 != v44) )
                      {
                        do
                        {
                          *v44 = 0;
                          v44 += 2;
                          v44[-1] = 0;
                        }
                        while ( v46 != v44 );
                      }
                    }
                    v47 = *(unsigned int *)(a1 + 656);
                    v48 = *(const __m128i **)(a1 + 648);
                    v49 = v47 - 1;
                    v47 *= 16;
                    v50 = (__m128i *)((char *)v48 + v47);
                    v51 = v47;
                    v52 = (__m128i *)((char *)v45 + v47);
                    if ( v48 != (const __m128i *)&v48->m128i_i8[v47] )
                    {
                      do
                      {
                        if ( v48->m128i_i64[0] > 1uLL )
                        {
                          v53 = 16LL * (*(_DWORD *)(v48->m128i_i64[0] + 12) & v49);
                          v54 = &v45[(unsigned __int64)v53 / 0x10];
                          if ( v51 == v53 )
                          {
LABEL_89:
                            if ( v45 == v54 )
                            {
LABEL_98:
                              sub_1872CE0("");
                              sub_1873130(114, 213);
                            }
                            v55 = v45;
                            while ( v55->m128i_i64[0] )
                            {
                              if ( v54 == ++v55 )
                                goto LABEL_98;
                            }
                          }
                          else
                          {
                            v55 = &v45[(unsigned __int64)v53 / 0x10];
                            while ( v55->m128i_i64[0] )
                            {
                              if ( v52 == ++v55 )
                                goto LABEL_89;
                            }
                          }
                          *v55 = _mm_loadu_si128(v48);
                        }
                        ++v48;
                      }
                      while ( v50 != v48 );
                      v50 = *(__m128i **)(a1 + 648);
                    }
                    if ( v50 )
                    {
                      v70 = v45;
                      sub_186B220(v50);
                      v45 = v70;
                    }
                    *(_QWORD *)(a1 + 648) = v45;
                    *(_DWORD *)(a1 + 664) = 0;
                  }
                }
                else
                {
                  *i = 0;
                  *(_DWORD *)(a1 + 660) = v41;
                }
                goto LABEL_17;
              }
            }
            else if ( !v23 )
            {
              goto LABEL_17;
            }
          }
        }
        if ( v17 != v21 )
        {
          for ( i = *(__int64 **)(a1 + 648); v21 != i; i += 2 )
          {
            v24 = *i;
            if ( (unsigned __int64)*i > 1 )
            {
              if ( *(_DWORD *)(v24 + 12) == v16 && v11 == v24 )
                goto LABEL_43;
            }
            else if ( !v24 )
            {
              break;
            }
          }
        }
LABEL_17:
        sub_DFBCB0(a1);
        v71[0] = v10;
        sub_DF6AF0(v71, *(_QWORD *)(a1 + 296), v11);
        v10 = v71[0];
        if ( !v71[0] )
          break;
        v9 = *a2;
      }
    }
  }
  sub_DFBCB0(a1);
  v25 = *(_QWORD *)(a1 + 296);
  v71[0] = 0;
  sub_DF67D0(v71, v25);
  v26 = *a2;
  if ( *a2 )
  {
    if ( (*a2 & 7) == 1 )
      v27 = v26 >> 3;
    else
      LODWORD(v27) = *(_DWORD *)(v26 - 8);
  }
  else
  {
    LODWORD(v27) = -1640531495;
  }
  v28 = *(unsigned int *)(a1 + 632);
  v29 = *(__m128i **)(a1 + 624);
  v30 = v28 - 1;
  result = 24 * v28;
  v32 = (__m128i *)((char *)v29 + result);
  v33 = 24LL * ((unsigned int)v27 & v30);
  v34 = (__m128i *)((char *)v29 + v33);
  if ( v33 != result )
  {
    for ( result = (__int64)&v29->m128i_i64[(unsigned __int64)v33 / 8]; v32 != (__m128i *)result; result += 24 )
    {
      v35 = *(_DWORD *)(result + 4);
      if ( v35 == 2 )
      {
        if ( (_DWORD)v27 == *(_DWORD *)result && *(_QWORD *)(result + 8) == v26 )
        {
LABEL_38:
          v36 = (char *)(result + 24);
          if ( v32 == (__m128i *)(result + 24) )
            v36 = *(char **)(a1 + 624);
          v37 = *(_DWORD *)(a1 + 636) - 1;
          v38 = *((unsigned int *)v36 + 1);
          if ( (_DWORD)v38 )
          {
            *(_DWORD *)(result + 4) = 1;
            v57 = *(_DWORD *)(a1 + 640);
            *(_DWORD *)(a1 + 636) = v37;
            result = (unsigned int)(v57 + 1);
            if ( v37 < 0x40 )
              v37 = 64;
            *(_DWORD *)(a1 + 640) = result;
            if ( v37 < (unsigned int)result )
            {
              result = sub_186AF10(v38);
              if ( !(_BYTE)result )
              {
                v58 = *(_DWORD *)(a1 + 632);
                v59 = sub_186B270(24LL * v58);
                v60 = v59 + 8;
                if ( v58 )
                {
                  do
                  {
                    *(_QWORD *)(v60 - 8) = 0;
                    v60 += 24;
                    *(_QWORD *)(v60 - 24) = 0;
                    *(_QWORD *)(v60 - 16) = 0;
                  }
                  while ( v60 != v59 + 24LL * v58 + 8 );
                }
                v61 = *(unsigned int *)(a1 + 632);
                v62 = *(__m128i **)(a1 + 624);
                v63 = v61 - 1;
                v64 = v62;
                v65 = 24 * v61;
                result = v59 + 24 * v61;
                v69 = (__m128i *)result;
                if ( v62 != (__m128i *)&v62->m128i_i8[v65] )
                {
                  do
                  {
                    if ( v64->m128i_i32[1] == 2 )
                    {
                      v66 = 24LL * (v64->m128i_i32[0] & v63);
                      v67 = (__m128i *)(v59 + v66);
                      if ( v65 == v66 )
                      {
LABEL_103:
                        if ( v67 == (__m128i *)v59 )
                        {
LABEL_108:
                          sub_1872CE0("");
                          sub_1873130(114, 213);
                        }
                        result = v59;
                        while ( *(_DWORD *)(result + 4) )
                        {
                          result += 24;
                          if ( v67 == (__m128i *)result )
                            goto LABEL_108;
                        }
                      }
                      else
                      {
                        result = v59 + v66;
                        while ( *(_DWORD *)(result + 4) )
                        {
                          result += 24;
                          if ( v69 == (__m128i *)result )
                            goto LABEL_103;
                        }
                      }
                      *(__m128i *)result = _mm_loadu_si128(v64);
                      *(_QWORD *)(result + 16) = v64[1].m128i_i64[0];
                    }
                    v64 = (const __m128i *)((char *)v64 + 24);
                  }
                  while ( &v62->m128i_i8[v65] != (__int8 *)v64 );
                  v62 = *(__m128i **)(a1 + 624);
                }
                if ( v62 )
                  result = sub_186B220(v62);
                *(_QWORD *)(a1 + 624) = v59;
                *(_DWORD *)(a1 + 640) = 0;
              }
            }
          }
          else
          {
            *(_DWORD *)(result + 4) = 0;
            *(_DWORD *)(a1 + 636) = v37;
          }
          return result;
        }
      }
      else if ( !v35 )
      {
        return result;
      }
    }
  }
  if ( v29 != v34 )
  {
    for ( result = *(_QWORD *)(a1 + 624); v34 != (__m128i *)result; result += 24 )
    {
      v56 = *(_DWORD *)(result + 4);
      if ( v56 == 2 )
      {
        if ( (_DWORD)v27 == *(_DWORD *)result && v26 == *(_QWORD *)(result + 8) )
          goto LABEL_38;
      }
      else if ( !v56 )
      {
        return result;
      }
    }
  }
  return result;
}

