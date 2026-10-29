__int64 __fastcall sub_D9D240(_QWORD *a1, __int64 a2, __int64 a3)
{
  char **v3; // r14
  char **exception; // r12
  __int64 v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rbx
  _QWORD *v9; // r12
  _QWORD *v10; // rbp
  __int64 v11; // rdx
  int v12; // eax
  __int64 *v13; // rdx
  __int64 v14; // r13
  __int64 v15; // r14
  char v16; // al
  unsigned int v17; // ecx
  __int64 v18; // rax
  __int64 v19; // r13
  unsigned int v20; // eax
  unsigned int v21; // r14d
  size_t v22; // rsi
  unsigned int *v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rsi
  __int64 v26; // rax
  __int64 v27; // r13
  __int64 v28; // rax
  __int64 v29; // rbx
  __int64 v30; // rax
  int v31; // ecx
  int v32; // r8d
  int v33; // r9d
  __int64 v34; // r12
  __int64 v35; // rdx
  int v36; // esi
  __int64 v37; // rax
  __int64 v38; // rdi
  __int64 v39; // rcx
  _QWORD *v40; // rdx
  unsigned int v41; // eax
  __int64 v42; // rsi
  int v43; // eax
  _QWORD *v44; // rsi
  bool v45; // zf
  __int64 *v46; // rbx
  unsigned __int64 v47; // r12
  __int64 v48; // rsi
  __int64 v50; // rax
  __int64 *v51; // rcx
  __int64 v52; // r8
  unsigned int v53; // r9d
  __int64 v54; // r8
  unsigned int v55; // edi
  __int64 *v56; // rsi
  __int64 v57; // rax
  __int64 *v58; // r10
  __int64 *v59; // rax
  __int64 v60; // rdx
  __int64 *i; // rax
  __int64 v62; // rdx
  _QWORD *v63; // rax
  int v64; // edi
  __int64 v65; // r9
  __int64 *v66; // r10
  __int64 *v67; // rax
  __int64 v68; // rdx
  __int64 v69; // rax
  __int64 v70; // rdi
  unsigned int v71; // r8d
  size_t v72; // rsi
  unsigned int *v73; // rax
  __int64 v74; // rsi
  _QWORD *v75; // rdx
  __int64 v76; // [rsp+8h] [rbp-B0h]
  unsigned __int8 v77; // [rsp+8h] [rbp-B0h]
  char v78; // [rsp+8h] [rbp-B0h]
  unsigned __int8 v79; // [rsp+8h] [rbp-B0h]
  __int64 v80; // [rsp+10h] [rbp-A8h]
  __int64 v81; // [rsp+10h] [rbp-A8h]
  unsigned __int8 v82; // [rsp+10h] [rbp-A8h]
  __int64 v84; // [rsp+18h] [rbp-A0h]
  unsigned __int8 v85; // [rsp+18h] [rbp-A0h]
  __int64 v86; // [rsp+18h] [rbp-A0h]
  unsigned int v88; // [rsp+20h] [rbp-98h]
  __int64 v89; // [rsp+28h] [rbp-90h]
  __int64 v90; // [rsp+50h] [rbp-68h] BYREF
  __int64 v91; // [rsp+58h] [rbp-60h]
  __int64 v92[11]; // [rsp+60h] [rbp-58h] BYREF

  v6 = *a1;
  v7 = *(unsigned int *)(a2 + 24);
  v89 = v6;
  if ( (_DWORD)v7 )
  {
    v8 = a2;
    v9 = (_QWORD *)(a3 + 32);
    v10 = nullptr;
    v80 = a2 + 8 * v7;
    while ( 1 )
    {
      v14 = *(_QWORD *)(v8 + 32);
      v15 = *v9;
      if ( !(unsigned __int8)sub_15D2760(v6, v14, *v9) )
      {
        v16 = sub_15D27F0(*a1, v14, v15);
        v17 = 0;
        if ( v16 )
          goto LABEL_38;
        v18 = sub_15E1B70(*a1);
        v19 = v18;
        if ( v18 )
          ++*(_DWORD *)(v18 + 8);
        if ( v10 )
        {
          v20 = *((_DWORD *)v10 - 1);
          if ( v20 == *((_DWORD *)v10 - 2) )
          {
            v21 = (3 * v20 + 1) >> 1;
            v22 = 8 * v21 + 8;
            if ( 8 * v20 + 8 >= (unsigned int)v22 || v20 >= v21 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v92, "Overflow encountered when expanding vector");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, v92);
              sub_233E40((__int64)v92);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v23 = (unsigned int *)sub_186B300(v10 - 1, v22);
            v24 = v23[1];
            v10 = v23 + 2;
            *v23 = v21;
            LODWORD(v23) = v24;
            v13 = &v10[v24];
            v12 = (_DWORD)v23 + 1;
          }
          else
          {
            v11 = v20;
            v12 = v20 + 1;
            v13 = &v10[v11];
          }
        }
        else
        {
          v63 = (_QWORD *)sub_186B270(0x18u);
          v10 = v63 + 1;
          *v63 = 2;
          v12 = 1;
          v13 = v10;
        }
        *v13 = v19;
        *((_DWORD *)v10 - 1) = v12;
      }
      v8 += 8;
      ++v9;
      if ( v80 == v8 )
        goto LABEL_48;
      v6 = *a1;
    }
  }
  v10 = nullptr;
LABEL_48:
  v50 = a1[13];
  v51 = *(__int64 **)(v50 + 16);
  v52 = *(unsigned int *)(v50 + 24);
  v53 = v52 - 1;
  v54 = 16 * v52;
  v55 = *(_DWORD *)(a2 + 12);
  v56 = &v51[(unsigned __int64)v54 / 8];
  v57 = 16LL * (v53 & v55);
  v58 = &v51[(unsigned __int64)v57 / 8];
  if ( v57 == v54 )
  {
LABEL_56:
    if ( v51 != v58 )
    {
      for ( i = v51; v58 != i; i += 2 )
      {
        v62 = *i;
        if ( (unsigned __int64)*i > 1 )
        {
          if ( *(_DWORD *)(v62 + 12) == v55 && a2 == v62 )
            goto LABEL_65;
        }
        else if ( !v62 )
        {
          break;
        }
      }
    }
LABEL_94:
    BUG();
  }
  v59 = &v51[(unsigned __int64)v57 / 8];
  while ( 1 )
  {
    while ( 1 )
    {
      v60 = *v59;
      if ( (unsigned __int64)*v59 > 1 )
        break;
      if ( !v60 )
        goto LABEL_94;
      v59 += 2;
      if ( v56 == v59 )
        goto LABEL_56;
    }
    if ( *(_DWORD *)(v60 + 12) == v55 && a2 == v60 )
      break;
    v59 += 2;
    if ( v56 == v59 )
      goto LABEL_56;
  }
LABEL_65:
  v64 = *(_DWORD *)(a3 + 12);
  v65 = 16LL * (v64 & v53);
  v66 = &v51[(unsigned __int64)v65 / 8];
  if ( v65 == v54 )
  {
LABEL_73:
    if ( v51 != v66 )
    {
      while ( 1 )
      {
        v69 = *v51;
        if ( (unsigned __int64)*v51 > 1 )
        {
          if ( *(_DWORD *)(v69 + 12) == v64 && a3 == v69 )
            goto LABEL_16;
        }
        else if ( !v69 )
        {
          goto LABEL_94;
        }
        v51 += 2;
        if ( v66 == v51 )
          goto LABEL_94;
      }
    }
    goto LABEL_94;
  }
  v67 = &v51[(unsigned __int64)v65 / 8];
  while ( 1 )
  {
    while ( 1 )
    {
      v68 = *v67;
      if ( (unsigned __int64)*v67 > 1 )
        break;
      if ( !v68 )
        goto LABEL_94;
      v67 += 2;
      if ( v67 == v56 )
        goto LABEL_73;
    }
    if ( *(_DWORD *)(v68 + 12) == v64 && a3 == v68 )
      break;
    v67 += 2;
    if ( v67 == v56 )
      goto LABEL_73;
  }
LABEL_16:
  if ( v10 )
    v25 = *((unsigned int *)v10 - 1);
  else
    v25 = 0;
  v26 = sub_15EC1C0(v89, v25);
  v27 = v26;
  if ( v26 )
    ++*(_DWORD *)(v26 + 8);
  v76 = *a1;
  v28 = sub_15E1B70(*a1);
  v29 = v28;
  if ( v28 )
    ++*(_DWORD *)(v28 + 8);
  v81 = *a1;
  v30 = sub_15E1B70(*a1);
  v34 = v30;
  if ( v30 )
    ++*(_DWORD *)(v30 + 8);
  v35 = a1[13];
  v36 = v30;
  v37 = *(_QWORD *)(v35 + 8);
  v38 = *(_QWORD *)(v35 + 64);
  v90 = 0;
  v91 = v37;
  sub_1435270(v38, v36, (unsigned int)&v90, v31, v32, v33);
  sub_14B9B80(a1 + 20, &v90);
  v39 = v90;
  if ( *(_QWORD *)(*a1 + 856LL) == v90 )
  {
    v70 = v91;
    if ( v90 && (v45 = *(_DWORD *)(v90 + 8) == 1, --*(_DWORD *)(v90 + 8), v45) )
    {
      sub_15D7BC0(v70, v39);
      v17 = 0;
    }
    else
    {
      v17 = 0;
    }
  }
  else
  {
    v40 = (_QWORD *)a1[23];
    ++*(_DWORD *)(a1[36] + 4LL);
    if ( v40 )
    {
      v41 = *((_DWORD *)v40 - 1);
      if ( v41 == *((_DWORD *)v40 - 2) )
      {
        v71 = (3 * v41 + 1) >> 1;
        v72 = 8 * v71 + 8;
        if ( 8 * v41 + 8 >= (unsigned int)v72 || v41 >= v71 )
        {
          v3 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v92, "Overflow encountered when expanding vector");
          *v3 = (char *)off_1C63128;
          sub_2333C0(v3 + 1, v92);
          sub_233E40((__int64)v92);
          __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v88 = (3 * v41 + 1) >> 1;
        v84 = v39;
        v73 = (unsigned int *)sub_186B300(v40 - 1, v72);
        v74 = v73[1];
        v40 = v73 + 2;
        a1[23] = v73 + 2;
        v39 = v84;
        *v73 = v88;
        LODWORD(v73) = v74;
        v44 = &v40[v74];
        v43 = (_DWORD)v73 + 1;
      }
      else
      {
        v42 = v41;
        v43 = v41 + 1;
        v44 = &v40[v42];
      }
    }
    else
    {
      v86 = v39;
      v75 = (_QWORD *)sub_186B270(0x18u);
      *v75 = 2;
      v39 = v86;
      v43 = 1;
      v40 = v75 + 1;
      a1[23] = v40;
      v44 = v40;
    }
    *v44 = v39;
    v17 = 1;
    *((_DWORD *)v40 - 1) = v43;
  }
  if ( v34 )
  {
    v45 = (*(_DWORD *)(v34 + 8))-- == 1;
    if ( v45 )
    {
      v85 = v17;
      sub_15D7BC0(v81, v34);
      v17 = v85;
    }
  }
  if ( v29 )
  {
    v45 = (*(_DWORD *)(v29 + 8))-- == 1;
    if ( v45 )
    {
      v82 = v17;
      sub_15D7BC0(v76, v29);
      v17 = v82;
    }
  }
  if ( v27 )
  {
    v45 = (*(_DWORD *)(v27 + 8))-- == 1;
    if ( v45 )
    {
      v77 = v17;
      sub_15D7BC0(v89, v27);
      v17 = v77;
    }
  }
LABEL_38:
  if ( v10 )
  {
    v46 = v10;
    v47 = (unsigned __int64)&v10[*((unsigned int *)v10 - 1)];
    if ( (unsigned __int64)v10 < v47 )
    {
      do
      {
        while ( 1 )
        {
          v48 = *v46;
          if ( *v46 )
          {
            v45 = (*(_DWORD *)(v48 + 8))-- == 1;
            if ( v45 )
              break;
          }
          if ( (unsigned __int64)++v46 >= v47 )
            goto LABEL_45;
        }
        ++v46;
        v78 = v17;
        sub_15D7BC0(v89, v48);
        LOBYTE(v17) = v78;
      }
      while ( (unsigned __int64)v46 < v47 );
    }
LABEL_45:
    v79 = v17;
    sub_186B220(v10 - 1);
    return v79;
  }
  return v17;
}

