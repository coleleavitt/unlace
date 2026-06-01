__int64 __fastcall sub_81E6B0(
        __int64 a1,
        unsigned int a2,
        _DWORD *a3,
        __m128 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        __int64 a16)
{
  char **exception; // rbp
  char **v17; // rbp
  char **v18; // rbp
  __int64 *v21; // r15
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 **v24; // r9
  __int64 *v25; // rbx
  __int64 v26; // rax
  unsigned int *v27; // rcx
  __int64 v28; // rax
  __int64 *v29; // r8
  unsigned int v30; // r12d
  unsigned int v31; // ecx
  unsigned int v32; // edx
  __int64 v33; // r13
  __int64 v34; // rsi
  __int64 result; // rax
  _QWORD *v36; // rdi
  int v37; // ebp
  __int64 v38; // rax
  _DWORD *v39; // rax
  __int64 *v40; // r10
  __m128 *v41; // rbp
  unsigned int v42; // eax
  __int64 v43; // rsi
  int v44; // eax
  __m128 *v45; // rsi
  __int64 v46; // rbx
  __int64 v47; // rax
  int v48; // ebx
  __int64 v49; // rbp
  __m128 *v50; // r8
  _QWORD *v51; // rax
  size_t v52; // rdi
  __int64 v53; // rax
  __m128 *v54; // rdi
  _DWORD *v55; // r13
  __int64 v56; // rsi
  unsigned __int64 v57; // rax
  __int64 v58; // rsi
  unsigned int v59; // r10d
  size_t v60; // rsi
  _DWORD *v61; // rax
  __int64 v62; // r9
  const __m128i *v63; // rdi
  unsigned __int64 *v64; // rsi
  const void **v65; // rbx
  unsigned int v66; // r8d
  __m128 *v67; // rax
  __int64 v68; // rbp
  _QWORD *v69; // rax
  int v70; // edx
  int v71; // ecx
  int v72; // r8d
  int v73; // r9d
  unsigned int *v74; // rcx
  __int64 v75; // rax
  unsigned int *v76; // rax
  __m128 *v77; // r9
  const __m128i *v78; // rdi
  unsigned int v79; // edx
  unsigned int v80; // r8d
  _QWORD *v81; // rax
  _QWORD *v82; // rax
  _QWORD *v83; // rax
  int v84; // eax
  __int64 v85; // rbp
  int v86; // r8d
  int v87; // r9d
  __int64 v88; // rax
  __int64 v89; // r12
  int v90; // eax
  bool v91; // zf
  unsigned int v92; // r12d
  unsigned int v93; // edx
  unsigned int *v94; // rax
  __int64 v95; // rax
  _QWORD *v96; // rax
  int v97; // [rsp+0h] [rbp-A8h]
  int v98; // [rsp+8h] [rbp-A0h]
  __int64 v100; // [rsp+10h] [rbp-98h]
  unsigned int v101; // [rsp+18h] [rbp-90h]
  unsigned int v102; // [rsp+1Ch] [rbp-8Ch]
  unsigned int v103; // [rsp+1Ch] [rbp-8Ch]
  unsigned int v104; // [rsp+1Ch] [rbp-8Ch]
  unsigned int v105; // [rsp+1Ch] [rbp-8Ch]
  __int64 **v106; // [rsp+20h] [rbp-88h]
  __int64 *v107; // [rsp+28h] [rbp-80h]
  __int64 *v108; // [rsp+30h] [rbp-78h]
  __int64 *v109; // [rsp+38h] [rbp-70h]
  int v110; // [rsp+40h] [rbp-68h]
  __m128 *v111; // [rsp+48h] [rbp-60h] BYREF
  int v112[2]; // [rsp+50h] [rbp-58h] BYREF

  v21 = *(__int64 **)(*(_QWORD *)(a1 + 88) + 8LL * a2);
  v100 = sub_15D1F10(*v21);
  v24 = *(__int64 ***)(*(_QWORD *)(a1 + 312) + 8LL * a2);
  v25 = *v24;
  if ( !*v24 )
    return sub_81E340((unsigned __int64 *)a1, a2, a3, v22, v23, (__int64)v24, a8, a9, a10, a11, a12, a13, a14, a15, a16);
  v26 = *((unsigned int *)v25 - 1);
  if ( !(_DWORD)v26 )
    return sub_81E340((unsigned __int64 *)a1, a2, a3, v22, v23, (__int64)v24, a8, a9, a10, a11, a12, a13, a14, a15, a16);
  v27 = *(unsigned int **)(a1 + 448);
  if ( v27 )
  {
    *(v27 - 1) = 0;
    v28 = *((unsigned int *)v25 - 1);
    v111 = nullptr;
    v29 = &v25[v28];
    if ( v25 == v29 )
    {
      v63 = *(const __m128i **)(a1 + 80);
      v64 = (unsigned __int64 *)(a1 + 16);
      v66 = 0;
      v62 = 0;
      v65 = (const void **)(a1 + 448);
      goto LABEL_52;
    }
  }
  else
  {
    v111 = nullptr;
    v29 = &v25[v26];
  }
  v30 = 0;
  v31 = -1;
  v32 = 0;
  do
  {
    while ( 1 )
    {
      v33 = *v25;
      if ( !*v25 )
        goto LABEL_6;
      v34 = (unsigned int)(2 * *(_DWORD *)(v33 + 28));
      result = *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 80) + 24LL) + 3288LL) + 4 * v34);
      if ( (_DWORD)result == 1 )
      {
        if ( v111 )
          return sub_186B220(&v111[-1].m128_u16[4]);
        return result;
      }
      if ( (_DWORD)result != -1 )
      {
LABEL_6:
        if ( !v32 )
          v31 = v30;
        ++v32;
        goto LABEL_9;
      }
      v36 = *(_QWORD **)(a1 + 448);
      v37 = v34 ^ 1;
      if ( v36 )
      {
        v38 = *((unsigned int *)v36 - 1);
        if ( (_DWORD)v38 == *((_DWORD *)v36 - 2) )
        {
          v59 = (unsigned int)(3 * v38 + 1) >> 1;
          v60 = 4 * v59 + 8;
          if ( 4 * (int)v38 + 8 >= (unsigned int)v60 || (unsigned int)v38 >= v59 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0((__int64 *)v112, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v112);
            sub_233E40((__int64)v112);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v108 = v29;
          LODWORD(v107) = (unsigned int)(3 * v38 + 1) >> 1;
          v106 = v24;
          v103 = v32;
          v101 = v31;
          v61 = (_DWORD *)sub_186B300(v36 - 1, v60);
          v36 = v61 + 2;
          v31 = v101;
          v32 = v103;
          *(_QWORD *)(a1 + 448) = v61 + 2;
          v24 = v106;
          v29 = v108;
          *v61 = (_DWORD)v107;
          v39 = &v61[v61[1] + 2];
        }
        else
        {
          v39 = (_DWORD *)v36 + v38;
        }
      }
      else
      {
        v107 = v29;
        v106 = v24;
        v104 = v32;
        v101 = v31;
        v81 = (_QWORD *)sub_186B270(0x10u);
        v36 = v81 + 1;
        *v81 = 2;
        v31 = v101;
        *(_QWORD *)(a1 + 448) = v81 + 1;
        v32 = v104;
        v39 = v81 + 1;
        v24 = v106;
        v29 = v107;
      }
      v40 = *(__int64 **)(v33 + 176);
      *v39 = v37;
      ++*((_DWORD *)v36 - 1);
      if ( v21 != v40 )
        break;
LABEL_9:
      ++v25;
      ++v30;
      if ( v29 == v25 )
        goto LABEL_21;
    }
    v41 = v111;
    if ( v111 )
    {
      v42 = v111[-1].m128_u32[3];
      if ( v42 == v111[-1].m128_i32[2] )
      {
        v101 = (3 * v42 + 1) >> 1;
        v52 = 16 * v101 + 8;
        if ( 16 * v42 + 8 >= (unsigned int)v52 || v42 >= (3 * v42 + 1) >> 1 )
        {
          v18 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0((__int64 *)v112, "Overflow encountered when expanding vector");
          *v18 = (char *)off_1C63128;
          sub_2333C0(v18 + 1, v112);
          sub_233E40((__int64)v112);
          __cxa_throw(v18, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v109 = v29;
        v108 = v40;
        v107 = (__int64 *)v24;
        LODWORD(v106) = v32;
        v102 = v31;
        v53 = sub_186B270(v52);
        v54 = v111;
        v55 = (_DWORD *)v53;
        v41 = (__m128 *)(v53 + 8);
        v56 = v111[-1].m128_u32[3];
        *(_DWORD *)(v53 + 4) = v56;
        v57 = 0;
        v58 = 16 * v56;
        if ( v58 )
        {
          do
          {
            *(__m128i *)&v55[v57 / 4 + 2] = _mm_loadu_si128((const __m128i *)&v54[v57 / 0x10]);
            v57 += 16LL;
          }
          while ( v58 != v57 );
        }
        sub_186B220(&v54[-1].m128_u16[4]);
        v31 = v102;
        v32 = (unsigned int)v106;
        v24 = (__int64 **)v107;
        v40 = v108;
        v29 = v109;
        v45 = &v41[v55[1]];
        v44 = v55[1] + 1;
        v111 = v41;
        *v55 = v101;
      }
      else
      {
        v43 = v42;
        v44 = v42 + 1;
        v45 = &v111[v43];
      }
    }
    else
    {
      v108 = v29;
      v107 = v40;
      v106 = v24;
      v105 = v32;
      v101 = v31;
      v82 = (_QWORD *)sub_186B270(0x28u);
      v41 = (__m128 *)(v82 + 1);
      *v82 = 2;
      v31 = v101;
      v44 = 1;
      v111 = v41;
      v32 = v105;
      v45 = v41;
      v24 = v106;
      v40 = v107;
      v29 = v108;
    }
    ++v25;
    ++v30;
    a4 = (__m128)_mm_unpacklo_epi64((__m128i)(unsigned __int64)v21, (__m128i)(unsigned __int64)v40);
    *v45 = a4;
    v41[-1].m128_i32[3] = v44;
  }
  while ( v29 != v25 );
LABEL_21:
  if ( v32 )
  {
    if ( v32 == 1 )
    {
      v46 = v31;
      v47 = (*v24)[v31];
      if ( v47 )
      {
        v48 = 2 * *(_DWORD *)(v47 + 28);
      }
      else
      {
        v83 = (_QWORD *)sub_15F6BE0(a1 + 112, v100);
        v84 = sub_15F0A30(a1 + 112, *(_QWORD *)(*v83 + 8 * v46));
        v85 = *(_QWORD *)(a1 + 72);
        *(_QWORD *)v112 = *v21;
        v88 = sub_15DC610(
                v85,
                v84,
                1,
                (int)v112,
                v86,
                v87,
                v97,
                v98,
                v100,
                v101,
                (int)v106,
                (char)v107,
                (int)v108,
                (int)v109,
                v110,
                v111);
        v89 = v88;
        if ( v88 )
        {
          ++*(_DWORD *)(v88 + 8);
          v90 = sub_7E58C0(a1, v88);
          v91 = (*(_DWORD *)(v89 + 8))-- == 1;
          v48 = v90;
          if ( v91 )
            sub_15D7BC0(v85, v89);
        }
        else
        {
          v48 = sub_7E58C0(a1, 0);
        }
      }
      v49 = *(_QWORD *)(a1 + 80);
      v50 = *(__m128 **)(v49 + 24);
      if ( v50 )
      {
        if ( v50[22].m128_i8[0] )
        {
          sub_7A4170(*(_QWORD *)(a1 + 80));
          v74 = *(unsigned int **)(a1 + 448);
          if ( v74 )
          {
            v75 = *(v74 - 1);
            if ( (_DWORD)v75 == *(v74 - 2) )
            {
              v92 = (unsigned int)(3 * v75 + 1) >> 1;
              v93 = 4 * v92 + 8;
              if ( 4 * (int)v75 + 8 >= v93 || (unsigned int)v75 >= v92 )
              {
                v17 = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0((__int64 *)v112, "Overflow encountered when expanding vector");
                *v17 = (char *)off_1C63128;
                sub_2333C0(v17 + 1, v112);
                sub_233E40((__int64)v112);
                __cxa_throw(v17, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
              v94 = (unsigned int *)sub_186B300(v74 - 2, v93);
              v74 = v94 + 2;
              *v94 = v92;
              v95 = v94[1];
              *(_QWORD *)(a1 + 448) = v74;
              v76 = &v74[v95];
            }
            else
            {
              v76 = &v74[v75];
            }
          }
          else
          {
            v96 = (_QWORD *)sub_186B270(0x10u);
            *v96 = 2;
            v74 = (unsigned int *)(v96 + 1);
            *(_QWORD *)(a1 + 448) = v96 + 1;
            v76 = (unsigned int *)(v96 + 1);
          }
          v77 = v111;
          v78 = *(const __m128i **)(a1 + 80);
          *v76 = v48 ^ 1;
          v79 = *(v74 - 1) + 1;
          *(v74 - 1) = v79;
          if ( v77 )
            v80 = v77[-1].m128_u32[3];
          else
            v80 = 0;
          v50 = sub_7A6620(v78, (unsigned __int64 *)(a1 + 16), v79, v74, v80, (__int64)v77, a4);
          v49 = *(_QWORD *)(a1 + 80);
          --*(_DWORD *)(*(_QWORD *)(a1 + 448) - 4LL);
        }
        else
        {
          v50 = nullptr;
        }
      }
      v51 = sub_7E5B40(a1, (const void **)(a1 + 448), (__int64 *)&v111, v48, (__int64)v50);
      result = sub_7CA4E0(v49, v48, (__int64)(v51 - 1));
    }
    else if ( !*(_DWORD *)(sub_7E4EB0(a1) + 464)
           || (result = *(_QWORD *)(v100 + 24)) != 0
           && *(_DWORD *)(result + 24) != 2
           && (result = sub_7E4EB0(a1), *(_DWORD *)(result + 464) == 1) )
    {
      result = sub_81D970(a1, a2, 0);
    }
    goto LABEL_29;
  }
  v62 = (__int64)v111;
  v63 = *(const __m128i **)(a1 + 80);
  v64 = (unsigned __int64 *)(a1 + 16);
  v65 = (const void **)(a1 + 448);
  v27 = *(unsigned int **)(a1 + 448);
  if ( v111 )
    v66 = v111[-1].m128_u32[3];
  else
    v66 = 0;
  if ( !v27 )
    goto LABEL_53;
LABEL_52:
  v32 = *(v27 - 1);
LABEL_53:
  v67 = sub_7A6620(v63, v64, v32, v27, v66, v62, a4);
  v68 = *(_QWORD *)(a1 + 80);
  v69 = sub_7E5DB0(a1, v65, (__int64 *)&v111, (__int64)v67);
  result = sub_7CA490(v68, (__int64)(v69 - 1), v70, v71, v72, v73);
LABEL_29:
  if ( v111 )
    return sub_186B220(&v111[-1].m128_u16[4]);
  return result;
}

