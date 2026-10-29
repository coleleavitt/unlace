unsigned int *__fastcall sub_ABB170(__int64 a1, int a2, int a3)
{
  char **v3; // r14
  __int64 v4; // rdx
  char **exception; // r14
  __int64 v6; // rdx
  unsigned int v8; // ebx
  __int64 v9; // rax
  __int64 v10; // rdi
  unsigned int **v11; // r8
  unsigned int **v12; // r14
  unsigned int *v13; // rdx
  unsigned int *v14; // r9
  unsigned int *v15; // r11
  unsigned int *result; // rax
  unsigned int *v17; // r12
  __int64 v18; // rsi
  __int64 v19; // r8
  int v20; // edx
  int v21; // ecx
  __int64 v22; // rdx
  unsigned int v23; // eax
  int v24; // eax
  char v25; // r11
  unsigned int v26; // eax
  int v27; // eax
  __int64 v28; // rax
  char v29; // cl
  __int64 v30; // r15
  __int64 v31; // rax
  unsigned int j; // r11d
  __int64 v33; // rcx
  unsigned int v34; // eax
  unsigned __int64 v35; // r12
  unsigned int v36; // eax
  unsigned int v37; // r15d
  _QWORD *v38; // r8
  _QWORD *v39; // r14
  __int64 v40; // rax
  unsigned int *v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rax
  unsigned int *v44; // r14
  unsigned int *i; // r15
  __int64 v46; // rbx
  __int64 v47; // rdi
  unsigned int v48; // esi
  __int64 v49; // rdi
  unsigned int v50; // esi
  __int64 v51; // rbx
  int v52; // r8d
  int v53; // r9d
  __int64 v54; // rsi
  __int64 v55; // rdi
  __int64 v57; // rbx
  __int64 v58; // rcx
  int v59; // edx
  _QWORD *v60; // rax
  unsigned int v61; // eax
  unsigned int v62; // r14d
  size_t v63; // rdi
  unsigned int *v64; // rbx
  unsigned __int64 v65; // rax
  __int64 v66; // r8
  __int64 v67; // rdx
  __int64 *v68; // r10
  unsigned __int64 v69; // rsi
  __int64 *v70; // r9
  __int64 v71; // rdx
  unsigned __int64 v72; // rsi
  __m128i v73; // xmm0
  unsigned __int64 v74; // rdx
  __int64 v75; // r9
  _QWORD *v76; // r15
  unsigned int v77; // r12d
  unsigned int v78; // edx
  __int64 v79; // rax
  _QWORD *v80; // r8
  _DWORD *v81; // r15
  __int64 v82; // rcx
  __int64 v83; // rsi
  unsigned __int64 v84; // rax
  __int64 v85; // rsi
  __int64 v86; // rdx
  __int64 v87; // rax
  _DWORD *v88; // rdx
  unsigned __int64 v89; // rcx
  __int64 v90; // rax
  _QWORD *v91; // rax
  __int64 v92; // [rsp+0h] [rbp-C0h]
  unsigned int v93; // [rsp+10h] [rbp-B0h]
  __int64 v94; // [rsp+18h] [rbp-A8h]
  unsigned int v95; // [rsp+18h] [rbp-A8h]
  unsigned int **v96; // [rsp+20h] [rbp-A0h]
  unsigned int v97; // [rsp+20h] [rbp-A0h]
  unsigned int *v98; // [rsp+28h] [rbp-98h]
  unsigned int v99; // [rsp+28h] [rbp-98h]
  int v100; // [rsp+28h] [rbp-98h]
  _QWORD *v101; // [rsp+28h] [rbp-98h]
  unsigned int **v102; // [rsp+30h] [rbp-90h]
  unsigned int v103; // [rsp+30h] [rbp-90h]
  int v104; // [rsp+30h] [rbp-90h]
  __int64 v105; // [rsp+30h] [rbp-90h]
  unsigned int v106; // [rsp+38h] [rbp-88h]
  unsigned int **v107; // [rsp+38h] [rbp-88h]
  __int64 v108; // [rsp+38h] [rbp-88h]
  _QWORD *v109; // [rsp+38h] [rbp-88h]
  unsigned int v110; // [rsp+48h] [rbp-78h] BYREF
  unsigned int v111; // [rsp+4Ch] [rbp-74h] BYREF
  __int64 v112; // [rsp+50h] [rbp-70h] BYREF
  __int64 v113; // [rsp+58h] [rbp-68h]
  __int64 v114; // [rsp+60h] [rbp-60h] BYREF
  __int64 v115; // [rsp+68h] [rbp-58h]
  __int64 v116; // [rsp+70h] [rbp-50h] BYREF
  __int64 v117; // [rsp+78h] [rbp-48h]

  v8 = a2;
  v106 = a3;
  if ( a2 <= a3 )
  {
    v106 = a2;
    v8 = a3;
  }
  v9 = *(_QWORD *)(a1 + 504);
  v10 = v106;
  v11 = (unsigned int **)(v9 + 8LL * v106);
  v12 = (unsigned int **)(v9 + 8LL * v8);
  v13 = *v11;
  v14 = *v12;
  if ( !*v11 )
  {
    v18 = *(_QWORD *)(a1 + 16);
    v17 = nullptr;
LABEL_12:
    if ( !*(_BYTE *)(*(_QWORD *)(v18 + 112) + 437LL)
      || (v23 = 33 * ((4097 * v8 + 2127912214) ^ ((4097 * v8 + 2127912214) >> 19) ^ 0xC761C23C),
          v24 = 9 * (((v23 + 374761393) << 9) ^ (v23 - 369570787)) - 42973499,
          v25 = v24 ^ BYTE2(v24),
          v26 = 33 * ((4097 * v106 + 2127912214) ^ ((4097 * v106 + 2127912214) >> 19) ^ 0xC761C23C),
          v27 = 9 * (((v26 + 374761393) << 9) ^ (v26 - 369570787)) - 42973499,
          v28 = (unsigned __int8)((v25 ^ 9)
                                - (v27 ^ BYTE2(v27) ^ 9)
                                - (v27 ^ BYTE2(v27) ^ 9)
                                + (v25 ^ 9)
                                - (v27 ^ BYTE2(v27) ^ 9)),
          v29 = *(_BYTE *)(a1 + v28 + 872),
          *(_BYTE *)(a1 + v28 + 872) = v29 + 1,
          v13 == v17)
      || (~v29 & 3) == 0 )
    {
LABEL_27:
      v96 = (unsigned int **)(a1 + 1144);
      v43 = *(_QWORD *)(a1 + 1144);
      if ( v43 )
        *(_DWORD *)(v43 - 4) = 0;
      v107 = v11;
      v110 = sub_966380(
               a1,
               **(_DWORD ***)(*(_QWORD *)(a1 + 32) + 8 * v10),
               **(_DWORD ***)(*(_QWORD *)(a1 + 32) + 8LL * v8));
      sub_AB8CB0(v96, &v110);
      v44 = *v12;
      for ( i = *v107; i != v17; ++i )
      {
        while ( 1 )
        {
          v46 = *(_QWORD *)(a1 + 24);
          v47 = *(_QWORD *)(a1 + 16);
          v116 = 0;
          v48 = *i;
          v112 = 0;
          v117 = v46;
          v113 = v46;
          sub_894B80(v47, v48, &v112);
          v49 = *(_QWORD *)(a1 + 16);
          v114 = 0;
          v50 = *v44;
          v115 = v46;
          v108 = v112;
          v94 = v113;
          sub_894B80(v49, v50, &v114);
          v51 = v115;
          v105 = v114;
          sub_14E31E0(*(_QWORD *)(a1 + 136), v108, v114, (unsigned int)&v116, v52, v53, v92);
          sub_B6F780(*(_QWORD *)(a1 + 16));
          v111 = sub_B645B0(*(_QWORD *)(a1 + 16), v116);
          sub_AB8CB0(v96, &v111);
          v54 = v116;
          if ( v116 )
          {
            v55 = v117;
            if ( (*(_DWORD *)(v116 + 8))-- == 1 )
              sub_15D7BC0(v55, v54);
          }
          if ( v105 )
          {
            v100 = *(_DWORD *)(v105 + 8);
            *(_DWORD *)(v105 + 8) = v100 - 1;
            if ( v100 == 1 )
              sub_15D7BC0(v51, v105);
          }
          if ( v108 )
          {
            v104 = *(_DWORD *)(v108 + 8);
            *(_DWORD *)(v108 + 8) = v104 - 1;
            if ( v104 == 1 )
              break;
          }
          ++i;
          ++v44;
          if ( i == v17 )
            goto LABEL_41;
        }
        ++v44;
        sub_15D7BC0(v94, v108);
      }
LABEL_41:
      v57 = *(_QWORD *)(a1 + 24);
      ++*(_DWORD *)(a1 + 60);
      if ( *(_QWORD *)(v57 + 912) )
        sub_966E60(a1, v96);
      v58 = *(_QWORD *)(a1 + 1144);
      if ( v58 )
        v59 = *(_DWORD *)(v58 - 4);
      else
        v59 = 0;
      sub_B69FE0(*(_QWORD *)(a1 + 16), *(_DWORD *)(a1 + 8), v59, v58, 0, 0, 1);
      result = *(unsigned int **)(v57 + 912);
      if ( result )
        return (unsigned int *)std::operator<<<std::char_traits<char>>();
      return result;
    }
    v30 = *v13;
    v31 = *(_QWORD *)(v18 + 8848);
    for ( j = *v13; ; j = *v13 )
    {
      v33 = *v14;
      if ( !*(_BYTE *)(v31 + v30) )
        break;
      if ( !*(_BYTE *)(v31 + v33) )
      {
        v103 = (unsigned int)v33 >> 1;
        v34 = (unsigned int)v33 >> 1;
        goto LABEL_19;
      }
      ++v13;
      ++v14;
      if ( v13 == v17 )
        goto LABEL_27;
      v30 = *v13;
    }
    v103 = j >> 1;
    v34 = j >> 1;
LABEL_19:
    v35 = *(_QWORD *)(a1 + 864);
    v36 = v34 + 1;
    v99 = v36;
    if ( v35 )
    {
      v37 = *(_DWORD *)(v35 - 4);
      if ( v37 >= v36 )
      {
LABEL_21:
        v38 = (_QWORD *)(v35 + 8LL * v103);
        v39 = (_QWORD *)*v38;
        if ( *v38 )
        {
          v40 = *((unsigned int *)v39 - 1);
          if ( (_DWORD)v40 == *((_DWORD *)v39 - 2) )
          {
            v77 = (unsigned int)(3 * v40 + 1) >> 1;
            v78 = 8 * v77 + 8;
            if ( 8 * (int)v40 + 8 >= v78 || (unsigned int)v40 >= v77 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_139F3A(&v116, "Overflow encountered when expanding vector", v6);
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, &v116);
              sub_233E40((__int64)&v116);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v101 = v38;
            v79 = sub_186B270(v78);
            v80 = v101;
            v81 = (_DWORD *)v79;
            v39 = (_QWORD *)(v79 + 8);
            v82 = *v101;
            if ( *v101 )
            {
              v83 = *(unsigned int *)(v82 - 4);
              *(_DWORD *)(v79 + 4) = v83;
              v84 = 0;
              v85 = 8 * v83;
              if ( v85 )
              {
                do
                {
                  *(_QWORD *)&v81[v84 / 4 + 2] = *(_QWORD *)(v82 + v84);
                  v84 += 8LL;
                }
                while ( v85 != v84 );
              }
              sub_186B220((void *)(v82 - 8));
              v80 = v101;
              v41 = (unsigned int *)&v39[v81[1]];
            }
            else
            {
              *(_DWORD *)(v79 + 4) = 0;
              v41 = (unsigned int *)(v79 + 8);
            }
            *v80 = v39;
            *v81 = v77;
          }
          else
          {
            v41 = (unsigned int *)&v39[v40];
          }
        }
        else
        {
          v91 = (_QWORD *)sub_186B270(0x18u);
          *v91 = 2;
          v39 = v91 + 1;
          *(_QWORD *)(v35 + 8LL * v103) = v91 + 1;
          v41 = (unsigned int *)(v91 + 1);
        }
        v41[1] = v8;
        *v41 = v106;
        result = *(unsigned int **)(a1 + 1128);
        ++*((_DWORD *)v39 - 1);
        if ( !result || (v42 = *(result - 1), (_DWORD)v42 == *(result - 2)) )
        {
          sub_2FD3F0((unsigned int **)(a1 + 1128));
          result = *(unsigned int **)(a1 + 1128);
          v42 = *(result - 1);
        }
        result[v42] = v103;
        ++*(result - 1);
        return result;
      }
    }
    else
    {
      v37 = 0;
      v60 = (_QWORD *)sub_186B270(0x18u);
      v35 = (unsigned __int64)(v60 + 1);
      *v60 = 2;
      *(_QWORD *)(a1 + 864) = v60 + 1;
    }
    v97 = v37;
    v95 = v8;
    v93 = v106;
    while ( 1 )
    {
      v61 = *(_DWORD *)(v35 - 8);
      if ( v61 >= v99 )
        break;
      v62 = (3 * v61 + 1) >> 1;
      v63 = 8 * v62 + 8;
      if ( 8 * v61 + 8 >= (unsigned int)v63 || v61 >= v62 )
      {
        v3 = (char **)__cxa_allocate_exception(0x28u);
        sub_139F3A(&v116, "Overflow encountered when expanding vector", v4);
        *v3 = (char *)off_1C63128;
        sub_2333C0(v3 + 1, &v116);
        sub_233E40((__int64)&v116);
        __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v64 = (unsigned int *)sub_186B270(v63);
      v65 = *(_QWORD *)(a1 + 864);
      v35 = (unsigned __int64)(v64 + 2);
      if ( v65 )
      {
        v66 = *(unsigned int *)(v65 - 4);
        v67 = 8 * v66;
        v64[1] = v66;
        v68 = (__int64 *)(v65 + 8 * v66);
        if ( v68 != (__int64 *)v65 )
        {
          v69 = v67 - 8;
          v70 = (__int64 *)v65;
          if ( (unsigned __int64)(v67 - 8) <= 8 || v35 < v65 + 16 && v65 < (unsigned __int64)(v64 + 6) )
          {
            v88 = v64 + 2;
            v89 = v65;
            do
            {
              v90 = *v70;
              *v70++ = 0;
              v88 += 2;
              *((_QWORD *)v88 - 1) = v90;
            }
            while ( v70 != v68 );
            v65 = v89;
          }
          else
          {
            v71 = 0;
            v72 = (v69 >> 3) + 1;
            do
            {
              v73 = _mm_loadu_si128((const __m128i *)(v65 + v71 * 4));
              *(_OWORD *)(v65 + v71 * 4) = 0;
              *(__m128i *)&v64[v71 + 2] = v73;
              v71 += 4;
            }
            while ( v71 != 4 * (v72 >> 1) );
            if ( (v72 & 1) != 0 )
            {
              v74 = 8 * (v72 & 0xFFFFFFFFFFFFFFFELL);
              v75 = *(_QWORD *)(v65 + v74);
              *(_QWORD *)(v65 + v74) = 0;
              *(_QWORD *)&v64[v74 / 4 + 2] = v75;
            }
          }
        }
        v76 = (_QWORD *)(v65 + 8 * v66);
        if ( (_DWORD)v66 )
        {
          v109 = (_QWORD *)v65;
          do
          {
            while ( *v109 )
            {
              sub_186B220((void *)(*v109++ - 8LL));
              if ( v76 == v109 )
                goto LABEL_68;
            }
            ++v109;
          }
          while ( v109 != v76 );
LABEL_68:
          v65 = *(_QWORD *)(a1 + 864);
        }
        sub_186B220((void *)(v65 - 8));
        *(_QWORD *)(a1 + 864) = v35;
        *v64 = v62;
      }
      else
      {
        v64[1] = 0;
        *(_QWORD *)(a1 + 864) = v35;
        *v64 = v62;
      }
    }
    *(_DWORD *)(v35 - 4) = v99;
    v86 = 8LL * v99;
    v8 = v95;
    v106 = v93;
    v87 = 8LL * v97;
    if ( v87 != v86 )
      memset((void *)(v35 + v87), 0, v86 - v87);
    goto LABEL_21;
  }
  v15 = &v13[*(v13 - 1)];
  if ( v13 == v15 )
  {
    v18 = *(_QWORD *)(a1 + 16);
    v17 = *v11;
    goto LABEL_12;
  }
  v102 = (unsigned int **)(v9 + 8LL * v106);
  result = *v12;
  v17 = *v11;
  v98 = *v11;
  while ( 1 )
  {
    v22 = *v17;
    if ( (_DWORD)v22 == (*result ^ 1) )
      return result;
    v18 = *(_QWORD *)(a1 + 16);
    v19 = *(_QWORD *)(v18 + 8848);
    v20 = *(char *)(v19 + v22);
    v21 = *(char *)(v19 + *result);
    if ( v21 != 0 && v20 != 0 && v21 != v20 )
      return result;
    ++v17;
    ++result;
    if ( v15 == v17 )
    {
      v11 = v102;
      v13 = v98;
      goto LABEL_12;
    }
  }
}

