void __fastcall sub_66E8A0(__int64 a1)
{
  __int64 **v1; // rbx
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v5; // rdx
  __int64 v6; // r13
  __int64 **v7; // r12
  __int64 *v8; // rsi
  __int64 v9; // rdx
  unsigned int v10; // ebx
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 **v13; // rbx
  __int64 **v14; // r14
  __int64 v15; // rsi
  __int64 v16; // rsi
  __int64 v17; // rdi
  bool v18; // zf
  __int64 v19; // rsi
  __int64 v20; // rdi
  __int64 v21; // rsi
  __int64 v22; // rdi
  _QWORD *v23; // rbx
  void *v24; // rdi
  __int64 *v25; // rbx
  unsigned __int64 v26; // rbp
  __int64 v27; // rsi
  __int64 v28; // rdi
  __int64 *v29; // rbx
  __int64 **v30; // r13
  __int64 v31; // r14
  __int64 **v32; // r15
  __int64 **v33; // r14
  __int64 v34; // rdi
  __int64 v35; // rsi
  __int64 v36; // rdi
  __int64 v37; // rsi
  __int64 v38; // rdi
  __int64 v39; // rsi
  __int64 v40; // rdi
  _QWORD *v41; // rbx
  void *v42; // rdi
  __int64 *v43; // rbx
  unsigned __int64 v44; // rbp
  __int64 v45; // rsi
  __int64 v46; // rdi
  __int64 *v47; // rbx
  unsigned __int64 v48; // rbp
  __int64 v49; // rsi
  __int64 v50; // rdi
  unsigned __int64 v51; // rbp
  __int64 v52; // rsi
  __int64 v53; // rdi
  __int64 *v54; // rbx
  unsigned __int64 v55; // rbp
  __int64 v56; // rsi
  __int64 v57; // rdi
  __int64 *v58; // rbx
  unsigned __int64 v59; // rbp
  __int64 v60; // rsi
  __int64 v61; // rdi
  __int64 v62; // [rsp+10h] [rbp-F8h] BYREF
  __int64 v63; // [rsp+18h] [rbp-F0h]
  __int64 v64; // [rsp+20h] [rbp-E8h] BYREF
  __int64 v65; // [rsp+28h] [rbp-E0h]
  __int64 v66; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v67; // [rsp+38h] [rbp-D0h]
  __int64 v68; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v69; // [rsp+48h] [rbp-C0h]
  _QWORD *v70; // [rsp+50h] [rbp-B8h]
  __int64 v71; // [rsp+58h] [rbp-B0h]
  __int64 *v72; // [rsp+60h] [rbp-A8h]
  __int64 v73; // [rsp+68h] [rbp-A0h]
  __int64 v74; // [rsp+70h] [rbp-98h]
  __int64 v75; // [rsp+78h] [rbp-90h]
  __int64 v76; // [rsp+80h] [rbp-88h]
  __int64 *v77; // [rsp+88h] [rbp-80h]
  void *s; // [rsp+90h] [rbp-78h]
  __int64 v79; // [rsp+98h] [rbp-70h]
  void *v80; // [rsp+A0h] [rbp-68h]
  __int64 v81; // [rsp+A8h] [rbp-60h]
  int v82; // [rsp+B0h] [rbp-58h]
  __int64 v83; // [rsp+B8h] [rbp-50h]
  _QWORD v84[9]; // [rsp+C0h] [rbp-48h] BYREF

  v1 = *(__int64 ***)(a1 + 176);
  if ( !v1 )
    return;
  v2 = *((unsigned int *)v1 - 1);
  if ( !(_DWORD)v2 )
    return;
  v3 = *(_QWORD *)(a1 + 192);
  *(_BYTE *)(a1 + 968) = 1;
  v5 = 0x7FFFFFFF8LL;
  if ( v3 )
    v5 = 8LL * (unsigned int)(*(_DWORD *)(v3 - 4) - 1);
  v6 = *(_QWORD *)(v3 + v5);
  v7 = &v1[v2];
  do
  {
    v8 = *v1++;
    sub_F79EF0(v6);
  }
  while ( v7 != v1 );
  v9 = *(_QWORD *)(a1 + 120);
  v10 = 0;
  v70 = nullptr;
  s = v84;
  v11 = *(_QWORD *)(a1 + 192);
  v68 = v9;
  v69 = v9;
  v71 = v9;
  v72 = nullptr;
  v73 = 0;
  v74 = 0;
  v75 = 0;
  v76 = v9;
  v77 = nullptr;
  v79 = 1;
  v80 = nullptr;
  v81 = 0;
  v82 = 1065353216;
  v83 = 0;
  v84[0] = 0;
  if ( !v11 )
  {
    v62 = 0;
    v13 = *(__int64 ***)(a1 + 176);
    v63 = v9;
    v64 = 0;
    v65 = v9;
    v66 = 0;
    v67 = v9;
LABEL_41:
    if ( !v13 )
      goto LABEL_54;
    v30 = &v13[*((unsigned int *)v13 - 1)];
    if ( v30 != v13 )
    {
      v31 = *(_QWORD *)(a1 + 184);
      v32 = v13;
      do
      {
        v8 = *v32;
        sub_E5EBF0(v31, *v32++);
      }
      while ( v30 != v32 );
LABEL_45:
      v13 = *(__int64 ***)(a1 + 176);
      if ( !v13 )
        goto LABEL_54;
      v33 = &v13[*((unsigned int *)v13 - 1)];
      if ( v13 < v33 )
      {
        do
        {
          while ( 1 )
          {
            v8 = *v13;
            if ( *v13 )
            {
              v34 = *(_QWORD *)(a1 + 168);
              v18 = (*((_DWORD *)v8 + 2))-- == 1;
              if ( v18 )
                break;
            }
            if ( ++v13 >= v33 )
              goto LABEL_52;
          }
          sub_15D7BC0(v34, v8);
          ++v13;
        }
        while ( v13 < v33 );
LABEL_52:
        v13 = *(__int64 ***)(a1 + 176);
        if ( !v13 )
          goto LABEL_54;
      }
    }
    goto LABEL_53;
  }
  do
  {
    if ( v10 >= *(_DWORD *)(v11 - 4) )
      break;
    v8 = &v68;
    sub_66C440(a1, (__int64)&v68, *(_QWORD *)(v11 + 8LL * v10));
    v11 = *(_QWORD *)(a1 + 192);
    ++v10;
  }
  while ( v11 );
  v12 = *(_QWORD *)(a1 + 120);
  v62 = 0;
  v64 = 0;
  v13 = *(__int64 ***)(a1 + 176);
  v63 = v12;
  v65 = v12;
  v66 = 0;
  v67 = v12;
  if ( !v70 || !*((_DWORD *)v70 - 1) )
    goto LABEL_41;
  if ( !v13 )
  {
LABEL_54:
    sub_CB8EA0(a1 + 376, v8);
    v35 = v66;
    if ( v66 )
    {
      v36 = v67;
      v18 = (*(_DWORD *)(v66 + 8))-- == 1;
      if ( v18 )
        sub_15D7BC0(v36, v35);
    }
    v37 = v64;
    if ( v64 )
    {
      v38 = v65;
      v18 = (*(_DWORD *)(v64 + 8))-- == 1;
      if ( v18 )
        sub_15D7BC0(v38, v37);
    }
    v39 = v62;
    if ( v62 )
    {
      v40 = v63;
      v18 = (*(_DWORD *)(v62 + 8))-- == 1;
      if ( v18 )
        sub_15D7BC0(v40, v39);
    }
    v41 = v80;
    if ( v80 )
    {
      do
      {
        v42 = v41;
        v41 = (_QWORD *)*v41;
        operator delete(v42, 0x18u);
      }
      while ( v41 );
    }
    memset(s, 0, 8 * v79);
    v81 = 0;
    v80 = nullptr;
    if ( s != v84 )
      operator delete(s, 8 * v79);
    v43 = v77;
    if ( v77 )
    {
      v44 = (unsigned __int64)&v77[*((unsigned int *)v77 - 1)];
      if ( (unsigned __int64)v77 >= v44 )
        goto LABEL_75;
      do
      {
        while ( 1 )
        {
          v45 = *v43;
          if ( *v43 )
          {
            v46 = v76;
            v18 = (*(_DWORD *)(v45 + 8))-- == 1;
            if ( v18 )
              break;
          }
          if ( (unsigned __int64)++v43 >= v44 )
            goto LABEL_74;
        }
        sub_15D7BC0(v46, v45);
        ++v43;
      }
      while ( (unsigned __int64)v43 < v44 );
LABEL_74:
      v43 = v77;
      if ( v77 )
LABEL_75:
        sub_186B220(v43 - 1);
    }
    if ( v75 )
      sub_186B220((void *)(v75 - 8));
    if ( v74 )
      sub_186B220((void *)(v74 - 8));
    if ( v73 )
      sub_186B220((void *)(v73 - 8));
    v47 = v72;
    if ( v72 )
    {
      v48 = (unsigned __int64)&v72[*((unsigned int *)v72 - 1)];
      if ( (unsigned __int64)v72 >= v48 )
        goto LABEL_90;
      do
      {
        while ( 1 )
        {
          v49 = *v47;
          if ( *v47 )
          {
            v50 = v71;
            v18 = (*(_DWORD *)(v49 + 8))-- == 1;
            if ( v18 )
              break;
          }
          if ( (unsigned __int64)++v47 >= v48 )
            goto LABEL_89;
        }
        sub_15D7BC0(v50, v49);
        ++v47;
      }
      while ( (unsigned __int64)v47 < v48 );
LABEL_89:
      v47 = v72;
      if ( v72 )
LABEL_90:
        sub_186B220(v47 - 1);
    }
    v29 = v70;
    if ( v70 )
    {
      v51 = (unsigned __int64)&v70[*((unsigned int *)v70 - 1)];
      if ( (unsigned __int64)v70 >= v51 )
        goto LABEL_38;
      do
      {
        v52 = *v29;
        if ( *v29 )
        {
          v53 = v69;
          v18 = (*(_DWORD *)(v52 + 8))-- == 1;
          if ( v18 )
            sub_15D7BC0(v53, v52);
        }
        ++v29;
      }
      while ( (unsigned __int64)v29 < v51 );
      v29 = v70;
      if ( v70 )
LABEL_38:
        sub_186B220(v29 - 1);
    }
    return;
  }
  v14 = &v13[*((unsigned int *)v13 - 1)];
  if ( v14 == v13 )
  {
LABEL_53:
    *((_DWORD *)v13 - 1) = 0;
    goto LABEL_54;
  }
  while ( 1 )
  {
    sub_14EA2A0(&v68, *v13, &v64);
    v15 = v64;
    sub_CBDB00(a1 + 376, v64, &v66, &v62);
    if ( !(unsigned __int8)sub_18290A0(*(_QWORD *)(a1 + 120)) )
      break;
    v8 = (__int64 *)v66;
    sub_E5EBF0(*(_QWORD *)(a1 + 184), v66);
    if ( v14 == ++v13 )
      goto LABEL_45;
  }
  sub_CB8EA0(a1 + 376, v15);
  v16 = v66;
  if ( v66 )
  {
    v17 = v67;
    v18 = (*(_DWORD *)(v66 + 8))-- == 1;
    if ( v18 )
      sub_15D7BC0(v17, v16);
  }
  v19 = v64;
  if ( v64 )
  {
    v20 = v65;
    v18 = (*(_DWORD *)(v64 + 8))-- == 1;
    if ( v18 )
      sub_15D7BC0(v20, v19);
  }
  v21 = v62;
  if ( v62 )
  {
    v22 = v63;
    v18 = (*(_DWORD *)(v62 + 8))-- == 1;
    if ( v18 )
      sub_15D7BC0(v22, v21);
  }
  v23 = v80;
  if ( v80 )
  {
    do
    {
      v24 = v23;
      v23 = (_QWORD *)*v23;
      operator delete(v24, 0x18u);
    }
    while ( v23 );
  }
  memset(s, 0, 8 * v79);
  v81 = 0;
  v80 = nullptr;
  if ( s != v84 )
    operator delete(s, 8 * v79);
  v25 = v77;
  if ( v77 )
  {
    v26 = (unsigned __int64)&v77[*((unsigned int *)v77 - 1)];
    if ( (unsigned __int64)v77 >= v26 )
      goto LABEL_99;
    do
    {
      v27 = *v25;
      if ( *v25 )
      {
        v28 = v76;
        v18 = (*(_DWORD *)(v27 + 8))-- == 1;
        if ( v18 )
          sub_15D7BC0(v28, v27);
      }
      ++v25;
    }
    while ( (unsigned __int64)v25 < v26 );
    v25 = v77;
    if ( v77 )
LABEL_99:
      sub_186B220(v25 - 1);
  }
  if ( v75 )
    sub_186B220((void *)(v75 - 8));
  if ( v74 )
    sub_186B220((void *)(v74 - 8));
  if ( v73 )
    sub_186B220((void *)(v73 - 8));
  v54 = v72;
  if ( v72 )
  {
    v55 = (unsigned __int64)&v72[*((unsigned int *)v72 - 1)];
    if ( (unsigned __int64)v72 >= v55 )
      goto LABEL_114;
    do
    {
      v56 = *v54;
      if ( *v54 )
      {
        v57 = v71;
        v18 = (*(_DWORD *)(v56 + 8))-- == 1;
        if ( v18 )
          sub_15D7BC0(v57, v56);
      }
      ++v54;
    }
    while ( (unsigned __int64)v54 < v55 );
    v54 = v72;
    if ( v72 )
LABEL_114:
      sub_186B220(v54 - 1);
  }
  v58 = v70;
  if ( v70 )
  {
    v59 = (unsigned __int64)&v70[*((unsigned int *)v70 - 1)];
    if ( (unsigned __int64)v70 >= v59 )
      goto LABEL_123;
    do
    {
      v60 = *v58;
      if ( *v58 )
      {
        v61 = v69;
        v18 = (*(_DWORD *)(v60 + 8))-- == 1;
        if ( v18 )
          sub_15D7BC0(v61, v60);
      }
      ++v58;
    }
    while ( (unsigned __int64)v58 < v59 );
    v58 = v70;
    if ( v70 )
LABEL_123:
      sub_186B220(v58 - 1);
  }
}

