_QWORD *__fastcall sub_4FD650(__int64 a1, _QWORD *a2, _QWORD *a3, unsigned int a4, unsigned int *a5, unsigned int *a6)
{
  char **v6; // r14
  char **v7; // rbp
  char **exception; // rbp
  char **v9; // r14
  unsigned int v11; // ebx
  __int64 v13; // r15
  _QWORD *v15; // r12
  __int64 v16; // rax
  unsigned int *v17; // rcx
  unsigned int *v18; // rbp
  _DWORD *v19; // rax
  _DWORD *v20; // rdx
  int v21; // esi
  int v22; // r9d
  __int64 v23; // rax
  unsigned int v24; // edi
  unsigned int v26; // r10d
  size_t v27; // rsi
  unsigned int *v28; // rax
  __int64 v29; // rax
  unsigned int *v30; // rax
  unsigned int *v31; // rdx
  unsigned int *v32; // r15
  unsigned int *v33; // rbp
  unsigned int v34; // ecx
  int v35; // edi
  __int64 v36; // rax
  unsigned int v37; // ecx
  unsigned int v38; // r8d
  size_t v39; // rsi
  unsigned int *v40; // rax
  __int64 v41; // rax
  unsigned int v42; // ebp
  __int64 v43; // rax
  __int64 v44; // rax
  __m128i v45; // xmm2
  _QWORD *v46; // r8
  __int64 v47; // rbx
  _QWORD *v48; // rbp
  size_t v49; // rdx
  __int64 v50; // r9
  __int64 v51; // r9
  __int64 v52; // rdx
  unsigned int v53; // eax
  __int64 v54; // rcx
  _QWORD *v55; // rsi
  unsigned int v56; // ecx
  size_t v57; // rsi
  unsigned int *v58; // rax
  __int64 v59; // rcx
  __int64 v60; // r8
  _QWORD *v61; // rax
  __int64 v62; // r8
  __int64 v63; // r13
  _QWORD *v64; // rcx
  _QWORD *v65; // rdx
  unsigned int v66; // r13d
  _QWORD *v67; // rax
  __int64 v68; // rdx
  size_t v69; // rdx
  __int64 v70; // rax
  __int64 v71; // rax
  unsigned int v72; // ebx
  unsigned int v73; // edx
  size_t v74; // rsi
  unsigned int *v75; // rax
  __int64 v76; // rax
  unsigned int *v77; // [rsp+8h] [rbp-90h]
  unsigned int v78; // [rsp+8h] [rbp-90h]
  unsigned int v79; // [rsp+8h] [rbp-90h]
  _QWORD *v80; // [rsp+8h] [rbp-90h]
  _QWORD *v81; // [rsp+8h] [rbp-90h]
  __int64 v82; // [rsp+8h] [rbp-90h]
  unsigned int v83; // [rsp+8h] [rbp-90h]
  unsigned int *v85; // [rsp+10h] [rbp-88h]
  __int64 v86; // [rsp+10h] [rbp-88h]
  _QWORD *v87; // [rsp+10h] [rbp-88h]
  __int64 v88; // [rsp+10h] [rbp-88h]
  __int64 v89; // [rsp+18h] [rbp-80h]
  __int64 v90; // [rsp+18h] [rbp-80h]
  _QWORD *v91; // [rsp+18h] [rbp-80h]
  unsigned int v92; // [rsp+24h] [rbp-74h]
  __int64 v93; // [rsp+28h] [rbp-70h]
  __int64 v94[11]; // [rsp+40h] [rbp-58h] BYREF

  if ( *(_DWORD *)(a2[1] + 32LL) != 1 )
    return nullptr;
  v11 = *(_DWORD *)(a3[1] + 32LL);
  if ( v11 != 1 )
    return nullptr;
  v13 = a4;
  v93 = sub_4C5B40(*(_QWORD *)(a1 + 24), a2[4], a3[4], a4, a5, a6);
  if ( !v93 )
    return nullptr;
  v15 = (_QWORD *)sub_186B270(0x30u);
  *v15 = qword_1C66908;
  v15[1] = 0;
  v15[2] = 0;
  if ( (_DWORD)v13 )
  {
    v16 = sub_186B270(0x10u);
    v17 = a5;
    v89 = v13;
    v18 = &a5[v13];
    v19 = (_DWORD *)(v16 + 8);
    *((_QWORD *)v19 - 1) = 2;
    v20 = v19;
    v15[2] = v19;
    while ( 1 )
    {
      v21 = *v17++;
      *v19 = v21;
      v22 = *(v20 - 1);
      v23 = (unsigned int)(v22 + 1);
      *(v20 - 1) = v23;
      if ( v18 == v17 )
        break;
      v24 = *(v20 - 2);
      if ( v24 == (_DWORD)v23 )
      {
        v26 = (3 * v24 + 1) >> 1;
        v27 = 4 * v26 + 8;
        if ( 4 * v22 + 12 >= (unsigned int)v27 || v24 >= v26 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v94, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v94);
          sub_233E40((__int64)v94);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v77 = v17;
        v28 = (unsigned int *)sub_186B300(v20 - 2, v27);
        v17 = v77;
        v20 = v28 + 2;
        *v28 = (3 * v24 + 1) >> 1;
        v29 = v28[1];
        v15[2] = v20;
        v19 = &v20[v29];
      }
      else
      {
        v19 = &v20[v23];
      }
    }
    v15[3] = 0;
    v30 = (unsigned int *)(sub_186B270(0x10u) + 8);
    v31 = a6;
    *((_QWORD *)v30 - 1) = 2;
    v32 = v30;
    v15[3] = v30;
    v33 = &a6[v89];
    while ( 1 )
    {
      v34 = *v31++;
      *v30 = v34;
      v35 = *(v32 - 1);
      v36 = (unsigned int)(v35 + 1);
      *(v32 - 1) = v36;
      if ( v31 == v33 )
        break;
      v37 = *(v32 - 2);
      if ( v37 == (_DWORD)v36 )
      {
        v38 = (3 * v37 + 1) >> 1;
        v39 = 4 * v38 + 8;
        if ( 4 * v35 + 12 >= (unsigned int)v39 || v37 >= v38 )
        {
          v7 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v94, "Overflow encountered when expanding vector");
          *v7 = (char *)off_1C63128;
          sub_2333C0(v7 + 1, v94);
          sub_233E40((__int64)v94);
          __cxa_throw(v7, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v85 = v31;
        v78 = (3 * v37 + 1) >> 1;
        v40 = (unsigned int *)sub_186B300(v32 - 2, v39);
        v32 = v40 + 2;
        v31 = v85;
        v15[3] = v40 + 2;
        *v40 = v78;
        v30 = &v40[v40[1] + 2];
      }
      else
      {
        v30 = &v32[v36];
      }
    }
  }
  else
  {
    v15[3] = 0;
  }
  v15[4] = 0;
  v41 = a2[2];
  if ( v41 )
  {
    v42 = *(_DWORD *)(v41 - 4);
    v43 = *(unsigned int *)(v41 - 8);
    v79 = v43;
    v44 = sub_186B270(8 * v43 + 8);
    v45 = _mm_cvtsi32_si128(v42);
    v46 = (_QWORD *)a2[2];
    v47 = v44;
    v48 = (_QWORD *)(v44 + 8);
    *(_QWORD *)v44 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v79), v45).m128i_u64[0];
    if ( v46 )
    {
      v49 = 8LL * *((unsigned int *)v46 - 1);
      if ( v49 <= 8 )
      {
        if ( v49 == 8 )
          *(_QWORD *)(v44 + 8) = *v46;
      }
      else
      {
        v80 = v46;
        memmove((void *)(v44 + 8), v46, v49);
        v46 = v80;
      }
      *(_DWORD *)(v47 + 4) = 0;
      v50 = *((unsigned int *)v46 - 1);
      if ( (_DWORD)v50 )
      {
        v51 = 8 * v50;
        v52 = 0;
        v53 = 0;
        while ( 1 )
        {
          if ( v53 == *((_DWORD *)v48 - 2) )
          {
            v56 = (3 * v53 + 1) >> 1;
            v57 = 8 * v56 + 8;
            if ( 8 * v53 + 8 >= (unsigned int)v57 || v53 >= v56 )
            {
              v9 = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v94, "Overflow encountered when expanding vector");
              *v9 = (char *)off_1C63128;
              sub_2333C0(v9 + 1, v94);
              sub_233E40((__int64)v94);
              __cxa_throw(v9, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v92 = (3 * v53 + 1) >> 1;
            v90 = v51;
            v86 = v52;
            v81 = v46;
            v58 = (unsigned int *)sub_186B300(v48 - 1, v57);
            v48 = v58 + 2;
            v46 = v81;
            v52 = v86;
            v51 = v90;
            *v58 = v92;
            LODWORD(v58) = v58[1];
            v55 = &v48[(unsigned int)v58];
            v53 = (_DWORD)v58 + 1;
          }
          else
          {
            v54 = v53++;
            v55 = &v48[v54];
          }
          v52 += 8;
          *v55 = *v46;
          *((_DWORD *)v48 - 1) = v53;
          if ( v52 == v51 )
            break;
          v46 = (_QWORD *)(v52 + a2[2]);
        }
      }
    }
    else
    {
      *(_DWORD *)(v44 + 4) = 0;
    }
    v64 = (_QWORD *)a3[2];
    if ( v64 )
    {
      v63 = 0;
      v70 = *((unsigned int *)v64 - 1);
      v62 = 8 * v70;
      if ( (_DWORD)v70 )
      {
        while ( 1 )
        {
          v72 = *((_DWORD *)v48 - 1);
          if ( v72 == *((_DWORD *)v48 - 2) )
          {
            v73 = (3 * v72 + 1) >> 1;
            v74 = 8 * v73 + 8;
            if ( 8 * v72 + 8 >= (unsigned int)v74 || v72 >= v73 )
            {
              v6 = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v94, "Overflow encountered when expanding vector");
              *v6 = (char *)off_1C63128;
              sub_2333C0(v6 + 1, v94);
              sub_233E40((__int64)v94);
              __cxa_throw(v6, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v91 = v64;
            v88 = v62;
            v75 = (unsigned int *)sub_186B300(v48 - 1, v74);
            v48 = v75 + 2;
            v62 = v88;
            v64 = v91;
            *v75 = (3 * v72 + 1) >> 1;
            v76 = v75[1];
            v65 = &v48[v76];
            v11 = v76 + 1;
          }
          else
          {
            v71 = v72;
            v11 = v72 + 1;
            v65 = &v48[v71];
          }
LABEL_47:
          v63 += 8;
          *v65 = *v64;
          *((_DWORD *)v48 - 1) = v11;
          if ( v62 == v63 )
            break;
          v64 = (_QWORD *)(v63 + a3[2]);
        }
      }
    }
    v66 = *((_DWORD *)v48 - 1);
    v83 = *((_DWORD *)v48 - 2);
    v67 = (_QWORD *)sub_186B270(8LL * v83 + 8);
    v68 = *((unsigned int *)v48 - 1);
    v15[1] = v67 + 1;
    v69 = 8 * v68;
    *v67 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v83), _mm_cvtsi32_si128(v66)).m128i_u64[0];
    if ( v69 <= 8 )
    {
      if ( v69 == 8 )
        v67[1] = *v48;
    }
    else
    {
      memcpy(v67 + 1, v48, v69);
    }
    sub_186B220(v48 - 1);
  }
  else
  {
    v59 = a3[2];
    if ( v59 )
    {
      v60 = *(unsigned int *)(v59 - 4);
      if ( (_DWORD)v60 )
      {
        v87 = (_QWORD *)a3[2];
        v82 = 8 * v60;
        v61 = (_QWORD *)sub_186B270(0x18u);
        v48 = v61 + 1;
        *v61 = 2;
        v62 = v82;
        v63 = 0;
        v64 = v87;
        v65 = v61 + 1;
        goto LABEL_47;
      }
    }
  }
  *v15 = &off_1C500B8;
  v15[5] = v93;
  return v15;
}

