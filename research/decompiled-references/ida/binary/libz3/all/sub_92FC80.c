__int64 __fastcall sub_92FC80(_QWORD *a1, __int64 *a2)
{
  _QWORD *v2; // rdx
  unsigned int v3; // eax
  __int64 **v4; // rcx
  int v5; // eax
  __int64 v6; // rdi
  bool v7; // bl
  _DWORD *v8; // rax
  _QWORD *v9; // rcx
  unsigned int v10; // eax
  __int64 v11; // rdx
  int v12; // eax
  bool *v13; // rdx
  _QWORD *v14; // rdx
  __int64 v15; // rax
  _QWORD *v16; // rax
  unsigned __int64 v17; // rbp
  unsigned int v18; // eax
  _QWORD *v19; // r14
  _QWORD *v20; // rax
  _QWORD *v21; // r13
  __int64 v22; // rax
  unsigned int v23; // ebp
  size_t v24; // rdi
  __int64 v25; // rax
  _QWORD *v26; // r12
  _DWORD *v27; // rbx
  __int64 v28; // rax
  _QWORD *v29; // rdx
  _DWORD *v30; // r9
  _DWORD *v31; // rax
  int v32; // edi
  __int64 v33; // rdi
  __int64 v34; // rdx
  _QWORD *v35; // r15
  __int64 v36; // rdi
  __int64 v37; // rdx
  int v38; // eax
  __int64 *v39; // r15
  _QWORD *v40; // rax
  _QWORD *v41; // r14
  unsigned int v42; // eax
  unsigned int v43; // ecx
  unsigned int v44; // ebx
  size_t v45; // rdi
  unsigned int *v46; // rax
  __int64 v47; // r12
  unsigned int *v48; // rbp
  __int64 v49; // rdi
  _DWORD *v50; // rdx
  _DWORD *v51; // rax
  _DWORD *v52; // rdi
  int v53; // esi
  __int64 v54; // rsi
  __int64 v55; // rdx
  __int64 v56; // r13
  __int64 v57; // rdi
  _QWORD *v58; // rax
  __int64 v59; // rdi
  _QWORD *v61; // rax
  unsigned int v62; // ebx
  unsigned int v63; // ecx
  unsigned int v64; // eax
  unsigned int *v65; // rax
  unsigned int v66; // edx
  unsigned int *v67; // rbx
  __int64 *v68; // r14
  __int64 v69; // r8
  __int64 *v70; // r9
  unsigned __int64 v71; // rdx
  unsigned __int64 v72; // rcx
  unsigned __int64 v73; // rdx
  __m128i v74; // xmm0
  unsigned __int64 v75; // rdx
  __int64 v76; // r9
  __int64 *v77; // r12
  __int64 v78; // r15
  __int64 v79; // rdx
  __int64 v80; // r13
  __int64 v81; // rdi
  unsigned int v82; // ebx
  unsigned int v83; // ecx
  unsigned int *v84; // rax
  __int64 v85; // rax
  unsigned int v86; // ebp
  unsigned int *v87; // rax
  __int64 v88; // rdx
  __int64 *v89; // rdx
  _DWORD *v90; // rcx
  __int64 v91; // r10
  _QWORD *v92; // rax
  _QWORD *v93; // rax
  _QWORD *v94; // rax
  _QWORD *v95; // rax
  char **exception; // rbp
  _QWORD *v97; // [rsp+0h] [rbp-78h]
  unsigned int v98; // [rsp+0h] [rbp-78h]
  unsigned int v99; // [rsp+0h] [rbp-78h]
  unsigned int v102; // [rsp+18h] [rbp-60h]
  unsigned int v103; // [rsp+1Ch] [rbp-5Ch]
  __int64 v104[11]; // [rsp+20h] [rbp-58h] BYREF

  v2 = (_QWORD *)a1[4];
  if ( v2 )
  {
    v3 = *((_DWORD *)v2 - 1);
    v103 = v3;
    v102 = v3;
    if ( v3 == *((_DWORD *)v2 - 2) )
    {
      v62 = (3 * v3 + 1) >> 1;
      v63 = 8 * v3 + 8;
      v64 = 8 * v62 + 8;
      if ( v63 >= v64 || *((_DWORD *)v2 - 1) >= v62 )
        goto LABEL_100;
      v65 = (unsigned int *)sub_186B300(v2 - 1, v64);
      v2 = v65 + 2;
      *v65 = v62;
      a1[4] = v65 + 2;
      LODWORD(v65) = v65[1];
      v4 = (__int64 **)&v2[(unsigned int)v65];
      v5 = (_DWORD)v65 + 1;
    }
    else
    {
      v4 = (__int64 **)&v2[v3];
      v5 = v3 + 1;
    }
  }
  else
  {
    v93 = (_QWORD *)sub_186B270(0x18u);
    v103 = 0;
    *v93 = 2;
    v2 = v93 + 1;
    v102 = 0;
    a1[4] = v93 + 1;
    v4 = (__int64 **)(v93 + 1);
    v5 = 1;
  }
  *v4 = a2;
  v6 = *a2;
  v7 = 0;
  *((_DWORD *)v2 - 1) = v5;
  v8 = *(_DWORD **)(sub_15D1F10(v6) + 24);
  if ( v8 && *v8 == 5 )
    v7 = v8[1] == 1;
  v9 = (_QWORD *)a1[25];
  if ( v9 )
  {
    v10 = *((_DWORD *)v9 - 1);
    if ( v10 == *((_DWORD *)v9 - 2) )
    {
      v86 = (3 * v10 + 1) >> 1;
      if ( v10 + 8 >= v86 + 8 || v10 >= v86 )
        goto LABEL_100;
      v87 = (unsigned int *)sub_186B300(v9 - 1, v86 + 8);
      v88 = v87[1];
      v9 = v87 + 2;
      *v87 = v86;
      a1[25] = v87 + 2;
      LODWORD(v87) = v88;
      v13 = (bool *)v9 + v88;
      v12 = (_DWORD)v87 + 1;
    }
    else
    {
      v11 = v10;
      v12 = v10 + 1;
      v13 = (bool *)v9 + v11;
    }
  }
  else
  {
    v95 = (_QWORD *)sub_186B270(0xAu);
    *v95 = 2;
    v9 = v95 + 1;
    a1[25] = v95 + 1;
    v13 = (bool *)(v95 + 1);
    v12 = 1;
  }
  *v13 = v7;
  *((_DWORD *)v9 - 1) = v12;
  v14 = (_QWORD *)a1[34];
  if ( v14 )
  {
    v15 = *((unsigned int *)v14 - 1);
    if ( (_DWORD)v15 == *((_DWORD *)v14 - 2) )
    {
      v82 = (unsigned int)(3 * v15 + 1) >> 1;
      v83 = 8 * v82 + 8;
      if ( 8 * (int)v15 + 8 >= v83 || (unsigned int)v15 >= v82 )
        goto LABEL_100;
      v84 = (unsigned int *)sub_186B300(v14 - 1, v83);
      v14 = v84 + 2;
      *v84 = v82;
      v85 = v84[1];
      a1[34] = v14;
      v16 = &v14[v85];
    }
    else
    {
      v16 = &v14[v15];
    }
  }
  else
  {
    v94 = (_QWORD *)sub_186B270(0x18u);
    *v94 = 2;
    v14 = v94 + 1;
    a1[34] = v94 + 1;
    v16 = v94 + 1;
  }
  *v16 = 0;
  ++*((_DWORD *)v14 - 1);
  v17 = a1[24];
  if ( !v17 )
    goto LABEL_95;
  v18 = *(_DWORD *)(v17 - 4);
  v97 = (_QWORD *)(v17 + 8LL * v18);
  if ( v97 == (_QWORD *)v17 )
    goto LABEL_35;
  v19 = (_QWORD *)a1[24];
  do
  {
    v21 = (_QWORD *)*v19;
    if ( *v19 )
    {
      v22 = *((unsigned int *)v21 - 1);
      if ( (_DWORD)v22 == *((_DWORD *)v21 - 2) )
      {
        v23 = (unsigned int)(3 * v22 + 1) >> 1;
        v24 = 16 * v23 + 8;
        if ( 16 * (int)v22 + 8 >= (unsigned int)v24 || (unsigned int)v22 >= v23 )
          goto LABEL_100;
        v25 = sub_186B270(v24);
        v26 = (_QWORD *)*v19;
        v27 = (_DWORD *)v25;
        v21 = (_QWORD *)(v25 + 8);
        if ( *v19 )
        {
          v28 = *((unsigned int *)v26 - 1);
          v29 = v21;
          v27[1] = v28;
          v30 = &v26[2 * v28];
          v31 = v26;
          if ( v26 != (_QWORD *)v30 )
          {
            do
            {
              v32 = *v31;
              v31 += 4;
              v29 += 2;
              *((_DWORD *)v29 - 4) = v32;
              *((_DWORD *)v29 - 3) = *(v31 - 3);
              v33 = *((_QWORD *)v31 - 1);
              *((_QWORD *)v31 - 1) = 0;
              *(v29 - 1) = v33;
            }
            while ( v30 != v31 );
          }
          v34 = *((unsigned int *)v26 - 1);
          v35 = &v26[2 * v34];
          if ( (_DWORD)v34 )
          {
            do
            {
              while ( 1 )
              {
                v36 = v26[1];
                if ( !v36 )
                  break;
                v26 += 2;
                sub_186B220((void *)(v36 - 8));
                if ( v35 == v26 )
                  goto LABEL_28;
              }
              v26 += 2;
            }
            while ( v26 != v35 );
LABEL_28:
            v26 = (_QWORD *)*v19;
          }
          sub_186B220(v26 - 1);
          v20 = &v21[2 * (unsigned int)v27[1]];
        }
        else
        {
          *(_DWORD *)(v25 + 4) = 0;
          v20 = (_QWORD *)(v25 + 8);
        }
        *v19 = v21;
        *v27 = v23;
      }
      else
      {
        v20 = &v21[2 * v22];
      }
    }
    else
    {
      v61 = (_QWORD *)sub_186B270(0x28u);
      v21 = v61 + 1;
      *v61 = 2;
      *v19 = v61 + 1;
      v20 = v61 + 1;
    }
    v20[1] = 0;
    ++v19;
    *v20 = 0xFFFFFFFFLL;
    ++*((_DWORD *)v21 - 1);
  }
  while ( v97 != v19 );
  v17 = a1[24];
  if ( !v17 )
  {
LABEL_95:
    v92 = (_QWORD *)sub_186B270(0x18u);
    v17 = (unsigned __int64)(v92 + 1);
    *v92 = 2;
    v39 = v92 + 1;
    a1[24] = v92 + 1;
    v38 = 1;
    goto LABEL_37;
  }
  v18 = *(_DWORD *)(v17 - 4);
LABEL_35:
  if ( *(_DWORD *)(v17 - 8) != v18 )
  {
    v37 = v18;
    v38 = v18 + 1;
    v39 = (__int64 *)(v17 + 8 * v37);
    goto LABEL_37;
  }
  v99 = (3 * v18 + 1) >> 1;
  v66 = 8 * v99 + 8;
  if ( 8 * v18 + 8 >= v66 || v18 >= (3 * v18 + 1) >> 1 )
  {
LABEL_100:
    exception = (char **)__cxa_allocate_exception(0x28u);
    sub_91CD50(v104, "Overflow encountered when expanding vector");
    *exception = (char *)off_1C63128;
    sub_2333C0(exception + 1, v104);
    sub_233E40((__int64)v104);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
  }
  v67 = (unsigned int *)sub_186B270(v66);
  v17 = (unsigned __int64)(v67 + 2);
  v68 = (__int64 *)a1[24];
  if ( v68 )
  {
    v69 = *((unsigned int *)v68 - 1);
    v67[1] = v69;
    v70 = &v68[v69];
    if ( v68 != v70 )
    {
      v71 = 8 * v69 - 8;
      if ( v71 <= 8 || v17 < (unsigned __int64)(v68 + 2) && v68 < (__int64 *)v67 + 3 )
      {
        v89 = v68;
        v90 = v67 + 2;
        do
        {
          v91 = *v89;
          *v89++ = 0;
          v90 += 2;
          *((_QWORD *)v90 - 1) = v91;
        }
        while ( v70 != v89 );
      }
      else
      {
        v72 = (v71 >> 3) + 1;
        v73 = 0;
        do
        {
          v74 = _mm_loadu_si128((const __m128i *)&v68[v73 / 2]);
          *(_OWORD *)&v68[v73 / 2] = 0;
          *(__m128i *)&v67[v73 + 2] = v74;
          v73 += 4LL;
        }
        while ( 4 * (v72 >> 1) != v73 );
        if ( (v72 & 1) != 0 )
        {
          v75 = 2 * (v72 & 0xFFFFFFFFFFFFFFFELL);
          v76 = v68[v75 / 2];
          v68[v75 / 2] = 0;
          *(_QWORD *)&v67[v75 + 2] = v76;
        }
      }
    }
    v77 = &v68[v69];
    if ( (_DWORD)v69 )
    {
      do
      {
        v78 = *v68;
        if ( *v68 )
        {
          v79 = *(unsigned int *)(v78 - 4);
          if ( (_DWORD)v79 )
          {
            v80 = v78 + 16 * v79;
            do
            {
              while ( 1 )
              {
                v81 = *(_QWORD *)(v78 + 8);
                if ( !v81 )
                  break;
                v78 += 16;
                sub_186B220((void *)(v81 - 8));
                if ( v78 == v80 )
                  goto LABEL_78;
              }
              v78 += 16;
            }
            while ( v78 != v80 );
LABEL_78:
            v78 = *v68;
          }
          sub_186B220((void *)(v78 - 8));
        }
        ++v68;
      }
      while ( v77 != v68 );
      v68 = (__int64 *)a1[24];
    }
    sub_186B220(v68 - 1);
    v39 = (__int64 *)(v17 + 8LL * v67[1]);
    v38 = v67[1] + 1;
  }
  else
  {
    v67[1] = 0;
    v39 = (__int64 *)(v67 + 2);
    v38 = 1;
  }
  a1[24] = v17;
  *v67 = v99;
LABEL_37:
  *v39 = 0;
  *(_DWORD *)(v17 - 4) = v38;
  v98 = v102 + 1;
  if ( v102 != -1 )
  {
    v40 = (_QWORD *)sub_186B270(0x28u);
    v41 = v40 + 1;
    *v40 = 2;
    *v39 = (__int64)(v40 + 1);
    while ( 1 )
    {
      v42 = *((_DWORD *)v41 - 2);
      v43 = v102 + 1;
      if ( v42 >= v98 )
        break;
      while ( 1 )
      {
        v44 = (3 * v42 + 1) >> 1;
        v45 = 16 * v44 + 8;
        if ( 16 * v42 + 8 >= (unsigned int)v45 || v42 >= v44 )
          goto LABEL_100;
        v46 = (unsigned int *)sub_186B270(v45);
        v47 = *v39;
        v48 = v46;
        v41 = v46 + 2;
        if ( !*v39 )
          break;
        v49 = *(unsigned int *)(v47 - 4);
        v50 = v46 + 2;
        v46[1] = v49;
        v51 = (_DWORD *)v47;
        v52 = (_DWORD *)(v47 + 16 * v49);
        if ( (_DWORD *)v47 != v52 )
        {
          do
          {
            v53 = *v51;
            v51 += 4;
            v50 += 4;
            *(v50 - 4) = v53;
            *(v50 - 3) = *(v51 - 3);
            v54 = *((_QWORD *)v51 - 1);
            *((_QWORD *)v51 - 1) = 0;
            *((_QWORD *)v50 - 1) = v54;
          }
          while ( v52 != v51 );
        }
        v55 = *(unsigned int *)(v47 - 4);
        v56 = v47 + 16 * v55;
        if ( (_DWORD)v55 )
        {
          do
          {
            while ( 1 )
            {
              v57 = *(_QWORD *)(v47 + 8);
              if ( !v57 )
                break;
              v47 += 16;
              sub_186B220((void *)(v57 - 8));
              if ( v47 == v56 )
                goto LABEL_48;
            }
            v47 += 16;
          }
          while ( v47 != v56 );
LABEL_48:
          v47 = *v39;
        }
        sub_186B220((void *)(v47 - 8));
        *v39 = (__int64)v41;
        v43 = v102 + 1;
        *v48 = v44;
        v42 = *((_DWORD *)v41 - 2);
        if ( v42 >= v98 )
          goto LABEL_50;
      }
      v46[1] = 0;
      *v39 = (__int64)v41;
      *v46 = v44;
    }
LABEL_50:
    *((_DWORD *)v41 - 1) = v43;
    v17 = a1[24];
    v58 = &v41[2 * v43];
    do
    {
      *v41 = 0xFFFFFFFFLL;
      v41 += 2;
      *(v41 - 1) = 0;
    }
    while ( v58 != v41 );
  }
  v59 = a1[2];
  *(_QWORD *)(*(_QWORD *)(v17 + 8LL * v103) + 16LL * v103) = 0;
  sub_B66EF0(v59, a2, a1, v102);
  return v102;
}

