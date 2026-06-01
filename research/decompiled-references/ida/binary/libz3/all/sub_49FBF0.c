__int64 (__fastcall **__fastcall sub_49FBF0(int a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 *a6))()
{
  char **exception; // r12
  char **v7; // r12
  __int64 v12; // rax
  _QWORD *v13; // rax
  _QWORD *v14; // rbx
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // r14
  __int64 (__fastcall **result)(); // rax
  unsigned int v19; // edx
  __int64 v20; // rax
  __int64 *v21; // rsi
  __int64 v22; // r8
  __int64 v23; // rax
  int v24; // ecx
  unsigned int v25; // edx
  __int64 *v26; // rdi
  __int64 v27; // rdx
  __int64 *v28; // r9
  __int64 *v29; // rax
  __int64 v30; // rdx
  unsigned int v31; // r8d
  __int64 v32; // rax
  unsigned int v33; // r8d
  unsigned int v34; // ecx
  __int64 v35; // rcx
  unsigned int v36; // eax
  __int64 v37; // rax
  __int64 *v38; // r9
  int v39; // r11d
  __int64 v40; // r10
  __int64 v41; // rdi
  __int64 *v42; // rsi
  __int64 *v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rdx
  __int64 *v46; // rax
  __int64 *v47; // rdi
  __int64 v48; // rdx
  __int64 v49; // rax
  _QWORD *v50; // rax
  unsigned int v51; // edx
  __int64 v52; // rax
  unsigned int v53; // edx
  size_t v54; // rsi
  unsigned int *v55; // rax
  __int64 *i; // rax
  __int64 v57; // rdx
  unsigned int v58; // ecx
  size_t v59; // rsi
  unsigned int *v60; // rdx
  __int64 *v61; // rax
  __int64 *v62; // rax
  __int64 *v63; // rdi
  __int64 *v64; // rax
  __int64 v65; // rcx
  __int64 v66; // rdx
  __int64 *v67; // rsi
  __int64 *v68; // rdx
  _QWORD *v69; // rax
  __int64 v70; // [rsp+8h] [rbp-100h]
  unsigned int v71; // [rsp+20h] [rbp-E8h]
  __int64 v72; // [rsp+20h] [rbp-E8h]
  unsigned int v73; // [rsp+20h] [rbp-E8h]
  __int64 v74; // [rsp+20h] [rbp-E8h]
  __int64 v75; // [rsp+20h] [rbp-E8h]
  unsigned int v76; // [rsp+28h] [rbp-E0h]
  int v77; // [rsp+28h] [rbp-E0h]
  __int64 v78; // [rsp+28h] [rbp-E0h]
  unsigned int v79; // [rsp+28h] [rbp-E0h]
  unsigned int v80; // [rsp+30h] [rbp-D8h]
  unsigned int v81; // [rsp+30h] [rbp-D8h]
  __int64 v82; // [rsp+30h] [rbp-D8h]
  int v83; // [rsp+30h] [rbp-D8h]
  __int64 v84; // [rsp+38h] [rbp-D0h]
  __int64 v85; // [rsp+38h] [rbp-D0h]
  __int64 *v86; // [rsp+40h] [rbp-C8h]
  __int64 *v87; // [rsp+48h] [rbp-C0h]
  __int64 v88[4]; // [rsp+70h] [rbp-98h] BYREF
  _QWORD v89[3]; // [rsp+90h] [rbp-78h] BYREF
  void *v90; // [rsp+A8h] [rbp-60h]
  __int64 v91; // [rsp+B8h] [rbp-50h]
  void *v92; // [rsp+C0h] [rbp-48h]

  v12 = *a6;
  v89[2] = 0;
  v70 = v12;
  v90 = nullptr;
  v91 = 0;
  v89[0] = &off_1C62200;
  v92 = nullptr;
  v13 = (_QWORD *)sub_186B270(0x18u);
  v13[1] = a2;
  v14 = v13 + 1;
  *v13 = 0x100000002LL;
  v15 = 1;
  do
  {
    v16 = (unsigned int)(v15 - 1);
    v17 = v14[v16];
    *((_DWORD *)v14 - 1) = v16;
    if ( (unsigned __int8)sub_15D37A0(v89, v17) || (unsigned __int8)sub_15D37A0(a4, v17) )
      goto LABEL_4;
    sub_15D0A90(v89, v17, 1);
    v19 = *(_DWORD *)(v17 + 24);
    if ( v19 )
    {
      v31 = 0;
      do
      {
        v80 = v31;
        v71 = v19 - 1;
        v76 = v19;
        v32 = sub_15D1F10(*(_QWORD *)(v17 + 8LL * (v19 - 1) + 32));
        v33 = v80;
        v34 = v71;
        if ( *(_QWORD *)(v70 + 848) == v32 )
          v34 = v76;
        if ( v80 >= v34 )
          break;
        v35 = *(_QWORD *)(v17 + 8LL * v80 + 32);
        v36 = *((_DWORD *)v14 - 1);
        if ( v36 == *((_DWORD *)v14 - 2) )
        {
          v53 = (3 * v36 + 1) >> 1;
          v54 = 8 * v53 + 8;
          if ( 8 * v36 + 8 >= (unsigned int)v54 || v36 >= v53 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v88, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v88);
            sub_233E40((__int64)v88);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v81 = (3 * v36 + 1) >> 1;
          v78 = v35;
          v73 = v33;
          v55 = (unsigned int *)sub_186B300(v14 - 1, v54);
          v14 = v55 + 2;
          v33 = v73;
          v35 = v78;
          *v55 = v81;
          v36 = v55[1];
        }
        v31 = v33 + 1;
        v14[v36] = v35;
        *((_DWORD *)v14 - 1) = v36 + 1;
        v19 = *(_DWORD *)(v17 + 24);
      }
      while ( v19 );
    }
    v20 = *(_QWORD *)(*(_QWORD *)(v17 + 16) + 24LL);
    if ( !v20 || *(_DWORD *)(v20 + 4) != 14 )
      goto LABEL_4;
    v21 = *(__int64 **)a3;
    v22 = *(_QWORD *)(v17 + 8LL * (unsigned int)(*(_DWORD *)(v17 + 24) - 1) + 32);
    v23 = *(unsigned int *)(a3 + 8);
    v24 = *(_DWORD *)(v22 + 12);
    v25 = v23 - 1;
    v23 *= 8;
    v26 = (__int64 *)(*(_QWORD *)a3 + v23);
    v27 = 8LL * (v24 & v25);
    v28 = (__int64 *)(*(_QWORD *)a3 + v27);
    if ( v27 == v23 )
    {
LABEL_56:
      if ( v21 == v28 )
        goto LABEL_4;
      while ( 1 )
      {
        v52 = *v21;
        if ( (unsigned __int64)*v21 > 1 )
        {
          if ( *(_DWORD *)(v52 + 12) == v24 && v22 == v52 )
            goto LABEL_28;
        }
        else if ( !v52 )
        {
          goto LABEL_4;
        }
        if ( v28 == ++v21 )
          goto LABEL_4;
      }
    }
    v29 = (__int64 *)(*(_QWORD *)a3 + v27);
    while ( 1 )
    {
      v30 = *v29;
      if ( (unsigned __int64)*v29 <= 1 )
      {
        if ( !v30 )
          goto LABEL_4;
        goto LABEL_17;
      }
      if ( *(_DWORD *)(v30 + 12) == v24 && v22 == v30 )
        break;
LABEL_17:
      if ( v26 == ++v29 )
        goto LABEL_56;
    }
LABEL_28:
    v37 = *(unsigned int *)(a5 + 8);
    v38 = *(__int64 **)a5;
    v39 = *(_DWORD *)(a5 + 8);
    v72 = 8 * v37;
    v40 = *(_QWORD *)a5 + 8 * v37;
    v41 = 8LL * (v24 & (unsigned int)(v37 - 1));
    v42 = (__int64 *)(*(_QWORD *)a5 + v41);
    v43 = v42;
    if ( v41 != v72 )
    {
      do
      {
        v44 = *v43;
        if ( (unsigned __int64)*v43 > 1 )
        {
          if ( *(_DWORD *)(v44 + 12) == v24 && v22 == v44 )
            goto LABEL_55;
        }
        else if ( !v44 )
        {
          goto LABEL_35;
        }
        ++v43;
      }
      while ( (__int64 *)v40 != v43 );
    }
    if ( v38 != v42 )
    {
      for ( i = *(__int64 **)a5; v42 != i; ++i )
      {
        v57 = *i;
        if ( (unsigned __int64)*i > 1 )
        {
          if ( *(_DWORD *)(v57 + 12) == v24 && v22 == v57 )
            goto LABEL_55;
        }
        else if ( !v57 )
        {
          break;
        }
      }
    }
LABEL_35:
    v45 = (unsigned int)(2 * v39);
    v77 = 2 * v39;
    if ( 3 * v39 < (unsigned int)(4 * (*(_DWORD *)(a5 + 12) + *(_DWORD *)(a5 + 16))) )
    {
      v84 = *(_QWORD *)(v17 + 8LL * (unsigned int)(*(_DWORD *)(v17 + 24) - 1) + 32);
      v82 = (unsigned int)(2 * v39);
      v72 = 8 * v45;
      v61 = (__int64 *)sub_186B270(8 * v45);
      v38 = v61;
      v22 = v84;
      if ( v77 )
      {
        v62 = (__int64 *)memset(v61, 0, 8 * v82);
        v22 = v84;
        v38 = v62;
      }
      v63 = *(__int64 **)a5;
      v64 = *(__int64 **)a5;
      v83 = v77 - 1;
      v65 = *(_QWORD *)a5 + 8LL * *(unsigned int *)(a5 + 8);
      v40 = (__int64)&v38[(unsigned __int64)v72 / 8];
      if ( *(_QWORD *)a5 != v65 )
      {
        do
        {
          if ( (unsigned __int64)*v64 > 1 )
          {
            v66 = 8LL * (*(_DWORD *)(*v64 + 12) & (unsigned int)v83);
            v67 = &v38[(unsigned __int64)v66 / 8];
            if ( v72 == v66 )
            {
LABEL_92:
              if ( v38 == v67 )
              {
LABEL_101:
                sub_1872CE0("");
                sub_1873130(114, 213);
              }
              v68 = v38;
              while ( *v68 )
              {
                if ( v67 == ++v68 )
                  goto LABEL_101;
              }
            }
            else
            {
              v68 = &v38[(unsigned __int64)v66 / 8];
              while ( *v68 )
              {
                if ( (__int64 *)v40 == ++v68 )
                  goto LABEL_92;
              }
            }
            *v68 = *v64;
          }
          ++v64;
        }
        while ( (__int64 *)v65 != v64 );
        v63 = *(__int64 **)a5;
      }
      if ( v63 )
      {
        v87 = v38;
        v86 = &v38[(unsigned __int64)v72 / 8];
        v85 = v22;
        sub_186B220(v63);
        v38 = v87;
        v40 = (__int64)v86;
        v22 = v85;
      }
      v24 = *(_DWORD *)(v22 + 12);
      *(_QWORD *)a5 = v38;
      *(_DWORD *)(a5 + 8) = v77;
      v41 = 8LL * (v24 & (unsigned int)v83);
      *(_DWORD *)(a5 + 16) = 0;
      v42 = &v38[(unsigned __int64)v41 / 8];
    }
    if ( v41 == v72 )
    {
      v47 = nullptr;
      while ( 1 )
      {
LABEL_47:
        if ( v38 == v42 )
        {
          sub_1872CE0("");
          sub_1873130(114, 405);
        }
        v49 = *v38;
        if ( (unsigned __int64)*v38 > 1 )
        {
          if ( *(_DWORD *)(v49 + 12) == v24 && v22 == v49 )
          {
            *v38 = v22;
            goto LABEL_52;
          }
        }
        else
        {
          if ( !v49 )
          {
            if ( v47 )
            {
              --*(_DWORD *)(a5 + 16);
              v38 = v47;
            }
            *v38 = v22;
            ++*(_DWORD *)(a5 + 12);
            goto LABEL_52;
          }
          v47 = v38;
        }
        ++v38;
      }
    }
    v46 = v42;
    v47 = nullptr;
    while ( 2 )
    {
      v48 = *v46;
      if ( (unsigned __int64)*v46 > 1 )
      {
        if ( *(_DWORD *)(v48 + 12) == v24 && v22 == v48 )
        {
          *v46 = v22;
          goto LABEL_52;
        }
        goto LABEL_40;
      }
      if ( v48 )
      {
        v47 = v46;
LABEL_40:
        if ( ++v46 == (__int64 *)v40 )
          goto LABEL_47;
        continue;
      }
      break;
    }
    if ( v47 )
    {
      --*(_DWORD *)(a5 + 16);
      v46 = v47;
    }
    *v46 = v22;
    ++*(_DWORD *)(a5 + 12);
LABEL_52:
    v50 = (_QWORD *)a6[1];
    ++*(_DWORD *)(v22 + 8);
    if ( v50 )
    {
      v51 = *((_DWORD *)v50 - 1);
      if ( v51 == *((_DWORD *)v50 - 2) )
      {
        v58 = (3 * v51 + 1) >> 1;
        v59 = 8 * v58 + 8;
        if ( 8 * v51 + 8 >= (unsigned int)v59 || v51 >= v58 )
        {
          v7 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v88, "Overflow encountered when expanding vector");
          *v7 = (char *)off_1C63128;
          sub_2333C0(v7 + 1, v88);
          sub_233E40((__int64)v88);
          __cxa_throw(v7, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v79 = (3 * v51 + 1) >> 1;
        v74 = v22;
        v60 = (unsigned int *)sub_186B300(v50 - 1, v59);
        v50 = v60 + 2;
        v22 = v74;
        a6[1] = (__int64)(v60 + 2);
        *v60 = v79;
        v51 = v60[1];
      }
    }
    else
    {
      v75 = v22;
      v69 = (_QWORD *)sub_186B270(0x18u);
      *v69 = 2;
      v50 = v69 + 1;
      v22 = v75;
      v51 = 0;
      a6[1] = (__int64)v50;
    }
    v50[v51] = v22;
    *((_DWORD *)v50 - 1) = v51 + 1;
LABEL_55:
    (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a4 + 16LL))(a4, v17, 1);
LABEL_4:
    v15 = *((_DWORD *)v14 - 1);
  }
  while ( v15 );
  sub_186B220(v14 - 1);
  result = &off_1C62200;
  v89[0] = &off_1C62200;
  if ( v92 )
    result = (__int64 (__fastcall **)())sub_186B220(v92);
  if ( v90 )
    return (__int64 (__fastcall **)())sub_186B220(v90);
  return result;
}

