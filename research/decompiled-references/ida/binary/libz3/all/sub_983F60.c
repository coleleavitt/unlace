unsigned __int64 __fastcall sub_983F60(__int64 a1, __int64 *a2, _DWORD **a3, unsigned __int64 a4)
{
  char **exception; // rbp
  unsigned __int64 result; // rax
  __int64 v7; // rdi
  __int64 *v8; // r9
  _DWORD **v9; // r10
  unsigned __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 *v13; // r10
  unsigned __int64 v14; // r9
  _QWORD *v15; // r13
  _QWORD *v16; // r14
  _DWORD *v17; // rdx
  _DWORD *v18; // rsi
  unsigned int v19; // edi
  __m128i *v20; // rbp
  unsigned int v21; // eax
  int v22; // r8d
  int v23; // esi
  unsigned __int64 v24; // rdx
  unsigned __int64 v25; // rbx
  unsigned int v26; // edx
  __int64 v27; // rcx
  int v28; // edx
  _QWORD *v29; // rcx
  _QWORD *v30; // rbp
  unsigned __int64 v31; // rbx
  _QWORD *v32; // rdx
  __int64 v33; // rax
  __int64 v34; // r8
  unsigned int v35; // r11d
  unsigned int v36; // eax
  unsigned int v37; // r8d
  unsigned int v38; // r12d
  unsigned int i; // r13d
  unsigned int v40; // ebp
  __m128i *v41; // rax
  __m128i si128; // xmm3
  __m128i v43; // xmm2
  __m128i *v44; // rdi
  __m128i *v45; // rdx
  __int64 v46; // rax
  _QWORD *v47; // r9
  _QWORD *v48; // r10
  __m128 *v49; // rbx
  unsigned int v50; // r8d
  _QWORD *v51; // rsi
  int v52; // r11d
  unsigned int v53; // edx
  void *v54; // rdi
  const double *v55; // rcx
  __m128 v56; // xmm0
  __int64 v57; // rdx
  __int64 v58; // r14
  __int64 v59; // r10
  int v60; // esi
  int v61; // edx
  __int8 *v62; // rax
  _QWORD *v63; // rbp
  unsigned int v64; // eax
  __int64 v65; // rdx
  _QWORD *v66; // rdx
  _QWORD *v67; // rax
  unsigned int v68; // ebx
  unsigned int v69; // edx
  __int64 v70; // rax
  __int64 v71; // rdx
  _DWORD *v72; // r12
  __int64 v73; // rsi
  unsigned __int64 v74; // rax
  __int64 v75; // rsi
  unsigned int v76; // r12d
  unsigned int v77; // ecx
  unsigned int *v78; // rax
  _QWORD *v79; // rax
  unsigned int v80; // ebp
  unsigned int v81; // ecx
  unsigned int *v82; // rdx
  __int64 v83; // rcx
  _QWORD *v84; // rax
  _QWORD *v85; // rbp
  _QWORD *v86; // rax
  __int64 *v87; // [rsp+8h] [rbp-C0h]
  int v88; // [rsp+8h] [rbp-C0h]
  _QWORD *v89; // [rsp+8h] [rbp-C0h]
  __int64 v90; // [rsp+8h] [rbp-C0h]
  __int64 v91; // [rsp+8h] [rbp-C0h]
  _DWORD **v92; // [rsp+10h] [rbp-B8h]
  unsigned int v93; // [rsp+10h] [rbp-B8h]
  _QWORD *v94; // [rsp+10h] [rbp-B8h]
  __int64 *v95; // [rsp+10h] [rbp-B8h]
  __int64 *v97; // [rsp+10h] [rbp-B8h]
  int v98; // [rsp+18h] [rbp-B0h]
  unsigned int v99; // [rsp+18h] [rbp-B0h]
  unsigned __int64 v100; // [rsp+18h] [rbp-B0h]
  unsigned __int64 v101; // [rsp+18h] [rbp-B0h]
  unsigned __int64 v102; // [rsp+18h] [rbp-B0h]
  void *ptr; // [rsp+20h] [rbp-A8h]
  __int64 v104; // [rsp+28h] [rbp-A0h]
  __int64 v105; // [rsp+30h] [rbp-98h]
  __int64 *v106; // [rsp+30h] [rbp-98h]
  _QWORD *v107; // [rsp+38h] [rbp-90h]
  unsigned __int64 v108; // [rsp+38h] [rbp-90h]
  _QWORD *v109; // [rsp+40h] [rbp-88h]
  __int64 v110; // [rsp+48h] [rbp-80h]
  __int64 *v111; // [rsp+50h] [rbp-78h]
  unsigned __int64 v112; // [rsp+58h] [rbp-70h]
  __int64 v113[11]; // [rsp+70h] [rbp-58h] BYREF

  result = a4 & 7;
  if ( (_DWORD)result == 2 )
  {
    v30 = *(_QWORD **)(a1 + 176);
    v31 = a4 >> 3;
    v32 = (_QWORD *)*v30;
    if ( *v30 )
    {
      v33 = *((unsigned int *)v32 - 1);
      if ( (_DWORD)v33 == *((_DWORD *)v32 - 2) )
      {
        v76 = (unsigned int)(3 * v33 + 1) >> 1;
        v77 = 4 * v76 + 8;
        if ( 4 * (int)v33 + 8 >= v77 || (unsigned int)v33 >= v76 )
          goto LABEL_86;
        v78 = (unsigned int *)sub_186B300(v32 - 1, v77);
        v32 = v78 + 2;
        *v30 = v78 + 2;
        *v78 = v76;
        result = (unsigned __int64)&v78[v78[1] + 2];
      }
      else
      {
        result = (unsigned __int64)v32 + 4 * v33;
      }
    }
    else
    {
      v79 = (_QWORD *)sub_186B270(0x10u);
      *v79 = 2;
      v32 = v79 + 1;
      *v30 = v79 + 1;
      result = (unsigned __int64)(v79 + 1);
    }
    *(_DWORD *)result = v31;
    ++*((_DWORD *)v32 - 1);
    return result;
  }
  if ( (unsigned int)result > 2 )
  {
    if ( (_DWORD)result != 3 )
    {
      sub_1872CE0("");
      sub_1873130(114, 144);
    }
    v25 = a4 & 0xFFFFFFFFFFFFFFF8LL;
    result = *(unsigned __int8 *)((a4 & 0xFFFFFFFFFFFFFFF8LL) + 8);
    if ( (result & 1) != 0 )
      return result;
    *(_BYTE *)(v25 + 8) = result | 1;
    result = *(_QWORD *)(a1 + 88);
    if ( !result )
    {
      v86 = (_QWORD *)sub_186B270(0x18u);
      v28 = 1;
      *v86 = 2;
      result = (unsigned __int64)(v86 + 1);
      *(_QWORD *)(a1 + 88) = result;
      v29 = (_QWORD *)result;
      goto LABEL_26;
    }
    v26 = *(_DWORD *)(result - 4);
    if ( v26 != *(_DWORD *)(result - 8) )
    {
      v27 = v26;
      v28 = v26 + 1;
      v29 = (_QWORD *)(result + 8 * v27);
LABEL_26:
      *v29 = v25;
      *(_DWORD *)(result - 4) = v28;
      return result;
    }
    v80 = (3 * v26 + 1) >> 1;
    v81 = 8 * v80 + 8;
    if ( 8 * v26 + 8 < v81 && v26 < v80 )
    {
      v82 = (unsigned int *)sub_186B300((void *)(result - 8), v81);
      result = (unsigned __int64)(v82 + 2);
      v83 = v82[1];
      *v82 = v80;
      *(_QWORD *)(a1 + 88) = v82 + 2;
      LODWORD(v82) = v83;
      v29 = (_QWORD *)(result + 8 * v83);
      v28 = (_DWORD)v82 + 1;
      goto LABEL_26;
    }
LABEL_86:
    exception = (char **)__cxa_allocate_exception(0x28u);
    sub_24ABB0(v113, "Overflow encountered when expanding vector");
LABEL_85:
    *exception = (char *)off_1C63128;
    sub_2333C0(exception + 1, v113);
    sub_233E40((__int64)v113);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
  }
  if ( (a4 & 7) == 0 )
    return result;
  v7 = *(_QWORD *)(a1 + 32);
  v8 = a2;
  v9 = a3;
  result = *(_QWORD *)(v7 + 16);
  if ( *(_DWORD *)result == 2 )
  {
    v101 = a4;
    result = sub_95A250(v7, *a2, *a3);
    a4 = v101;
    v9 = a3;
    v8 = a2;
  }
  v10 = a4 >> 3;
  if ( (*((_BYTE *)v8 + 44) & 8) != 0 )
  {
    if ( !(_DWORD)v10 )
      return result;
LABEL_33:
    v92 = v9;
    v87 = v8;
    sub_98A120(a1, v8[14], v9[15]);
    return sub_98A120(a1, v87[15], v92[14]);
  }
  if ( (_DWORD)v10 )
    goto LABEL_33;
  result = *v8;
  v11 = 112;
  v12 = *(unsigned int *)(*v8 + 24);
  if ( (_DWORD)v12 )
  {
    v104 = 8 * v12 + 112;
    result = (unsigned __int64)v9;
    v13 = v8;
    v14 = result;
    do
    {
      v15 = *(_QWORD **)(v14 + v11);
      v16 = *(_QWORD **)((char *)v13 + v11);
      if ( v16 != v15 )
      {
        v17 = (_DWORD *)*v16;
        v18 = (_DWORD *)*v15;
        if ( *(_DWORD *)*v15 >= *(_DWORD *)*v16 )
        {
          v17 = (_DWORD *)*v15;
          v18 = (_DWORD *)*v16;
          v15 = *(_QWORD **)((char *)v13 + v11);
          v16 = *(_QWORD **)(v14 + v11);
        }
        v19 = *(_DWORD *)(a1 + 132);
        v20 = *(__m128i **)(a1 + 112);
        v21 = v19 - 1;
        if ( !*(_QWORD *)(a1 + 160) )
        {
          v34 = *(unsigned int *)(a1 + 120);
          if ( *(_QWORD *)(a1 + 152) >= (unsigned __int64)v20 + 24 * v34 )
          {
            v35 = 2 * v19;
            v36 = v34 - v19;
            v37 = 2 * (v34 - v19);
            if ( 2 * v19 < v19 || v37 < v36 )
            {
LABEL_84:
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v113, "table overflow");
              goto LABEL_85;
            }
            v107 = v16;
            v38 = v35 - 1;
            v98 = 2 * v19;
            v110 = v11;
            v105 = 24LL * v35;
            v111 = v13;
            v112 = v14;
            v109 = v15;
            for ( i = v37; ; i *= 2 )
            {
              v40 = i + v98;
              if ( __CFADD__(i, v98) )
                goto LABEL_84;
              v41 = (__m128i *)sub_186B270(24LL * v40);
              si128 = _mm_load_si128((const __m128i *)&xmmword_18B6710);
              v43 = _mm_load_si128((const __m128i *)&xmmword_18B6720);
              v44 = v41;
              if ( v40 )
              {
                v45 = &v41[3 * (v40 >> 1)];
                do
                {
                  *v41 = si128;
                  v41 += 3;
                  v41[-2] = v43;
                  v41[-1] = 0;
                }
                while ( v41 != v45 );
              }
              v46 = *(unsigned int *)(a1 + 132);
              v47 = *(_QWORD **)(a1 + 112);
              *(_DWORD *)(a1 + 136) = 0;
              v48 = &v47[3 * v46];
              v49 = (__m128 *)&v44->m128i_i8[v105];
              if ( v47 == v48 )
                break;
              v50 = i + v98;
              v51 = v47;
LABEL_44:
              if ( (*v51 & 7LL) == 1 )
                goto LABEL_45;
              v89 = v51;
              v55 = (const double *)v51;
              v94 = v48;
              while ( 1 )
              {
                while ( 1 )
                {
                  v58 = *((_QWORD *)v55 + 1);
                  v59 = *((_QWORD *)v55 + 2);
                  v60 = *(_DWORD *)(*(_QWORD *)v58 + 12LL);
                  v61 = (*(_DWORD *)(*(_QWORD *)v59 + 12LL) - v60) ^ (v60 << 8);
                  v62 = &v44->m128i_i8[24 * (v38 & (((v61 ^ ((v60 - v61) << 16)) + v61 - v60) ^ ((v60 - v61) << 10)))];
                  if ( (*(_QWORD *)v62 & 7LL) != 1 )
                    break;
                  *(_QWORD *)v62 = 0;
                  v55 = *(const double **)v55;
                  ++*(_DWORD *)(a1 + 136);
                  *((_QWORD *)v62 + 1) = v58;
                  *((_QWORD *)v62 + 2) = v59;
                  if ( !v55 )
                  {
LABEL_55:
                    v51 = v89;
                    v48 = v94;
LABEL_45:
                    v51 += 3;
                    if ( v48 == v51 )
                    {
                      v21 = v38;
                      v16 = v107;
                      v20 = v44;
                      v15 = v109;
                      v52 = v98;
                      v11 = v110;
                      v53 = v50;
                      v54 = v47;
                      v13 = v111;
                      v14 = v112;
                      goto LABEL_47;
                    }
                    goto LABEL_44;
                  }
                }
                if ( (__m128 *)((char *)v44 + 24 * v40) == v49 )
                  break;
                *v49 = _mm_loadh_ps((const double *)v62 + 1);
                v49 = (__m128 *)((char *)v49 + 24);
                v56 = _mm_loadh_ps(v55 + 1);
                v49[-1].m128_u64[1] = *((_QWORD *)v62 + 2);
                v57 = *((_QWORD *)v55 + 2);
                *(__m128 *)v62 = v56;
                v55 = *(const double **)v55;
                *((_QWORD *)v62 + 2) = v57;
                if ( !v55 )
                  goto LABEL_55;
              }
              sub_186B220(v44);
              if ( 2 * i < i )
                goto LABEL_84;
            }
            v53 = i + v98;
            v16 = v107;
            v20 = v44;
            v15 = v109;
            v54 = v47;
            v52 = v98;
            v11 = v110;
            v21 = v38;
            v13 = v111;
            v14 = v112;
LABEL_47:
            if ( v54 )
            {
              v108 = v14;
              v106 = v13;
              ptr = (void *)v11;
              v99 = v53;
              v93 = v21;
              v88 = v52;
              sub_186B220(v54);
              v14 = v108;
              v13 = v106;
              v11 = (__int64)ptr;
              v53 = v99;
              v21 = v93;
              v52 = v88;
            }
            *(_DWORD *)(a1 + 120) = v53;
            v18 = (_DWORD *)*v15;
            *(_QWORD *)(a1 + 112) = v20;
            v17 = (_DWORD *)*v16;
            *(_DWORD *)(a1 + 132) = v52;
            *(_QWORD *)(a1 + 152) = v49;
            *(_QWORD *)(a1 + 160) = 0;
            *(_QWORD *)(a1 + 168) = 0;
          }
        }
        v22 = v18[3];
        v23 = (v17[3] - v22) ^ (v22 << 8);
        v24 = (unsigned __int64)v20 + 24 * ((((v23 ^ ((v22 - v23) << 16)) + v23 - v22) ^ ((v22 - v23) << 10)) & v21);
        result = v24;
        if ( (*(_QWORD *)v24 & 7LL) == 1 )
        {
          v67 = nullptr;
          *(_QWORD *)(a1 + 136) = _mm_add_epi32(
                                    _mm_loadl_epi64((const __m128i *)(a1 + 136)),
                                    _mm_loadl_epi64((const __m128i *)&qword_18B6000)).m128i_u64[0];
        }
        else
        {
          do
          {
            if ( v15 == *(_QWORD **)(result + 8) && v16 == *(_QWORD **)(result + 16) )
              goto LABEL_19;
            result = *(_QWORD *)result;
            ++*(_DWORD *)(a1 + 144);
          }
          while ( result );
          v67 = *(_QWORD **)(a1 + 160);
          ++*(_DWORD *)(a1 + 140);
          if ( v67 )
          {
            *(_QWORD *)(a1 + 160) = *v67;
          }
          else
          {
            v67 = *(_QWORD **)(a1 + 152);
            *(_QWORD *)(a1 + 152) = v67 + 3;
          }
          *(__m128 *)v67 = _mm_loadh_ps((const double *)(v24 + 8));
          v67[2] = *(_QWORD *)(v24 + 16);
        }
        v63 = *(_QWORD **)(a1 + 104);
        *(_QWORD *)(v24 + 8) = v15;
        *(_QWORD *)(v24 + 16) = v16;
        *(_QWORD *)v24 = v67;
        if ( v63 )
        {
          v64 = *((_DWORD *)v63 - 1);
          if ( v64 == *((_DWORD *)v63 - 2) )
          {
            v68 = (3 * v64 + 1) >> 1;
            v69 = 16 * v68 + 8;
            if ( 16 * v64 + 8 >= v69 || v64 >= v68 )
              goto LABEL_86;
            v100 = v14;
            v95 = v13;
            v90 = v11;
            v70 = sub_186B270(v69);
            v71 = *(_QWORD *)(a1 + 104);
            v11 = v90;
            v13 = v95;
            v14 = v100;
            v72 = (_DWORD *)v70;
            v63 = (_QWORD *)(v70 + 8);
            if ( v71 )
            {
              v73 = *(unsigned int *)(v71 - 4);
              *(_DWORD *)(v70 + 4) = v73;
              v74 = 0;
              v75 = 16 * v73;
              if ( v75 )
              {
                do
                {
                  *(__m128i *)&v72[v74 / 4 + 2] = _mm_loadu_si128((const __m128i *)(v71 + v74));
                  v74 += 16LL;
                }
                while ( v75 != v74 );
              }
              sub_186B220((void *)(v71 - 8));
              v11 = v90;
              v13 = v95;
              v14 = v100;
              v66 = &v63[2 * (unsigned int)v72[1]];
              result = (unsigned int)(v72[1] + 1);
            }
            else
            {
              *(_DWORD *)(v70 + 4) = 0;
              v66 = (_QWORD *)(v70 + 8);
              result = 1;
            }
            *(_QWORD *)(a1 + 104) = v63;
            *v72 = v68;
          }
          else
          {
            v65 = v64;
            result = v64 + 1;
            v66 = &v63[2 * v65];
          }
        }
        else
        {
          v102 = v14;
          v97 = v13;
          v91 = v11;
          v84 = (_QWORD *)sub_186B270(0x28u);
          v11 = v91;
          v13 = v97;
          v85 = v84;
          *v84 = 2;
          v14 = v102;
          result = 1;
          v63 = v85 + 1;
          *(_QWORD *)(a1 + 104) = v63;
          v66 = v63;
        }
        *v66 = v15;
        v66[1] = v16;
        *((_DWORD *)v63 - 1) = result;
      }
LABEL_19:
      v11 += 8;
    }
    while ( v104 != v11 );
  }
  return result;
}

