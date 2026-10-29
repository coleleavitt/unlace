__int64 *__fastcall sub_77DAA0(__int64 *a1, __int64 *a2, __int64 a3, __int64 a4, __int64 a5, unsigned __int8 a6)
{
  __int64 v7; // rax
  unsigned int v8; // ebp
  int v9; // eax
  __int64 *v10; // r14
  int v11; // ebx
  int v12; // edi
  __int64 v13; // rax
  __int64 v14; // rdx
  unsigned int v15; // ecx
  __int64 v16; // rsi
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rax
  int v20; // ecx
  __int64 v21; // r14
  _QWORD *v22; // rdx
  unsigned int v23; // ebx
  __int64 v24; // rax
  _QWORD *v25; // rax
  __int64 v26; // rax
  _QWORD *v27; // rbx
  void *v28; // rbp
  int v29; // ecx
  int v30; // r8d
  int v31; // r9d
  __int64 v32; // rdi
  __int64 v33; // rax
  __int64 v34; // rbp
  _QWORD *v35; // rdx
  unsigned int v36; // eax
  __int64 v37; // rcx
  int v38; // eax
  __int64 *v39; // rcx
  void *v40; // rbp
  __int64 v41; // rsi
  __int64 v42; // rdi
  bool v43; // zf
  __int64 *v44; // rbx
  unsigned __int64 v45; // rbp
  __int64 v46; // rsi
  _DWORD *v48; // rax
  void *v49; // rdi
  int v50; // ecx
  int v51; // r8d
  int v52; // r9d
  __int64 v53; // rdi
  __int64 v54; // rax
  __int64 v55; // rbx
  _QWORD *v56; // rdx
  unsigned int v57; // eax
  __int64 v58; // rcx
  int v59; // eax
  __int64 *v60; // rcx
  void *v61; // rbx
  int v62; // eax
  unsigned int v63; // r15d
  unsigned int v64; // eax
  unsigned int *v65; // rax
  __int64 v66; // rax
  int v67; // ebx
  unsigned int v68; // r12d
  unsigned int v69; // ecx
  unsigned int *v70; // rax
  __int64 v71; // rcx
  unsigned int v72; // r12d
  unsigned int v73; // ecx
  unsigned int *v74; // rax
  __int64 v75; // rcx
  _QWORD *v76; // rax
  _QWORD *v77; // rdx
  _QWORD *v78; // rdx
  char **exception; // rbp
  char **v80; // rbp
  char **v81; // rbp
  void *v82; // [rsp+10h] [rbp-D8h]
  bool v83; // [rsp+27h] [rbp-C1h]
  int v88; // [rsp+48h] [rbp-A0h]
  __int64 v90; // [rsp+60h] [rbp-88h] BYREF
  _QWORD *v91; // [rsp+68h] [rbp-80h]
  __int64 v92; // [rsp+70h] [rbp-78h] BYREF
  __int64 v93; // [rsp+78h] [rbp-70h]
  __int64 v94; // [rsp+80h] [rbp-68h] BYREF
  __int64 v95; // [rsp+88h] [rbp-60h]
  __int64 v96[11]; // [rsp+90h] [rbp-58h] BYREF

  v7 = *a2;
  *a1 = 0;
  a1[1] = v7;
  v90 = v7;
  v91 = nullptr;
  v88 = sub_177C790(a5);
  v8 = 0;
  if ( !v88 )
    goto LABEL_17;
  do
  {
    v9 = sub_177C7B0(a5, v8);
    v10 = (__int64 *)a2[3];
    v11 = v9;
    v12 = sub_177C7A0(a5, v8);
    v13 = *((unsigned int *)v10 + 2);
    v14 = *v10;
    v15 = v13 - 1;
    v13 *= 24;
    v16 = *v10 + v13;
    v17 = 24LL * (v12 & v15);
    v18 = *v10 + v17;
    if ( v17 != v13 )
    {
      v19 = *v10 + v17;
      do
      {
        v20 = *(_DWORD *)(v19 + 4);
        if ( v20 == 2 )
        {
          if ( v12 == *(_DWORD *)v19 && v12 == *(_DWORD *)(v19 + 8) )
          {
            v21 = *(_QWORD *)(v19 + 16);
            if ( v11 == 1 )
              goto LABEL_10;
LABEL_40:
            v48 = *(_DWORD **)(sub_15D1F10(v21) + 24);
            v83 = 0;
            if ( v48 && *v48 == 5 )
              v83 = v48[1] == 1;
            v92 = 0;
            v93 = 0;
            v94 = 1;
            v49 = qword_1C7F2C0;
            v95 = 0;
            if ( v11 < 0 )
            {
              v82 = qword_1C7F2C0;
              sub_1830C40(qword_1C7F2C0, &v92, (unsigned int)v11);
              v49 = v82;
            }
            else
            {
              LODWORD(v92) = v11;
            }
            sub_182CBA0(v49, &v94);
            v53 = a2[2];
            BYTE4(v94) &= ~1u;
            LODWORD(v94) = 1;
            if ( !v53 )
            {
              sub_16669E0(a2 + 1);
              v53 = a2[2];
            }
            sub_166A700(v53, (unsigned int)&v92, v83, v50, v51, v52);
            v54 = sub_15E1B70(a2[1]);
            v55 = v54;
            if ( v54 )
              ++*(_DWORD *)(v54 + 8);
            v56 = v91;
            if ( v91 )
            {
              v57 = *((_DWORD *)v91 - 1);
              if ( v57 == *((_DWORD *)v91 - 2) )
              {
                v68 = (3 * v57 + 1) >> 1;
                v69 = 8 * v68 + 8;
                if ( 8 * v57 + 8 >= v69 || v57 >= v68 )
                {
                  exception = (char **)__cxa_allocate_exception(0x28u);
                  sub_24ABB0(v96, "Overflow encountered when expanding vector");
                  *exception = (char *)off_1C63128;
                  sub_2333C0(exception + 1, v96);
                  sub_233E40((__int64)v96);
                  __cxa_throw(
                    exception,
                    (struct type_info *)&`typeinfo for'default_exception,
                    (void (*)(void *))sub_230E50);
                }
                v70 = (unsigned int *)sub_186B300(v91 - 1, v69);
                v71 = v70[1];
                v56 = v70 + 2;
                *v70 = v68;
                v91 = v56;
                LODWORD(v70) = v71;
                v60 = &v56[v71];
                v59 = (_DWORD)v70 + 1;
              }
              else
              {
                v58 = v57;
                v59 = v57 + 1;
                v60 = &v91[v58];
              }
            }
            else
            {
              v77 = (_QWORD *)sub_186B270(0x18u);
              *v77 = 2;
              v59 = 1;
              v56 = v77 + 1;
              v91 = v56;
              v60 = v56;
            }
            *v60 = v55;
            v61 = qword_1C7F2C0;
            *((_DWORD *)v56 - 1) = v59;
            sub_182CBA0(v61, &v92);
            sub_182CBA0(v61, &v94);
            goto LABEL_16;
          }
        }
        else if ( !v20 )
        {
          goto LABEL_78;
        }
        v19 += 24;
      }
      while ( v16 != v19 );
    }
    if ( v14 == v18 )
LABEL_78:
      BUG();
    while ( 1 )
    {
      v62 = *(_DWORD *)(v14 + 4);
      if ( v62 != 2 )
      {
        if ( !v62 )
          goto LABEL_78;
        goto LABEL_56;
      }
      if ( v12 == *(_DWORD *)v14 && v12 == *(_DWORD *)(v14 + 8) )
        break;
LABEL_56:
      v14 += 24;
      if ( v18 == v14 )
        goto LABEL_78;
    }
    v21 = *(_QWORD *)(v14 + 16);
    if ( v11 != 1 )
      goto LABEL_40;
LABEL_10:
    if ( v21 )
      ++*(_DWORD *)(v21 + 8);
    v22 = v91;
    if ( v91 )
    {
      v23 = *((_DWORD *)v91 - 1);
      if ( v23 == *((_DWORD *)v91 - 2) )
      {
        v63 = (3 * v23 + 1) >> 1;
        v64 = 8 * v63 + 8;
        if ( 8 * v23 + 8 >= v64 || v23 >= v63 )
        {
          v81 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v96, "Overflow encountered when expanding vector");
          *v81 = (char *)off_1C63128;
          sub_2333C0(v81 + 1, v96);
          sub_233E40((__int64)v96);
          __cxa_throw(v81, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v65 = (unsigned int *)sub_186B300(v91 - 1, v64);
        v22 = v65 + 2;
        *v65 = v63;
        v66 = v65[1];
        v91 = v22;
        v67 = v66;
        v25 = &v22[v66];
        v11 = v67 + 1;
      }
      else
      {
        v24 = v23;
        v11 = v23 + 1;
        v25 = &v91[v24];
      }
    }
    else
    {
      v76 = (_QWORD *)sub_186B270(0x18u);
      *v76 = 2;
      v22 = v76 + 1;
      v91 = v76 + 1;
      v25 = v76 + 1;
    }
    *v25 = v21;
    *((_DWORD *)v22 - 1) = v11;
LABEL_16:
    ++v8;
  }
  while ( v88 != v8 );
LABEL_17:
  v26 = sub_1141FA0(a3);
  sub_177C960(v26);
  if ( (*(_BYTE *)(a4 + 4) & 1) != 0 )
  {
    v92 = 0;
    v27 = a2 + 1;
    v93 = 0;
    v94 = 1;
    v28 = qword_1C7F2C0;
    v95 = 0;
    sub_182C690(qword_1C7F2C0, &v92, a4);
    goto LABEL_19;
  }
  v27 = a2 + 1;
  if ( *(_DWORD *)a4 != 1 )
  {
    LODWORD(v92) = *(_DWORD *)a4;
    BYTE4(v92) &= 0xFCu;
    v93 = 0;
    v28 = qword_1C7F2C0;
    v94 = 1;
    v95 = 0;
LABEL_19:
    sub_182CBA0(v28, &v94);
    v32 = a2[2];
    BYTE4(v94) &= ~1u;
    LODWORD(v94) = 1;
    if ( !v32 )
    {
      sub_16669E0(v27);
      v32 = a2[2];
    }
    v33 = sub_166A700(v32, (unsigned int)&v92, a6, v29, v30, v31);
    v34 = v33;
    if ( v33 )
      ++*(_DWORD *)(v33 + 8);
    v35 = v91;
    if ( v91 )
    {
      v36 = *((_DWORD *)v91 - 1);
      if ( v36 == *((_DWORD *)v91 - 2) )
      {
        v72 = (3 * v36 + 1) >> 1;
        v73 = 8 * v72 + 8;
        if ( 8 * v36 + 8 >= v73 || v36 >= v72 )
        {
          v80 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v96, "Overflow encountered when expanding vector");
          *v80 = (char *)off_1C63128;
          sub_2333C0(v80 + 1, v96);
          sub_233E40((__int64)v96);
          __cxa_throw(v80, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v74 = (unsigned int *)sub_186B300(v91 - 1, v73);
        v75 = v74[1];
        v35 = v74 + 2;
        *v74 = v72;
        v91 = v35;
        LODWORD(v74) = v75;
        v39 = &v35[v75];
        v38 = (_DWORD)v74 + 1;
      }
      else
      {
        v37 = v36;
        v38 = v36 + 1;
        v39 = &v91[v37];
      }
    }
    else
    {
      v78 = (_QWORD *)sub_186B270(0x18u);
      *v78 = 2;
      v38 = 1;
      v35 = v78 + 1;
      v91 = v35;
      v39 = v35;
    }
    *v39 = v34;
    v40 = qword_1C7F2C0;
    *((_DWORD *)v35 - 1) = v38;
    sub_182CBA0(v40, &v92);
    sub_182CBA0(v40, &v94);
  }
  sub_166B4E0(v96, v27, &v90);
  v41 = *a1;
  *a1 = v96[0];
  v96[0] = v41;
  if ( v41 )
  {
    v42 = v96[1];
    v43 = (*(_DWORD *)(v41 + 8))-- == 1;
    if ( v43 )
      sub_15D7BC0(v42, v41);
  }
  v44 = v91;
  if ( v91 )
  {
    v45 = (unsigned __int64)&v91[*((unsigned int *)v91 - 1)];
    if ( (unsigned __int64)v91 >= v45 )
      goto LABEL_38;
    do
    {
      while ( 1 )
      {
        v46 = *v44;
        if ( *v44 )
        {
          v43 = (*(_DWORD *)(v46 + 8))-- == 1;
          if ( v43 )
            break;
        }
        if ( (unsigned __int64)++v44 >= v45 )
          goto LABEL_37;
      }
      sub_15D7BC0(v90, v46);
      ++v44;
    }
    while ( (unsigned __int64)v44 < v45 );
LABEL_37:
    v44 = v91;
    if ( v91 )
LABEL_38:
      sub_186B220(v44 - 1);
  }
  return a1;
}

