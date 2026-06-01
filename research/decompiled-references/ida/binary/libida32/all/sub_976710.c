void __fastcall sub_976710(_QWORD *a1, __int64 a2, unsigned __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned int v6; // r14d
  __int64 v7; // r12
  _BYTE *v8; // rax
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // r11
  int v14; // r13d
  __int64 v15; // r9
  _QWORD *v16; // rsi
  __int64 v17; // rax
  __int64 v18; // rdx
  unsigned __int64 v19; // rdi
  __int64 v20; // rcx
  unsigned __int64 v21; // rax
  __int64 v22; // rcx
  __int64 *v23; // rdx
  const __m128i *v24; // rdx
  void **v25; // rdi
  char *v26; // rax
  __int64 v27; // rcx
  __m128i v28; // xmm0
  char *v29; // rax
  char *v30; // r15
  __int64 v31; // r13
  unsigned int v32; // r12d
  const __m128i *v33; // r14
  const __m128i *v34; // rsi
  __int64 v35; // r8
  __int64 v36; // rcx
  unsigned int v37; // ebx
  __int64 v38; // rax
  __int64 v39; // rdx
  unsigned __int64 *v40; // rdi
  __int64 v41; // rax
  _QWORD *v42; // rdx
  __int64 v43; // rax
  char *v44; // r12
  unsigned __int64 v45; // rcx
  int v46; // edx
  const __m128i *v47; // rax
  unsigned __int64 v48; // rdx
  const __m128i *v49; // r15
  __int64 v50; // rax
  unsigned __int64 v51; // rdx
  __int64 v52; // r14
  bool v53; // r12
  __int64 v54; // r13
  __int64 v55; // rax
  unsigned __int64 *v56; // rax
  __int64 v57; // rax
  char *v58; // r13
  __m128i v59; // xmm1
  __m128i v60; // xmm0
  __int64 v61; // rbx
  __m128i *v62; // rax
  __int64 v63; // rax
  unsigned __int64 *v64; // rax
  __int64 v65; // r8
  __m128i v66; // [rsp+8h] [rbp-1A0h] BYREF
  char *v67; // [rsp+18h] [rbp-190h]
  void **v68; // [rsp+20h] [rbp-188h]
  __m128i v69; // [rsp+28h] [rbp-180h] BYREF
  const __m128i *p_ptr; // [rsp+38h] [rbp-170h]
  unsigned __int64 v71; // [rsp+40h] [rbp-168h]
  char *v72; // [rsp+48h] [rbp-160h]
  __m128i v73; // [rsp+50h] [rbp-158h]
  void *ptr; // [rsp+60h] [rbp-148h] BYREF
  __int64 v75; // [rsp+68h] [rbp-140h]
  char v76; // [rsp+70h] [rbp-138h] BYREF
  void *v77; // [rsp+C0h] [rbp-E8h] BYREF
  __int64 v78; // [rsp+C8h] [rbp-E0h]
  _QWORD v79[27]; // [rsp+D0h] [rbp-D8h] BYREF

  v6 = a3;
  v7 = a2;
  v8 = (_BYTE *)a1[41];
  if ( !v8[63] && !v8[59] && !v8[60] )
    return;
  v66.m128i_i64[1] = a6;
  if ( a4 != a2 )
  {
    v12 = a3;
    v13 = 10;
    v14 = a5;
    v15 = 0xFFFFFFFF00000000LL;
    v68 = &v77;
    v16 = v79;
    v79[0] = a2;
    v78 = 0xA00000001LL;
    v17 = 1;
    v77 = v79;
    v79[1] = a3;
    while ( 1 )
    {
      v18 = v17;
      v19 = v17 + 1;
      v20 = 2 * v17;
      if ( v16[2 * v17 - 2] != v7 )
      {
        v21 = v12 & 0xFFFFFFFF00000000LL | v6;
        v12 = v21;
        if ( v19 > v13 )
        {
          v66.m128i_i64[0] = v21;
          v67 = (char *)a5;
          sub_22134E0(v68, v68 + 2, v19, 16);
          a5 = (__int64)v67;
          v21 = v66.m128i_i64[0];
          v15 = 0xFFFFFFFF00000000LL;
          v16 = v77;
          v20 = 2LL * (unsigned int)v78;
        }
        v16[v20] = v7;
        v16[v20 + 1] = v21;
        v13 = HIDWORD(v78);
        LODWORD(v78) = v78 + 1;
        v17 = (unsigned int)v78;
        v18 = (unsigned int)v78;
        v19 = (unsigned int)v78 + 1LL;
      }
      if ( v7 )
      {
        if ( !--v6 )
        {
          v22 = *(unsigned int *)(v7 + 40);
          v6 = *(_DWORD *)(v7 + 40);
          v7 = *(_QWORD *)(v7 + 32);
          v12 = v22 | v12 & 0xFFFFFFFF00000000LL;
        }
      }
      if ( v7 == a4 && v6 == v14 )
        break;
      v16 = v77;
    }
    if ( v19 > v13 )
    {
      v66.m128i_i64[0] = a5;
      sub_22134E0(v68, v68 + 2, v19, 16);
      v18 = (unsigned int)v78;
      a5 = v66.m128i_i64[0];
    }
    v23 = (__int64 *)((char *)v77 + 16 * v18);
    *v23 = a4;
    v23[1] = a5;
    v24 = (const __m128i *)v77;
    LODWORD(v78) = v78 + 1;
    v25 = (void **)((char *)v77 + 16 * (unsigned int)v78);
    if ( v77 == v25 )
      goto LABEL_36;
    v26 = (char *)(v25 - 2);
    if ( v25 - 2 <= v77 )
    {
      v67 = (char *)v77 + 16 * (unsigned int)v78;
      v25 = (void **)v77;
      v29 = v67;
    }
    else
    {
      do
      {
        v27 = *(_QWORD *)v26;
        v28 = _mm_loadu_si128(v24);
        v26 -= 16;
        ++v24;
        v24[-1].m128i_i64[0] = v27;
        v24[-1].m128i_i32[2] = *((_DWORD *)v26 + 6);
        v73 = v28;
        *((_QWORD *)v26 + 2) = v28.m128i_i64[0];
        *((_DWORD *)v26 + 6) = v73.m128i_i32[2];
      }
      while ( v24 < (const __m128i *)v26 );
      v25 = (void **)v77;
      v29 = (char *)v77 + 16 * (unsigned int)v78;
      v67 = v29;
    }
    v30 = (char *)(v25 + 2);
    if ( v25 == (void **)v29 || v30 == v29 )
    {
LABEL_36:
      if ( v25 != v68 + 2 )
        free(v25);
      return;
    }
    p_ptr = (const __m128i *)&ptr;
    v69.m128i_i64[1] = (__int64)&v76;
    v71 = v66.m128i_i64[1] & 0xFFFFFFFFFFFFFFFCLL;
LABEL_24:
    v31 = *((_QWORD *)v30 - 2);
    v32 = *((_DWORD *)v30 + 2);
    v33 = *(const __m128i **)v30;
    v34 = (const __m128i *)v31;
    v66.m128i_i32[0] = *((_DWORD *)v30 - 2);
    v35 = v66.m128i_u32[0];
    v36 = v31;
    v37 = v32;
    if ( v33 == (const __m128i *)v31 )
      goto LABEL_34;
    v38 = a1[41];
    v39 = *(unsigned __int8 *)(v38 + 63);
    if ( *(_BYTE *)(v38 + 60) )
    {
      if ( !(_BYTE)v39 )
      {
LABEL_44:
        LODWORD(v45) = v32;
        v46 = 0;
        ptr = (void *)v69.m128i_i64[1];
        v75 = 0xA00000000LL;
        v47 = v33;
        do
        {
          v46 += v45;
          v45 = v47[2].m128i_u32[2];
          v47 = (const __m128i *)v47[2].m128i_i64[0];
        }
        while ( (const __m128i *)v31 != v47 );
        v48 = (int)v45 + v46 - v66.m128i_i32[0];
        if ( v48 > 0xA )
        {
          v34 = (const __m128i *)v69.m128i_i64[1];
          sub_22134E0(p_ptr, v69.m128i_i64[1], v48, 8);
        }
        v72 = v30;
        v49 = v33;
        v69.m128i_i64[0] = v31;
LABEL_54:
        v65 = v37 - 1;
        v53 = v69.m128i_i64[0] == (_QWORD)v49;
        v52 = 8 * v65;
        while ( 1 )
        {
          if ( v66.m128i_i32[0] == v37 && v53 )
          {
            v57 = (unsigned int)v75;
            v30 = v72;
            if ( !(_DWORD)v75 )
            {
              if ( ptr != (void *)v69.m128i_i64[1] )
                free(ptr);
LABEL_68:
              v31 = *((_QWORD *)v30 - 2);
              v32 = *((_DWORD *)v30 + 2);
              v66.m128i_i32[0] = *((_DWORD *)v30 - 2);
LABEL_69:
              v34 = *(const __m128i **)v30;
              v37 = v32;
              v36 = v31;
              LODWORD(v35) = v66.m128i_i32[0];
              goto LABEL_34;
            }
            if ( !a1[2] )
            {
              sub_976590((__int64)a1, (__int64)v34, v48, v45, v65, v15);
              v57 = (unsigned int)v75;
            }
            v58 = (char *)ptr;
            v44 = (char *)ptr + 8 * v57;
            if ( ptr != v44 )
            {
              v66.m128i_i64[0] = v71 | 1;
              v59 = _mm_loadl_epi64(&v66);
              do
              {
                v61 = a1[2];
                v66.m128i_i64[0] = *((_QWORD *)v44 - 1) & 0xFFFFFFFFFFFFFFFCLL;
                v62 = *(__m128i **)(v61 + 8);
                if ( (unsigned __int64)v62 < *(_QWORD *)(v61 + 16) )
                {
                  v60 = _mm_loadl_epi64(&v66);
                }
                else
                {
                  v63 = a1[1];
                  v69.m128i_i64[0] = v59.m128i_i64[0];
                  sub_975850((const __m128i **)v61, (_QWORD *)(v63 + 32), 1u, v45, v65, v15);
                  v62 = *(__m128i **)(v61 + 8);
                  v60 = _mm_loadl_epi64(&v66);
                  v59 = _mm_loadl_epi64(&v69);
                }
                v44 -= 8;
                *v62 = _mm_unpacklo_epi64(v60, v59);
                *(_QWORD *)(v61 + 8) += 16LL;
              }
              while ( v58 != v44 );
              v44 = (char *)ptr;
            }
            if ( v44 != (char *)v69.m128i_i64[1] )
              free(v44);
            v34 = *(const __m128i **)v30;
            v37 = *((_DWORD *)v30 + 2);
            v36 = *((_QWORD *)v30 - 2);
            LODWORD(v35) = *((_DWORD *)v30 - 2);
LABEL_34:
            v30 += 16;
            sub_975EB0(a1, (__int64)v34, v37, v36, v35, v66.m128i_i64[1]);
            if ( v30 == v67 || v67 == v30 - 16 )
            {
              v25 = (void **)v77;
              goto LABEL_36;
            }
            goto LABEL_24;
          }
          v54 = *(_QWORD *)(v49->m128i_i64[1] + v52);
          v34 = (const __m128i *)v54;
          if ( sub_9750B0(a1, v54) )
          {
            if ( (*(_BYTE *)(v54 + 29) & 1) == 0 )
              goto LABEL_49;
            v55 = sub_B68690(v54);
            v48 = *(_QWORD *)v55;
            v45 = *(_QWORD *)v55 + 8LL * *(unsigned int *)(v55 + 8);
            if ( *(_QWORD *)v55 < v45 )
            {
              v56 = *(unsigned __int64 **)v55;
              while ( 1 )
              {
                v48 = *v56;
                if ( *(_WORD *)(*v56 + 36) == 174 )
                  break;
                if ( (unsigned __int64 *)v45 == ++v56 )
                  goto LABEL_49;
              }
              if ( (unsigned __int64 *)v45 != v56 )
                goto LABEL_52;
              goto LABEL_49;
            }
            if ( v48 == v45 )
              goto LABEL_49;
            if ( *(_WORD *)(*(_QWORD *)v45 + 36LL) != 174 )
            {
              v64 = (unsigned __int64 *)(v45 + 8);
              while ( (unsigned __int64 *)v48 != v64 )
              {
                v45 = *v64++;
                if ( *(_WORD *)(v45 + 36) == 174 )
                  goto LABEL_52;
              }
LABEL_49:
              v50 = (unsigned int)v75;
              v45 = HIDWORD(v75);
              v51 = (unsigned int)v75 + 1LL;
              if ( v51 > HIDWORD(v75) )
              {
                v34 = (const __m128i *)v69.m128i_i64[1];
                sub_22134E0(p_ptr, v69.m128i_i64[1], v51, 8);
                v50 = (unsigned int)v75;
              }
              v48 = (unsigned __int64)ptr;
              *((_QWORD *)ptr + v50) = v54;
              LODWORD(v75) = v75 + 1;
            }
          }
LABEL_52:
          v52 -= 8;
          if ( !--v37 )
          {
            v37 = v49[2].m128i_u32[2];
            v49 = (const __m128i *)v49[2].m128i_i64[0];
            goto LABEL_54;
          }
        }
      }
    }
    else if ( !(_BYTE)v39 )
    {
      goto LABEL_69;
    }
    v40 = (unsigned __int64 *)a1[2];
    if ( v40 )
    {
      v41 = *(_QWORD *)v33->m128i_i64[1];
    }
    else
    {
      sub_976590((__int64)a1, v31, v39, v31, v66.m128i_u32[0], v15);
      v43 = a1[41];
      if ( !*(_BYTE *)(v43 + 63) )
      {
LABEL_67:
        if ( !*(_BYTE *)(v43 + 60) )
          goto LABEL_68;
        goto LABEL_44;
      }
      v40 = (unsigned __int64 *)a1[2];
      v41 = *(_QWORD *)v33->m128i_i64[1];
    }
    v42 = (_QWORD *)(a1[1] + 32LL);
    ptr = (void *)(v41 & 0xFFFFFFFFFFFFFFFCLL | 2);
    v34 = p_ptr;
    v75 = v71;
    sub_976620(v40, p_ptr, v42, v36, v35, v15);
    v43 = a1[41];
    goto LABEL_67;
  }
  if ( (_DWORD)a3 != (_DWORD)a5 )
    sub_975EB0(a1, a4, a3, a4, a5, a6);
}

