void __fastcall sub_40C0C0(__int64 a1, __int64 a2, __int64 a3, const __m128i **a4, char a5, int a6)
{
  char **exception; // r12
  __int64 *v7; // rbx
  __int64 *v8; // rsi
  char **v9; // rbp
  __int64 *v10; // rbx
  __int64 *v11; // rsi
  char **v12; // r12
  __int64 *v13; // rbx
  __int64 *v14; // rsi
  char **v15; // rbx
  __int64 v16; // r12
  _QWORD *v17; // rbx
  _QWORD *v18; // r12
  _QWORD *v19; // r13
  _QWORD *v20; // rax
  unsigned int *v21; // rbp
  __int64 v22; // rdx
  unsigned int *v23; // r15
  __int64 v24; // r14
  int v25; // eax
  _QWORD **v26; // rdx
  _QWORD **v27; // r15
  __int64 v28; // rdx
  char v29; // r8
  int v30; // r9d
  __int64 v31; // rcx
  _QWORD *v32; // rax
  unsigned int *v33; // rsi
  int v34; // eax
  unsigned int v35; // eax
  __int64 v36; // rsi
  unsigned int v37; // r8d
  size_t v38; // rsi
  unsigned int *v39; // rax
  __int64 v40; // rsi
  __int64 *v41; // r14
  __int64 v42; // r15
  _QWORD *v43; // rax
  _QWORD *v44; // rdx
  __int64 *v45; // r15
  _QWORD *v46; // rbp
  __int64 v47; // rax
  __int64 v48; // rcx
  __int64 v49; // rdx
  unsigned int v50; // edx
  size_t v51; // rsi
  unsigned int *v52; // rax
  __int64 v53; // rdi
  __int64 v54; // r15
  __int64 *v55; // r14
  _QWORD *v56; // rax
  _QWORD *v57; // rdx
  __int64 *v58; // r9
  _QWORD *v59; // r13
  int i; // eax
  unsigned int v61; // eax
  const __m128i *v62; // rcx
  unsigned int v63; // edx
  __int64 v64; // rax
  int v65; // edx
  __m128i *v66; // rax
  __m128i v67; // xmm2
  unsigned int v68; // r10d
  size_t v69; // rsi
  unsigned int *v70; // rax
  __int64 v71; // rdx
  unsigned int v72; // esi
  unsigned int v73; // eax
  __int64 v74; // rsi
  int v75; // r15d
  size_t v76; // rdi
  __int64 v77; // rdx
  __int64 v78; // r8
  const __m128i *v79; // rax
  __int64 v80; // rdx
  __int64 v81; // rdi
  const __m128i *j; // rdi
  __m128i v83; // xmm0
  __m128i v84; // xmm0
  _QWORD *v85; // r14
  __int64 v86; // rax
  _QWORD *v87; // rax
  _DWORD *v88; // [rsp+8h] [rbp-F0h]
  __int64 v89; // [rsp+8h] [rbp-F0h]
  __int64 v90; // [rsp+8h] [rbp-F0h]
  __int64 v91; // [rsp+8h] [rbp-F0h]
  unsigned int v92; // [rsp+8h] [rbp-F0h]
  unsigned int v93; // [rsp+8h] [rbp-F0h]
  __int64 *v94; // [rsp+8h] [rbp-F0h]
  unsigned int v95; // [rsp+8h] [rbp-F0h]
  __int64 v96; // [rsp+8h] [rbp-F0h]
  __int64 v97; // [rsp+10h] [rbp-E8h]
  _QWORD **v98; // [rsp+10h] [rbp-E8h]
  __int64 *v99; // [rsp+10h] [rbp-E8h]
  _DWORD *v100; // [rsp+10h] [rbp-E8h]
  __m128i v101; // [rsp+18h] [rbp-E0h] BYREF
  __m128i v102; // [rsp+28h] [rbp-D0h] BYREF
  __int64 *v103; // [rsp+38h] [rbp-C0h]
  const __m128i **v104; // [rsp+40h] [rbp-B8h]
  __int64 v105; // [rsp+48h] [rbp-B0h]
  unsigned int v106; // [rsp+50h] [rbp-A8h]
  char v107; // [rsp+57h] [rbp-A1h]
  __int64 *v108; // [rsp+58h] [rbp-A0h]
  __int64 v109; // [rsp+60h] [rbp-98h] BYREF
  __int64 v110; // [rsp+68h] [rbp-90h]
  __int64 v111; // [rsp+70h] [rbp-88h] BYREF
  unsigned int *v112; // [rsp+78h] [rbp-80h] BYREF
  __int64 v113[13]; // [rsp+90h] [rbp-68h] BYREF

  v16 = *(unsigned int *)(a1 + 272);
  v17 = *(_QWORD **)(a1 + 264);
  v101.m128i_i64[1] = a1;
  v106 = a2;
  v18 = &v17[2 * v16];
  v105 = a3;
  v104 = a4;
  v107 = a5;
  if ( v18 != v17 )
  {
    while ( *v17 <= 1u )
    {
      v17 += 2;
      if ( v18 == v17 )
        return;
    }
    if ( v18 != v17 )
    {
      v103 = &v109;
      do
      {
        v19 = (_QWORD *)v17[1];
        if ( *(_QWORD *)(v101.m128i_i64[1] + 288) != v19[3] )
        {
          v21 = (unsigned int *)v19[24];
          v111 = v19[1];
          if ( v21 )
          {
            v22 = (__int64)&v21[2 * *(v21 - 1)];
            if ( v21 == (unsigned int *)v22 )
            {
              v21 = nullptr;
            }
            else
            {
              v23 = v21;
              v21 = nullptr;
              do
              {
                while ( 1 )
                {
                  LODWORD(a4) = v106;
                  if ( *(_DWORD *)(*(_QWORD *)v23 + 96LL) >= v106 )
                    break;
                  v23 += 2;
                  if ( (unsigned int *)v22 == v23 )
                    goto LABEL_24;
                }
                v97 = v22;
                v88 = *(_DWORD **)v23;
                sub_407990(*(_QWORD **)v23, a2, v22, v106, a5, a6);
                v22 = v97;
                v24 = *((_QWORD *)v88 + 2);
                if ( v24 )
                  ++*(_DWORD *)(v24 + 8);
                if ( !v21 || (v25 = *(v21 - 1), v25 == *(v21 - 2)) )
                {
                  v112 = v21;
                  sub_23A6F0(&v112);
                  v21 = v112;
                  v22 = v97;
                  v25 = *(v112 - 1);
                }
                LODWORD(a4) = v25;
                v23 += 2;
                *(_QWORD *)&v21[2 * v25] = v24;
                *(v21 - 1) = v25 + 1;
              }
              while ( (unsigned int *)v22 != v23 );
            }
          }
LABEL_24:
          if ( v107 )
          {
            v26 = (_QWORD **)v19[25];
            if ( v26 )
            {
              v98 = &v26[*((unsigned int *)v26 - 1)];
              if ( v26 != v98 )
              {
                v27 = (_QWORD **)v19[25];
                v89 = (__int64)*v26;
                sub_407990(*v26, a2, (__int64)v26, (int)a4, a5, a6);
                v31 = *(_QWORD *)(v89 + 16);
                if ( v31 )
                  ++*(_DWORD *)(v31 + 8);
                if ( !v21 )
                {
                  v90 = v31;
                  v32 = (_QWORD *)sub_186B270(0x18u);
                  v21 = (unsigned int *)(v32 + 1);
                  v33 = (unsigned int *)(v32 + 1);
                  *v32 = 2;
                  v31 = v90;
                  v34 = 1;
                  goto LABEL_31;
                }
                while ( 1 )
                {
                  v35 = *(v21 - 1);
                  if ( v35 == *(v21 - 2) )
                  {
                    v37 = (3 * v35 + 1) >> 1;
                    v38 = 8 * v37 + 8;
                    if ( 8 * v35 + 8 >= (unsigned int)v38 || v35 >= v37 )
                    {
                      exception = (char **)__cxa_allocate_exception(0x28u);
                      v108 = v113;
                      sub_3FCFD0(v113, "Overflow encountered when expanding vector");
                      v7 = v108;
                      v8 = v108;
                      *exception = (char *)off_1C63128;
                      sub_2333C0(exception + 1, v8);
                      sub_233E40((__int64)v7);
                      __cxa_throw(
                        exception,
                        (struct type_info *)&`typeinfo for'default_exception,
                        (void (*)(void *))sub_230E50);
                    }
                    v101.m128i_i64[0] = v31;
                    v92 = (3 * v35 + 1) >> 1;
                    v39 = (unsigned int *)sub_186B300(v21 - 2, v38);
                    v40 = v39[1];
                    v29 = v92;
                    v21 = v39 + 2;
                    v31 = v101.m128i_i64[0];
                    *v39 = v92;
                    LODWORD(v39) = v40;
                    v33 = &v21[2 * v40];
                    v34 = (_DWORD)v39 + 1;
                  }
                  else
                  {
                    v36 = v35;
                    v34 = v35 + 1;
                    v33 = &v21[2 * v36];
                  }
LABEL_31:
                  *(_QWORD *)v33 = v31;
                  ++v27;
                  *(v21 - 1) = v34;
                  if ( v98 == v27 )
                    break;
                  v91 = (__int64)*v27;
                  sub_407990(*v27, (__int64)v33, v28, v31, v29, v30);
                  v31 = *(_QWORD *)(v91 + 16);
                  if ( v31 )
                    ++*(_DWORD *)(v31 + 8);
                }
              }
            }
          }
          v112 = v21;
          sub_41C800(v103, &v111);
          sub_2334C0(&v111);
          sub_43D1D0(v101.m128i_i64[1] + 176, v109, 0, 1, v103, 0);
          v113[0] = v109;
          if ( v109 )
            ++*(_DWORD *)(v109 + 8);
          v108 = v113;
          sub_407600((unsigned int **)(v105 + 8), v113);
          v41 = (__int64 *)v19[6];
          v42 = *(unsigned int *)(v19[3] + 32LL);
          v102.m128i_i64[0] = v19[3];
          if ( (_DWORD)v42 )
          {
            v43 = (_QWORD *)sub_186B270(0x18u);
            v44 = v43 + 1;
            v45 = &v41[v42];
            v46 = v43 + 1;
            *v43 = 2;
            v47 = 1;
            while ( 1 )
            {
              v48 = *v41++;
              *v44 = v48;
              *((_DWORD *)v46 - 1) = v47;
              if ( v41 == v45 )
                break;
              if ( *((_DWORD *)v46 - 2) == (_DWORD)v47 )
              {
                v50 = (unsigned int)(3 * v47 + 1) >> 1;
                v51 = 8 * v50 + 8;
                if ( 8 * (int)v47 + 8 >= (unsigned int)v51 || (unsigned int)v47 >= v50 )
                {
                  v9 = (char **)__cxa_allocate_exception(0x28u);
                  sub_3FCFD0(v108, "Overflow encountered when expanding vector");
                  v10 = v108;
                  v11 = v108;
                  *v9 = (char *)off_1C63128;
                  sub_2333C0(v9 + 1, v11);
                  sub_233E40((__int64)v10);
                  __cxa_throw(v9, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
                }
                v93 = (unsigned int)(3 * v47 + 1) >> 1;
                v52 = (unsigned int *)sub_186B300(v46 - 1, v51);
                v46 = v52 + 2;
                *v52 = v93;
                LODWORD(v52) = v52[1];
                v44 = &v46[(unsigned int)v52];
                v47 = (unsigned int)((_DWORD)v52 + 1);
              }
              else
              {
                v49 = (unsigned int)v47;
                v47 = (unsigned int)(v47 + 1);
                v44 = &v46[v49];
              }
            }
            v102.m128i_i64[1] = v109;
            v53 = v19[3];
            v101.m128i_i64[0] = *(_QWORD *)(v101.m128i_i64[1] + 152);
            v102.m128i_i64[0] = v53;
            if ( v53 )
            {
              ++*(_DWORD *)(v53 + 8);
              v47 = *((unsigned int *)v46 - 1);
            }
            if ( (_DWORD)v47 )
            {
              v54 = *v46;
              v55 = v46;
              if ( *v46 )
                ++*(_DWORD *)(v54 + 8);
              v94 = &v46[v47];
              v56 = (_QWORD *)sub_186B270(0x18u);
              v57 = v56 + 1;
              v58 = v94;
              v59 = v56 + 1;
              *v56 = 2;
              for ( i = 1; ; i = (_DWORD)v70 + 1 )
              {
                ++v55;
                *v57 = v54;
                *((_DWORD *)v59 - 1) = i;
                if ( v55 == v58 )
                  break;
                while ( 1 )
                {
                  v54 = *v55;
                  if ( *v55 )
                    ++*(_DWORD *)(v54 + 8);
                  v61 = *((_DWORD *)v59 - 1);
                  if ( v61 == *((_DWORD *)v59 - 2) )
                    break;
                  ++v55;
                  v59[v61] = v54;
                  *((_DWORD *)v59 - 1) = v61 + 1;
                  if ( v55 == v58 )
                    goto LABEL_61;
                }
                v68 = (3 * v61 + 1) >> 1;
                v69 = 8 * v68 + 8;
                if ( 8 * v61 + 8 >= (unsigned int)v69 || v61 >= v68 )
                {
                  v12 = (char **)__cxa_allocate_exception(0x28u);
                  sub_3FCFD0(v108, "Overflow encountered when expanding vector");
                  v13 = v108;
                  v14 = v108;
                  *v12 = (char *)off_1C63128;
                  sub_2333C0(v12 + 1, v14);
                  sub_233E40((__int64)v13);
                  __cxa_throw(v12, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
                }
                v99 = v58;
                v95 = (3 * v61 + 1) >> 1;
                v70 = (unsigned int *)sub_186B300(v59 - 1, v69);
                v71 = v70[1];
                v59 = v70 + 2;
                v58 = v99;
                *v70 = v95;
                LODWORD(v70) = v71;
                v57 = &v59[v71];
              }
            }
            else
            {
              v59 = nullptr;
            }
          }
          else
          {
            v46 = nullptr;
            v59 = nullptr;
            v102.m128i_i64[1] = v109;
            v101.m128i_i64[0] = *(_QWORD *)(v101.m128i_i64[1] + 152);
            ++*(_DWORD *)(v102.m128i_i64[0] + 8);
          }
LABEL_61:
          v113[4] = v102.m128i_i64[1];
          v113[5] = v101.m128i_i64[0];
          if ( v102.m128i_i64[1] )
            ++*(_DWORD *)(v102.m128i_i64[1] + 8);
          v62 = *v104;
          if ( *v104 )
          {
            v63 = v62[-1].m128i_u32[3];
            if ( v63 == v62[-1].m128i_i32[2] )
            {
              v72 = 3 * v63 + 1;
              v73 = v72 & 0xFFFFFFFE;
              v74 = v72 >> 1;
              v75 = v74;
              v76 = 16 * (v73 + (unsigned int)v74) + 8;
              if ( 48 * v63 + 8 >= (unsigned int)v76 || v63 >= (unsigned int)v74 )
              {
                v15 = (char **)__cxa_allocate_exception(0x28u);
                sub_3FCFD0(&v111, "Overflow encountered when expanding vector");
                *v15 = (char *)off_1C63128;
                sub_2333C0(v15 + 1, &v111);
                sub_233E40((__int64)&v111);
                __cxa_throw(v15, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
              v78 = sub_186B270(v76);
              v79 = *v104;
              if ( *v104 )
              {
                v80 = v79[-1].m128i_u32[3];
                v81 = 3 * v80;
                *(_DWORD *)(v78 + 4) = v80;
                v77 = v78 + 8;
                for ( j = &v79[v81]; j != v79; v79[-1].m128i_i64[0] = 0 )
                {
                  v83 = _mm_loadu_si128(v79);
                  v79->m128i_i64[0] = 0;
                  v79 += 3;
                  v77 += 48;
                  *(__m128i *)(v77 - 48) = v83;
                  *(_QWORD *)(v77 - 32) = v79[-2].m128i_i64[0];
                  v84 = _mm_loadu_si128((const __m128i *)((char *)v79 - 24));
                  v74 = v79[-1].m128i_i64[1];
                  v79[-2].m128i_i64[1] = 0;
                  *(__m128i *)(v77 - 24) = v84;
                  *(_QWORD *)(v77 - 8) = v74;
                }
              }
              else
              {
                *(_DWORD *)(v78 + 4) = 0;
              }
              v85 = v104;
              v100 = (_DWORD *)v78;
              v96 = v78 + 8;
              sub_41E3C0(v104, v74, v77);
              v62 = (const __m128i *)v96;
              v86 = (unsigned int)v100[1];
              *v85 = v96;
              *v100 = v75;
              v65 = v86 + 1;
              v66 = (__m128i *)(v96 + 48 * v86);
            }
            else
            {
              v64 = v63;
              v65 = v63 + 1;
              v66 = (__m128i *)&v62[3 * v64];
            }
          }
          else
          {
            v87 = (_QWORD *)sub_186B270(0x68u);
            *v87 = 2;
            v65 = 1;
            v62 = (const __m128i *)(v87 + 1);
            *v104 = (const __m128i *)(v87 + 1);
            v66 = (__m128i *)(v87 + 1);
          }
          v67 = _mm_loadl_epi64(&v101);
          *v66 = _mm_unpacklo_epi64(_mm_loadl_epi64(&v102), v67);
          v66[1] = _mm_unpacklo_epi64(v67, (__m128i)(unsigned __int64)v59);
          v66[2] = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&v102.m128i_u64[1]), v67);
          v62[-1].m128i_i32[3] = v65;
          sub_3FCDF0(0, v67.m128i_i64[0]);
          if ( v46 )
            sub_186B220(v46 - 1);
          a2 = v110;
          sub_3FCDF0(v109, v110);
        }
        v20 = v17 + 2;
        if ( v18 == v17 + 2 )
          break;
        while ( 1 )
        {
          v17 = v20;
          if ( *v20 > 1u )
            break;
          v20 += 2;
          if ( v18 == v20 )
            return;
        }
      }
      while ( v18 != v20 );
    }
  }
}

