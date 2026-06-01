__int64 __fastcall sub_3684B0(__int64 a1)
{
  char **exception; // r12
  char **v2; // r13
  __int64 v4; // r13
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  _QWORD *v8; // rbx
  unsigned int v9; // r14d
  __int64 v10; // r12
  unsigned int v11; // eax
  int v12; // r12d
  unsigned int v13; // r14d
  __int64 result; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rdi
  __int64 *v18; // r12
  unsigned int v19; // ecx
  __int64 *v20; // rbp
  unsigned __int64 v21; // r12
  __int64 v22; // rsi
  bool v23; // zf
  std::ios_base *v24; // rdi
  int v25; // esi
  unsigned int v26; // r15d
  unsigned int v27; // edx
  unsigned int *v28; // rax
  __int64 v29; // rsi
  _QWORD *v30; // rsi
  int v31; // eax
  __int64 *v32; // r12
  unsigned __int64 v33; // r15
  __int64 v34; // rsi
  _OWORD *v35; // rax
  char *v36; // r12
  __int64 *v37; // rcx
  __int64 *v38; // r10
  __int64 v39; // r9
  char *v40; // r15
  unsigned int v41; // r8d
  __int64 v42; // rdx
  unsigned int v43; // edi
  __int64 v44; // rax
  char *v45; // r11
  char *i; // rax
  __int64 v47; // rsi
  unsigned int v48; // eax
  __int64 v49; // rsi
  int v50; // eax
  _QWORD *v51; // rsi
  char *v52; // rax
  __int64 v53; // rsi
  _QWORD *v54; // rax
  unsigned int v55; // r11d
  size_t v56; // rsi
  unsigned int *v57; // rax
  __int64 v58; // rsi
  int v59; // eax
  int v60; // r14d
  __int64 v61; // rdx
  __int64 *v62; // rdi
  __int64 *v63; // rax
  __int64 v64; // rcx
  int v65; // eax
  __int64 *v66; // r14
  __int64 v67; // rsi
  __int64 v68; // rdi
  _QWORD *v69; // rbx
  __int64 *v70; // rbp
  unsigned __int64 v71; // r12
  __int64 v72; // rsi
  unsigned int v73; // [rsp+0h] [rbp-C8h]
  int v74[2]; // [rsp+0h] [rbp-C8h]
  int v75[2]; // [rsp+0h] [rbp-C8h]
  unsigned int v76; // [rsp+8h] [rbp-C0h]
  __int64 v77; // [rsp+8h] [rbp-C0h]
  __int64 v78; // [rsp+8h] [rbp-C0h]
  __int64 v79; // [rsp+8h] [rbp-C0h]
  __int64 *v80; // [rsp+10h] [rbp-B8h]
  __int64 *v81; // [rsp+10h] [rbp-B8h]
  __int64 *v82; // [rsp+18h] [rbp-B0h]
  __int64 *v83; // [rsp+18h] [rbp-B0h]
  __int64 v84; // [rsp+20h] [rbp-A8h]
  __int64 v85; // [rsp+20h] [rbp-A8h]
  unsigned int v86; // [rsp+28h] [rbp-A0h]
  unsigned int v87; // [rsp+28h] [rbp-A0h]
  unsigned int v88; // [rsp+2Ch] [rbp-9Ch]
  void *ptr; // [rsp+50h] [rbp-78h] BYREF
  __int64 v90; // [rsp+58h] [rbp-70h]
  int v91; // [rsp+60h] [rbp-68h]
  __int64 v92; // [rsp+70h] [rbp-58h] BYREF
  __int64 *v93; // [rsp+78h] [rbp-50h]

  v4 = *(_QWORD *)a1;
  v5 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 16) + 48LL))(*(_QWORD *)(a1 + 16));
  v6 = *(_QWORD *)(v5 + 8);
  v7 = v5;
  v8 = nullptr;
  v9 = 0;
  if ( v6 )
  {
    while ( v9 < *(_DWORD *)(v6 - 4) )
    {
      while ( 1 )
      {
        v10 = *(_QWORD *)(v6 + 8LL * v9);
        if ( v10 )
          ++*(_DWORD *)(v10 + 8);
        if ( !v8 )
        {
          *(_QWORD *)v75 = v7;
          v69 = (_QWORD *)sub_186B270(0x18u);
          v7 = *(_QWORD *)v75;
          *v69 = 2;
          v31 = 1;
          v8 = v69 + 1;
          v6 = *(_QWORD *)(*(_QWORD *)v75 + 8LL);
          v30 = v8;
          goto LABEL_35;
        }
        v11 = *((_DWORD *)v8 - 1);
        if ( v11 == *((_DWORD *)v8 - 2) )
          break;
        ++v9;
        v8[v11] = v10;
        *((_DWORD *)v8 - 1) = v11 + 1;
        if ( v9 >= *(_DWORD *)(v6 - 4) )
          goto LABEL_8;
      }
      v26 = (3 * v11 + 1) >> 1;
      v27 = 8 * v26 + 8;
      if ( 8 * v11 + 8 >= v27 || v11 >= v26 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(&v92, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, &v92);
        sub_233E40((__int64)&v92);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      *(_QWORD *)v74 = v7;
      v28 = (unsigned int *)sub_186B300(v8 - 1, v27);
      v29 = v28[1];
      v7 = *(_QWORD *)v74;
      v8 = v28 + 2;
      *v28 = v26;
      v6 = *(_QWORD *)(*(_QWORD *)v74 + 8LL);
      LODWORD(v28) = v29;
      v30 = &v8[v29];
      v31 = (_DWORD)v28 + 1;
LABEL_35:
      *v30 = v10;
      *((_DWORD *)v8 - 1) = v31;
      if ( !v6 )
        break;
      ++v9;
    }
  }
  else
  {
    v8 = nullptr;
  }
LABEL_8:
  v73 = 0;
  v12 = -1;
  v13 = 0;
LABEL_9:
  result = sub_18290A0(*(_QWORD *)a1);
  if ( !(_BYTE)result
    || ((v15 = *(_QWORD *)(a1 + 64)) == 0 ? (result = 0) : (result = *(unsigned int *)(v15 - 4)),
        (unsigned int)result >= *(_DWORD *)(a1 + 108)) )
  {
    if ( v8 )
    {
      v70 = v8;
      v71 = (unsigned __int64)&v8[*((unsigned int *)v8 - 1)];
      if ( (unsigned __int64)v8 < v71 )
      {
        do
        {
          while ( 1 )
          {
            v72 = *v70;
            if ( *v70 )
            {
              v23 = (*(_DWORD *)(v72 + 8))-- == 1;
              if ( v23 )
                break;
            }
            if ( (unsigned __int64)++v70 >= v71 )
              return sub_186B220(v8 - 1);
          }
          ++v70;
          sub_15D7BC0(v4, v72);
        }
        while ( (unsigned __int64)v70 < v71 );
      }
      return sub_186B220(v8 - 1);
    }
    return result;
  }
  if ( !v12 )
  {
    result = ++v73;
    if ( v73 > 2 )
      goto LABEL_19;
    goto LABEL_29;
  }
  if ( v12 == 1 )
  {
    ++v13;
    sub_361FA0(a1);
    result = sub_368070(a1);
    if ( v13 > 1 )
      goto LABEL_19;
    if ( v8 )
    {
      v32 = v8;
      v33 = (unsigned __int64)&v8[*((unsigned int *)v8 - 1)];
      if ( (unsigned __int64)v8 < v33 )
      {
        do
        {
          while ( 1 )
          {
            v34 = *v32;
            if ( *v32 )
            {
              v23 = (*(_DWORD *)(v34 + 8))-- == 1;
              if ( v23 )
                break;
            }
            if ( (unsigned __int64)++v32 >= v33 )
              goto LABEL_45;
          }
          sub_15D7BC0(v4, v34);
          ++v32;
        }
        while ( (unsigned __int64)v32 < v33 );
      }
LABEL_45:
      *((_DWORD *)v8 - 1) = 0;
    }
    v35 = (_OWORD *)sub_186B270(0x40u);
    ptr = v35;
    *v35 = 0;
    v35[1] = 0;
    v35[2] = 0;
    v35[3] = 0;
    v91 = 0;
    v90 = 8;
    sub_3613D0(a1, (__int64)&ptr);
    v36 = (char *)ptr;
    v76 = v90;
    v37 = *(__int64 **)((*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 16) + 48LL))(*(_QWORD *)(a1 + 16)) + 8);
    if ( !v37 )
      goto LABEL_61;
    v38 = &v37[*((unsigned int *)v37 - 1)];
    if ( v38 == v37 )
      goto LABEL_61;
    v39 = 8LL * v76;
    v40 = &v36[v39];
    v41 = v76 - 1;
    while ( 1 )
    {
      v42 = *v37;
      v43 = *(_DWORD *)(*v37 + 12);
      v44 = 8LL * (v41 & v43);
      v45 = &v36[v44];
      if ( v44 != v39 )
      {
        for ( i = &v36[v44]; v40 != i; i += 8 )
        {
          v47 = *(_QWORD *)i;
          if ( *(_QWORD *)i > 1u )
          {
            if ( *(_DWORD *)(v47 + 12) == v43 && v42 == v47 )
              goto LABEL_60;
          }
          else if ( !v47 )
          {
            goto LABEL_56;
          }
        }
      }
      if ( v36 == v45 )
      {
LABEL_56:
        ++*(_DWORD *)(v42 + 8);
        if ( !v8 )
          goto LABEL_72;
        goto LABEL_57;
      }
      v52 = v36;
      while ( 1 )
      {
        v53 = *(_QWORD *)v52;
        if ( *(_QWORD *)v52 <= 1u )
          break;
        if ( *(_DWORD *)(v53 + 12) == v43 && v42 == v53 )
          goto LABEL_60;
LABEL_68:
        v52 += 8;
        if ( v45 == v52 )
          goto LABEL_56;
      }
      if ( v53 )
        goto LABEL_68;
      ++*(_DWORD *)(v42 + 8);
      if ( !v8 )
      {
LABEL_72:
        v86 = v41;
        v84 = v39;
        v82 = v37;
        v80 = v38;
        v77 = v42;
        v54 = (_QWORD *)sub_186B270(0x18u);
        v42 = v77;
        v38 = v80;
        *v54 = 2;
        v8 = v54 + 1;
        v37 = v82;
        v39 = v84;
        v50 = 1;
        v41 = v86;
        v51 = v8;
        goto LABEL_59;
      }
LABEL_57:
      v48 = *((_DWORD *)v8 - 1);
      if ( v48 == *((_DWORD *)v8 - 2) )
      {
        v55 = (3 * v48 + 1) >> 1;
        v56 = 8 * v55 + 8;
        if ( 8 * v48 + 8 >= (unsigned int)v56 || v48 >= v55 )
        {
          v2 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(&v92, "Overflow encountered when expanding vector");
          *v2 = (char *)off_1C63128;
          sub_2333C0(v2 + 1, &v92);
          sub_233E40((__int64)&v92);
          __cxa_throw(v2, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v88 = v41;
        v87 = (3 * v48 + 1) >> 1;
        v85 = v39;
        v83 = v37;
        v81 = v38;
        v78 = v42;
        v57 = (unsigned int *)sub_186B300(v8 - 1, v56);
        v58 = v57[1];
        v8 = v57 + 2;
        v42 = v78;
        v38 = v81;
        v37 = v83;
        v39 = v85;
        *v57 = v87;
        LODWORD(v57) = v58;
        v41 = v88;
        v51 = &v8[v58];
        v50 = (_DWORD)v57 + 1;
      }
      else
      {
        v49 = v48;
        v50 = v48 + 1;
        v51 = &v8[v49];
      }
LABEL_59:
      *v51 = v42;
      *((_DWORD *)v8 - 1) = v50;
LABEL_60:
      if ( v38 == ++v37 )
      {
LABEL_61:
        if ( !v36 )
          goto LABEL_29;
        sub_186B220(v36);
        v24 = *(std::ios_base **)(a1 + 8);
        if ( v8 )
          goto LABEL_30;
LABEL_63:
        v25 = 0;
LABEL_31:
        v12 = sub_E60CB0(v24, v25, (int)v8);
        goto LABEL_9;
      }
    }
  }
  if ( v12 != -1 )
    goto LABEL_29;
  v16 = *(_QWORD *)a1;
  v17 = *(_QWORD *)(a1 + 8);
  v93 = nullptr;
  v92 = v16;
  (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v17 + 24LL))(v17, &v92);
  result = sub_3628B0(a1, (__int64)&v92);
  v18 = v93;
  if ( v93 )
  {
    v19 = *((_DWORD *)v93 - 1);
    if ( !v19 )
    {
      result = sub_186B220(v93 - 1);
      goto LABEL_19;
    }
    v59 = 214013 * *(_DWORD *)(a1 + 24) + 2531011;
    *(_DWORD *)(a1 + 24) = v59;
    if ( v8 )
    {
      v60 = *((_DWORD *)v8 - 1);
      if ( v60 )
      {
        v61 = v18[(HIWORD(v59) & 0x7FFFu) % v19];
        v62 = v8;
        v63 = &v8[v60];
        while ( 1 )
        {
          v64 = *v62;
          if ( v61 == *v62 )
            break;
          if ( v63 == ++v62 )
            goto LABEL_86;
        }
        if ( v62 + 1 != v63 )
        {
          v79 = *v62;
          memmove(v62, v62 + 1, (char *)(v63 - 1) - (char *)v62);
          v64 = v79;
        }
        *((_DWORD *)v8 - 1) = v60 - 1;
        if ( v64 )
        {
          v65 = *(_DWORD *)(v64 + 8);
          v13 = v65 - 1;
          *(_DWORD *)(v64 + 8) = v65 - 1;
          if ( v65 == 1 )
          {
            sub_15D7BC0(v4, v64);
            v18 = v93;
            if ( !v93 )
            {
              v24 = *(std::ios_base **)(a1 + 8);
LABEL_30:
              v25 = *((_DWORD *)v8 - 1);
              goto LABEL_31;
            }
          }
        }
      }
    }
LABEL_86:
    v66 = &v18[*((unsigned int *)v18 - 1)];
    if ( v18 >= v66 )
      goto LABEL_93;
    do
    {
      while ( 1 )
      {
        v67 = *v18;
        if ( *v18 )
        {
          v68 = v92;
          v23 = (*(_DWORD *)(v67 + 8))-- == 1;
          if ( v23 )
            break;
        }
        if ( ++v18 >= v66 )
          goto LABEL_92;
      }
      sub_15D7BC0(v68, v67);
      ++v18;
    }
    while ( v18 < v66 );
LABEL_92:
    v18 = v93;
    if ( v93 )
LABEL_93:
      sub_186B220(v18 - 1);
    v13 = 0;
LABEL_29:
    v24 = *(std::ios_base **)(a1 + 8);
    if ( !v8 )
      goto LABEL_63;
    goto LABEL_30;
  }
LABEL_19:
  if ( v8 )
  {
    v20 = v8;
    v21 = (unsigned __int64)&v8[*((unsigned int *)v8 - 1)];
    if ( (unsigned __int64)v8 < v21 )
    {
      do
      {
        while ( 1 )
        {
          v22 = *v20;
          if ( *v20 )
          {
            v23 = (*(_DWORD *)(v22 + 8))-- == 1;
            if ( v23 )
              break;
          }
          if ( (unsigned __int64)++v20 >= v21 )
            return sub_186B220(v8 - 1);
        }
        ++v20;
        sub_15D7BC0(v4, v22);
      }
      while ( (unsigned __int64)v20 < v21 );
    }
    return sub_186B220(v8 - 1);
  }
  return result;
}

