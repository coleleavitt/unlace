__int64 __fastcall Z3_qe_lite(__int64 a1, __int64 a2, __int64 a3)
{
  char **v3; // r15
  char **exception; // r14
  char v7; // r12
  __int64 v8; // rsi
  __int64 *v9; // r15
  __int64 *v10; // r13
  __int64 v11; // r14
  _QWORD *v12; // rax
  __int64 *v13; // rax
  int v14; // edx
  __int64 *v15; // rcx
  unsigned int v16; // edx
  __int64 *v17; // rdx
  unsigned int v18; // edi
  _QWORD *v19; // rsi
  _QWORD *v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rbp
  __int64 v23; // rsi
  __int64 v24; // rdi
  bool v25; // zf
  __int64 *v26; // rbx
  __int64 *v27; // r13
  __int64 v28; // rsi
  unsigned int v30; // r9d
  size_t v31; // rsi
  unsigned int v32; // r12d
  unsigned int *v33; // rax
  __int64 v34; // rax
  int v35; // edx
  unsigned __int64 v36; // r15
  __int64 v37; // rsi
  __int64 v38; // rdi
  __int64 v39; // rax
  __int64 *v40; // r8
  __int64 v41; // r15
  _QWORD *v42; // rdi
  _QWORD *v43; // rax
  __int64 *v44; // rdx
  _QWORD *v45; // rsi
  int i; // eax
  unsigned int v47; // eax
  unsigned int v48; // r9d
  size_t v49; // rsi
  unsigned int *v50; // rax
  __int64 v51; // rsi
  _QWORD *v53; // [rsp+0h] [rbp-B8h]
  __int64 *v54; // [rsp+0h] [rbp-B8h]
  __int64 *v55; // [rsp+0h] [rbp-B8h]
  __int64 *v56; // [rsp+8h] [rbp-B0h]
  __int64 *v57; // [rsp+8h] [rbp-B0h]
  char v58; // [rsp+13h] [rbp-A5h]
  unsigned int v59; // [rsp+14h] [rbp-A4h]
  __int64 v60; // [rsp+30h] [rbp-88h] BYREF
  char v61[8]; // [rsp+38h] [rbp-80h] BYREF
  __int64 v62; // [rsp+40h] [rbp-78h] BYREF
  __int64 *v63; // [rsp+48h] [rbp-70h]
  __int64 v64; // [rsp+50h] [rbp-68h] BYREF
  __int64 v65; // [rsp+58h] [rbp-60h]
  __int64 v66[11]; // [rsp+60h] [rbp-58h] BYREF

  v7 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  v58 = v7;
  if ( v7 )
    sub_2A21A0(a1, a2, a3);
  v8 = *(_QWORD *)(a1 + 232);
  v9 = *(__int64 **)(a2 + 32);
  *(_DWORD *)(a1 + 1520) = 0;
  v63 = nullptr;
  v62 = v8;
  if ( v9 )
  {
    v10 = &v9[*((unsigned int *)v9 - 1)];
    if ( v9 != v10 )
    {
      v11 = *v9;
      if ( *(_WORD *)(*v9 + 4) )
        goto LABEL_35;
      ++*(_DWORD *)(v11 + 8);
      v12 = (_QWORD *)sub_186B270(0x18u);
      *v12 = 2;
      v13 = v12 + 1;
      v14 = 1;
      v63 = v13;
      v15 = v13;
LABEL_7:
      ++v9;
      *v13 = v11;
      *((_DWORD *)v15 - 1) = v14;
      if ( v10 != v9 )
      {
        while ( 1 )
        {
          v11 = *v9;
          if ( *(_WORD *)(*v9 + 4) )
            break;
          ++*(_DWORD *)(v11 + 8);
          v16 = *((_DWORD *)v15 - 1);
          if ( v16 == *((_DWORD *)v15 - 2) )
          {
            v30 = (3 * v16 + 1) >> 1;
            v31 = 8 * v30 + 8;
            v32 = v30;
            if ( 8 * v16 + 8 >= (unsigned int)v31 || v16 >= v30 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v66, "Overflow encountered when expanding vector");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, v66);
              sub_233E40((__int64)v66);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v33 = (unsigned int *)sub_186B300(v15 - 1, v31);
            v15 = (__int64 *)(v33 + 2);
            *v33 = v32;
            v34 = v33[1];
            v63 = v15;
            v35 = v34;
            v13 = &v15[v34];
            v14 = v35 + 1;
            goto LABEL_7;
          }
          ++v9;
          v15[v16] = v11;
          *((_DWORD *)v15 - 1) = v16 + 1;
          if ( v10 == v9 )
            goto LABEL_11;
        }
LABEL_35:
        sub_24EA30(a1, 3u, nullptr);
        if ( v58 )
        {
          sub_2BB620(0);
          v26 = v63;
          v22 = 0;
          if ( !v63 )
            goto LABEL_63;
        }
        else
        {
          v26 = v63;
          v22 = 0;
          if ( !v63 )
            return v22;
        }
        goto LABEL_22;
      }
LABEL_11:
      v8 = *(_QWORD *)(a1 + 232);
    }
  }
  v65 = v8;
  if ( a3 )
    ++*(_DWORD *)(a3 + 8);
  v60 = 0;
  v64 = a3;
  sub_E66730(&v61, v8, &v60, 1);
  sub_E67510(&v61, &v62, &v64);
  v17 = v63;
  if ( v63 )
    v18 = *((_DWORD *)v63 - 1);
  else
    v18 = 0;
  v19 = *(_QWORD **)(a2 + 32);
  v20 = v19;
  if ( v19 )
  {
    v21 = *((unsigned int *)v19 - 1);
    if ( v18 < (unsigned int)v21 )
    {
      v36 = (unsigned __int64)&v19[v21];
      if ( (unsigned __int64)v19 >= v36 )
        goto LABEL_46;
      do
      {
        while ( 1 )
        {
          v37 = *v20;
          if ( *v20 )
          {
            v38 = *(_QWORD *)(a2 + 24);
            v25 = (*(_DWORD *)(v37 + 8))-- == 1;
            if ( v25 )
              break;
          }
          if ( (unsigned __int64)++v20 >= v36 )
            goto LABEL_45;
        }
        v53 = v20;
        sub_15D7BC0(v38, v37);
        v20 = v53 + 1;
      }
      while ( (unsigned __int64)(v53 + 1) < v36 );
LABEL_45:
      v19 = *(_QWORD **)(a2 + 32);
      v17 = v63;
      if ( v19 )
LABEL_46:
        *((_DWORD *)v19 - 1) = 0;
      if ( v17 )
      {
        v39 = *((unsigned int *)v17 - 1);
        v40 = &v17[v39];
        if ( v40 != v17 )
        {
          v41 = *v17;
          v42 = v19;
          if ( *v17 )
            ++*(_DWORD *)(v41 + 8);
          if ( v19 )
            goto LABEL_56;
          v56 = v17;
          v54 = &v17[v39];
          v43 = (_QWORD *)sub_186B270(0x18u);
          v42 = v43 + 1;
          v40 = v54;
          v44 = v56;
          *v43 = 2;
          *(_QWORD *)(a2 + 32) = v43 + 1;
          v45 = v43 + 1;
          for ( i = 1; ; i = (_DWORD)v50 + 1 )
          {
            v17 = v44 + 1;
            *v45 = v41;
            *((_DWORD *)v42 - 1) = i;
            if ( v40 == v17 )
              break;
            while ( 1 )
            {
              v41 = *v17;
              if ( *v17 )
                ++*(_DWORD *)(v41 + 8);
LABEL_56:
              v47 = *((_DWORD *)v42 - 1);
              if ( v47 == *((_DWORD *)v42 - 2) )
                break;
              ++v17;
              v42[v47] = v41;
              *((_DWORD *)v42 - 1) = v47 + 1;
              if ( v40 == v17 )
                goto LABEL_18;
            }
            v48 = (3 * v47 + 1) >> 1;
            v49 = 8 * v48 + 8;
            if ( 8 * v47 + 8 >= (unsigned int)v49 || v47 >= v48 )
            {
              v3 = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v66, "Overflow encountered when expanding vector");
              *v3 = (char *)off_1C63128;
              sub_2333C0(v3 + 1, v66);
              sub_233E40((__int64)v66);
              __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v59 = (3 * v47 + 1) >> 1;
            v57 = v17;
            v55 = v40;
            v50 = (unsigned int *)sub_186B300(v42 - 1, v49);
            v51 = v50[1];
            v42 = v50 + 2;
            v40 = v55;
            v44 = v57;
            *(_QWORD *)(a2 + 32) = v50 + 2;
            *v50 = v59;
            LODWORD(v50) = v51;
            v45 = &v42[v51];
          }
        }
      }
    }
  }
LABEL_18:
  sub_251FD0(a1, v64);
  v22 = v64;
  sub_E66770(&v61);
  sub_18572D0(&v60);
  v23 = v64;
  if ( v64 )
  {
    v24 = v65;
    v25 = (*(_DWORD *)(v64 + 8))-- == 1;
    if ( v25 )
      sub_15D7BC0(v24, v23);
  }
  v26 = v63;
  if ( v63 )
  {
LABEL_22:
    v27 = &v26[*((unsigned int *)v26 - 1)];
    if ( v26 >= v27 )
      goto LABEL_29;
    do
    {
      while ( 1 )
      {
        v28 = *v26;
        if ( *v26 )
        {
          v25 = (*(_DWORD *)(v28 + 8))-- == 1;
          if ( v25 )
            break;
        }
        if ( ++v26 >= v27 )
          goto LABEL_28;
      }
      sub_15D7BC0(v62, v28);
      ++v26;
    }
    while ( v26 < v27 );
LABEL_28:
    v26 = v63;
    if ( v63 )
LABEL_29:
      sub_186B220(v26 - 1);
  }
  if ( v58 )
LABEL_63:
    byte_1C7EBA0 = 1;
  return v22;
}

