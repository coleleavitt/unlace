__int64 __fastcall sub_53ADA0(_QWORD *a1, __int64 *a2, _DWORD *a3, char a4, __int64 a5)
{
  int v6; // ecx
  int v7; // r8d
  int v8; // r9d
  __int64 v9; // rdi
  __int64 v10; // rax
  __int64 v11; // r13
  void *v12; // rbp
  __int64 *v13; // rcx
  int v14; // r8d
  __int64 v15; // r9
  __int64 v16; // rax
  __int64 *v17; // rbx
  unsigned int v18; // ebp
  __int64 v19; // r14
  __int64 v20; // r15
  __int64 v21; // rax
  int v22; // ecx
  __int64 v23; // r15
  __int64 v24; // rsi
  __int64 v25; // rdi
  __int64 v26; // rax
  __int64 v27; // r15
  unsigned int v28; // eax
  __int64 v29; // rdx
  int v30; // eax
  __int64 *v31; // rdx
  unsigned int v32; // ecx
  __int64 v33; // rdi
  __int64 v34; // rbp
  __int64 v35; // rax
  __int64 v36; // r12
  _QWORD *v37; // rdx
  unsigned int v38; // eax
  __int64 v39; // rcx
  __int64 result; // rax
  __int64 *v41; // rcx
  bool v42; // zf
  __int64 *v43; // rbp
  unsigned __int64 v44; // r12
  __int64 v45; // rsi
  unsigned int v46; // ecx
  size_t v47; // rsi
  unsigned int *v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rax
  unsigned int v51; // r14d
  size_t v52; // rsi
  unsigned int *v53; // rax
  __int64 v54; // rcx
  __int64 v55; // rdi
  __int64 v56; // rax
  __int64 v57; // rbp
  unsigned int v58; // ecx
  __int64 v59; // rax
  unsigned int v60; // edx
  __int64 v61; // rcx
  int v62; // edx
  unsigned int v63; // r14d
  unsigned int v64; // eax
  unsigned int *v65; // rax
  __int64 v66; // rdx
  char **v67; // r14
  _QWORD *v68; // rax
  _QWORD *v69; // rax
  _QWORD *v70; // rax
  unsigned int v71; // ecx
  unsigned int v72; // eax
  unsigned int *v73; // rax
  __int64 v74; // rax
  _QWORD *v75; // rax
  char **exception; // rbp
  char **v77; // rbp
  char **v78; // r14
  char **v79; // rbp
  __int64 v83; // [rsp+20h] [rbp-98h]
  _QWORD *v85; // [rsp+30h] [rbp-88h]
  unsigned int v86; // [rsp+38h] [rbp-80h]
  __int64 v87; // [rsp+38h] [rbp-80h]
  unsigned int v88; // [rsp+38h] [rbp-80h]
  __int64 v89[2]; // [rsp+60h] [rbp-58h] BYREF
  _QWORD v90[9]; // [rsp+70h] [rbp-48h] BYREF

  v83 = a1[5];
  v85 = a1 + 6;
  v89[0] = 0;
  v89[1] = 0;
  v90[0] = 1;
  v90[1] = 0;
  sub_182CBA0(qword_1C7F2C0, v90);
  v9 = a1[7];
  BYTE4(v90[0]) &= ~1u;
  LODWORD(v90[0]) = 1;
  if ( !v9 )
  {
    sub_16669E0(v85);
    v9 = a1[7];
  }
  v10 = sub_166A700(v9, (unsigned int)v89, 1, v6, v7, v8);
  v11 = v10;
  if ( v10 )
    ++*(_DWORD *)(v10 + 8);
  v12 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v89);
  sub_182CBA0(v12, v90);
  v16 = *a2;
  if ( *a2 )
  {
    v17 = nullptr;
    v18 = 0;
    do
    {
      if ( v18 >= *(_DWORD *)(v16 - 4) )
        break;
      v15 = 32LL * v18;
      LODWORD(v13) = *(_DWORD *)(v16 + v15);
      v19 = v15;
      if ( (_DWORD)v13 )
      {
        v20 = a1[5];
        v21 = sub_15D2CD0(a1[6], 5, 1, 0, 0);
        v23 = sub_15DB5C0(v20, v18, v21);
        v16 = *a2;
        v24 = *a2 + v19;
        if ( (*(_BYTE *)(v24 + 4) & 1) != 0
          || *(_DWORD *)v24 != 1
          || (*(_BYTE *)(v24 + 20) & 1) != 0
          || *(_DWORD *)(v24 + 16) != 1 )
        {
          v25 = a1[7];
          if ( !v25 )
          {
            v87 = *a2 + v19;
            sub_16669E0(v85);
            LODWORD(v24) = v87;
            v25 = a1[7];
          }
          sub_166A700(v25, v24, 1, v22, v14, v15);
          v26 = sub_15E1B70(a1[6]);
          v27 = v26;
          if ( v26 )
            ++*(_DWORD *)(v26 + 8);
          if ( v17 )
          {
            v28 = *((_DWORD *)v17 - 1);
            if ( v28 == *((_DWORD *)v17 - 2) )
            {
              v46 = (3 * v28 + 1) >> 1;
              v47 = 8 * v46 + 8;
              if ( 8 * v28 + 8 >= (unsigned int)v47 || v28 >= v46 )
              {
                exception = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0(v89, "Overflow encountered when expanding vector");
                *exception = (char *)off_1C63128;
                sub_2333C0(exception + 1, v89);
                sub_233E40((__int64)v89);
                __cxa_throw(
                  exception,
                  (struct type_info *)&`typeinfo for'default_exception,
                  (void (*)(void *))sub_230E50);
              }
              v86 = (3 * v28 + 1) >> 1;
              v48 = (unsigned int *)sub_186B300(v17 - 1, v47);
              v49 = v48[1];
              LODWORD(v13) = v86;
              v17 = (__int64 *)(v48 + 2);
              *v48 = v86;
              LODWORD(v48) = v49;
              v31 = &v17[v49];
              v30 = (_DWORD)v48 + 1;
            }
            else
            {
              v29 = v28;
              v30 = v28 + 1;
              v31 = &v17[v29];
            }
          }
          else
          {
            v68 = (_QWORD *)sub_186B270(0x18u);
            v31 = v68 + 1;
            *v68 = 2;
            v30 = 1;
            v17 = v31;
          }
          *v31 = v27;
          *((_DWORD *)v17 - 1) = v30;
          v16 = *a2;
        }
        else
        {
          if ( v23 )
            ++*(_DWORD *)(v23 + 8);
          if ( v17 )
          {
            v60 = *((_DWORD *)v17 - 1);
            if ( v60 == *((_DWORD *)v17 - 2) )
            {
              v71 = (3 * v60 + 1) >> 1;
              v72 = 8 * v71 + 8;
              if ( 8 * v60 + 8 >= v72 || v60 >= v71 )
              {
                v79 = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0(v89, "Overflow encountered when expanding vector");
                *v79 = (char *)off_1C63128;
                sub_2333C0(v79 + 1, v89);
                sub_233E40((__int64)v89);
                __cxa_throw(v79, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
              v88 = (3 * v60 + 1) >> 1;
              v73 = (unsigned int *)sub_186B300(v17 - 1, v72);
              v17 = (__int64 *)(v73 + 2);
              *v73 = v88;
              v74 = v73[1];
              v13 = &v17[v74];
              v62 = v74 + 1;
              v16 = *a2;
            }
            else
            {
              v61 = v60;
              v62 = v60 + 1;
              v13 = &v17[v61];
            }
          }
          else
          {
            v75 = (_QWORD *)sub_186B270(0x18u);
            *v75 = 2;
            v62 = 1;
            v17 = v75 + 1;
            v16 = *a2;
            v13 = v17;
          }
          *v13 = v23;
          *((_DWORD *)v17 - 1) = v62;
        }
      }
      ++v18;
    }
    while ( v16 );
    if ( !*a3 )
    {
      if ( v17 )
      {
        v32 = *((_DWORD *)v17 - 1);
        goto LABEL_23;
      }
LABEL_78:
      v33 = a1[6];
      v17 = nullptr;
LABEL_25:
      v34 = sub_15E1AF0(v33);
      if ( !v34 )
        goto LABEL_27;
      goto LABEL_26;
    }
  }
  else
  {
    if ( !*a3 )
      goto LABEL_78;
    v17 = nullptr;
  }
  v55 = a1[7];
  if ( !v55 )
  {
    sub_16669E0(v85);
    v55 = a1[7];
  }
  v56 = sub_166A700(v55, (_DWORD)a3, 1, (_DWORD)v13, v14, v15);
  v57 = v56;
  if ( v56 )
    ++*(_DWORD *)(v56 + 8);
  if ( !v17 )
  {
    v70 = (_QWORD *)sub_186B270(0x18u);
    v70[1] = v57;
    v17 = v70 + 1;
    v33 = a1[6];
    *v70 = 0x100000002LL;
    goto LABEL_24;
  }
  v58 = *((_DWORD *)v17 - 1);
  if ( v58 == *((_DWORD *)v17 - 2) )
  {
    v63 = (3 * v58 + 1) >> 1;
    v64 = 8 * v63 + 8;
    if ( 8 * v58 + 8 >= v64 || v58 >= v63 )
    {
      v77 = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0(v89, "Overflow encountered when expanding vector");
      *v77 = (char *)off_1C63128;
      sub_2333C0(v77 + 1, v89);
      sub_233E40((__int64)v89);
      __cxa_throw(v77, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v65 = (unsigned int *)sub_186B300(v17 - 1, v64);
    v66 = v65[1];
    v17 = (__int64 *)(v65 + 2);
    *v65 = v63;
    *(_QWORD *)&v65[2 * v66 + 2] = v57;
    v32 = v66 + 1;
    v65[1] = v66 + 1;
  }
  else
  {
    v59 = v58;
    v32 = v58 + 1;
    v17[v59] = v57;
    *((_DWORD *)v17 - 1) = v32;
  }
LABEL_23:
  v33 = a1[6];
  if ( v32 != 1 )
    goto LABEL_25;
LABEL_24:
  v34 = *v17;
  if ( *(_WORD *)(*v17 + 4) )
    goto LABEL_25;
LABEL_26:
  ++*(_DWORD *)(v34 + 8);
LABEL_27:
  if ( !a4 )
  {
    v50 = sub_15E1B70(a1[6]);
    v36 = v50;
    if ( v50 )
      ++*(_DWORD *)(v50 + 8);
    v37 = *(_QWORD **)(a5 + 8);
    if ( v37 )
    {
      v38 = *((_DWORD *)v37 - 1);
      if ( v38 != *((_DWORD *)v37 - 2) )
        goto LABEL_32;
      v51 = (3 * v38 + 1) >> 1;
      v52 = 8 * v51 + 8;
      if ( 8 * v38 + 8 >= (unsigned int)v52 || v38 >= v51 )
      {
        v78 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v89, "Overflow encountered when expanding vector");
        *v78 = (char *)off_1C63128;
        sub_2333C0(v78 + 1, v89);
        sub_233E40((__int64)v89);
        __cxa_throw(v78, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
LABEL_57:
      v53 = (unsigned int *)sub_186B300(v37 - 1, v52);
      v37 = v53 + 2;
      *(_QWORD *)(a5 + 8) = v53 + 2;
      v54 = v53[1];
      *v53 = v51;
      LODWORD(v53) = v54;
      v41 = &v37[v54];
      result = (unsigned int)((_DWORD)v53 + 1);
      goto LABEL_33;
    }
LABEL_83:
    v69 = (_QWORD *)sub_186B270(0x18u);
    v37 = v69 + 1;
    *v69 = 2;
    v41 = v69 + 1;
    *(_QWORD *)(a5 + 8) = v69 + 1;
    result = 1;
    goto LABEL_33;
  }
  v35 = sub_15E1B70(a1[5]);
  v36 = v35;
  if ( v35 )
    ++*(_DWORD *)(v35 + 8);
  v37 = *(_QWORD **)(a5 + 8);
  if ( !v37 )
    goto LABEL_83;
  v38 = *((_DWORD *)v37 - 1);
  if ( v38 == *((_DWORD *)v37 - 2) )
  {
    v51 = (3 * v38 + 1) >> 1;
    v52 = 8 * v51 + 8;
    if ( 8 * v38 + 8 >= (unsigned int)v52 || v38 >= v51 )
    {
      v67 = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0(v89, "Overflow encountered when expanding vector");
      *v67 = (char *)off_1C63128;
      sub_2333C0(v67 + 1, v89);
      sub_233E40((__int64)v89);
      __cxa_throw(v67, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    goto LABEL_57;
  }
LABEL_32:
  v39 = v38;
  result = v38 + 1;
  v41 = &v37[v39];
LABEL_33:
  *v41 = v36;
  *((_DWORD *)v37 - 1) = result;
  if ( v34 )
  {
    v42 = (*(_DWORD *)(v34 + 8))-- == 1;
    if ( v42 )
      result = sub_15D7BC0(v83, v34);
  }
  if ( v11 )
  {
    v42 = (*(_DWORD *)(v11 + 8))-- == 1;
    if ( v42 )
      result = sub_15D7BC0(v83, v11);
  }
  if ( v17 )
  {
    v43 = v17;
    v44 = (unsigned __int64)&v17[*((unsigned int *)v17 - 1)];
    if ( (unsigned __int64)v17 < v44 )
    {
      do
      {
        while ( 1 )
        {
          v45 = *v43;
          if ( *v43 )
          {
            v42 = (*(_DWORD *)(v45 + 8))-- == 1;
            if ( v42 )
              break;
          }
          if ( (unsigned __int64)++v43 >= v44 )
            return sub_186B220(v17 - 1);
        }
        ++v43;
        sub_15D7BC0(v83, v45);
      }
      while ( (unsigned __int64)v43 < v44 );
    }
    return sub_186B220(v17 - 1);
  }
  return result;
}

