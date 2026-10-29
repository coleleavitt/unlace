unsigned __int64 __fastcall sub_C15470(__int64 a1, double a2, double a3, __m128 a4)
{
  char **exception; // rbp
  __int64 v5; // rbx
  unsigned __int64 result; // rax
  unsigned int v7; // edx
  unsigned int v8; // r14d
  __int64 v9; // rax
  _QWORD *v10; // rdx
  int v11; // r12d
  __int64 v12; // rax
  _DWORD *v13; // rax
  int v14; // ebp
  unsigned int v15; // r12d
  unsigned int v16; // esi
  _QWORD *v17; // rcx
  __int64 v18; // r13
  __int64 v19; // r12
  _QWORD *v20; // rax
  unsigned int v21; // r15d
  __int64 v22; // rdx
  _QWORD *v23; // r8
  unsigned int v24; // r15d
  unsigned int v25; // edx
  size_t v26; // rsi
  unsigned int v27; // ebp
  unsigned int *v28; // rax
  unsigned int v29; // eax
  __int64 v30; // rax
  __int64 v31; // r13
  unsigned int v32; // r15d
  size_t v33; // rsi
  unsigned int *v34; // rax
  unsigned int v35; // eax
  __int64 v36; // rax
  __int64 v37; // r13
  int v38; // r15d
  _DWORD *v39; // rax
  unsigned int v40; // r13d
  unsigned int v41; // r12d
  __int64 v42; // rax
  __int64 v43; // r12
  _QWORD *v44; // rax
  unsigned int v45; // r15d
  __int64 v46; // rdx
  _QWORD *v47; // rcx
  unsigned int v48; // r15d
  unsigned int v49; // edx
  size_t v50; // rsi
  unsigned int v51; // ebp
  unsigned int *v52; // rax
  unsigned int v53; // eax
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // r12
  unsigned int v57; // r15d
  size_t v58; // rsi
  unsigned int *v59; // rdx
  unsigned int v60; // edx
  __int64 v61; // r12
  int v62; // r9d
  __int64 v63; // rdx
  __int64 *v64; // r15
  __int64 v65; // rbp
  unsigned __int64 v66; // rbx
  __int64 v67; // rsi
  __int64 v68; // rdi
  bool v69; // zf
  __int64 v70; // rdx
  __int64 *v71; // r15
  __int64 v72; // rbp
  unsigned __int64 v73; // rbx
  __int64 v74; // rsi
  __int64 v75; // rdi
  unsigned int v76; // ebp
  size_t v77; // rsi
  unsigned int *v78; // rax
  __int64 v79; // rax
  unsigned int v80; // r13d
  size_t v81; // rsi
  unsigned int *v82; // rax
  __int64 v83; // rax
  _QWORD *v84; // rax
  _QWORD *v85; // rax
  _QWORD *v86; // rax
  _QWORD *v87; // rax
  _QWORD *v88; // rax
  int v89; // [rsp+Ch] [rbp-7Ch]
  int v90; // [rsp+10h] [rbp-78h]
  int v91[2]; // [rsp+10h] [rbp-78h]
  int v92[2]; // [rsp+10h] [rbp-78h]
  __int64 v93; // [rsp+10h] [rbp-78h]
  int v94; // [rsp+10h] [rbp-78h]
  __int64 v95; // [rsp+18h] [rbp-70h]
  __int64 v96; // [rsp+18h] [rbp-70h]
  int v97; // [rsp+18h] [rbp-70h]
  int v98; // [rsp+18h] [rbp-70h]
  __int64 v99; // [rsp+20h] [rbp-68h]
  __int64 v100; // [rsp+28h] [rbp-60h]
  __int64 v101[11]; // [rsp+30h] [rbp-58h] BYREF

  v5 = a1;
  v99 = a1 + 24;
  sub_14B6450(a1 + 24);
  v100 = a1 + 40;
  sub_14B64E0(a1 + 24, a1 + 40);
  result = *(_QWORD *)(a1 + 936);
  if ( result )
    v7 = *(_DWORD *)(result - 4);
  else
    v7 = 0;
  v8 = v7;
  v89 = 0;
  if ( !*(_BYTE *)(a1 + 2200) )
  {
    do
    {
      result = v8 / 0x14uLL;
      if ( (unsigned int)result >= v7 )
        break;
      v9 = *(_QWORD *)(v5 + 112);
      if ( v9 )
      {
        v10 = *(_QWORD **)(v5 + 120);
        v11 = *(_DWORD *)(v9 - 4);
        if ( !v10 )
          goto LABEL_107;
      }
      else
      {
        v10 = *(_QWORD **)(v5 + 120);
        v11 = 0;
        if ( !v10 )
        {
LABEL_107:
          v86 = (_QWORD *)sub_186B270(0x10u);
          v10 = v86 + 1;
          *v86 = 2;
          *(_QWORD *)(v5 + 120) = v86 + 1;
          v13 = v86 + 1;
          goto LABEL_9;
        }
      }
      v12 = *((unsigned int *)v10 - 1);
      if ( (_DWORD)v12 == *((_DWORD *)v10 - 2) )
      {
        v76 = (unsigned int)(3 * v12 + 1) >> 1;
        v77 = 4 * v76 + 8;
        if ( 4 * (int)v12 + 8 >= (unsigned int)v77 || (unsigned int)v12 >= v76 )
        {
LABEL_126:
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_C0E620(v101, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v101);
          sub_233E40((__int64)v101);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v78 = (unsigned int *)sub_186B300(v10 - 1, v77);
        v10 = v78 + 2;
        *v78 = v76;
        v79 = v78[1];
        *(_QWORD *)(v5 + 120) = v10;
        v13 = (_DWORD *)v10 + v79;
      }
      else
      {
        v13 = (_DWORD *)v10 + v12;
      }
LABEL_9:
      *v13 = v11;
      v14 = v89;
      ++*((_DWORD *)v10 - 1);
      v15 = *(_DWORD *)(v5 + 944);
      if ( v15 < v8 )
      {
        do
        {
          v16 = v15++;
          v14 += sub_C10D80((__int64 *)v5, v16);
        }
        while ( v15 != v8 );
      }
      sub_14B6450(v99);
      sub_14B64E0(v99, v100);
      v17 = *(_QWORD **)(v5 + 120);
      if ( v17 )
      {
        v18 = *((unsigned int *)v17 + (unsigned int)(*((_DWORD *)v17 - 1) - 1));
        v19 = (unsigned int)(*((_DWORD *)v17 - 1) - 1);
        v20 = *(_QWORD **)(v5 + 112);
        v95 = 4 * v19;
        if ( !v20 )
        {
          if ( (_DWORD)v18 )
            goto LABEL_109;
          goto LABEL_117;
        }
      }
      else
      {
        v20 = *(_QWORD **)(v5 + 112);
        v19 = 0xFFFFFFFFLL;
        v18 = MEMORY[0x3FFFFFFFC];
        v95 = 0x3FFFFFFFCLL;
        if ( !v20 )
        {
          if ( !MEMORY[0x3FFFFFFFC] )
            goto LABEL_94;
LABEL_109:
          v87 = (_QWORD *)sub_186B270(0x18u);
          v90 = v14;
          v23 = v87 + 1;
          v24 = 0;
          *v87 = 2;
          *(_QWORD *)(v5 + 112) = v87 + 1;
LABEL_22:
          while ( 1 )
          {
            v29 = *((_DWORD *)v23 - 2);
            if ( v29 >= (unsigned int)v18 )
              break;
            v25 = (3 * v29 + 1) >> 1;
            v26 = 8 * v25 + 8;
            v27 = v25;
            if ( 8 * v29 + 8 >= (unsigned int)v26 || v29 >= v25 )
              goto LABEL_126;
            v28 = (unsigned int *)sub_186B300(v23 - 1, v26);
            v23 = v28 + 2;
            *v28 = v27;
            *(_QWORD *)(v5 + 112) = v28 + 2;
          }
          *((_DWORD *)v23 - 1) = v18;
          v14 = v90;
          v30 = v24;
          if ( v30 == v18 )
          {
            v17 = *(_QWORD **)(v5 + 120);
            if ( !v17 )
            {
              if ( (_DWORD)v19 )
                goto LABEL_94;
LABEL_115:
              v38 = *((_DWORD *)v23 - 1);
LABEL_116:
              v88 = (_QWORD *)sub_186B270(0x10u);
              v17 = v88 + 1;
              *v88 = 2;
              *(_QWORD *)(v5 + 120) = v88 + 1;
              v39 = v88 + 1;
              goto LABEL_36;
            }
          }
          else
          {
            *(_QWORD *)v91 = v23;
            memset(&v23[v30], 0, 8 * v18 - v30 * 8);
            v17 = *(_QWORD **)(v5 + 120);
            v23 = *(_QWORD **)v91;
            if ( !v17 )
              goto LABEL_93;
          }
LABEL_25:
          v31 = *((unsigned int *)v17 - 1);
          if ( (unsigned int)v31 < (unsigned int)v19 )
            goto LABEL_30;
          *((_DWORD *)v17 - 1) = v19;
LABEL_33:
          v38 = *((_DWORD *)v23 - 1);
LABEL_34:
          v19 = *((unsigned int *)v17 - 1);
          goto LABEL_35;
        }
      }
      v21 = v18;
      while ( v21 < *((_DWORD *)v20 - 1) )
      {
        v22 = v21++;
        sub_1693C90(*(_QWORD *)(v5 + 96), v20[v22]);
        v20 = *(_QWORD **)(v5 + 112);
        if ( !v20 )
          goto LABEL_16;
      }
      v70 = *((unsigned int *)v20 - 1);
      if ( (unsigned int)v18 < (unsigned int)v70 && &v20[(unsigned int)v18] < &v20[v70] )
      {
        v94 = v14;
        v71 = &v20[(unsigned int)v18];
        v72 = v5;
        v73 = (unsigned __int64)&v20[v70];
        do
        {
          while ( 1 )
          {
            v74 = *v71;
            if ( *v71 )
            {
              v75 = *(_QWORD *)(v72 + 104);
              v69 = (*(_DWORD *)(v74 + 8))-- == 1;
              if ( v69 )
                break;
            }
            if ( (unsigned __int64)++v71 >= v73 )
              goto LABEL_85;
          }
          sub_15D7BC0(v75, v74);
          ++v71;
        }
        while ( (unsigned __int64)v71 < v73 );
LABEL_85:
        v5 = v72;
        v14 = v94;
        v20 = *(_QWORD **)(v5 + 112);
      }
LABEL_16:
      v23 = v20;
      if ( v20 )
      {
        if ( *((_DWORD *)v20 - 1) < (unsigned int)v18 )
        {
          v90 = v14;
          v24 = *((_DWORD *)v20 - 1);
          goto LABEL_22;
        }
        v17 = *(_QWORD **)(v5 + 120);
        *((_DWORD *)v20 - 1) = v18;
        if ( !v17 )
        {
LABEL_93:
          if ( (_DWORD)v19 )
            goto LABEL_94;
          goto LABEL_115;
        }
        goto LABEL_25;
      }
      if ( (_DWORD)v18 )
        goto LABEL_109;
      v17 = *(_QWORD **)(v5 + 120);
      if ( !v17 )
      {
        if ( (_DWORD)v19 )
        {
LABEL_94:
          v31 = 0;
          v84 = (_QWORD *)sub_186B270(0x10u);
          *v84 = 2;
          v17 = v84 + 1;
          *(_QWORD *)(v5 + 120) = v84 + 1;
          goto LABEL_30;
        }
        v38 = 0;
        goto LABEL_116;
      }
LABEL_117:
      v31 = *((unsigned int *)v17 - 1);
      if ( (unsigned int)v31 < (unsigned int)v19 )
      {
LABEL_30:
        while ( 1 )
        {
          v35 = *((_DWORD *)v17 - 2);
          if ( v35 >= (unsigned int)v19 )
            break;
          v32 = (3 * v35 + 1) >> 1;
          v33 = 4 * v32 + 8;
          if ( 4 * v35 + 8 >= (unsigned int)v33 || v35 >= v32 )
            goto LABEL_126;
          v34 = (unsigned int *)sub_186B300(v17 - 1, v33);
          v17 = v34 + 2;
          *v34 = v32;
          *(_QWORD *)(v5 + 120) = v34 + 2;
        }
        v36 = v95;
        v37 = 4 * v31;
        v23 = *(_QWORD **)(v5 + 112);
        *((_DWORD *)v17 - 1) = v19;
        if ( v37 != v95 )
        {
          v96 = (__int64)v17;
          *(_QWORD *)v92 = v23;
          memset((char *)v17 + v37, 0, v36 - v37);
          v23 = *(_QWORD **)v92;
          v17 = (_QWORD *)v96;
          if ( *(_QWORD *)v92 )
            goto LABEL_33;
          v38 = 0;
          goto LABEL_34;
        }
        v38 = 0;
        if ( v23 )
          goto LABEL_33;
      }
      else
      {
        *((_DWORD *)v17 - 1) = v19;
        v38 = 0;
      }
LABEL_35:
      v39 = (_DWORD *)v17 + v19;
      if ( *((_DWORD *)v17 - 2) == (_DWORD)v19 )
      {
        v80 = (unsigned int)(3 * v19 + 1) >> 1;
        v81 = 4 * v80 + 8;
        if ( 4 * (int)v19 + 8 >= (unsigned int)v81 || (unsigned int)v19 >= v80 )
          goto LABEL_126;
        v82 = (unsigned int *)sub_186B300(v17 - 1, v81);
        v17 = v82 + 2;
        *v82 = v80;
        v83 = v82[1];
        *(_QWORD *)(v5 + 120) = v17;
        v39 = (_DWORD *)v17 + v83;
      }
LABEL_36:
      *v39 = v38;
      v40 = *((_DWORD *)v17 - 1);
      *((_DWORD *)v17 - 1) = v40 + 1;
      if ( *(_DWORD *)(v5 + 944) < v8 )
      {
        v41 = v8;
        do
          v14 += sub_C10D80((__int64 *)v5, --v41);
        while ( *(_DWORD *)(v5 + 944) < v41 );
        v17 = *(_QWORD **)(v5 + 120);
        if ( !v17 )
        {
          v42 = 0x3FFFFFFFCLL;
          v40 = -1;
          v93 = 0x3FFFFFFFCLL;
          goto LABEL_42;
        }
        v40 = *((_DWORD *)v17 - 1) - 1;
      }
      v42 = 4LL * v40;
      v93 = v42;
LABEL_42:
      v43 = *(unsigned int *)((char *)v17 + v42);
      v44 = *(_QWORD **)(v5 + 112);
      if ( !v44 )
        goto LABEL_100;
      v45 = v43;
      while ( v45 < *((_DWORD *)v44 - 1) )
      {
        v46 = v45++;
        sub_1693C90(*(_QWORD *)(v5 + 96), v44[v46]);
        v44 = *(_QWORD **)(v5 + 112);
        if ( !v44 )
          goto LABEL_46;
      }
      v63 = *((unsigned int *)v44 - 1);
      if ( (unsigned int)v43 < (unsigned int)v63 && &v44[(unsigned int)v43] < &v44[v63] )
      {
        v98 = v14;
        v64 = &v44[(unsigned int)v43];
        v65 = v5;
        v66 = (unsigned __int64)&v44[v63];
        do
        {
          while ( 1 )
          {
            v67 = *v64;
            if ( *v64 )
            {
              v68 = *(_QWORD *)(v65 + 104);
              v69 = (*(_DWORD *)(v67 + 8))-- == 1;
              if ( v69 )
                break;
            }
            if ( (unsigned __int64)++v64 >= v66 )
              goto LABEL_77;
          }
          sub_15D7BC0(v68, v67);
          ++v64;
        }
        while ( (unsigned __int64)v64 < v66 );
LABEL_77:
        v5 = v65;
        v14 = v98;
        v44 = *(_QWORD **)(v5 + 112);
      }
LABEL_46:
      v47 = v44;
      if ( v44 )
      {
        if ( *((_DWORD *)v44 - 1) < (unsigned int)v43 )
        {
          v97 = v14;
          v48 = *((_DWORD *)v44 - 1);
          goto LABEL_52;
        }
        *((_DWORD *)v44 - 1) = v43;
        v55 = *(_QWORD *)(v5 + 120);
        if ( v55 )
          goto LABEL_56;
      }
      else
      {
LABEL_100:
        if ( (_DWORD)v43 )
        {
          v85 = (_QWORD *)sub_186B270(0x18u);
          v97 = v14;
          v48 = 0;
          *v85 = 2;
          v47 = v85 + 1;
          *(_QWORD *)(v5 + 112) = v85 + 1;
LABEL_52:
          while ( 1 )
          {
            v53 = *((_DWORD *)v47 - 2);
            if ( v53 >= (unsigned int)v43 )
              break;
            v49 = (3 * v53 + 1) >> 1;
            v50 = 8 * v49 + 8;
            v51 = v49;
            if ( 8 * v53 + 8 >= (unsigned int)v50 || v53 >= v49 )
              goto LABEL_126;
            v52 = (unsigned int *)sub_186B300(v47 - 1, v50);
            v47 = v52 + 2;
            *v52 = v51;
            *(_QWORD *)(v5 + 112) = v52 + 2;
          }
          *((_DWORD *)v47 - 1) = v43;
          v14 = v97;
          v54 = v48;
          if ( v54 != v43 )
            memset(&v47[v54], 0, 8 * v43 - v54 * 8);
        }
        v55 = *(_QWORD *)(v5 + 120);
        if ( v55 )
        {
LABEL_56:
          v56 = *(unsigned int *)(v55 - 4);
          if ( (unsigned int)v56 < v40 )
            goto LABEL_61;
          *(_DWORD *)(v55 - 4) = v40;
          goto LABEL_64;
        }
      }
      if ( v40 )
      {
        v56 = 0;
        v55 = sub_186B270(0x10u) + 8;
        *(_QWORD *)(v55 - 8) = 2;
        *(_QWORD *)(v5 + 120) = v55;
LABEL_61:
        while ( 1 )
        {
          v60 = *(_DWORD *)(v55 - 8);
          if ( v60 >= v40 )
            break;
          v57 = (3 * v60 + 1) >> 1;
          v58 = 4 * v57 + 8;
          if ( 4 * v60 + 8 >= (unsigned int)v58 || v60 >= v57 )
            goto LABEL_126;
          v59 = (unsigned int *)sub_186B300((void *)(v55 - 8), v58);
          v55 = (__int64)(v59 + 2);
          *(_QWORD *)(v5 + 120) = v59 + 2;
          *v59 = v57;
        }
        v61 = 4 * v56;
        *(_DWORD *)(v55 - 4) = v40;
        if ( v61 != v93 )
          memset((void *)(v55 + v61), 0, v93 - v61);
      }
LABEL_64:
      sub_14B6450(v99);
      sub_14B64E0(v99, v100);
      v7 = v14 - v89;
      result = *(_QWORD *)(v5 + 936);
      if ( result )
      {
        result = *(unsigned int *)(result - 4);
        if ( (unsigned int)result >= v8 )
          goto LABEL_120;
      }
      else
      {
        if ( !v8 )
        {
LABEL_120:
          v62 = v14;
          goto LABEL_68;
        }
        result = 0;
      }
      v89 = v14;
      v8 = result;
    }
    while ( !*(_BYTE *)(v5 + 2200) );
  }
  v62 = v89;
LABEL_68:
  if ( v62 )
    return sub_C13EE0((_QWORD *)(v5 + 2216), a2, a3, a4);
  return result;
}

