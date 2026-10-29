_QWORD *__fastcall sub_4FCFB0(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3,
        unsigned int a4,
        unsigned int *a5,
        unsigned int *a6,
        unsigned int a7,
        unsigned int *a8)
{
  char **v8; // r14
  char **v9; // r14
  char **exception; // rbp
  char **v11; // rbp
  char **v12; // rbp
  unsigned int v14; // ebx
  __int64 v16; // r15
  unsigned int *v17; // rbp
  _QWORD *v18; // r12
  _DWORD *v19; // rax
  unsigned int *v20; // r15
  _DWORD *v21; // rdx
  int v22; // ecx
  int v23; // edi
  __int64 v24; // rax
  unsigned int v25; // ecx
  unsigned int v27; // r8d
  size_t v28; // rsi
  unsigned int *v29; // rax
  __int64 v30; // rax
  _DWORD *v31; // rax
  unsigned int *v32; // rbp
  _DWORD *v33; // rdx
  unsigned int *v34; // r8
  int v35; // ecx
  int v36; // edi
  __int64 v37; // rax
  unsigned int v38; // ecx
  unsigned int v39; // r15d
  size_t v40; // rsi
  unsigned int *v41; // rax
  __int64 v42; // rax
  _QWORD *v43; // rax
  unsigned int *v44; // rax
  unsigned int *v45; // rbp
  unsigned int *v46; // rdx
  unsigned int v47; // ecx
  int v48; // edi
  __int64 v49; // rax
  unsigned int v50; // ecx
  unsigned int v51; // r8d
  size_t v52; // rsi
  unsigned int *v53; // rax
  __int64 v54; // rax
  unsigned int v55; // ebp
  __int64 v56; // rax
  __int64 v57; // rax
  __m128i v58; // xmm2
  _QWORD *v59; // r15
  __int64 v60; // rbx
  _QWORD *v61; // rbp
  size_t v62; // rdx
  __int64 v63; // r9
  __int64 v64; // r9
  unsigned int v65; // eax
  __int64 i; // rdx
  __int64 v67; // rcx
  _QWORD *v68; // rsi
  unsigned int v69; // ecx
  size_t v70; // rsi
  unsigned int *v71; // rax
  _QWORD *v72; // r15
  __int64 v73; // r8
  _QWORD *v74; // rax
  __int64 v75; // r8
  __int64 v76; // r13
  _QWORD *v77; // rdx
  unsigned int v78; // ebx
  __int64 v79; // rax
  unsigned int v80; // edx
  size_t v81; // rsi
  unsigned int *v82; // rax
  __int64 v83; // rax
  __int64 v84; // rax
  unsigned int v85; // r13d
  _QWORD *v86; // rax
  __int64 v87; // rdx
  size_t v88; // rdx
  unsigned int v89; // [rsp+8h] [rbp-90h]
  unsigned int *v90; // [rsp+8h] [rbp-90h]
  unsigned int v91; // [rsp+8h] [rbp-90h]
  unsigned int v92; // [rsp+8h] [rbp-90h]
  unsigned int v93; // [rsp+8h] [rbp-90h]
  __int64 v94; // [rsp+8h] [rbp-90h]
  __int64 v95; // [rsp+8h] [rbp-90h]
  unsigned int v96; // [rsp+8h] [rbp-90h]
  __int64 v98; // [rsp+10h] [rbp-88h]
  __int64 v99; // [rsp+18h] [rbp-80h]
  __int64 v100; // [rsp+18h] [rbp-80h]
  _QWORD *v101; // [rsp+20h] [rbp-78h]
  _QWORD *v102; // [rsp+28h] [rbp-70h]
  __int64 v103[11]; // [rsp+40h] [rbp-58h] BYREF

  if ( *(_DWORD *)(a2[1] + 32LL) == 1 )
  {
    v14 = *(_DWORD *)(a3[1] + 32LL);
    if ( v14 == 1 )
    {
      v16 = a4;
      v17 = a5;
      v101 = sub_4C9510(*(_QWORD *)(a1 + 24), a2[4], a3[4], a4, a5, a6, a7, a8);
      v18 = (_QWORD *)sub_186B270(0x30u);
      *v18 = qword_1C66908;
      v18[1] = 0;
      v18[2] = 0;
      if ( (_DWORD)v16 )
      {
        v19 = (_DWORD *)(sub_186B270(0x10u) + 8);
        v99 = v16;
        v20 = &v17[v16];
        *((_QWORD *)v19 - 1) = 2;
        v21 = v19;
        v18[2] = v19;
        while ( 1 )
        {
          v22 = *v17++;
          *v19 = v22;
          v23 = *(v21 - 1);
          v24 = (unsigned int)(v23 + 1);
          *(v21 - 1) = v24;
          if ( v17 == v20 )
            break;
          v25 = *(v21 - 2);
          if ( v25 == (_DWORD)v24 )
          {
            v27 = (3 * v25 + 1) >> 1;
            v28 = 4 * v27 + 8;
            if ( 4 * v23 + 12 >= (unsigned int)v28 || v25 >= v27 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v103, "Overflow encountered when expanding vector");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, v103);
              sub_233E40((__int64)v103);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v89 = (3 * v25 + 1) >> 1;
            v29 = (unsigned int *)sub_186B300(v21 - 2, v28);
            v21 = v29 + 2;
            *v29 = v89;
            v30 = v29[1];
            v18[2] = v21;
            v19 = &v21[v30];
          }
          else
          {
            v19 = &v21[v24];
          }
        }
        v18[3] = 0;
        v31 = (_DWORD *)(sub_186B270(0x10u) + 8);
        v32 = a6;
        *((_QWORD *)v31 - 1) = 2;
        v33 = v31;
        v18[3] = v31;
        v34 = &a6[v99];
        while ( 1 )
        {
          v35 = *v32++;
          *v31 = v35;
          v36 = *(v33 - 1);
          v37 = (unsigned int)(v36 + 1);
          *(v33 - 1) = v37;
          if ( v32 == v34 )
            break;
          v38 = *(v33 - 2);
          if ( v38 == (_DWORD)v37 )
          {
            v39 = (3 * v38 + 1) >> 1;
            v40 = 4 * v39 + 8;
            if ( 4 * v36 + 12 >= (unsigned int)v40 || v38 >= v39 )
            {
              v11 = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v103, "Overflow encountered when expanding vector");
              *v11 = (char *)off_1C63128;
              sub_2333C0(v11 + 1, v103);
              sub_233E40((__int64)v103);
              __cxa_throw(v11, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v90 = v34;
            v41 = (unsigned int *)sub_186B300(v33 - 2, v40);
            v33 = v41 + 2;
            *v41 = v39;
            v42 = v41[1];
            v18[3] = v33;
            v34 = v90;
            v31 = &v33[v42];
          }
          else
          {
            v31 = &v33[v37];
          }
        }
      }
      else
      {
        v18[3] = 0;
      }
      v18[4] = 0;
      if ( a7 )
      {
        v43 = (_QWORD *)sub_186B270(0x10u);
        *v43 = 2;
        v44 = (unsigned int *)(v43 + 1);
        v45 = a8;
        v18[4] = v44;
        v46 = v44;
        while ( 1 )
        {
          v47 = *v45++;
          *v44 = v47;
          v48 = *(v46 - 1);
          v49 = (unsigned int)(v48 + 1);
          *(v46 - 1) = v49;
          if ( v45 == &a8[a7] )
            break;
          v50 = *(v46 - 2);
          if ( v50 == (_DWORD)v49 )
          {
            v51 = (3 * v50 + 1) >> 1;
            v52 = 4 * v51 + 8;
            if ( 4 * v48 + 12 >= (unsigned int)v52 || v50 >= v51 )
            {
              v12 = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v103, "Overflow encountered when expanding vector");
              *v12 = (char *)off_1C63128;
              sub_2333C0(v12 + 1, v103);
              sub_233E40((__int64)v103);
              __cxa_throw(v12, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v91 = (3 * v50 + 1) >> 1;
            v53 = (unsigned int *)sub_186B300(v46 - 2, v52);
            v46 = v53 + 2;
            v18[4] = v53 + 2;
            *v53 = v91;
            v44 = &v53[v53[1] + 2];
          }
          else
          {
            v44 = &v46[v49];
          }
        }
        v102 = v18 + 1;
        v54 = a2[2];
        if ( v54 )
          goto LABEL_30;
        v72 = (_QWORD *)a3[2];
        if ( !v72 )
          goto LABEL_50;
      }
      else
      {
        v102 = v18 + 1;
        v54 = a2[2];
        if ( v54 )
        {
LABEL_30:
          v55 = *(_DWORD *)(v54 - 4);
          v56 = *(unsigned int *)(v54 - 8);
          v92 = v56;
          v57 = sub_186B270(8 * v56 + 8);
          v58 = _mm_cvtsi32_si128(v55);
          v59 = (_QWORD *)a2[2];
          v60 = v57;
          v61 = (_QWORD *)(v57 + 8);
          *(_QWORD *)v57 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v92), v58).m128i_u64[0];
          if ( v59 )
          {
            v62 = 8LL * *((unsigned int *)v59 - 1);
            if ( v62 <= 8 )
            {
              if ( v62 == 8 )
                *(_QWORD *)(v57 + 8) = *v59;
            }
            else
            {
              memmove((void *)(v57 + 8), v59, v62);
            }
            *(_DWORD *)(v60 + 4) = 0;
            v63 = *((unsigned int *)v59 - 1);
            if ( (_DWORD)v63 )
            {
              v64 = 8 * v63;
              v65 = 0;
              for ( i = 0; ; v59 = (_QWORD *)(i + a2[2]) )
              {
                if ( *((_DWORD *)v61 - 2) == v65 )
                {
                  v69 = (3 * v65 + 1) >> 1;
                  v70 = 8 * v69 + 8;
                  if ( 8 * v65 + 8 >= (unsigned int)v70 || v65 >= v69 )
                  {
                    v8 = (char **)__cxa_allocate_exception(0x28u);
                    sub_24ABB0(v103, "Overflow encountered when expanding vector");
                    *v8 = (char *)off_1C63128;
                    sub_2333C0(v8 + 1, v103);
                    sub_233E40((__int64)v103);
                    __cxa_throw(v8, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
                  }
                  v100 = v64;
                  v98 = i;
                  v93 = (3 * v65 + 1) >> 1;
                  v71 = (unsigned int *)sub_186B300(v61 - 1, v70);
                  v61 = v71 + 2;
                  i = v98;
                  v64 = v100;
                  *v71 = v93;
                  LODWORD(v71) = v71[1];
                  v68 = &v61[(unsigned int)v71];
                  v65 = (_DWORD)v71 + 1;
                }
                else
                {
                  v67 = v65++;
                  v68 = &v61[v67];
                }
                i += 8;
                *v68 = *v59;
                *((_DWORD *)v61 - 1) = v65;
                if ( i == v64 )
                  break;
              }
            }
          }
          else
          {
            *(_DWORD *)(v57 + 4) = 0;
          }
          v72 = (_QWORD *)a3[2];
          if ( v72 )
          {
            v76 = 0;
            v84 = *((unsigned int *)v72 - 1);
            v75 = 8 * v84;
            if ( (_DWORD)v84 )
            {
              while ( 1 )
              {
                v78 = *((_DWORD *)v61 - 1);
                if ( v78 == *((_DWORD *)v61 - 2) )
                {
                  v80 = (3 * v78 + 1) >> 1;
                  v81 = 8 * v80 + 8;
                  if ( 8 * v78 + 8 >= (unsigned int)v81 || v78 >= v80 )
                  {
                    v9 = (char **)__cxa_allocate_exception(0x28u);
                    sub_24ABB0(v103, "Overflow encountered when expanding vector");
                    *v9 = (char *)off_1C63128;
                    sub_2333C0(v9 + 1, v103);
                    sub_233E40((__int64)v103);
                    __cxa_throw(v9, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
                  }
                  v95 = v75;
                  v82 = (unsigned int *)sub_186B300(v61 - 1, v81);
                  v61 = v82 + 2;
                  v75 = v95;
                  *v82 = (3 * v78 + 1) >> 1;
                  v83 = v82[1];
                  v77 = &v61[v83];
                  v14 = v83 + 1;
                }
                else
                {
                  v79 = v78;
                  v14 = v78 + 1;
                  v77 = &v61[v79];
                }
LABEL_45:
                v76 += 8;
                *v77 = *v72;
                *((_DWORD *)v61 - 1) = v14;
                if ( v75 == v76 )
                  break;
                v72 = (_QWORD *)(v76 + a3[2]);
              }
            }
          }
          v85 = *((_DWORD *)v61 - 1);
          v96 = *((_DWORD *)v61 - 2);
          v86 = (_QWORD *)sub_186B270(8LL * v96 + 8);
          v87 = *((unsigned int *)v61 - 1);
          v18[1] = v86 + 1;
          v88 = 8 * v87;
          *v86 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v96), _mm_cvtsi32_si128(v85)).m128i_u64[0];
          if ( v88 <= 8 )
          {
            if ( v88 == 8 )
              v86[1] = *v61;
          }
          else
          {
            memcpy(v86 + 1, v61, v88);
          }
          if ( a7 )
            sub_4FCE20(v102, a7, a8);
          sub_186B220(v61 - 1);
          goto LABEL_51;
        }
        v72 = (_QWORD *)a3[2];
        if ( !v72 )
        {
LABEL_51:
          *v18 = &off_1C500B8;
          v18[5] = v101;
          return v18;
        }
      }
      v73 = *((unsigned int *)v72 - 1);
      if ( (_DWORD)v73 )
      {
        v94 = 8 * v73;
        v74 = (_QWORD *)sub_186B270(0x18u);
        *v74 = 2;
        v61 = v74 + 1;
        v75 = v94;
        v76 = 0;
        v77 = v74 + 1;
        goto LABEL_45;
      }
      if ( !a7 )
        goto LABEL_51;
LABEL_50:
      sub_4FCE20(v102, a7, a8);
      goto LABEL_51;
    }
  }
  return nullptr;
}

