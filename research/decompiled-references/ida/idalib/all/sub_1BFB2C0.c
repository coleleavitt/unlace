__int64 __fastcall sub_1BFB2C0(__int64 a1, _QWORD *a2, double a3, __m128 a4, __int64 a5, unsigned __int64 a6)
{
  __int64 v6; // rax
  __int64 v8; // r12
  __int64 v9; // r13
  __int64 v10; // rax
  __int64 *v11; // r15
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 *i; // rbp
  _QWORD *v15; // rax
  unsigned __int64 v16; // rax
  __int64 v17; // rdx
  unsigned __int64 v18; // r14
  __int64 v19; // rax
  unsigned __int64 v20; // rax
  __int64 v21; // r9
  _QWORD *v22; // rax
  __int64 v23; // rdx
  __int64 v24; // r8
  int v25; // esi
  __int64 v26; // rcx
  __m128 *v27; // rdi
  unsigned __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // r8
  __m128i v31; // xmm0
  __int64 v32; // rdx
  __int64 v33; // rdi
  __int64 v34; // rcx
  __int64 *v35; // r12
  __int64 v37; // r13
  __int64 v38; // rax
  char *v39; // rdi
  __int64 *v40; // r15
  char *v41; // rax
  __int64 *v42; // rbp
  __int64 v43; // r14
  unsigned __int64 v44; // r12
  unsigned __int64 v45; // rsi
  char *v46; // rdi
  __int64 v47; // rdx
  unsigned __int64 *v48; // r10
  char *v49; // rax
  char v50; // dl
  char *v51; // rsi
  char *v52; // rax
  char *v53; // rdi
  __int64 v54; // rax
  __int64 *v55; // r10
  __int64 *v56; // r15
  __int64 v57; // r14
  unsigned __int64 v58; // rbp
  char *v59; // rsi
  __int64 v60; // rdx
  unsigned __int64 *v61; // rdi
  char *v62; // rax
  char v63; // dl
  char *v64; // rdi
  int v65; // r8d
  unsigned int j; // eax
  _QWORD *v67; // rdx
  unsigned int v68; // eax
  __int64 v69; // rdx
  __int64 v70; // r8
  __int64 v71; // rdx
  __m128i v72; // xmm0
  __int64 v73; // rcx
  __int64 v74; // rdi
  __m128i v75; // [rsp+0h] [rbp-108h] BYREF
  char v76; // [rsp+17h] [rbp-F1h]
  __m128 *v77; // [rsp+18h] [rbp-F0h]
  __int64 **v78; // [rsp+20h] [rbp-E8h]
  unsigned __int64 v79; // [rsp+28h] [rbp-E0h] BYREF
  _QWORD *v80; // [rsp+38h] [rbp-D0h] BYREF
  __m128 v81; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v82; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v83; // [rsp+58h] [rbp-B0h]
  unsigned int v84; // [rsp+60h] [rbp-A8h]
  void *ptr; // [rsp+70h] [rbp-98h] BYREF
  __int64 v86; // [rsp+78h] [rbp-90h]
  int v87; // [rsp+80h] [rbp-88h]
  unsigned __int8 v88; // [rsp+84h] [rbp-84h]

  v6 = *(_QWORD *)(a1 + 16);
  v76 = (char)a2;
  v82 = 0;
  v83 = 0;
  v84 = 0;
  if ( !(_DWORD)v6 )
    return operator delete(v82, 16LL * v84, 8);
  v8 = 0;
  v75.m128i_i64[0] = (__int64)&ptr;
  v9 = 72 * (9LL * (unsigned int)(v6 - 1) + 9);
  v78 = &v80;
  v77 = &v81;
  v75.m128i_i64[1] = (__int64)&v82;
  do
  {
    if ( *(_DWORD *)(**(_QWORD **)(a1 + 48) + v8 + 240) )
    {
      v10 = *(_QWORD *)(a1 + 56);
      v11 = *(__int64 **)v10;
      v12 = *(unsigned int *)(v10 + 8);
      v13 = 5 * v12;
      for ( i = &v11[21 * v12]; i != v11; v11 += 21 )
      {
        if ( (v11[13] & 1) != 0
          && *v11
          && (unsigned int)sub_B76070(*v11, (__int64)a2, v13, a6) == 2
          && !(unsigned __int8)sub_B77A80(*v11) )
        {
          v15 = *(_QWORD **)(*v11 + 120);
          if ( (*((_BYTE *)v11 + 105) & 2) != 0 )
          {
            ptr = *(void **)(v15[1] + 48LL);
            v16 = sub_6D5440(v75.m128i_i64[0]);
            v17 = *v11;
            v18 = v16;
            v19 = 0;
          }
          else
          {
            ptr = *(void **)(*v15 + 48LL);
            v28 = sub_6D5440(v75.m128i_i64[0]);
            v17 = *v11;
            v18 = v28;
            v19 = 8;
          }
          ptr = *(void **)(*(_QWORD *)(*(_QWORD *)(v17 + 120) + v19) + 48LL);
          v20 = sub_6D5440(v75.m128i_i64[0]);
          a6 = v18 & 0xFFFFFFFFFFFFFFF0LL;
          v13 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v18 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
          if ( *(_BYTE *)(v13 + 16) == 47 )
          {
            a2 = (_QWORD *)(v20 & 0xFFFFFFFFFFFFFFF0LL);
            v13 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v20 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
            if ( *(_BYTE *)(v13 + 16) == 47 )
            {
              v79 = *(_QWORD *)&byte_8[v20 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
                  | ((unsigned __int8)*(_QWORD *)&byte_8[v20 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v20) & 7;
              v81 = _mm_loadh_ps((const double *)&v79);
              if ( !(unsigned __int8)sub_1BDA3A0((__int64 *)v75.m128i_i64[1], (unsigned __int64 *)v77, v78) )
              {
                v22 = v80;
                v23 = (unsigned int)(v83 + 1);
                ptr = v80;
                v24 = (unsigned int)(4 * v23);
                v25 = 2 * v84;
                if ( (unsigned int)v24 < 3 * v84 )
                {
                  if ( v84 - HIDWORD(v83) - (unsigned int)v23 > v84 >> 3 )
                    goto LABEL_19;
                  v25 = v84;
                }
                sub_1BE38E0(v75.m128i_i64[1], v25, v23, v84, v24, v21);
                sub_1BDA3A0((__int64 *)v75.m128i_i64[1], (unsigned __int64 *)v77, (__int64 **)v75.m128i_i64[0]);
                LODWORD(v23) = v83 + 1;
                v22 = ptr;
LABEL_19:
                LODWORD(v83) = v23;
                if ( *v22 || v22[1] )
                  --HIDWORD(v83);
                v26 = v75.m128i_i64[1];
                a2 = v22;
                v27 = (__m128 *)v75.m128i_i64[0];
                *v22 = v81.m128_u64[0];
                v80 = v22;
                v22[1] = v81.m128_u64[1];
                sub_1BDA990(v27, v22, (_QWORD *)(v82 + 16LL * v84), v26, 1);
                continue;
              }
              a2 = v80;
              sub_1BDA990((__m128 *)v75.m128i_i64[0], v80, (_QWORD *)(v82 + 16LL * v84), v75.m128i_i64[1], 1);
            }
          }
        }
      }
    }
    v8 += 648;
  }
  while ( v9 != v8 );
  v37 = v75.m128i_i64[0];
  v38 = *(_QWORD *)(a1 + 16);
  v86 = 8;
  v87 = 0;
  v88 = 1;
  ptr = (void *)(v75.m128i_i64[0] + 24);
  if ( !(_DWORD)v38 )
    return operator delete(v82, 16LL * v84, 8);
  LOBYTE(v34) = 1;
  v77 = nullptr;
  v75.m128i_i64[1] = (__int64)&v81;
  v78 = (__int64 **)(72 * (9LL * (unsigned int)(v38 - 1) + 9));
  do
  {
    v39 = (char *)v77 + **(_QWORD **)(a1 + 48);
    v40 = *((__int64 **)v39 + 3);
    v41 = v39;
    v42 = &v40[*((unsigned int *)v39 + 8)];
    if ( v40 == v42 )
      goto LABEL_54;
    do
    {
      v43 = *v40;
      v44 = *v40 & 0xFFFFFFFFFFFFFFF0LL;
      v45 = *(_QWORD *)&byte_8[v44] & 0xFFFFFFFFFFFFFFF8LL
          | ((unsigned __int8)*v40 | (unsigned __int8)*(_QWORD *)&byte_8[v44]) & 7;
      if ( !(_BYTE)v34 )
        goto LABEL_81;
      v46 = (char *)ptr;
      v47 = 8LL * HIDWORD(v86);
      v48 = (unsigned __int64 *)((char *)ptr + v47);
      if ( ptr != (char *)ptr + v47 )
      {
        v49 = (char *)ptr;
        if ( v45 == *(_QWORD *)ptr )
        {
LABEL_84:
          v50 = 0;
          goto LABEL_41;
        }
        while ( 1 )
        {
          v49 += 8;
          if ( v48 == (unsigned __int64 *)v49 )
            break;
          if ( v45 == *(_QWORD *)v49 )
            goto LABEL_84;
        }
      }
      if ( HIDWORD(v86) < (unsigned int)v86 )
      {
        ++HIDWORD(v86);
        *v48 = v45;
        v46 = (char *)ptr;
        v49 = (char *)ptr + v47;
        v50 = v34;
      }
      else
      {
LABEL_81:
        v49 = (char *)sub_2236760(v37, v45);
        v34 = v88;
        v46 = (char *)ptr;
        if ( !v88 )
        {
          v51 = (char *)ptr + 8 * (unsigned int)v86;
          goto LABEL_42;
        }
      }
LABEL_41:
      v51 = &v46[8 * HIDWORD(v86)];
      v34 = 1;
LABEL_42:
      if ( v51 != v49 && *(_QWORD *)v49 >= 0xFFFFFFFFFFFFFFFELL )
      {
        v52 = v49 + 8;
        do
        {
          v53 = v52;
          if ( v51 == v52 )
            break;
          v52 += 8;
        }
        while ( *(_QWORD *)v53 >= 0xFFFFFFFFFFFFFFFELL );
      }
      if ( v50 )
      {
        if ( !v76
          || (v54 = *(_QWORD *)v44, *(_BYTE *)(*(_QWORD *)v44 + 16LL) != 42)
          && ((v69 = *(_QWORD *)(*(_QWORD *)(v54 + 8) & 0xFFFFFFFFFFFFFFF0LL), *(_BYTE *)(v69 + 16) != 42)
           || (v54 = sub_F63050(*(_QWORD *)v44, v51, v69, v34)) == 0)
          || (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v54 + 32)
                                                                                  & 0xFFFFFFFFFFFFFFF0LL)
                                                                      + 8LL)
                                                          & 0xFFFFFFFFFFFFFFF0LL)
                                              + 16LL)
           - 25 > 1 )
        {
          v70 = *(_QWORD *)(a1 + 56);
          v71 = *(_QWORD *)(a1 + 8);
          v75.m128i_i64[0] = v43;
          v72 = _mm_loadl_epi64(&v75);
          v73 = *(_QWORD *)(a1 + 16);
          v74 = *(_QWORD *)a1;
          v81 = (__m128)_mm_unpacklo_epi64(v72, v72);
          sub_1BFAC00(v74, v75.m128i_i64[1], v71, v73, v70, 0, v81, a4);
        }
        LOBYTE(v34) = v88;
      }
      ++v40;
    }
    while ( v42 != v40 );
    v41 = (char *)v77 + **(_QWORD **)(a1 + 48);
LABEL_54:
    v55 = *((__int64 **)v41 + 29);
    v56 = &v55[*((unsigned int *)v41 + 60)];
    if ( v55 != v56 )
    {
      v35 = *((__int64 **)v41 + 29);
      while ( 1 )
      {
        v57 = *v35;
        v58 = *(_QWORD *)&byte_8[*v35 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
            | ((unsigned __int8)*v35 | (unsigned __int8)*(_QWORD *)&byte_8[*v35 & 0xFFFFFFFFFFFFFFF0LL]) & 7;
        if ( !(_BYTE)v34 )
          goto LABEL_79;
        v59 = (char *)ptr;
        v60 = 8LL * HIDWORD(v86);
        v61 = (unsigned __int64 *)((char *)ptr + v60);
        if ( ptr != (char *)ptr + v60 )
        {
          v62 = (char *)ptr;
          if ( v58 == *(_QWORD *)ptr )
          {
LABEL_83:
            v63 = 0;
            goto LABEL_64;
          }
          while ( 1 )
          {
            v62 += 8;
            if ( v61 == (unsigned __int64 *)v62 )
              break;
            if ( *(_QWORD *)v62 == v58 )
              goto LABEL_83;
          }
        }
        if ( HIDWORD(v86) < (unsigned int)v86 )
        {
          ++HIDWORD(v86);
          *v61 = v58;
          v59 = (char *)ptr;
          v62 = (char *)ptr + v60;
          v63 = v34;
        }
        else
        {
LABEL_79:
          v62 = (char *)sub_2236760(v37, v58);
          LOBYTE(v34) = v88;
          v59 = (char *)ptr;
          if ( !v88 )
          {
            v64 = (char *)ptr + 8 * (unsigned int)v86;
            goto LABEL_65;
          }
        }
LABEL_64:
        v64 = &v59[8 * HIDWORD(v86)];
        LOBYTE(v34) = 1;
LABEL_65:
        if ( v64 != v62 && (*(_QWORD *)v62 == -2 || *(_QWORD *)v62 == -1) )
        {
          do
            v62 += 8;
          while ( v64 != v62 && *(_QWORD *)v62 >= 0xFFFFFFFFFFFFFFFELL );
        }
        if ( !v63 )
          goto LABEL_25;
        if ( v84 )
        {
          v65 = 1;
          for ( j = (v84 - 1)
                  & (((0xBF58476D1CE4E5B9LL
                     * ((unsigned int)v58 ^ (unsigned int)(v58 >> 9)
                      | ((unsigned __int64)((unsigned int)v58 ^ (unsigned int)(v58 >> 9)) << 32))) >> 31)
                   ^ (484763065 * (v58 ^ (v58 >> 9)))); ; j = (v84 - 1) & v68 )
          {
            v67 = (_QWORD *)(v82 + 16LL * j);
            if ( v58 == *v67 && v58 == v67[1] )
              break;
            if ( !*v67 && !v67[1] )
              goto LABEL_24;
            v68 = v65 + j;
            ++v65;
          }
          if ( v56 == ++v35 )
            break;
        }
        else
        {
LABEL_24:
          v29 = *(_QWORD *)(a1 + 16);
          v30 = *(_QWORD *)(a1 + 56);
          v75.m128i_i64[0] = v57;
          v31 = _mm_loadl_epi64(&v75);
          v32 = *(_QWORD *)(a1 + 8);
          v33 = *(_QWORD *)a1;
          v81 = (__m128)_mm_unpacklo_epi64(v31, v31);
          sub_1BFAC00(v33, v75.m128i_i64[1], v32, v29, v30, 0, v81, a4);
          LOBYTE(v34) = v88;
LABEL_25:
          if ( v56 == ++v35 )
            break;
        }
      }
    }
    v77 = (__m128 *)((char *)v77 + 648);
  }
  while ( v78 != (__int64 **)v77 );
  if ( !(_BYTE)v34 )
    free(ptr);
  return operator delete(v82, 16LL * v84, 8);
}
