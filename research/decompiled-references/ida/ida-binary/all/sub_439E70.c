__int64 __fastcall sub_439E70(
        __int64 a1,
        double a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  const char *v9; // rsi
  __int64 v10; // rbx
  _QWORD *v11; // rax
  _QWORD *v12; // rbp
  __int64 (__fastcall *v13)(_QWORD *, __int64, __int64, __int64, __int64); // rax
  __int64 v14; // rdi
  __int64 (*v15)(); // rax
  __int64 v16; // rdx
  __int64 v17; // r12
  __int64 v18; // rbp
  __int64 v19; // rax
  __int64 v20; // rdi
  __int64 v21; // rdx
  __int64 v22; // r12
  __int64 v23; // rbp
  __int64 *v24; // rax
  __int64 v25; // rdi
  __int64 v26; // r12
  int *v27; // rdi
  char v28; // bp
  __m128 v29; // xmm0
  __int64 v30; // r12
  char *v31; // rbp
  __int64 v32; // rbx
  _QWORD *v33; // rax
  __m128 v34; // xmm4
  __m128 v35; // xmm5
  __int64 (__fastcall *v36)(int, __int64); // rsi
  double v37; // xmm4_8
  double v38; // xmm5_8
  unsigned int v39; // r12d
  unsigned int v40; // ebx
  unsigned int v41; // ebp
  __int64 v42; // rdx
  __int64 v43; // r12
  __int64 v44; // rbx
  __int64 *v45; // rax
  __int64 v46; // rdi
  __int64 v47; // rdx
  __int64 v48; // r12
  __int64 v49; // rbx
  __int64 *v50; // rax
  __int64 v51; // rdi
  unsigned __int64 v53; // rcx
  char *v54; // rax
  char *v55; // rbp
  unsigned int v56; // edx
  unsigned int v57; // eax
  __int64 v58; // rsi
  const void **v59; // r13
  size_t v60; // rbx
  const char *v61; // rsi
  __int64 *v62; // r12
  __int64 v63; // rdx
  __int64 *v64; // rdi
  __int64 v65; // rax
  char *v66; // rax
  _QWORD *v67; // rax
  _QWORD *v68; // rbx
  __int64 (__fastcall *v69)(_QWORD *, __int64, __int64, __int64, __int64); // rax
  unsigned int v70; // r15d
  __int64 v71; // rdi
  __int64 (*v72)(); // rax
  __int64 v73; // rdx
  __int64 v74; // rbp
  __int64 v75; // rbx
  __int64 v76; // rax
  __int64 v77; // rdi
  __int64 v78; // r12
  __int64 v79; // rdx
  __int64 v80; // rbx
  __int64 v81; // rbp
  int *v82; // r15
  __int64 v83; // rdi
  __int64 v84; // rdi
  __int64 v85; // rdi
  __int64 v86; // rax
  __int64 v87; // rbp
  __int64 *v88; // rax
  __int64 v89; // rdi
  char v90; // [rsp-8h] [rbp-148h]
  __int64 v91; // [rsp+0h] [rbp-140h]
  __int64 v92; // [rsp+8h] [rbp-138h] BYREF
  __int128 v93; // [rsp+10h] [rbp-130h]
  __int64 v94; // [rsp+28h] [rbp-118h] BYREF
  __int128 v95; // [rsp+30h] [rbp-110h]
  int *v96; // [rsp+48h] [rbp-F8h] BYREF
  __int128 v97; // [rsp+50h] [rbp-F0h]
  __int64 v98; // [rsp+68h] [rbp-D8h] BYREF
  __int128 v99; // [rsp+70h] [rbp-D0h]
  __int64 v100; // [rsp+88h] [rbp-B8h] BYREF
  __int128 v101; // [rsp+90h] [rbp-B0h]
  __int64 v102; // [rsp+A8h] [rbp-98h] BYREF
  __int128 v103; // [rsp+B0h] [rbp-90h]
  __int64 v104; // [rsp+C0h] [rbp-80h]
  __int128 v105; // [rsp+C8h] [rbp-78h]
  __int64 v106; // [rsp+D8h] [rbp-68h]
  __int128 v107; // [rsp+E0h] [rbp-60h]
  __int64 v108; // [rsp+F0h] [rbp-50h]
  unsigned __int64 v109; // [rsp+100h] [rbp-40h]

  v109 = __readfsqword(0x28u);
  v93 = 0;
  v92 = 0;
  v9 = (const char *)a1;
  sub_4339F0((const char *)&v92, (_QWORD *)a1, 0x203u);
  v10 = v93;
  v94 = 0;
  v95 = 0;
  if ( (_QWORD)v93 )
  {
    v59 = (const void **)v92;
    v101 = 0;
    v100 = 0;
    v60 = *(_QWORD *)(v92 + 8);
    if ( v60 )
    {
      v64 = (__int64 *)qalloc_or_throw(*(_QWORD *)(v92 + 8));
      v62 = v64;
      memcpy(v64, *v59, v60);
      v65 = v95;
      v61 = (const char *)v94;
      v63 = v95 + 1;
      if ( *((_QWORD *)&v95 + 1) >= (unsigned __int64)(v95 + 1) )
      {
LABEL_61:
        v66 = (char *)&v61[24 * v65];
        *(_QWORD *)v66 = v62;
        *(__m128i *)(v66 + 8) = _mm_unpacklo_epi64((__m128i)v60, (__m128i)v60);
        *(_QWORD *)&v95 = v95 + 1;
        v67 = sub_426230(v64, v61);
        v68 = (_QWORD *)sub_417080((__int64)v67);
        v69 = *(__int64 (__fastcall **)(_QWORD *, __int64, __int64, __int64, __int64))(*v68 + 240LL);
        v70 = *(_DWORD *)(v92 + 32);
        if ( v69 == vault_with_events_t__::vfunc_30 )
        {
          v71 = v68[1];
          if ( v71 )
          {
            v72 = *(__int64 (**)())(*(_QWORD *)v71 + 480LL);
            if ( v72 == sub_178B60 || !(unsigned __int8)v72() )
            {
              v102 = 0;
              v103 = 0;
              v61 = (const char *)(*(unsigned int (__fastcall **)(_QWORD, __int64 *, __int64 *, __int64 *, _QWORD, _QWORD))(*(_QWORD *)v68[1] + 208LL))(
                                    v68[1],
                                    &v102,
                                    &v100,
                                    &v94,
                                    v70,
                                    0);
              (*(void (__fastcall **)(_QWORD *, const char *, __int64 *))(*v68 + 24LL))(v68, v61, &v102);
              v73 = v102;
              if ( v102 )
              {
                v74 = v103;
                if ( (_QWORD)v103 )
                {
                  v75 = 0;
                  do
                  {
                    v76 = v73 + 32 * v75;
                    v77 = *(_QWORD *)(v76 + 8);
                    if ( v77 )
                    {
                      *(_QWORD *)(v76 + 16) = 0;
                      qfree(v77, v61);
                      v73 = v102;
                    }
                    ++v75;
                  }
                  while ( v74 != v75 );
                }
                *(_QWORD *)&v103 = 0;
                qfree(v73, v61);
              }
            }
          }
        }
        else
        {
          v61 = (const char *)&v100;
          v69(v68, (__int64)&v100, (__int64)&v94, v70, 0);
        }
        v78 = v101;
        v79 = v100;
        if ( (_QWORD)v101 )
        {
          v80 = *(int *)(v100 + 64);
          if ( !v100 )
            goto LABEL_74;
          v87 = 0;
          do
          {
            v88 = (__int64 *)(v79 + 80 * v87);
            v89 = *v88;
            if ( *v88 )
            {
              v88[1] = 0;
              qfree(v89, v61);
              v79 = v100;
            }
            ++v87;
          }
          while ( v78 != v87 );
        }
        else
        {
          v80 = 1;
          if ( !v100 )
          {
LABEL_74:
            v100 = v80;
            LOWORD(v96) = 0;
            goto LABEL_75;
          }
        }
        *(_QWORD *)&v101 = 0;
        qfree(v79, v61);
        goto LABEL_74;
      }
    }
    else
    {
      v61 = nullptr;
      v62 = nullptr;
      v63 = 1;
    }
    v64 = &v94;
    v94 = qvector_reserve(&v94, v61, v63, 24);
    v61 = (const char *)v94;
    v65 = v95;
    goto LABEL_61;
  }
  if ( *(_DWORD *)(a1 + 8) == 64 && *(_QWORD *)(a1 + 56) == 1 )
  {
    v86 = *(int *)(*(_QWORD *)(*(_QWORD *)(a1 + 40) + 216LL) + 88LL * **(int **)(a1 + 48));
    LOWORD(v96) = 0;
    v100 = v86;
LABEL_30:
    v29 = 0;
    v102 = 0;
    v30 = 7;
    LOWORD(v98) = 1;
    v31 = "Commit";
    v32 = 6;
    v103 = 0;
    goto LABEL_31;
  }
  v104 = 0;
  v106 = 0;
  v102 = 0x7FFFFFFF00000000LL;
  v108 = 1;
  v103 = 0;
  v105 = 0;
  v107 = 0;
  v11 = sub_426230(&v92, (const char *)a1);
  v12 = (_QWORD *)sub_417080((__int64)v11);
  v96 = nullptr;
  v97 = 0;
  v13 = *(__int64 (__fastcall **)(_QWORD *, __int64, __int64, __int64, __int64))(*v12 + 216LL);
  v99 = 0;
  v98 = 0;
  if ( v13 != vault_with_events_t__::vfunc_27 )
  {
    v9 = (const char *)&v96;
    v13(v12, (__int64)&v96, (__int64)&v98, (__int64)&v102, 0xFFFFFFFFLL);
LABEL_14:
    v21 = v98;
    goto LABEL_15;
  }
  v14 = v12[1];
  if ( !v14 )
    goto LABEL_22;
  v15 = *(__int64 (**)())(*(_QWORD *)v14 + 480LL);
  if ( v15 == sub_178B60 || !(unsigned __int8)v15() )
  {
    v100 = 0;
    v101 = 0;
    v9 = (const char *)(*(unsigned int (__fastcall **)(_QWORD, __int64 *, int **, __int64 *, __int64 *, __int64))(*(_QWORD *)v12[1] + 184LL))(
                         v12[1],
                         &v100,
                         &v96,
                         &v98,
                         &v102,
                         0xFFFFFFFFLL);
    (*(void (__fastcall **)(_QWORD *, const char *, __int64 *))(*v12 + 24LL))(v12, v9, &v100);
    v16 = v100;
    if ( v100 )
    {
      v17 = v101;
      if ( (_QWORD)v101 )
      {
        v18 = 0;
        do
        {
          v19 = v16 + 32 * v18;
          v20 = *(_QWORD *)(v19 + 8);
          if ( v20 )
          {
            *(_QWORD *)(v19 + 16) = 0;
            qfree(v20, v9);
            v16 = v100;
          }
          ++v18;
        }
        while ( v17 != v18 );
      }
      *(_QWORD *)&v101 = 0;
      qfree(v16, v9);
    }
    goto LABEL_14;
  }
  v21 = v98;
LABEL_15:
  if ( v21 )
  {
    v22 = v99;
    if ( (_QWORD)v99 )
    {
      v23 = 0;
      do
      {
        v24 = (__int64 *)(v21 + 24 * v23);
        v25 = *v24;
        if ( *v24 )
        {
          v24[1] = 0;
          qfree(v25, v9);
          v21 = v98;
        }
        ++v23;
      }
      while ( v22 != v23 );
    }
    *(_QWORD *)&v99 = 0;
    qfree(v21, v9);
  }
LABEL_22:
  v26 = v97;
  v27 = v96;
  if ( !(_QWORD)v97 )
  {
    v91 = 1;
    v28 = 1;
    if ( !v96 )
      goto LABEL_25;
    goto LABEL_24;
  }
  v28 = 0;
  v91 = *v96;
  if ( v96 )
  {
    v81 = 0;
    do
    {
      v82 = &v27[v81];
      v83 = *(_QWORD *)&v27[v81 + 16];
      if ( v83 )
      {
        *((_QWORD *)v82 + 9) = 0;
        qfree(v83, v9);
      }
      v84 = *((_QWORD *)v82 + 5);
      if ( v84 )
      {
        *((_QWORD *)v82 + 6) = 0;
        qfree(v84, v9);
      }
      v85 = *((_QWORD *)v82 + 2);
      if ( v85 )
      {
        *((_QWORD *)v82 + 3) = 0;
        qfree(v85, v9);
      }
      ++v10;
      v27 = v96;
      v81 += 22;
    }
    while ( v26 != v10 );
    v28 = 0;
LABEL_24:
    *(_QWORD *)&v97 = 0;
    qfree(v27, v9);
  }
LABEL_25:
  if ( v106 )
  {
    *(_QWORD *)&v107 = 0;
    qfree(v106, v9);
  }
  if ( v104 )
  {
    *(_QWORD *)&v105 = 0;
    qfree(v104, v9);
  }
  LOWORD(v96) = 0;
  v100 = v91;
  if ( !v28 )
    goto LABEL_30;
LABEL_75:
  v29 = 0;
  v32 = 8;
  v102 = 0;
  LOWORD(v98) = 0;
  v30 = 9;
  v31 = "Revision";
  v103 = 0;
LABEL_31:
  v33 = (_QWORD *)qvector_reserve(&v102, 0, v30, 1);
  v102 = (__int64)v33;
  *(_QWORD *)&v103 = v30;
  if ( (unsigned int)v32 >= 8 )
  {
    v53 = (unsigned __int64)(v33 + 1) & 0xFFFFFFFFFFFFFFF8LL;
    *v33 = *(_QWORD *)v31;
    *(_QWORD *)((char *)v33 + v32 - 8) = *(_QWORD *)&v31[v32 - 8];
    v54 = (char *)v33 - v53;
    v55 = (char *)(v31 - v54);
    if ( (((_DWORD)v32 + (_DWORD)v54) & 0xFFFFFFF8) >= 8 )
    {
      v56 = (v32 + (_DWORD)v54) & 0xFFFFFFF8;
      v57 = 0;
      do
      {
        v58 = v57;
        v57 += 8;
        *(_QWORD *)(v53 + v58) = *(_QWORD *)&v55[v58];
      }
      while ( v57 < v56 );
    }
  }
  else
  {
    *(_DWORD *)v33 = *(_DWORD *)v31;
    *(_DWORD *)((char *)v33 + (unsigned int)v32 - 4) = *(_DWORD *)&v31[(unsigned int)v32 - 4];
  }
  v36 = sub_433C60;
  *(_BYTE *)(v102 + v32) = 0;
  if ( (int)sub_1697D0(
              (int)"Get revision options\n"
                   "%/<Revision:R> <Commit:R>1>\n"
                   "%2q <:D3::6::>\n"
                   "<~F~orce sync of already synced files:c>>\n"
                   "\n",
              (__int64)sub_433C60,
              (__int64)&v98,
              (__int64)&v102,
              (__int64)&v100,
              (__int64)&v96,
              v29,
              a3,
              a4,
              a5,
              v34,
              v35,
              a8,
              a9,
              v90) <= 0 )
  {
    if ( v102 )
    {
      *(_QWORD *)&v103 = 0;
      *(double *)v29.m128_u64 = qfree(v102, (const char *)sub_433C60);
    }
    v41 = 0;
  }
  else
  {
    v39 = v100;
    v40 = 4 * ((_WORD)v96 != 0);
    if ( !(_WORD)v98 )
      v40 |= 1u;
    if ( v102 )
    {
      *(_QWORD *)&v103 = 0;
      *(double *)v29.m128_u64 = qfree(v102, (const char *)sub_433C60);
    }
    v36 = (__int64 (__fastcall *)(int, __int64))&v94;
    v41 = (unsigned __int8)sub_437180(v39, (const char *)&v94, v40, 0, v29, a3, a4, a5, v37, v38, a8, a9);
  }
  v42 = v94;
  if ( v94 )
  {
    v43 = v95;
    if ( (_QWORD)v95 )
    {
      v44 = 0;
      do
      {
        v45 = (__int64 *)(v42 + 24 * v44);
        v46 = *v45;
        if ( *v45 )
        {
          v45[1] = 0;
          qfree(v46, (const char *)v36);
          v42 = v94;
        }
        ++v44;
      }
      while ( v43 != v44 );
    }
    *(_QWORD *)&v95 = 0;
    *(double *)v29.m128_u64 = qfree(v42, (const char *)v36);
  }
  v47 = v92;
  if ( v92 )
  {
    v48 = v93;
    if ( (_QWORD)v93 )
    {
      v49 = 0;
      do
      {
        v50 = (__int64 *)(v47 + 48 * v49);
        v51 = *v50;
        if ( *v50 )
        {
          v50[1] = 0;
          *(double *)v29.m128_u64 = qfree(v51, (const char *)v36, *(double *)v29.m128_u64);
          v47 = v92;
        }
        ++v49;
      }
      while ( v48 != v49 );
    }
    *(_QWORD *)&v93 = 0;
    qfree(v47, (const char *)v36, *(double *)v29.m128_u64);
  }
  return v41;
}
