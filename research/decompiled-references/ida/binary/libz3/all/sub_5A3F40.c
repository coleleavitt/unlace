__int64 __fastcall sub_5A3F40(__int64 a1, _QWORD *a2, unsigned int a3, int *a4)
{
  char **v4; // r12
  char **exception; // r12
  __int64 v9; // rbx
  int *v10; // r15
  __int64 v11; // rdx
  __int64 v12; // rax
  int v13; // esi
  __int64 v15; // rdi
  _QWORD *v16; // rdi
  unsigned int v17; // r14d
  unsigned int v18; // eax
  unsigned int v19; // r15d
  _QWORD *v20; // rsi
  unsigned int v21; // edx
  unsigned int v22; // r8d
  unsigned int v23; // edx
  size_t v24; // rsi
  unsigned int *v25; // rax
  unsigned int v26; // eax
  __int64 v27; // rcx
  __int64 v28; // rdx
  _QWORD *v29; // rdi
  unsigned int *v30; // r15
  unsigned int *v31; // r14
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rsi
  int v35; // edi
  __int64 v36; // rax
  unsigned int v37; // r14d
  unsigned int v38; // ecx
  __int64 v39; // r9
  __int64 v40; // r15
  _BYTE *v41; // rdx
  bool v42; // r8
  unsigned int v43; // eax
  __int64 v44; // rsi
  int v45; // eax
  bool *v46; // rsi
  __int64 v47; // rax
  unsigned int v48; // r10d
  size_t v49; // rsi
  unsigned int *v50; // rax
  __int64 v51; // rsi
  _QWORD *v52; // rax
  _QWORD *v53; // rsi
  _QWORD *v54; // rax
  unsigned int v55; // r15d
  __int64 i; // r12
  _QWORD *v57; // rdx
  bool v58; // r13
  unsigned int v59; // edi
  __int64 v60; // rsi
  bool *v61; // rax
  int v62; // ecx
  unsigned int v63; // ecx
  size_t v64; // rsi
  unsigned int *v65; // rax
  __int64 v66; // rax
  int v67; // ecx
  _QWORD *v68; // rax
  unsigned int v69; // edx
  __int64 v70; // rsi
  __int64 v71; // r8
  __int64 v72; // rsi
  unsigned int v73; // [rsp+0h] [rbp-88h]
  int *v74; // [rsp+0h] [rbp-88h]
  bool v75; // [rsp+0h] [rbp-88h]
  bool v76; // [rsp+0h] [rbp-88h]
  unsigned int v77; // [rsp+8h] [rbp-80h]
  unsigned int v78; // [rsp+8h] [rbp-80h]
  unsigned int v79; // [rsp+10h] [rbp-78h]
  __int64 v80; // [rsp+10h] [rbp-78h]
  __int64 v81; // [rsp+18h] [rbp-70h]
  __int64 v82[11]; // [rsp+30h] [rbp-58h] BYREF

  if ( a2[1] != a1 )
    return 0;
  v9 = sub_186B270(0x40u);
  *(_QWORD *)(v9 + 8) = 0;
  *(_QWORD *)v9 = qword_1C66740;
  *(_QWORD *)(v9 + 16) = 0;
  if ( !a3 )
  {
    v53 = a2 + 2;
    if ( a2 + 2 == (_QWORD *)(v9 + 8) )
    {
      *(_QWORD *)(v9 + 56) = 0;
      *(_QWORD *)v9 = &off_1C52170;
      v36 = a2[2];
      *(_OWORD *)(v9 + 24) = 0;
      *(_OWORD *)(v9 + 40) = 0;
    }
    else
    {
      if ( !a2[2] )
      {
        *(_QWORD *)(v9 + 56) = 0;
        *(_QWORD *)v9 = &off_1C52170;
        *(_OWORD *)(v9 + 24) = 0;
        *(_OWORD *)(v9 + 40) = 0;
        return v9;
      }
      sub_52CD90((_QWORD *)(v9 + 8), v53);
      *(_QWORD *)(v9 + 56) = 0;
      v36 = a2[2];
      *(_QWORD *)v9 = &off_1C52170;
      *(_OWORD *)(v9 + 24) = 0;
      *(_OWORD *)(v9 + 40) = 0;
    }
    goto LABEL_39;
  }
  v10 = a4;
LABEL_4:
  sub_2FD3F0((unsigned int **)(v9 + 16));
  v11 = *(_QWORD *)(v9 + 16);
  v12 = *(unsigned int *)(v11 - 4);
  while ( 1 )
  {
    v13 = *v10++;
    *(_DWORD *)(v11 + 4 * v12) = v13;
    v12 = (unsigned int)(*(_DWORD *)(v11 - 4) + 1);
    *(_DWORD *)(v11 - 4) = v12;
    if ( v10 == &a4[a3] )
      break;
    if ( *(_DWORD *)(v11 - 8) == (_DWORD)v12 )
      goto LABEL_4;
  }
  if ( (_QWORD *)(v9 + 8) != a2 + 2 )
  {
    v15 = *(_QWORD *)(v9 + 8);
    if ( v15 )
      sub_186B220((void *)(v15 - 8));
    if ( !a2[2] )
    {
      *(_QWORD *)(v9 + 8) = 0;
      goto LABEL_57;
    }
    sub_52CD90((_QWORD *)(v9 + 8), a2 + 2);
  }
  v16 = *(_QWORD **)(v9 + 8);
  if ( !v16 )
  {
LABEL_57:
    v19 = -a3;
    v52 = (_QWORD *)sub_186B270(0x18u);
    v16 = v52 + 1;
    *v52 = 2;
    v17 = 0;
    *(_QWORD *)(v9 + 8) = v52 + 1;
    goto LABEL_29;
  }
  v17 = *((_DWORD *)v16 - 1);
  v18 = *a4 + 1;
  v19 = v17 - a3;
  if ( v18 < v17 )
  {
    v20 = &v16[v18];
    v21 = 1;
    if ( a3 != 1 && v18 == a4[1] )
      goto LABEL_23;
    while ( 1 )
    {
      v22 = v18++;
      v16[v22 - v21] = *v20;
      if ( v18 >= v17 )
        break;
      if ( a3 == v21 )
      {
        v69 = v18 - a3;
        do
        {
          v70 = v18++;
          v71 = v16[v70];
          v72 = v69++;
          v16[v72] = v71;
        }
        while ( v18 < v17 );
        if ( v17 < a3 )
          goto LABEL_29;
        goto LABEL_73;
      }
      while ( 1 )
      {
        ++v20;
        if ( a3 == v21 || v18 != a4[v21] )
          break;
LABEL_23:
        ++v18;
        ++v21;
        if ( v18 >= v17 )
          goto LABEL_24;
      }
    }
  }
LABEL_24:
  if ( v17 >= a3 )
  {
LABEL_73:
    *((_DWORD *)v16 - 1) = v17 - a3;
    goto LABEL_32;
  }
LABEL_29:
  while ( 1 )
  {
    v26 = *((_DWORD *)v16 - 2);
    if ( v26 >= v19 )
      break;
    v23 = (3 * v26 + 1) >> 1;
    v24 = 8 * v23 + 8;
    if ( 8 * v26 + 8 >= (unsigned int)v24 || v26 >= v23 )
    {
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0(v82, "Overflow encountered when expanding vector");
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, v82);
      sub_233E40((__int64)v82);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v73 = (3 * v26 + 1) >> 1;
    v25 = (unsigned int *)sub_186B300(v16 - 1, v24);
    v16 = v25 + 2;
    *(_QWORD *)(v9 + 8) = v25 + 2;
    *v25 = v73;
  }
  *((_DWORD *)v16 - 1) = v19;
  v27 = 8LL * v17;
  v28 = 8LL * v19;
  v29 = &v16[(unsigned __int64)v27 / 8];
  if ( v27 != v28 )
    memset(v29, 0, v28 - v27);
LABEL_32:
  *(_QWORD *)(v9 + 56) = 0;
  v30 = (unsigned int *)a4;
  *(_QWORD *)v9 = &off_1C52170;
  *(_OWORD *)(v9 + 24) = 0;
  v31 = (unsigned int *)&a4[a3];
  *(_OWORD *)(v9 + 40) = 0;
  do
  {
    while ( 1 )
    {
      v34 = 4LL * *v30;
      v35 = *(_DWORD *)(v34 + a2[7]);
      if ( v35 != -1 )
        break;
      sub_5A21E0((unsigned int **)(v9 + 32), (unsigned int *)(a2[10] + v34));
      if ( v31 == ++v30 )
        goto LABEL_38;
    }
    v32 = *(_QWORD *)(v9 + 24);
    if ( !v32 || (v33 = *(unsigned int *)(v32 - 4), (_DWORD)v33 == *(_DWORD *)(v32 - 8)) )
    {
      v74 = (int *)(v34 + a2[7]);
      sub_2FD3F0((unsigned int **)(v9 + 24));
      v32 = *(_QWORD *)(v9 + 24);
      v33 = *(unsigned int *)(v32 - 4);
      v35 = *v74;
    }
    ++v30;
    *(_DWORD *)(v32 + 4 * v33) = v35;
    ++*(_DWORD *)(v32 - 4);
  }
  while ( v31 != v30 );
LABEL_38:
  v36 = a2[2];
LABEL_39:
  if ( v36 )
  {
    v37 = *(_DWORD *)(v36 - 4);
    if ( v37 )
    {
      v38 = 0;
      v39 = v37 - 1;
      v40 = 0;
      if ( a3 && !*a4 )
        goto LABEL_50;
      while ( 1 )
      {
        v41 = *(_BYTE **)(v9 + 56);
        v42 = *(_DWORD *)(a2[7] + 4 * v40) != -1;
        if ( v41 )
        {
          v43 = *((_DWORD *)v41 - 1);
          if ( v43 == *((_DWORD *)v41 - 2) )
          {
            v48 = (3 * v43 + 1) >> 1;
            v49 = v48 + 8;
            if ( v43 + 8 >= (unsigned int)v49 || v43 >= v48 )
            {
LABEL_76:
              v4 = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v82, "Overflow encountered when expanding vector");
              *v4 = (char *)off_1C63128;
              sub_2333C0(v4 + 1, v82);
              sub_233E40((__int64)v82);
              __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v81 = v39;
            v79 = v38;
            v77 = (3 * v43 + 1) >> 1;
            v75 = *(_DWORD *)(a2[7] + 4 * v40) != -1;
            v50 = (unsigned int *)sub_186B300(v41 - 8, v49);
            v51 = v50[1];
            v41 = v50 + 2;
            v42 = v75;
            v38 = v79;
            *(_QWORD *)(v9 + 56) = v50 + 2;
            *v50 = v77;
            LODWORD(v50) = v51;
            v39 = v81;
            v46 = &v41[v51];
            v45 = (_DWORD)v50 + 1;
          }
          else
          {
            v44 = v43;
            v45 = v43 + 1;
            v46 = &v41[v44];
          }
        }
        else
        {
          v80 = v39;
          v78 = v38;
          v76 = *(_DWORD *)(a2[7] + 4 * v40) != -1;
          v54 = (_QWORD *)sub_186B270(0xAu);
          v41 = v54 + 1;
          *v54 = 2;
          v42 = v76;
          v45 = 1;
          v38 = v78;
          v39 = v80;
          *(_QWORD *)(v9 + 56) = v41;
          v46 = v41;
        }
        *v46 = v42;
        *((_DWORD *)v41 - 1) = v45;
        if ( v40 == v39 )
          break;
        v47 = v40 + 1;
        if ( v38 >= a3 )
        {
          v55 = v40 + 1;
          for ( i = 4 * v47; ; i += 4 )
          {
            v57 = *(_QWORD **)(v9 + 56);
            v58 = *(_DWORD *)(a2[7] + i) != -1;
            if ( v57 )
            {
              v59 = *((_DWORD *)v57 - 2);
              v60 = *((unsigned int *)v57 - 1);
              v61 = (bool *)v57 + v60;
              v62 = v60 + 1;
              if ( v59 == (_DWORD)v60 )
              {
                v63 = (3 * v59 + 1) >> 1;
                v64 = v63 + 8;
                if ( v59 + 8 >= (unsigned int)v64 || v59 >= v63 )
                  goto LABEL_76;
                v65 = (unsigned int *)sub_186B300(v57 - 1, v64);
                v57 = v65 + 2;
                *(_QWORD *)(v9 + 56) = v65 + 2;
                *v65 = (3 * v59 + 1) >> 1;
                v66 = v65[1];
                v67 = v66;
                v61 = (bool *)v57 + v66;
                v62 = v67 + 1;
              }
            }
            else
            {
              v68 = (_QWORD *)sub_186B270(0xAu);
              v57 = v68 + 1;
              *v68 = 2;
              v62 = 1;
              *(_QWORD *)(v9 + 56) = v68 + 1;
              v61 = (bool *)(v68 + 1);
            }
            ++v55;
            *v61 = v58;
            *((_DWORD *)v57 - 1) = v62;
            if ( v55 >= v37 )
              return v9;
          }
        }
        while ( 1 )
        {
          v40 = v47;
          if ( v38 >= a3 || a4[v38] != (_DWORD)v47 )
            break;
LABEL_50:
          ++v38;
          if ( v40 == v39 )
            return v9;
          v47 = v40 + 1;
        }
      }
    }
  }
  return v9;
}

