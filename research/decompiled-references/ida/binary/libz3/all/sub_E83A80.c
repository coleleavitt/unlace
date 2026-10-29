__m128i *__fastcall sub_E83A80(__m128i *a1, __int64 a2, unsigned __int64 a3, char a4)
{
  __m128i v7; // xmm0
  __m128i v8; // xmm1
  _DWORD *v9; // rax
  bool v10; // zf
  __int64 v12; // r13
  __int64 v13; // r12
  int v14; // eax
  _DWORD *v15; // rdx
  __int64 v16; // rax
  int v17; // eax
  _DWORD *v18; // rdx
  int v19; // eax
  __int64 v20; // rdi
  _DWORD *v21; // rdx
  __int64 v22; // rax
  _QWORD *v23; // rax
  int v24; // r8d
  int v25; // r9d
  __int64 v26; // rax
  unsigned int v27; // r14d
  __int64 v28; // rdi
  __int64 v29; // rsi
  __int64 v30; // rax
  __int64 v31; // rdx
  unsigned int v32; // esi
  __int64 v33; // rax
  __int64 v34; // rsi
  __int64 v35; // rax
  __int64 v36; // rsi
  __int64 *v37; // r12
  unsigned __int64 v38; // r13
  __int64 v39; // rsi
  unsigned int v40; // ecx
  unsigned int v41; // eax
  unsigned int *v42; // rax
  int v43; // eax
  __int64 v44; // rdx
  _DWORD *v45; // rcx
  __int64 v46; // rax
  __int64 v47; // rbp
  __int64 v48; // rsi
  __int64 v49; // rdi
  __int64 v50; // rsi
  __int64 v51; // rdi
  __int64 v52; // r12
  _QWORD *v53; // r14
  __int64 *v54; // rcx
  __int64 v55; // rax
  __int64 v56; // rdx
  unsigned int v57; // eax
  unsigned int v58; // ecx
  size_t v59; // rsi
  unsigned int *v60; // rax
  __int64 v61; // rax
  __int64 v62; // rax
  __int64 v63; // rsi
  __int64 *v64; // r12
  unsigned __int64 v65; // r13
  __int64 v66; // rsi
  _QWORD *v67; // rax
  char **v68; // r12
  char **exception; // rbp
  int v70[2]; // [rsp+0h] [rbp-B8h]
  int v71[2]; // [rsp+0h] [rbp-B8h]
  int v72; // [rsp+8h] [rbp-B0h]
  int v73[2]; // [rsp+8h] [rbp-B0h]
  int v74[2]; // [rsp+8h] [rbp-B0h]
  int v75[2]; // [rsp+10h] [rbp-A8h]
  int v76[2]; // [rsp+10h] [rbp-A8h]
  unsigned int v77; // [rsp+10h] [rbp-A8h]
  int v78[2]; // [rsp+10h] [rbp-A8h]
  int v79[2]; // [rsp+10h] [rbp-A8h]
  int *v80; // [rsp+18h] [rbp-A0h]
  unsigned int v81; // [rsp+18h] [rbp-A0h]
  __int64 *v82; // [rsp+20h] [rbp-98h]
  char v83[8]; // [rsp+28h] [rbp-90h]
  int v84; // [rsp+30h] [rbp-88h]
  int v85; // [rsp+38h] [rbp-80h]
  int v86[4]; // [rsp+40h] [rbp-78h] BYREF
  __int64 v87; // [rsp+50h] [rbp-68h]
  int v88[2]; // [rsp+60h] [rbp-58h] BYREF

  v7 = _mm_loadl_epi64((const __m128i *)(a2 + 8));
  v8 = _mm_unpacklo_epi64((__m128i)a3, v7);
  *(__m128i *)v86 = v8;
  if ( a3 )
    ++*(_DWORD *)(a3 + 8);
  if ( !*(_WORD *)(a3 + 4) )
  {
    v9 = *(_DWORD **)(*(_QWORD *)(a3 + 16) + 24LL);
    if ( v9 )
    {
      if ( !*v9 && v9[1] == 2 && *(_DWORD *)(a3 + 24) == 2 )
      {
        v12 = *(_QWORD *)(a3 + 40);
        v13 = *(_QWORD *)(a3 + 32);
        if ( *(_WORD *)(v12 + 4)
          || (v14 = sub_15F0200(a2 + 32), *(_WORD *)(v12 + 4))
          || (v15 = *(_DWORD **)(*(_QWORD *)(v12 + 16) + 24LL)) == nullptr
          || v14 != *v15
          || v15[1] )
        {
          if ( *(_WORD *)(v13 + 4) )
            goto LABEL_18;
        }
        else
        {
          v16 = v13;
          v13 = v12;
          v12 = v16;
        }
        v17 = sub_15F0200(a2 + 32);
        if ( !*(_WORD *)(v13 + 4) )
        {
          v18 = *(_DWORD **)(*(_QWORD *)(v13 + 16) + 24LL);
          if ( v18 && v17 == *v18 && !v18[1] && !*(_WORD *)(v12 + 4) )
          {
            v43 = sub_15F0200(a2 + 32);
            if ( !*(_WORD *)(v12 + 4) )
            {
              v44 = *(_QWORD *)(v12 + 16);
              v45 = *(_DWORD **)(v44 + 24);
              if ( v45 )
              {
                if ( v43 == *v45 && !v45[1] )
                {
                  v46 = *(_QWORD *)(a2 + 8);
                  *(_QWORD *)v74 = v46;
                  if ( *(_QWORD *)(v13 + 16) == v44 )
                  {
                    v50 = *(unsigned int *)(v13 + 24);
                    v87 = v46;
                    LODWORD(v51) = v46;
                    if ( (_DWORD)v50 )
                    {
                      v52 = v13 + 32;
                      v53 = nullptr;
                      *(_QWORD *)v71 = v12 + 8LL * (unsigned int)v50;
                      while ( 1 )
                      {
                        v55 = sub_15E1B70(v51);
                        v56 = v55;
                        if ( v55 )
                          ++*(_DWORD *)(v55 + 8);
                        if ( v53 )
                        {
                          v57 = *((_DWORD *)v53 - 1);
                          if ( v57 == *((_DWORD *)v53 - 2) )
                          {
                            v58 = (3 * v57 + 1) >> 1;
                            v59 = 8 * v58 + 8;
                            if ( 8 * v57 + 8 >= (unsigned int)v59 || v57 >= v58 )
                            {
                              exception = (char **)__cxa_allocate_exception(0x28u);
                              sub_24ABB0((__int64 *)v88, "Overflow encountered when expanding vector");
                              *exception = (char *)off_1C63128;
                              sub_2333C0(exception + 1, v88);
                              sub_233E40((__int64)v88);
                              __cxa_throw(
                                exception,
                                (struct type_info *)&`typeinfo for'default_exception,
                                (void (*)(void *))sub_230E50);
                            }
                            v81 = (3 * v57 + 1) >> 1;
                            *(_QWORD *)v78 = v56;
                            v60 = (unsigned int *)sub_186B300(v53 - 1, v59);
                            v53 = v60 + 2;
                            v56 = *(_QWORD *)v78;
                            *v60 = v81;
                            v61 = v60[1];
                            v54 = &v53[v61];
                            v50 = (unsigned int)(v61 + 1);
                          }
                          else
                          {
                            v50 = v57 + 1;
                            v54 = &v53[v57];
                          }
                        }
                        else
                        {
                          *(_QWORD *)v79 = v55;
                          v67 = (_QWORD *)sub_186B270(0x18u);
                          v56 = *(_QWORD *)v79;
                          v50 = 1;
                          *v67 = 2;
                          v53 = v67 + 1;
                          v54 = v67 + 1;
                        }
                        v12 += 8;
                        *v54 = v56;
                        v52 += 8;
                        *((_DWORD *)v53 - 1) = v50;
                        if ( v12 == *(_QWORD *)v71 )
                          break;
                        v51 = *(_QWORD *)(a2 + 8);
                      }
                    }
                    else
                    {
                      v53 = nullptr;
                    }
                    v62 = sub_15EC1C0(*(_QWORD *)v74, v50);
                    if ( v62 )
                      ++*(_DWORD *)(v62 + 8);
                    v63 = *(_QWORD *)v86;
                    *(_QWORD *)v86 = v62;
                    if ( v63 )
                    {
                      v10 = (*(_DWORD *)(v63 + 8))-- == 1;
                      if ( v10 )
                        sub_15D7BC0(*(_QWORD *)v74, v63);
                    }
                    if ( v53 )
                    {
                      v64 = v53;
                      v65 = (unsigned __int64)&v53[*((unsigned int *)v53 - 1)];
                      if ( (unsigned __int64)v53 < v65 )
                      {
                        do
                        {
                          v66 = *v64;
                          if ( *v64 )
                          {
                            v10 = (*(_DWORD *)(v66 + 8))-- == 1;
                            if ( v10 )
                              sub_15D7BC0(*(_QWORD *)v74, v66);
                          }
                          ++v64;
                        }
                        while ( (unsigned __int64)v64 < v65 );
                      }
                      sub_186B220(v53 - 1);
                    }
                  }
                  else
                  {
                    v47 = *(_QWORD *)(v46 + 864);
                    if ( v47 )
                      ++*(_DWORD *)(v47 + 8);
                    v48 = *(_QWORD *)v86;
                    if ( *(_QWORD *)v86 )
                    {
                      v49 = *(_QWORD *)&v86[2];
                      v10 = (*(_DWORD *)(*(_QWORD *)v86 + 8LL))-- == 1;
                      if ( v10 )
                        sub_15D7BC0(v49, v48);
                    }
                    *(_QWORD *)v86 = v47;
                  }
                  goto LABEL_18;
                }
              }
            }
            if ( *(_WORD *)(v13 + 4) )
              goto LABEL_18;
          }
          v19 = sub_15F0200(a2 + 32);
          if ( !*(_WORD *)(v13 + 4) )
          {
            v20 = *(_QWORD *)(v13 + 16);
            v21 = *(_DWORD **)(v20 + 24);
            if ( v21 )
            {
              if ( v19 == *v21 && !v21[1] )
              {
                *(_QWORD *)v83 = *(_QWORD *)(a2 + 8);
                v87 = *(_QWORD *)v83;
                v22 = sub_15F0AE0(a2 + 32, v20, v12);
                if ( v22 )
                  ++*(_DWORD *)(v22 + 8);
                *(_QWORD *)v75 = v22;
                v23 = (_QWORD *)sub_186B270(0x18u);
                *(_QWORD *)v70 = v23 + 1;
                v23[1] = *(_QWORD *)v75;
                *v23 = 0x100000002LL;
                *(_QWORD *)v76 = v23;
                v82 = (__int64 *)sub_15FB1F0(a2 + 32, v20);
                v26 = *v82;
                v27 = 0;
                v80 = v88;
                if ( *v82 )
                {
                  while ( v27 < *(_DWORD *)(v26 - 4) )
                  {
                    v28 = *(_QWORD *)(a2 + 8);
                    v29 = *(_QWORD *)(v26 + 8LL * v27);
                    *(_QWORD *)v88 = v12;
                    sub_15DC610(
                      v28,
                      v29,
                      1,
                      (int)v80,
                      v24,
                      v25,
                      v70[0],
                      v28,
                      v27,
                      (int)v80,
                      (int)v82,
                      v83[0],
                      v84,
                      v85,
                      v86[0],
                      *(void **)&v86[2]);
                    v30 = sub_15E1B70(v72);
                    v31 = v30;
                    if ( v30 )
                      ++*(_DWORD *)(v30 + 8);
                    v32 = *(_DWORD *)(*(_QWORD *)v70 - 4LL);
                    if ( v32 == *(_DWORD *)(*(_QWORD *)v70 - 8LL) )
                    {
                      v40 = (3 * v32 + 1) >> 1;
                      v41 = 8 * v40 + 8;
                      if ( 8 * v32 + 8 >= v41 || v32 >= v40 )
                      {
                        v68 = (char **)__cxa_allocate_exception(0x28u);
                        sub_24ABB0((__int64 *)v80, "Overflow encountered when expanding vector");
                        *v68 = (char *)off_1C63128;
                        sub_2333C0(v68 + 1, v80);
                        sub_233E40((__int64)v80);
                        __cxa_throw(
                          v68,
                          (struct type_info *)&`typeinfo for'default_exception,
                          (void (*)(void *))sub_230E50);
                      }
                      v77 = (3 * v32 + 1) >> 1;
                      *(_QWORD *)v73 = v31;
                      v42 = (unsigned int *)sub_186B300((void *)(*(_QWORD *)v70 - 8LL), v41);
                      v32 = v42[1];
                      v31 = *(_QWORD *)v73;
                      *(_QWORD *)v70 = v42 + 2;
                      *v42 = v77;
                    }
                    v33 = v32;
                    v34 = v32 + 1;
                    ++v27;
                    *(_QWORD *)(*(_QWORD *)v70 + 8 * v33) = v31;
                    *(_DWORD *)(*(_QWORD *)v70 - 4LL) = v34;
                    v26 = *v82;
                    if ( !*v82 )
                      goto LABEL_41;
                  }
                  v34 = *(unsigned int *)(*(_QWORD *)v70 - 4LL);
                }
                else
                {
                  v34 = *(unsigned int *)(*(_QWORD *)v76 + 4LL);
                }
LABEL_41:
                v35 = sub_15EC1C0(*(_QWORD *)v83, v34);
                if ( v35 )
                  ++*(_DWORD *)(v35 + 8);
                v36 = *(_QWORD *)v86;
                *(_QWORD *)v86 = v35;
                if ( v36 )
                {
                  v10 = (*(_DWORD *)(v36 + 8))-- == 1;
                  if ( v10 )
                    sub_15D7BC0(*(_QWORD *)v83, v36);
                }
                v37 = *(__int64 **)v70;
                v38 = *(_QWORD *)v70 + 8LL * *(unsigned int *)(*(_QWORD *)v70 - 4LL);
                if ( *(_QWORD *)v70 < v38 )
                {
                  do
                  {
                    v39 = *v37;
                    if ( *v37 )
                    {
                      v10 = (*(_DWORD *)(v39 + 8))-- == 1;
                      if ( v10 )
                        sub_15D7BC0(*(_QWORD *)v83, v39);
                    }
                    ++v37;
                  }
                  while ( (unsigned __int64)v37 < v38 );
                }
                sub_186B220((void *)(*(_QWORD *)v70 - 8LL));
              }
            }
          }
        }
LABEL_18:
        if ( a4 )
        {
          a3 = *(_QWORD *)v86;
          v7.m128i_i64[0] = *(_QWORD *)&v86[2];
          a1->m128i_i64[0] = *(_QWORD *)v86;
          a1->m128i_i64[1] = v7.m128i_i64[0];
          if ( !a3 )
            return a1;
          goto LABEL_13;
        }
        goto LABEL_7;
      }
    }
  }
  if ( a4 )
  {
    *a1 = v8;
LABEL_13:
    ++*(_DWORD *)(a3 + 8);
    goto LABEL_9;
  }
LABEL_7:
  sub_15EC330(a1, v86);
  a3 = *(_QWORD *)v86;
  if ( !*(_QWORD *)v86 )
    return a1;
  v7.m128i_i64[0] = *(_QWORD *)&v86[2];
LABEL_9:
  v10 = (*(_DWORD *)(a3 + 8))-- == 1;
  if ( v10 )
    sub_15D7BC0(v7.m128i_i64[0], a3);
  return a1;
}

