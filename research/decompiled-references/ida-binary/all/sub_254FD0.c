unsigned __int64 __fastcall sub_254FD0(
        __int64 a1,
        __int64 *a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  __int64 v10; // rax
  char v12; // al
  _DWORD *v13; // rsi
  char **v14; // r13
  char *v15; // r8
  __int64 (*v16)(); // rax
  bool v17; // zf
  __int64 (__fastcall *v18)(__int64, __int64); // rdx
  __int64 v20; // rdx
  __int64 v21; // rcx
  char v22; // bl
  __int64 v23; // r8
  __int64 v24; // r9
  __m128 v25; // xmm4
  __m128 v26; // xmm5
  const char *v27; // rsi
  const char *v28; // rsi
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __m128 v32; // xmm4
  __m128 v33; // xmm5
  __int64 v34; // rdx
  __int64 (*v35)(); // rax
  int v36; // eax
  const char *v37; // rsi
  __int64 v38; // rdx
  __int64 v39; // r15
  __int64 *v40; // rax
  __int64 *v41; // r15
  int v42; // eax
  __int64 v43; // rcx
  unsigned __int64 v44; // r10
  __int64 v45; // rdx
  void (__fastcall ***v46)(_QWORD); // rsi
  __int64 v47; // rax
  _QWORD *v48; // rbx
  char *v49; // r8
  __int64 v50; // rcx
  __int64 v51; // rcx
  _QWORD *v52; // rbp
  _QWORD *v53; // rbx
  __int64 v54; // r13
  void (__fastcall ***v55)(_QWORD); // rax
  __int64 v57; // rax
  __int64 v58; // rax
  __int64 v59; // [rsp+0h] [rbp-A8h]
  __int64 v60; // [rsp+0h] [rbp-A8h]
  __int64 v61; // [rsp+10h] [rbp-98h]
  __int64 v62; // [rsp+10h] [rbp-98h]
  unsigned __int64 v63; // [rsp+18h] [rbp-90h]
  char *v64; // [rsp+18h] [rbp-90h]
  char *v65; // [rsp+18h] [rbp-90h]
  char *v66; // [rsp+20h] [rbp-88h]
  __int64 v67; // [rsp+20h] [rbp-88h]
  char **v68; // [rsp+28h] [rbp-80h]
  _DWORD *v69; // [rsp+30h] [rbp-78h]
  char *v70; // [rsp+38h] [rbp-70h] BYREF
  char *v71; // [rsp+40h] [rbp-68h] BYREF
  __int128 v72; // [rsp+48h] [rbp-60h]
  __int64 v73; // [rsp+58h] [rbp-50h]
  int v74; // [rsp+60h] [rbp-48h]
  unsigned __int64 v75; // [rsp+68h] [rbp-40h]

  v10 = *a2;
  v75 = __readfsqword(0x28u);
  (*(void (**)(void))(v10 + 88))();
  if ( !v69 )
    return v75 - __readfsqword(0x28u);
  v12 = (*(__int64 (__fastcall **)())(*(_QWORD *)v69 + 8LL))();
  v13 = v69;
  v14 = &v70;
  while ( v12 )
  {
    v18 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v13 + 32LL);
    if ( v18 == sub_1992A0 )
      (*(void (__fastcall **)(char **))(*(_QWORD *)v13 + 24LL))(v14);
    else
      ((void (__fastcall *)(char **))v18)(v14);
    v15 = v70;
    if ( v70 )
    {
      v16 = *(__int64 (**)())(*(_QWORD *)v70 + 120LL);
      if ( v16 == sub_2269E0 )
      {
LABEL_6:
        v17 = (*((_DWORD *)v15 + 2))-- == 1;
        if ( v17 )
          (**(void (__fastcall ***)(char *))v15)(v15);
        goto LABEL_8;
      }
      if ( ((int (__fastcall *)(char *, _QWORD))v16)(v70, *(_QWORD *)(a1 + 8)) <= 5 )
      {
        v15 = v70;
        v35 = *(__int64 (**)())(*(_QWORD *)v70 + 120LL);
        if ( v35 == sub_2269E0 )
          goto LABEL_26;
        v36 = ((__int64 (__fastcall *)(char *, _QWORD))v35)(v70, *(_QWORD *)(a1 + 8));
        v15 = v70;
        if ( v36 != 3 )
          goto LABEL_26;
        a3 = 0;
        v71 = nullptr;
        v73 = 0;
        v37 = (const char *)&v71;
        v74 = -1;
        v72 = 0;
        if ( (*(unsigned __int8 (__fastcall **)(char *, char **))(*(_QWORD *)v70 + 72LL))(v70, &v71) )
        {
          if ( (_QWORD)v72 )
          {
            v37 = *(const char **)(*(_QWORD *)(a1 + 8) + 8LL);
            if ( rangeset_t_find_range(&v71, v37) )
            {
              v37 = v70;
              sub_254FD0(a1, v70);
            }
          }
        }
        if ( v71 )
        {
          *(_QWORD *)&v72 = 0;
          *(double *)a3.m128_u64 = qfree(v71, v37);
        }
        goto LABEL_35;
      }
      if ( !(_BYTE)byte_8CBFA0 && __cxa_guard_acquire(&byte_8CBFA0) )
      {
        a3 = 0;
        qword_8CBFB0 = 0;
        xmmword_8CBFB8 = 0;
        __cxa_atexit((void (*)(void *))sub_16B530, &qword_8CBFB0, &off_85BC80);
        __cxa_guard_release(&byte_8CBFA0);
      }
      v22 = (*(__int64 (__fastcall **)(char *, __int64 *))(*(_QWORD *)v70 + 16LL))(v70, &qword_8CBFB0);
      if ( (*(_DWORD *)debug & 0x40000) != 0 )
      {
        v27 = "<unnamed>";
        if ( v22 )
        {
          v27 = &s1;
          if ( (_QWORD)xmmword_8CBFB8 )
            v27 = (const char *)qword_8CBFB0;
        }
        sub_16B860(
          (int)"Candidate local variable: %s (bounds: ",
          (__int64)v27,
          v20,
          v21,
          v23,
          v24,
          a3,
          a4,
          a5,
          a6,
          v25,
          v26,
          a9,
          a10,
          debug[0]);
        a3 = 0;
        v71 = nullptr;
        v28 = (const char *)&v71;
        v73 = 0;
        v74 = -1;
        v72 = 0;
        v29 = (*(unsigned int (__fastcall **)(char *, char **))(*(_QWORD *)v70 + 72LL))(v70, &v71);
        v34 = *(_DWORD *)debug & 0x40000;
        if ( !(_BYTE)v29 )
          goto LABEL_20;
        v29 = v72;
        LOBYTE(v59) = v72;
        if ( !(_QWORD)v72 )
          goto LABEL_20;
        v38 = (__int64)v71;
        v39 = 0;
        if ( (*(_DWORD *)debug & 0x40000) != 0 )
        {
          while ( 1 )
          {
            v40 = (__int64 *)(v38 + 16LL * (int)v39);
            v28 = (const char *)*v40;
            sub_16B860((int)"[%a -> %a[", *v40, v40[1], v29, v30, v31, (__m128)0LL, a4, a5, a6, v32, v33, a9, a10, v59);
            if ( v59 == ++v39 )
              break;
            if ( (*(_DWORD *)debug & 0x40000) != 0 )
            {
              v61 = (__int64)v71;
              sub_16B860(
                (int)" ",
                (__int64)v28,
                (__int64)v71,
                v29,
                v30,
                v31,
                (__m128)0LL,
                a4,
                a5,
                a6,
                v32,
                v33,
                a9,
                a10,
                v59);
              v38 = v61;
              if ( (*(_DWORD *)debug & 0x40000) != 0 )
                continue;
            }
            goto LABEL_22;
          }
          v34 = *(_DWORD *)debug & 0x40000;
LABEL_20:
          if ( (_DWORD)v34 )
            sub_16B860((int)")\n", (__int64)v28, v34, v29, v30, v31, (__m128)0LL, a4, a5, a6, v32, v33, a9, a10, v59);
        }
LABEL_22:
        if ( v71 )
        {
          *(_QWORD *)&v72 = 0;
          *(double *)a3.m128_u64 = qfree(v71, v28);
        }
      }
      v15 = v70;
      if ( !v22 || (unsigned __int64)xmmword_8CBFB8 <= 1 )
      {
LABEL_26:
        if ( !v15 )
          goto LABEL_8;
        goto LABEL_6;
      }
      v71 = v70;
      v41 = *(__int64 **)(a1 + 24);
      if ( v70 )
      {
        v42 = *((_DWORD *)v70 + 2) + 1;
        *((_DWORD *)v70 + 2) = v42;
        v43 = v41[1];
        v44 = v41[2];
        v45 = v43 + 1;
        if ( v44 >= v43 + 1 )
        {
          *(_QWORD *)(*v41 + 8 * v43) = v15;
LABEL_51:
          *((_DWORD *)v15 + 2) = v42 + 1;
          ++v41[1];
          v17 = (*((_DWORD *)v15 + 2))-- == 1;
          if ( v17 )
            (**(void (__fastcall ***)(char *))v15)(v15);
LABEL_35:
          v15 = v70;
          if ( !v70 )
            goto LABEL_8;
          goto LABEL_6;
        }
LABEL_53:
        v46 = nullptr;
        v66 = v15;
        v63 = v44;
        v47 = qvector_reserve(v41, 0, v45, 8);
        v60 = v47;
        v48 = (_QWORD *)*v41;
        v49 = v66;
        v62 = v41[2];
        v50 = v41[1];
        v41[2] = v63;
        v51 = v50 - 1;
        if ( v51 >= 0 )
        {
          v64 = v66;
          v67 = a1;
          v52 = v48;
          v53 = (_QWORD *)v47;
          v68 = v14;
          v54 = v51;
          do
          {
            v55 = (void (__fastcall ***)(_QWORD))*v52;
            *v53 = *v52;
            if ( v55 )
              ++*((_DWORD *)v55 + 2);
            v46 = (void (__fastcall ***)(_QWORD))*v52;
            if ( *v52 )
            {
              v17 = (*((_DWORD *)v46 + 2))-- == 1;
              if ( v17 )
                (**(void (__fastcall ***)(_QWORD))*v52)(*v52);
            }
            ++v52;
            ++v53;
          }
          while ( v54-- != 0 );
          v49 = v64;
          a1 = v67;
          v14 = v68;
          v48 = (_QWORD *)*v41;
        }
        v65 = v49;
        *(double *)a3.m128_u64 = qfree(v48, (const char *)v46);
        v15 = v65;
        v41[2] = v62;
        v57 = v41[1];
        *v41 = v60;
        *(_QWORD *)(v60 + 8 * v57) = v65;
        if ( v65 )
        {
          v42 = *((_DWORD *)v65 + 2);
          goto LABEL_51;
        }
      }
      else
      {
        v58 = v41[1];
        v44 = v41[2];
        v45 = v58 + 1;
        if ( v44 < v58 + 1 )
          goto LABEL_53;
        *(_QWORD *)(*v41 + 8 * v58) = 0;
      }
      ++v41[1];
      goto LABEL_35;
    }
LABEL_8:
    v12 = (*(__int64 (__fastcall **)())(*(_QWORD *)v69 + 16LL))();
    v13 = v69;
  }
  v17 = v13[2]-- == 1;
  if ( v17 )
    (**(void (__fastcall ***)(_DWORD *))v13)(v13);
  return v75 - __readfsqword(0x28u);
}
