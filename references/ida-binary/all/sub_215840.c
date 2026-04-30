__int64 __fastcall sub_215840(__int64 a1, __int64 a2, __int64 *a3, __m128 a4)
{
  _QWORD *v6; // rdi
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rsi
  int v11; // r14d
  __int64 v12; // r13
  __int64 v13; // rax
  __int64 v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v19; // rax
  __int64 v20; // r12
  char v21; // si
  __int64 v22; // r13
  __int64 v23; // r13
  __int64 v24; // r14
  __int64 v25; // r15
  size_t v26; // rdx
  __int64 v27; // r13
  _QWORD *v28; // r12
  const char *v29; // rsi
  __int64 v30; // rdx
  __int64 v31; // rcx
  size_t v32; // rbp
  const void *v33; // r13
  __int64 v34; // r12
  unsigned __int64 v35; // rsi
  __int64 v36; // r12
  const char *v37; // rsi
  __int64 v38; // rdi
  __int64 v39; // rdx
  __int64 v40; // rcx
  unsigned __int64 v41; // rax
  __int64 v42; // r13
  unsigned __int64 v43; // rax
  unsigned __int64 v44; // rax
  __int64 v45; // rdi
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // rax
  char v49; // r13
  const void *v50; // rsi
  __int64 v51; // r13
  __int64 v52; // r14
  __m128 *v53; // r15
  unsigned __int64 *v54; // rdx
  unsigned __int64 v55; // rax
  void *v56; // rax
  __int64 v57; // r12
  size_t v58; // r15
  void *v59; // r13
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 i; // rbx
  __int64 v63; // rdi
  __int64 v64; // rax
  size_t n; // [rsp+8h] [rbp-80h]
  __int64 v66; // [rsp+10h] [rbp-78h]
  unsigned __int64 *v67; // [rsp+18h] [rbp-70h]
  __int64 v68; // [rsp+18h] [rbp-70h]
  __int64 v69; // [rsp+20h] [rbp-68h]
  __int64 v70; // [rsp+28h] [rbp-60h]

  v6 = *(_QWORD **)(a1 + 8);
  v8 = 16 * ((v6[15] == 0) + ((__int64)(v6[15] - v6[11]) >> 3) - 1)
     + ((__int64)(v6[10] - v6[8]) >> 5)
     + ((__int64)(v6[12] - v6[13]) >> 5);
  if ( *(_QWORD *)a2 == v8 + 1 )
    return 0;
  v9 = sub_20F460((__int64)v6, (unsigned int)v8 - (unsigned int)*(_QWORD *)a2);
  v10 = *a3;
  v11 = *(_DWORD *)(v9 + 8);
  v12 = v9;
  v13 = a3[1];
  if ( a3[2] < (unsigned __int64)(v13 + 1) )
  {
    v19 = qvector_reserve(a3, v10, v13 + 1, 1);
    *a3 = v19;
    v10 = v19;
    v13 = a3[1];
  }
  *(_BYTE *)(v10 + v13) = v11;
  ++a3[1];
  sub_20C550(a3, *(_DWORD *)(v12 + 12) - *(_DWORD *)(a2 + 16));
  sub_20C660(a3, *(_QWORD *)(*(_QWORD *)(a1 + 120) + 16LL) & (*(_QWORD *)(v12 + 16) - *(_QWORD *)(a2 + 8)));
  v14 = *(_QWORD *)v12 - *(_QWORD *)(a2 + 24);
  sub_20C660(a3, v14);
  *(_DWORD *)(a2 + 16) = *(_DWORD *)(v12 + 12);
  *(_QWORD *)(a2 + 8) = *(_QWORD *)(v12 + 16);
  v17 = *(_QWORD *)v12;
  ++*(_QWORD *)a2;
  *(_QWORD *)(a2 + 24) = v17;
  if ( *(_DWORD *)(v12 + 8) )
  {
    switch ( *(_DWORD *)(v12 + 8) )
    {
      case 1:
        v20 = *(_QWORD *)(v12 + 24);
        if ( !v20 )
          goto LABEL_32;
        v21 = 7;
        if ( *(_QWORD *)(v20 + 32) != *(_DWORD *)(dbg + 64) )
          v21 = 3;
        sub_20AF30(a3, v21);
        v22 = *(_QWORD *)(v20 + 8);
        sub_20C550(a3, v22);
        if ( (_DWORD)v22 )
          sub_20BED0(a3, *(const void **)v20, (int)v22);
        v23 = *(_QWORD *)(v20 + 32);
        v24 = 0;
        sub_20C550(a3, v23);
        v25 = 32LL * (unsigned int)v23;
        if ( (int)v23 > 0 )
        {
          do
          {
            v27 = v24 + *(_QWORD *)(v20 + 24);
            sub_20C550(a3, *(_DWORD *)v27 + 3);
            if ( *(_DWORD *)v27 == -2 )
            {
              sub_20C660(a3, *(_QWORD *)(v27 + 8) + 1LL);
            }
            else if ( *(_DWORD *)v27 != -3 )
            {
              sub_20C550(a3, *(_DWORD *)(v27 + 16));
              v26 = *(_QWORD *)(v27 + 16);
              if ( v26 )
                sub_20BED0(a3, *(const void **)(v27 + 8), v26);
            }
            v24 += 32;
          }
          while ( v24 != v25 );
        }
        v50 = (const void *)*(unsigned int *)(v20 + 80);
        sub_20C550(a3, (unsigned int)v50);
        v66 = *(_QWORD *)(v20 + 80);
        if ( !v66 )
          return 1;
        v51 = 0;
        v70 = 32 * v66;
        a4 = 0;
        v69 = qalloc_or_throw(32 * v66);
        v52 = v69;
        v53 = (__m128 *)v69;
        do
        {
          v54 = (unsigned __int64 *)(*(_QWORD *)(v20 + 72) + 32 * v51);
          v55 = *v54;
          v53->m128_u64[1] = 0;
          v53[1] = a4;
          v53->m128_u64[0] = v55;
          if ( v54[2] )
          {
            v67 = v54;
            n = v54[2];
            v56 = (void *)qalloc_or_throw(n);
            v53->m128_u64[1] = (unsigned __int64)v56;
            v53[1].m128_u64[1] = n;
            v50 = (const void *)v67[1];
            memcpy(v56, v50, n);
            a4 = 0;
            v53[1].m128_u64[0] = n;
          }
          ++v51;
          v53 += 2;
        }
        while ( v66 != v51 );
        v57 = v69;
        if ( !v70 )
          goto LABEL_66;
        do
        {
          v58 = *(_QWORD *)(v57 + 16);
          if ( v58 )
          {
            v68 = *(_QWORD *)v57;
            v59 = (void *)qalloc_or_throw(*(_QWORD *)(v57 + 16));
            memcpy(v59, *(const void **)(v57 + 8), v58);
            v14 = *(_QWORD *)(*(_QWORD *)(a1 + 120) + 16LL) & v68;
            sub_20C660(a3, v14);
            if ( v58 > 0xFFFFFFFF )
            {
LABEL_74:
              if ( !under_debugger )
              {
                v45 = 5;
                interr(5, v14, v60, v61, *(double *)a4.m128_u64);
LABEL_76:
                sub_20AAD0(*(double *)a4.m128_u64, v45, v14, v46, v47);
              }
              goto LABEL_80;
            }
            sub_20C550(a3, v58);
            v50 = v59;
            sub_20BED0(a3, v59, v58);
            if ( v59 )
              *(double *)a4.m128_u64 = qfree(v59, (const char *)v59, *(double *)a4.m128_u64);
          }
          else
          {
            sub_20C660(a3, *(_QWORD *)(*(_QWORD *)(a1 + 120) + 16LL) & *(_QWORD *)v57);
            v50 = nullptr;
            sub_20C550(a3, 0);
          }
          v57 += 32;
        }
        while ( v57 != v69 + v70 );
LABEL_66:
        if ( v69 )
        {
          for ( i = 0; i != v66; ++i )
          {
            v63 = *(_QWORD *)(v52 + 8);
            if ( v63 )
            {
              *(_QWORD *)(v52 + 16) = 0;
              *(double *)a4.m128_u64 = qfree(v63, (const char *)v50, *(double *)a4.m128_u64);
            }
            v52 += 32;
          }
          qfree(v69, (const char *)v50, *(double *)a4.m128_u64);
        }
        break;
      case 2:
      case 3:
        sub_20C660(a3, *(_QWORD *)(v12 + 24) & *(_QWORD *)(*(_QWORD *)(a1 + 120) + 16LL));
        return 1;
      case 4:
        if ( !*(_QWORD *)(v12 + 24) )
          goto LABEL_32;
        sub_20AF30(a3, 1);
        v28 = *(_QWORD **)(v12 + 24);
        v29 = (const char *)(*v28 & *(_QWORD *)(*(_QWORD *)(a1 + 120) + 16LL));
        sub_20C660(a3, (__int64)v29);
        v32 = v28[2];
        v33 = (const void *)v28[1];
        if ( HIDWORD(v32) )
        {
          if ( !under_debugger )
          {
            v38 = 5;
            interr(5, v29, v30, v31, *(double *)a4.m128_u64);
LABEL_79:
            sub_20AA70(*(double *)a4.m128_u64, v38, (__int64)v29, v39, v40);
          }
LABEL_80:
          BUG();
        }
        sub_20C550(a3, v32);
        if ( v32 )
        {
          v34 = a3[1];
          v35 = v34 + v32;
          if ( __CFADD__(v34, v32) )
            v35 = 0x7FFFFFFFFFFFFFFFLL;
          sub_213C70(a3, v35);
          memcpy((void *)(v34 + *a3), v33, v32);
        }
        break;
      case 5:
        if ( !*(_QWORD *)(v12 + 24) )
          goto LABEL_32;
        sub_20AF30(a3, 1);
        sub_20E7D0(a1, v12, a3);
        return 1;
      case 6:
        if ( *(_QWORD *)(v12 + 24) )
        {
          sub_20AF30(a3, 1);
          v36 = *(_QWORD *)(v12 + 24);
          sub_20C660(a3, *(_QWORD *)(v36 + 8) & *(_QWORD *)(*(_QWORD *)(a1 + 120) + 16LL));
          sub_20C550(a3, *(_DWORD *)(v36 + 20) & 0xFFFFFFF);
          sub_20C550(a3, *(_DWORD *)(v36 + 4));
          sub_20C550(a3, *(_DWORD *)v36);
          switch ( *(_DWORD *)(v36 + 20) & 0xFFFFFFF )
          {
            case 1:
            case 8:
              v29 = &s1;
              if ( *(_QWORD *)(v36 + 32) )
                v29 = *(const char **)(v36 + 24);
              v38 = (__int64)a3;
              sub_20C770(a3, v29, *(double *)a4.m128_u64);
              v41 = *(_DWORD *)(v36 + 20) & 0xFFFFFFF;
              if ( (unsigned int)v41 > 0xB )
                goto LABEL_79;
              v42 = 2306;
              if ( !_bittest64(&v42, v41) )
                goto LABEL_79;
              v38 = (__int64)a3;
              v29 = (const char *)(*(_QWORD *)(v36 + 48) & *(_QWORD *)(*(_QWORD *)(a1 + 120) + 16LL));
              sub_20C660(a3, (__int64)v29);
              v43 = *(_DWORD *)(v36 + 20) & 0xFFFFFFF;
              if ( (unsigned int)v43 > 0xB )
                goto LABEL_79;
              if ( !_bittest64(&v42, v43) )
                goto LABEL_79;
              v29 = (const char *)*(unsigned int *)(v36 + 56);
              v38 = (__int64)a3;
              sub_20C550(a3, (unsigned int)v29);
              v44 = *(_DWORD *)(v36 + 20) & 0xFFFFFFF;
              if ( (unsigned int)v44 > 0xB || !_bittest64(&v42, v44) )
                goto LABEL_79;
              sub_20C660(a3, *(_QWORD *)(v36 + 64) & *(_QWORD *)(*(_QWORD *)(a1 + 120) + 16LL));
              break;
            case 2:
            case 4:
              sub_20C550(a3, *(_DWORD *)(v36 + 24));
              return 1;
            case 3:
            case 9:
              v37 = &s1;
              if ( *(_QWORD *)(v36 + 32) )
                v37 = *(const char **)(v36 + 24);
              goto LABEL_35;
            case 7:
              v14 = *(unsigned int *)(v36 + 24);
              v45 = (__int64)a3;
              sub_20C550(a3, v14);
              if ( (*(_DWORD *)(v36 + 20) & 0xFFFFFFF) != 7 )
                goto LABEL_76;
              v48 = a3[1];
              v49 = *(_BYTE *)(v36 + 28);
              v14 = *a3;
              v46 = v48 + 1;
              if ( a3[2] < (unsigned __int64)(v48 + 1) )
              {
                v45 = (__int64)a3;
                v64 = qvector_reserve(a3, v14, v46, 1);
                *a3 = v64;
                v14 = v64;
                v48 = a3[1];
              }
              *(_BYTE *)(v14 + v48) = v49;
              ++a3[1];
              if ( (*(_DWORD *)(v36 + 20) & 0xFFFFFFF) != 7 )
                goto LABEL_76;
              v45 = (__int64)a3;
              v14 = *(_QWORD *)(v36 + 32) & *(_QWORD *)(*(_QWORD *)(a1 + 120) + 16LL);
              sub_20C660(a3, v14);
              if ( (*(_DWORD *)(v36 + 20) & 0xFFFFFFF) != 7 )
                goto LABEL_76;
              v37 = &s1;
              if ( *(_QWORD *)(v36 + 48) )
                v37 = *(const char **)(v36 + 40);
LABEL_35:
              sub_20C770(a3, v37, *(double *)a4.m128_u64);
              break;
            default:
              return 1;
          }
        }
        else
        {
LABEL_32:
          sub_20AF30(a3, 0);
        }
        return 1;
      default:
        if ( under_debugger )
          goto LABEL_80;
        interr(40234, v14, v15, v16, *(double *)a4.m128_u64);
        goto LABEL_74;
    }
  }
  return 1;
}
