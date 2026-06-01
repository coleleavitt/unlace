char *__fastcall sub_521500(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        unsigned __int64 a5,
        unsigned int *a6,
        char *a7,
        __int64 a8)
{
  int v13; // ecx
  int v14; // edx
  int v16; // eax
  int v17; // esi
  int v18; // edx
  int v19; // eax
  __int64 *v20; // rcx
  int v21; // esi
  __int64 v22; // rax
  unsigned int v23; // edx
  char *v24; // rdi
  __int64 v25; // rdx
  __int64 *v26; // r9
  char *result; // rax
  __int64 v28; // rdx
  int v29; // eax
  __int64 v30; // r12
  int v31; // r10d
  __int64 *v32; // rax
  __int64 v33; // rax
  __int64 v34; // r8
  unsigned int v35; // r10d
  int v36; // ecx
  __m128i v37; // xmm1
  __int64 v38; // rdx
  __int32 v39; // r13d
  __m128i *v40; // rbx
  unsigned int v41; // eax
  __int64 v42; // rdx
  __m128i *v43; // r12
  __int64 v44; // rax
  __m128i *v45; // rsi
  __int64 v46; // r11
  __m128i *v47; // rcx
  __int64 v48; // rdx
  __int64 v49; // rax
  unsigned __int64 v50; // rax
  __int64 *v51; // rax
  __int64 v52; // rax
  __int32 v53; // r9d
  __int64 v54; // rdi
  _DWORD *v55; // rax
  __int64 v56; // rcx
  __int8 *v57; // rax
  const __m128i *v58; // rcx
  __m128i *v59; // r11
  unsigned int *v60; // r8
  unsigned int v61; // r15d
  __int64 v62; // r14
  __int64 v63; // rdx
  __m128i *v64; // rsi
  __int64 v65; // rdi
  __m128i *v66; // rdx
  __m128i v67; // xmm0
  __int64 v68; // rsi
  __int64 v69; // rsi
  __m128i v70; // [rsp+10h] [rbp-D0h] BYREF
  __m128i v71; // [rsp+20h] [rbp-C0h] BYREF
  __m128i v72; // [rsp+30h] [rbp-B0h]
  __m128i *v73; // [rsp+40h] [rbp-A0h]
  __int64 v74; // [rsp+48h] [rbp-98h]
  __int64 v75; // [rsp+50h] [rbp-90h]
  size_t v76; // [rsp+58h] [rbp-88h]
  unsigned __int64 v77; // [rsp+60h] [rbp-80h]
  __int64 v78; // [rsp+68h] [rbp-78h]
  unsigned __int64 v79; // [rsp+70h] [rbp-70h] BYREF
  __int64 v80; // [rsp+78h] [rbp-68h] BYREF
  __int128 v81; // [rsp+80h] [rbp-60h] BYREF
  __int64 v82; // [rsp+90h] [rbp-50h]
  __int64 v83; // [rsp+98h] [rbp-48h]
  __int64 v84; // [rsp+A0h] [rbp-40h]

  v80 = a4;
  v13 = *(_DWORD *)(a4 + 12);
  v14 = *(_DWORD *)(a5 + 12);
  v78 = a1;
  v79 = a5;
  v16 = (v14 - v13) ^ (v13 << 8);
  v17 = (v13 - v16) << 10;
  v18 = v16 ^ ((v13 - v16) << 16);
  v19 = v16 - v13;
  v20 = *(__int64 **)(a1 + 56);
  v21 = (v18 + v19) ^ v17;
  v22 = *(unsigned int *)(a1 + 64);
  v23 = v22 - 1;
  v22 *= 24;
  v24 = (char *)v20 + v22;
  v25 = 24LL * (v21 & v23);
  v26 = &v20[(unsigned __int64)v25 / 8];
  if ( v25 != v22 )
  {
    result = (char *)&v20[(unsigned __int64)v25 / 8];
    do
    {
      v28 = *(_QWORD *)result;
      if ( *(_QWORD *)result > 1u )
      {
        if ( *((_DWORD *)result + 5) == v21 && v28 == a4 && a5 == *((_QWORD *)result + 1) )
        {
          v78 = a1;
          goto LABEL_29;
        }
      }
      else if ( !v28 )
      {
        v78 = a1;
LABEL_9:
        v29 = sub_51E070(v78, a4);
        v30 = *(_QWORD *)(v78 + 16);
        v31 = v29;
        v32 = *(__int64 **)v78;
        LODWORD(v75) = v31;
        v33 = sub_4DBB50(*v32, a2, &v80, (__int64 *)&v79, v31);
        sub_52C6B0(v30, v33);
        v34 = v80;
        v35 = v75;
        v36 = *(_DWORD *)(v80 + 12);
        v77 = v79;
        v37 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v80, (__m128i)v79);
        LODWORD(v76) = *(_DWORD *)(v79 + 12);
        v38 = *(unsigned int *)(v78 + 64);
        v39 = (((v76 - v36) ^ (v36 << 8) ^ ((v36 - (((_DWORD)v76 - v36) ^ (v36 << 8))) << 16))
             + ((v76 - v36) ^ (v36 << 8))
             - v36)
            ^ ((v36 - (((_DWORD)v76 - v36) ^ (v36 << 8))) << 10);
        if ( 3 * (int)v38 < (unsigned int)(4 * (*(_DWORD *)(v78 + 68) + *(_DWORD *)(v78 + 72))) )
        {
          v71.m128i_i32[0] = v75;
          v72.m128i_i64[0] = v80;
          LODWORD(v74) = 2 * v38;
          v70 = v37;
          v75 = 24LL * (unsigned int)(2 * v38);
          v76 = v75;
          v52 = sub_186B270(v75);
          v53 = v74;
          v42 = v75;
          v34 = v72.m128i_i64[0];
          v35 = v71.m128i_i32[0];
          v40 = (__m128i *)v52;
          v37 = _mm_load_si128(&v70);
          if ( (_DWORD)v74 )
          {
            LODWORD(v76) = v74 - 1;
            if ( (unsigned int)(v74 - 1) <= 2 )
            {
              *(_DWORD *)(v52 + 20) = 0;
              *(_DWORD *)(v52 + 44) = 0;
              *(_OWORD *)v52 = 0;
              *(_OWORD *)(v52 + 24) = 0;
            }
            else
            {
              v54 = v78;
              v55 = (_DWORD *)(v52 + 20);
              v56 = (__int64)v40[6 * ((unsigned int)v74 >> 2) + 1].m128i_i64 + 4;
              do
              {
                *v55 = 0;
                v55 += 24;
                *(_OWORD *)(v55 - 29) = 0;
                *(_OWORD *)(v55 - 23) = 0;
                *(_OWORD *)(v55 - 17) = 0;
                *(_OWORD *)(v55 - 11) = 0;
                *(v55 - 18) = 0;
                *(v55 - 12) = 0;
                *(v55 - 6) = 0;
              }
              while ( (_DWORD *)v56 != v55 );
              v78 = v54;
              v57 = &v40->m128i_i8[24 * (v53 & 0xFFFFFFFC)];
              if ( (v53 & 2) != 0 )
              {
                *((_DWORD *)v57 + 5) = 0;
                *((_DWORD *)v57 + 11) = 0;
                *(_OWORD *)v57 = 0;
                *(_OWORD *)(v57 + 24) = 0;
                if ( (v53 & 2) != 2 )
                {
                  *((_QWORD *)v57 + 8) = 0;
                  *((_OWORD *)v57 + 3) = 0;
                }
              }
            }
          }
          else
          {
            LODWORD(v76) = -1;
          }
          v41 = v76;
          v58 = *(const __m128i **)(v78 + 56);
          v59 = (__m128i *)((char *)v58 + 24 * *(unsigned int *)(v78 + 64));
          v43 = (__m128i *)((char *)v40 + v75);
          if ( v58 != v59 )
          {
            v74 = v34;
            v60 = a6;
            v61 = a3;
            v62 = v78;
            v78 = v42;
            do
            {
              if ( v58->m128i_i64[0] > 1uLL )
              {
                v63 = 24LL * (v58[1].m128i_i32[1] & (unsigned int)v76);
                v64 = (__m128i *)((char *)v40 + v63);
                if ( v63 == v75 )
                {
LABEL_64:
                  if ( v64 == v40 )
                  {
LABEL_78:
                    v73 = v59;
                    v70.m128i_i64[0] = (__int64)v58;
                    v71.m128i_i32[0] = v35;
                    v72 = v37;
                    sub_1872CE0("");
                    sub_1873130(114, 213);
                  }
                  v65 = v78;
                  v66 = v40;
                  while ( v66->m128i_i64[0] )
                  {
                    v66 = (__m128i *)((char *)v66 + 24);
                    if ( v64 == v66 )
                      goto LABEL_78;
                  }
                }
                else
                {
                  v65 = v78;
                  v66 = (__m128i *)((char *)v40 + v63);
                  while ( v66->m128i_i64[0] )
                  {
                    v66 = (__m128i *)((char *)v66 + 24);
                    if ( v43 == v66 )
                      goto LABEL_64;
                  }
                }
                v67 = _mm_loadu_si128(v58);
                v78 = v65;
                *v66 = v67;
                v66[1].m128i_i64[0] = v58[1].m128i_i64[0];
              }
              v58 = (const __m128i *)((char *)v58 + 24);
            }
            while ( v59 != v58 );
            v68 = v62;
            v42 = v78;
            v78 = v62;
            a3 = v61;
            v59 = *(__m128i **)(v68 + 56);
            a6 = v60;
            v34 = v74;
          }
          if ( v59 )
          {
            v70.m128i_i32[0] = v53;
            v72.m128i_i64[0] = v42;
            LODWORD(v74) = v41;
            LODWORD(v75) = v35;
            v76 = v34;
            v71 = v37;
            sub_186B220(v59);
            v53 = v70.m128i_i32[0];
            v37 = _mm_load_si128(&v71);
            v42 = v72.m128i_i64[0];
            v41 = v74;
            v35 = v75;
            v34 = v76;
          }
          v69 = v78;
          *(_QWORD *)(v78 + 56) = v40;
          *(_DWORD *)(v69 + 64) = v53;
          *(_DWORD *)(v69 + 72) = 0;
        }
        else
        {
          v40 = *(__m128i **)(v78 + 56);
          v41 = v38 - 1;
          v42 = 24 * v38;
          v43 = (__m128i *)((char *)v40 + v42);
        }
        v44 = 24LL * (v39 & v41);
        v45 = (__m128i *)((char *)v40 + v44);
        if ( v44 == v42 )
        {
          v47 = nullptr;
LABEL_19:
          if ( v45 == v40 )
          {
LABEL_73:
            LODWORD(v77) = v35;
            sub_1872CE0("");
            sub_1873130(114, 405);
          }
          while ( 1 )
          {
            v49 = v40->m128i_i64[0];
            if ( v40->m128i_i64[0] > 1uLL )
            {
              if ( v40[1].m128i_i32[1] == v39 && v34 == v49 )
              {
                result = (char *)v77;
                if ( v77 == v40->m128i_i64[1] )
                {
                  v40[1].m128i_i32[0] = v35;
                  v40[1].m128i_i32[1] = v39;
                  *v40 = v37;
                  goto LABEL_30;
                }
              }
            }
            else
            {
              if ( !v49 )
              {
                result = (char *)v78;
                if ( v47 )
                  --*(_DWORD *)(v78 + 72);
                else
                  v47 = v40;
                goto LABEL_77;
              }
              v47 = v40;
            }
            v40 = (__m128i *)((char *)v40 + 24);
            if ( v45 == v40 )
              goto LABEL_73;
          }
        }
        v46 = v78;
        result = &v40->m128i_i8[v44];
        v47 = nullptr;
        while ( 1 )
        {
          while ( 1 )
          {
            v48 = *(_QWORD *)result;
            if ( *(_QWORD *)result <= 1u )
              break;
            if ( *((_DWORD *)result + 5) == v39 && v34 == v48 && v77 == *((_QWORD *)result + 1) )
            {
              *((_DWORD *)result + 4) = v35;
              *((_DWORD *)result + 5) = v39;
              *(__m128i *)result = v37;
              goto LABEL_30;
            }
            result += 24;
            if ( result == (char *)v43 )
              goto LABEL_19;
          }
          if ( !v48 )
            break;
          v47 = (__m128i *)result;
          result += 24;
          if ( result == (char *)v43 )
            goto LABEL_19;
        }
        if ( v47 )
          --*(_DWORD *)(v78 + 72);
        else
          v47 = (__m128i *)result;
        result = (char *)v46;
LABEL_77:
        v47[1].m128i_i32[0] = v35;
        v47[1].m128i_i32[1] = v39;
        *v47 = v37;
        ++*((_DWORD *)result + 17);
        goto LABEL_30;
      }
      result += 24;
    }
    while ( v24 != result );
    v78 = a1;
  }
  if ( v20 == v26 )
    goto LABEL_9;
  while ( 1 )
  {
    v50 = *v20;
    if ( (unsigned __int64)*v20 > 1 )
      break;
    if ( !v50 )
      goto LABEL_9;
LABEL_37:
    v20 += 3;
    if ( v26 == v20 )
      goto LABEL_9;
  }
  if ( *((_DWORD *)v20 + 5) != v21 || v50 != a4 || a5 != v20[1] )
    goto LABEL_37;
  result = (char *)v20;
LABEL_29:
  v35 = *((_DWORD *)result + 4);
LABEL_30:
  if ( a3 == -1 )
  {
    *a6 = v35;
  }
  else
  {
    v81 = 0;
    v51 = *(__int64 **)v78;
    v82 = 0;
    v84 = 0;
    v83 = *v51;
    sub_520C70(v78, a3, v35, (int **)&v81, a6, *a7, a8);
    *a7 = 1;
    return a7;
  }
  return result;
}

