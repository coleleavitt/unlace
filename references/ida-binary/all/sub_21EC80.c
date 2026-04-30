__int64 __fastcall sub_21EC80(__int64 a1, __int64 *a2, __int64 a3, __m128 a4)
{
  __int64 v6; // rdi
  unsigned int v8; // r14d
  __int64 v10; // r15
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r15
  __int64 v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // rcx
  int *v17; // r15
  __int64 v18; // rdi
  const char *v19; // rsi
  __int64 v20; // r14
  __int64 v21; // rdi
  unsigned __int8 v22; // r13
  unsigned int v23; // eax
  __int64 v24; // rax
  __int64 v25; // r13
  unsigned __int64 v26; // rdx
  __int64 v27; // rax
  __int64 v28; // rdi
  size_t v29; // rdx
  _QWORD *v30; // r13
  __int64 v31; // r15
  int v32; // eax
  __int64 v33; // rcx
  int v34; // eax
  __int64 v35; // rdi
  __int64 v36; // rax
  __int64 v37; // rdi
  __int64 v38; // rbp
  __int64 v39; // rax
  unsigned __int64 v40; // rbp
  __int64 v41; // rax
  __int64 v42; // r12
  const char *v43; // rsi
  __m128i *v44; // rax
  __int64 v45; // rdi
  __int64 v46; // rax
  void *v47; // rbx
  __int64 v48; // rax
  int v49; // eax
  int v50; // r8d
  size_t v51; // r9
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // r9
  void *v56; // rbx
  __int64 v57; // rax
  int v58; // edx
  int v59; // eax
  __int64 v60; // rax
  char *v61; // r13
  unsigned __int64 v62; // rax
  const char *v63; // rsi
  __int64 v64; // rax
  __int64 v65; // rax
  size_t v66; // r9
  __int64 v67; // rcx
  __int128 v68; // xmm0
  __int64 v69; // r15
  __int64 v70; // r13
  __int64 v71; // rax
  void *v72; // rax
  size_t n; // [rsp+0h] [rbp-78h]
  size_t na; // [rsp+0h] [rbp-78h]
  unsigned int nc; // [rsp+0h] [rbp-78h]
  size_t nb; // [rsp+0h] [rbp-78h]
  size_t nd; // [rsp+0h] [rbp-78h]
  size_t ne; // [rsp+0h] [rbp-78h]
  char v79; // [rsp+Ch] [rbp-6Ch]
  int v80; // [rsp+Ch] [rbp-6Ch]
  int v81; // [rsp+Ch] [rbp-6Ch]
  int v82; // [rsp+10h] [rbp-68h]
  size_t v83; // [rsp+10h] [rbp-68h]
  __int64 v84; // [rsp+18h] [rbp-60h]
  __int64 v85; // [rsp+20h] [rbp-58h] BYREF
  __int128 v86; // [rsp+28h] [rbp-50h]
  unsigned __int64 v87; // [rsp+38h] [rbp-40h]

  v6 = *a2;
  v87 = __readfsqword(0x28u);
  LOBYTE(v85) = 0;
  qlread(v6, &v85, 1);
  v8 = (unsigned __int8)v85;
  if ( (unsigned __int8)v85 > 6u )
    return 0;
  *(_DWORD *)(a3 + 16) += sub_217810(a2);
  if ( *(_BYTE *)a1 <= 7u )
  {
    v11 = (unsigned int)sub_217810(a2);
  }
  else
  {
    v10 = (unsigned int)sub_217810(a2);
    v11 = v10 | (sub_217810(a2) << 32);
  }
  v12 = *(_QWORD *)(*(_QWORD *)(a1 + 120) + 16LL);
  if ( v12 == v11 )
    v11 = -1;
  *(_QWORD *)(a3 + 8) = v12 & (*(_QWORD *)(a3 + 8) + v11);
  v13 = (unsigned int)sub_217810(a2);
  *(_QWORD *)(a3 + 24) += v13 | (sub_217810(a2) << 32);
  if ( v8 )
  {
    v14 = v8;
    v17 = sub_21EBB0(*(__m128i **)(a1 + 8), v8, *(_DWORD *)(a3 + 16), *(_QWORD *)(a3 + 8));
    *(_QWORD *)v17 = *(_QWORD *)(a3 + 24);
    switch ( v17[2] )
    {
      case 0:
        return 1;
      case 1:
        *((_QWORD *)v17 + 3) = 0;
        v18 = *a2;
        v19 = (const char *)&v85;
        LOBYTE(v85) = 0;
        qlread(v18, &v85, 1);
        v79 = v85;
        if ( !(_BYTE)v85 )
          return 1;
        v20 = operator new(0x60u);
        sub_2151C0(v20);
        *((_QWORD *)v17 + 3) = v20;
        v21 = *(_QWORD *)v20;
        v22 = *(_BYTE *)a1;
        if ( *(_QWORD *)v20 )
        {
          *(_QWORD *)(v20 + 8) = 0;
          *(double *)a4.m128_u64 = qfree(v21, (const char *)&v85);
          *(_QWORD *)v20 = 0;
          *(_QWORD *)(v20 + 16) = 0;
        }
        v23 = sub_217810(a2);
        if ( !v23 )
          goto LABEL_20;
        if ( v22 > 4u )
        {
          nb = v23;
          v57 = qalloc(v23);
          v25 = v57;
          if ( v57 )
          {
            v19 = (const char *)v57;
            v27 = qlread(*a2, v57, nb);
            if ( nb == v27 )
              goto LABEL_19;
          }
        }
        else
        {
          n = (v23 + 7LL) & 0xFFFFFFFFFFFFFFF8LL;
          v24 = qalloc(n);
          v25 = v24;
          if ( v24 )
          {
            v19 = (const char *)v24;
            v26 = qlread(*a2, v24, n);
            v27 = v26 >> 3;
            if ( v26 == n )
            {
LABEL_19:
              *(_QWORD *)v20 = v25;
              a4 = (__m128)_mm_unpacklo_epi64((__m128i)(unsigned __int64)v27, (__m128i)(unsigned __int64)v27);
              *(__m128 *)(v20 + 8) = a4;
            }
          }
        }
LABEL_20:
        v82 = sub_217810(a2);
        if ( v82 < 0 )
        {
          v56 = *((void **)v17 + 3);
          if ( v56 )
          {
            sub_20DA00(*((__int64 **)v17 + 3), v19);
            operator delete(v56, 0x60u);
          }
LABEL_45:
          *((_QWORD *)v17 + 3) = 0;
          return 0;
        }
        v14 = (unsigned int)v82;
        v28 = v20 + 24;
        sub_216180((int **)(v20 + 24), (int *)(unsigned int)v82);
        v29 = *(_QWORD *)(v20 + 24);
        if ( v82 )
        {
          v30 = (_QWORD *)(v29 + 8);
          v31 = v29 + 32LL * (unsigned int)(v82 - 1) + 40;
          do
          {
            if ( !a2[1] )
              a2[1] = qlsize(*a2);
            v28 = *a2;
            v14 = 0;
            if ( qlseek(*a2, 0, 1) >= a2[1] )
              break;
            if ( *((int *)v30 - 2) >= -1 )
              sub_20AAF0((__int64)(v30 - 1), nullptr);
            v28 = (__int64)a2;
            v32 = sub_217810(a2) - 3;
            *((_DWORD *)v30 - 2) = v32;
            if ( v32 == -2 )
            {
              v28 = (__int64)a2;
              nc = sub_217810(a2);
              v48 = sub_217810(a2);
              v29 = nc;
              *v30 = (nc | (unsigned __int64)(v48 << 32)) - 1;
            }
            else if ( v32 != -3 )
            {
              *v30 = 0;
              *(_OWORD *)(v30 + 1) = 0;
              if ( v32 < -1 )
              {
LABEL_76:
                if ( !under_debugger )
                  interr(3216, v14, v29, v33, *(double *)a4.m128_u64);
LABEL_78:
                BUG();
              }
              v34 = sub_217810(a2);
              v28 = (__int64)v30;
              v14 = v34;
              na = v34;
              sub_213C70(v30, v34);
              v29 = na;
              if ( na )
              {
                v14 = *v30;
                v28 = *a2;
                qlread(*a2, *v30, na);
              }
            }
            v30 += 4;
          }
          while ( (_QWORD *)v31 != v30 );
        }
        if ( (v79 & 2) != 0 )
        {
          if ( (v79 & 4) == 0 )
            goto LABEL_49;
        }
        else
        {
          v58 = *(_DWORD *)(get_ph(v28, v14, v29) + 4);
          v59 = *(_DWORD *)(dbg + 64);
          if ( v58 )
          {
            if ( v82 < v59 )
              goto LABEL_49;
          }
          else if ( v59 - 16 > v82 )
          {
            goto LABEL_49;
          }
        }
        while ( 1 )
        {
          v62 = *(_QWORD *)(v20 + 32);
          if ( v62 >= *(int *)(dbg + 64) )
            break;
          v63 = *(const char **)(v20 + 24);
          if ( *(_QWORD *)(v20 + 40) < v62 + 1 )
          {
            v64 = qvector_reserve(v20 + 24, v63, v62 + 1, 32);
            *(_QWORD *)(v20 + 24) = v64;
            v63 = (const char *)v64;
            v62 = *(_QWORD *)(v20 + 32);
          }
          v60 = 32 * v62;
          v61 = (char *)&v63[v60];
          *(_DWORD *)v61 = -2;
          *((_QWORD *)v61 + 1) = -1;
          *((_OWORD *)v61 + 1) = 0;
          ++*(_QWORD *)(v20 + 32);
          if ( *(int *)&v63[v60] >= -1 )
            sub_20AAF0((__int64)&v63[v60], v63);
          *((_QWORD *)v61 + 1) = 0;
          *(_DWORD *)v61 = -3;
        }
LABEL_49:
        v49 = sub_217810(a2);
        v50 = v49;
        if ( v49 > 0 )
        {
          v51 = *(_QWORD *)(v20 + 80);
          v85 = 0;
          v86 = 0;
          if ( v51 )
          {
            nd = v51;
            v80 = v49;
            v65 = qalloc_or_throw(32 * v51);
            v66 = nd;
            v50 = v80;
            v67 = 0;
            v85 = v65;
            v68 = 0;
            *((_QWORD *)&v86 + 1) = nd;
            do
            {
              v69 = 32 * v67 + v85;
              v70 = *(_QWORD *)(v20 + 72) + 32 * v67;
              v71 = *(_QWORD *)v70;
              *(_QWORD *)(v69 + 8) = 0;
              *(_OWORD *)(v69 + 16) = v68;
              *(_QWORD *)v69 = v71;
              if ( *(_QWORD *)(v70 + 16) )
              {
                v84 = v67;
                v83 = v66;
                v81 = v50;
                ne = *(_QWORD *)(v70 + 16);
                v72 = (void *)qalloc_or_throw(ne);
                *(_QWORD *)(v69 + 8) = v72;
                *(_QWORD *)(v69 + 24) = ne;
                memcpy(v72, *(const void **)(v70 + 8), ne);
                v67 = v84;
                v68 = 0;
                v66 = v83;
                v50 = v81;
                *(_QWORD *)(v69 + 16) = ne;
              }
              ++v67;
            }
            while ( v66 != v67 );
            *(_QWORD *)&v86 = v66;
          }
          sub_2181F0(a1, a2, &v85, v50);
          sub_215150(&v85, (const char *)a2, v52, v53, v54, v55);
        }
        break;
      case 2:
      case 3:
        *((_QWORD *)v17 + 3) = sub_217D20(a1, a2);
        return 1;
      case 4:
        *((_QWORD *)v17 + 3) = 0;
        v37 = *a2;
        LOBYTE(v85) = 0;
        qlread(v37, &v85, 1);
        if ( (_BYTE)v85 )
        {
          v38 = sub_217D20(a1, a2);
          v39 = operator new(0x20u);
          *(_QWORD *)v39 = v38;
          *(_QWORD *)(v39 + 8) = 0;
          *(_OWORD *)(v39 + 16) = 0;
          *((_QWORD *)v17 + 3) = v39;
          v40 = (unsigned int)sub_217810(a2);
          if ( v40 - 1 <= 0xF423F )
          {
            v41 = qalloc(v40);
            v42 = v41;
            if ( v41 )
            {
              v43 = (const char *)v41;
              if ( v40 == qlread(*a2, v41, v40) )
              {
                v44 = *((__m128i **)v17 + 3);
                v44->m128i_i64[1] = v42;
                v44[1] = _mm_unpacklo_epi64((__m128i)v40, (__m128i)v40);
                qfree(v42, v43);
              }
            }
          }
        }
        return 1;
      case 5:
        *((_QWORD *)v17 + 3) = 0;
        v35 = *a2;
        LOBYTE(v85) = 0;
        qlread(v35, &v85, 1);
        if ( (_BYTE)v85 )
        {
          v36 = qalloc_or_throw(24);
          *(_QWORD *)v36 = 0;
          *(_OWORD *)(v36 + 8) = 0;
          *((_QWORD *)v17 + 3) = v36;
          sub_218680(a1, a2, (__int64 *)v36);
        }
        return 1;
      case 6:
        *((_QWORD *)v17 + 3) = 0;
        v45 = *a2;
        LOBYTE(v85) = 0;
        qlread(v45, &v85, 1);
        if ( !(_BYTE)v85 )
          return 1;
        v46 = operator new(0x48u);
        *(_QWORD *)(v46 + 8) = -1;
        *(_QWORD *)(v46 + 16) = 0;
        *(_QWORD *)v46 = 0xFFFFFFFFLL;
        *(_OWORD *)(v46 + 24) = 0;
        *(_OWORD *)(v46 + 40) = 0;
        *(_OWORD *)(v46 + 56) = 0;
        *((_QWORD *)v17 + 3) = v46;
        if ( (unsigned __int8)sub_217E50(a1, (__int64)v17, a2, 0.0) )
          return 1;
        v47 = *((void **)v17 + 3);
        if ( v47 )
        {
          free_debug_event(*((_QWORD *)v17 + 3));
          operator delete(v47, 0x48u);
        }
        goto LABEL_45;
      default:
        if ( under_debugger )
          goto LABEL_78;
        interr(40232, v8, v15, v16, *(double *)a4.m128_u64);
        goto LABEL_76;
    }
  }
  return 1;
}
