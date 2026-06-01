__int64 __fastcall sub_5DCEC0(_QWORD *a1, __int64 a2, __int64 a3, _QWORD *a4, char a5, int a6)
{
  int i; // r14d
  __int64 v9; // r12
  _QWORD *v10; // rbp
  void *v11; // rdi
  void *v12; // rdi
  __int64 (__fastcall *v13)(__int64); // rax
  unsigned __int64 *v14; // rax
  int v15; // ecx
  void **v16; // rsi
  __int64 *v17; // r8
  char v18; // bp
  void *v19; // r14
  void *v20; // rbx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rbx
  _QWORD *v28; // rdx
  _QWORD *v29; // rsi
  __int64 v30; // rdi
  __int64 v31; // rcx
  void *v32; // rdi
  unsigned __int64 v33; // rdx
  int v34; // eax
  unsigned __int64 *v35; // r8
  unsigned __int64 v36; // rax
  unsigned __int64 *v37; // rbp
  char v38; // al
  __int64 *v39; // r8
  __int64 v40; // rax
  _QWORD *v41; // r8
  __int64 v42; // rax
  __int64 v43; // rsi
  bool v44; // al
  __int64 v45; // rdx
  __int64 v46; // rcx
  unsigned __int64 v47; // rbp
  __int64 v48; // r8
  __int64 v49; // r9
  unsigned __int64 v50; // rdx
  int v51; // r13d
  __int64 v52; // r12
  __int64 v53; // r12
  int v54; // ebp
  __int64 v55; // rax
  unsigned __int64 v56; // rbx
  _QWORD *v57; // rbx
  __int64 v58; // rax
  __int64 v59; // rsi
  __int64 v60; // rax
  __int64 v62; // rax
  unsigned __int64 v63; // rax
  int v64; // ebx
  unsigned __int64 v65; // rax
  __int64 v66; // rsi
  char j; // al
  __int64 v68; // r12
  __int64 *v69; // r14
  __int64 v70; // rbp
  __int64 v71; // rax
  __int64 v72; // rax
  __int64 v73; // rax
  __int64 v74; // rax
  __int64 v76; // [rsp+10h] [rbp-248h]
  __int64 *v78; // [rsp+20h] [rbp-238h]
  __int64 *v79; // [rsp+20h] [rbp-238h]
  _QWORD *v80; // [rsp+20h] [rbp-238h]
  unsigned __int64 *v81; // [rsp+20h] [rbp-238h]
  __int64 *v82; // [rsp+20h] [rbp-238h]
  int v83; // [rsp+20h] [rbp-238h]
  unsigned __int64 v85; // [rsp+28h] [rbp-230h]
  __int64 *v86; // [rsp+30h] [rbp-228h]
  __int64 *v87; // [rsp+30h] [rbp-228h]
  char v88; // [rsp+3Eh] [rbp-21Ah]
  char v90; // [rsp+46h] [rbp-212h] BYREF
  char v91; // [rsp+47h] [rbp-211h] BYREF
  unsigned __int64 v92; // [rsp+48h] [rbp-210h] BYREF
  unsigned __int64 *v93[2]; // [rsp+50h] [rbp-208h] BYREF
  char v94; // [rsp+61h] [rbp-1F7h]
  void *v95; // [rsp+70h] [rbp-1E8h] BYREF
  void *v96[2]; // [rsp+78h] [rbp-1E0h]
  __int128 v97; // [rsp+88h] [rbp-1D0h]
  void *v98; // [rsp+98h] [rbp-1C0h]
  __int128 v99; // [rsp+A0h] [rbp-1B8h]
  __int128 v100; // [rsp+B0h] [rbp-1A8h] BYREF
  __int64 v101; // [rsp+C0h] [rbp-198h]
  __int64 v102; // [rsp+C8h] [rbp-190h]
  __int64 v103; // [rsp+D0h] [rbp-188h]
  char v104; // [rsp+D8h] [rbp-180h] BYREF
  unsigned __int64 v105; // [rsp+218h] [rbp-40h] BYREF

  v105 = __readfsqword(0x28u);
  for ( i = 0; ; ++i )
  {
    v13 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL);
    if ( v13 != sub_5C3F10 )
      break;
    if ( i >= *(_DWORD *)(a2 + 80) )
      goto LABEL_10;
LABEL_3:
    v9 = (__int64)i << 6;
    v10 = (_QWORD *)(v9 + *(_QWORD *)(a2 + 72));
    v11 = (void *)v10[2];
    if ( v11 )
    {
      v10[3] = 0;
      qfree(v11);
      v10[2] = 0;
      v10[4] = 0;
      v10 = (_QWORD *)(v9 + *(_QWORD *)(a2 + 72));
    }
    v12 = (void *)v10[5];
    if ( v12 )
    {
      v10[6] = 0;
      qfree(v12);
      v10[5] = 0;
      v10[7] = 0;
    }
  }
  if ( i < (int)v13(a2) )
    goto LABEL_3;
LABEL_10:
  *(_BYTE *)(a2 + 8) = 0;
  v14 = (unsigned __int64 *)&v104;
  v101 = -1;
  v102 = 0;
  v103 = 0;
  v100 = -1;
  do
  {
    v15 = 0;
    LODWORD(v16) = 0;
    LODWORD(v17) = 0;
    *(_WORD *)v14 = 0;
    v14 += 5;
    *((_WORD *)v14 - 19) = 0;
    *((_WORD *)v14 - 18) = 0;
    *((_DWORD *)v14 - 2) = 0;
    *((_WORD *)v14 - 17) = 0;
    *((_OWORD *)v14 - 2) = 0;
    *(v14 - 2) = 0;
  }
  while ( &v105 != v14 );
  while ( 1 )
  {
LABEL_15:
    if ( (*(_BYTE *)(a2 + 64) & 0x10) != 0 )
      callui(27, (int)v16, (int)&callui, v15, (int)v17, a6);
    v19 = *(void **)(a3 + 32);
    if ( (~((unsigned __int16)sub_3BE900(a1, (unsigned __int64)v19, 4) >> 8) & 6) == 0 )
      break;
    v16 = (void **)sub_39FD10;
    v18 = func_item_iterator_next(a3, sub_39FD10, 0, 0.0);
LABEL_14:
    if ( !v18 )
      goto LABEL_39;
  }
  v96[0] = nullptr;
  v96[1] = nullptr;
  v98 = nullptr;
  v95 = v19;
  v97 = 0;
  v99 = 0;
  while ( 1 )
  {
    v20 = (void *)sub_3C1F00(a1, (unsigned __int64)v19);
    v18 = func_item_iterator_next(a3, sub_39FD10, 0, 0.0);
    if ( !v18
      || !(unsigned int)decode_insn(&v100, v19, v21, v22, v23, v24, 0.0)
      || sub_5DCDA0(a1, (__int64)&v100, (*(_BYTE *)(a2 + 64) & 0x20) != 0) )
    {
      break;
    }
    v25 = *(_QWORD *)a3;
    if ( *(_QWORD *)a3 )
    {
      v26 = *(int *)(a3 + 8);
      if ( (int)v26 >= 0 && (int)v26 < *(_DWORD *)(v25 + 128) )
        v25 = *(_QWORD *)(v25 + 136) + 16 * v26;
    }
    else
    {
      v25 = a3 + 16;
    }
    if ( (unsigned __int64)v20 < *(_QWORD *)v25 || (unsigned __int64)v20 >= *(_QWORD *)(v25 + 8) )
      break;
    v19 = v20;
  }
  v96[0] = v20;
  v27 = *(_QWORD *)(a2 + 80);
  v28 = (_QWORD *)a4[2];
  if ( !v28 )
  {
    v29 = a4 + 1;
    goto LABEL_34;
  }
  v29 = a4 + 1;
  do
  {
    while ( 1 )
    {
      v30 = v28[2];
      v31 = v28[3];
      if ( v28[4] < (unsigned __int64)v95 )
        break;
      v29 = v28;
      v28 = (_QWORD *)v28[2];
      if ( !v30 )
        goto LABEL_32;
    }
    v28 = (_QWORD *)v28[3];
  }
  while ( v31 );
LABEL_32:
  if ( v29 == a4 + 1 || (unsigned __int64)v95 < v29[4] )
  {
LABEL_34:
    v93[0] = (unsigned __int64 *)&v95;
    v29 = sub_5D7C40(a4, v29, v93);
  }
  *((_DWORD *)v29 + 10) = v27;
  v16 = &v95;
  sub_5DC3A0((__int64 *)(a2 + 72), (__int64)&v95);
  v32 = v98;
  ++*(_DWORD *)(a2 + 96);
  if ( v32 )
  {
    *(_QWORD *)&v99 = 0;
    qfree(v32);
  }
  if ( !v96[1] )
    goto LABEL_14;
  *(_QWORD *)&v97 = 0;
  qfree(v96[1]);
  if ( v18 )
    goto LABEL_15;
LABEL_39:
  v33 = *(int *)(a2 + 96);
  if ( *(_QWORD *)(a2 + 80) < v33 )
  {
    if ( !under_debugger )
      interr(78);
    goto LABEL_113;
  }
  if ( a5 )
  {
    v34 = *(_DWORD *)(a2 + 64);
    if ( (int)v33 > 0 )
    {
      v76 = 0;
      do
      {
        if ( (v34 & 0x10) != 0 )
          callui(27, (int)v16, (int)&callui, v15, (int)v17, a6);
        v35 = (unsigned __int64 *)(*(_QWORD *)(a2 + 72) + (v76 << 6));
        v85 = v35[1];
        v36 = 0x100000000LL;
        if ( *(_DWORD *)(a1[3] + 24LL) == 8 )
          v36 = -1;
        if ( v85 < v36 )
        {
          v81 = (unsigned __int64 *)(*(_QWORD *)(a2 + 72) + (v76 << 6));
          v63 = sub_3BE900(a1, v85, 4);
          v35 = v81;
          if ( (v63 & 0x10000) != 0 )
          {
            v64 = v76 + 1;
            v88 = a5;
            if ( (int)v76 + 1 >= *(_DWORD *)(a2 + 96) || *(_QWORD *)(*(_QWORD *)(a2 + 72) + ((__int64)v64 << 6)) != v85 )
              goto LABEL_48;
            v65 = v81[3];
            v66 = v81[2];
            if ( v81[4] < v65 + 1 )
            {
              v74 = qvector_reserve(v81 + 2, v66, v65 + 1, 4);
              v35 = v81;
              v66 = v74;
              v81[2] = v74;
              v65 = v81[3];
            }
            *(_DWORD *)(v66 + 4 * v65) = v64;
            ++v35[3];
          }
        }
        v88 = 0;
LABEL_48:
        v78 = (__int64 *)v35;
        v37 = sub_505D70((__int64)(a1 + 213), *v35);
        v38 = xrefblk_t_first_to(v93, *v78, 5);
        v39 = v78;
        if ( v38 )
        {
          v86 = v78;
          do
          {
            while ( (unsigned __int8)(v94 - 16) <= 1u && v37 && (*((_BYTE *)v37 + 18) & 2) == 0 )
            {
              if ( !(unsigned __int8)xrefblk_t_next_to(v93) )
                goto LABEL_59;
            }
            v40 = sub_5D7830(a2, (__int64)a4, (unsigned __int64)v93[0]);
            if ( v40 != -1 )
            {
              v41 = (_QWORD *)(*(_QWORD *)(a2 + 72) + (v40 << 6));
              v42 = v41[3];
              v43 = v41[2];
              if ( v41[4] < (unsigned __int64)(v42 + 1) )
              {
                v80 = v41;
                v62 = qvector_reserve(v41 + 2, v43, v42 + 1, 4);
                v41 = v80;
                v43 = v62;
                v80[2] = v62;
                v42 = v80[3];
              }
              *(_DWORD *)(v43 + 4 * v42) = v76;
              ++v41[3];
            }
          }
          while ( (unsigned __int8)xrefblk_t_next_to(v93) );
LABEL_59:
          v39 = v86;
        }
        v16 = &v95;
        v95 = nullptr;
        *(_OWORD *)v96 = 0;
        v79 = v39;
        v44 = sub_5DC940((__int64)a1, (__int64 *)&v95, *v39);
        v17 = v79;
        if ( v44 && SLODWORD(v96[0]) > 0 )
        {
          v68 = 0;
          v69 = v79 + 2;
          v70 = 8LL * (unsigned int)(LODWORD(v96[0]) - 1) + 8;
          do
          {
            LODWORD(v16) = (_DWORD)a4;
            v82 = v17;
            v71 = sub_5D7830(a2, (__int64)a4, *(_QWORD *)((char *)v95 + v68));
            v17 = v82;
            a6 = v71;
            if ( v71 != -1 )
            {
              v72 = v82[3];
              v16 = (void **)v82[2];
              if ( v82[4] < (unsigned __int64)(v72 + 1) )
              {
                v87 = v82;
                v83 = a6;
                v73 = qvector_reserve(v69, v16, v72 + 1, 4);
                v17 = v87;
                v16 = (void **)v73;
                a6 = v83;
                v87[2] = v73;
                v72 = v87[3];
              }
              *((_DWORD *)v16 + v72) = a6;
              ++v17[3];
            }
            v68 += 8;
          }
          while ( v68 != v70 );
        }
        v34 = *(_DWORD *)(a2 + 64);
        if ( (v34 & 2) != 0 )
        {
          if ( v95 )
          {
            v96[0] = nullptr;
            qfree(v95);
            v34 = *(_DWORD *)(a2 + 64);
          }
        }
        else
        {
          if ( v88 )
            sub_5DC620(a2, a4, v76, v85);
          v47 = sub_3C2650(a1, v85);
          if ( *(char *)(a1[2] + 10LL) < 0 )
          {
            v92 = v47;
            v90 = 1;
            v91 = 1;
            if ( sub_3792E0(0x2Du, &v92, &v90, &v91) == 1 && v92 == v47 )
              v47 = sub_3C2650(a1, v47);
          }
          LODWORD(v16) = v47;
          if ( !(unsigned int)decode_insn(&v100, v47, v45, v46, v48, v49, 0.0) || !(unsigned __int8)is_call_insn(&v100) )
          {
            LODWORD(v16) = v47;
            for ( j = xrefblk_t_first_from(v93, v47, 5); j; j = xrefblk_t_next_from(v93) )
            {
              LODWORD(v16) = (_DWORD)a4;
              sub_5DC620(a2, a4, v76, (unsigned __int64)v93[1]);
            }
          }
          if ( v95 )
          {
            v96[0] = nullptr;
            qfree(v95);
          }
          v34 = *(_DWORD *)(a2 + 64);
        }
        v15 = ++v76;
      }
      while ( *(_DWORD *)(a2 + 96) > (int)v76 );
    }
    if ( (v34 & 0x40) == 0 )
    {
      v50 = *(_QWORD *)(a2 + 80);
      if ( v50 )
      {
        v51 = 0;
        v52 = 0;
        while ( 1 )
        {
          v53 = *(_QWORD *)(a2 + 72) + (v52 << 6);
          if ( *(_QWORD *)(v53 + 24) )
            break;
LABEL_86:
          v52 = ++v51;
          if ( v51 >= v50 )
            return 1;
        }
        v54 = 0;
        v55 = 0;
        while ( 1 )
        {
          v56 = *(int *)(*(_QWORD *)(v53 + 16) + 4 * v55);
          if ( v56 >= v50 )
            break;
          v57 = (_QWORD *)(*(_QWORD *)(a2 + 72) + (v56 << 6));
          v58 = v57[6];
          v59 = v57[5];
          if ( v57[7] < (unsigned __int64)(v58 + 1) )
          {
            v60 = qvector_reserve(v57 + 5, v59, v58 + 1, 4);
            v57[5] = v60;
            v59 = v60;
            v58 = v57[6];
          }
          ++v54;
          *(_DWORD *)(v59 + 4 * v58) = v51;
          v55 = v54;
          ++v57[6];
          v50 = *(_QWORD *)(a2 + 80);
          if ( (unsigned __int64)v54 >= *(_QWORD *)(v53 + 24) )
            goto LABEL_86;
        }
        if ( !under_debugger )
          interr(79);
LABEL_113:
        BUG();
      }
    }
  }
  return 1;
}
