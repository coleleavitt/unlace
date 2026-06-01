__int64 __fastcall sub_5F8550(__int64 a1, __int64 *a2, double a3)
{
  char **v3; // r13
  char **v4; // r13
  char **exception; // r13
  char **v6; // r14
  __int64 v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // r8
  int v10; // r9d
  __int64 v11; // rax
  __int64 v12; // rdx
  bool *v13; // rbx
  __int64 v14; // r14
  __int64 v15; // rax
  __int64 v16; // r15
  __int64 v17; // r13
  __int64 v18; // r12
  __int64 v19; // rdx
  int v20; // eax
  _QWORD *v21; // rdx
  bool v22; // r12
  unsigned int v23; // eax
  __int64 v24; // rdx
  int v25; // eax
  bool *v26; // rdx
  unsigned int v27; // eax
  unsigned int v28; // edx
  size_t v29; // rsi
  unsigned int *v30; // rax
  unsigned int v31; // r13d
  size_t v32; // rsi
  unsigned int *v33; // rax
  __int64 v34; // rdx
  __int64 v35; // r13
  unsigned __int64 v36; // r12
  unsigned __int64 v37; // r15
  __int64 v38; // rax
  _QWORD *v39; // rdx
  int v40; // eax
  unsigned int v41; // eax
  __int64 v42; // rdx
  int v43; // eax
  bool *v44; // rdx
  unsigned __int64 v45; // rax
  unsigned __int64 v46; // rax
  unsigned int v47; // eax
  __int64 v48; // rax
  __int64 v49; // r12
  __int64 v50; // rdi
  _DWORD *v51; // rax
  int v52; // r9d
  int v53; // edx
  int v54; // ecx
  __int64 v55; // r13
  __int64 *v56; // r14
  unsigned __int64 v57; // r15
  __int64 v58; // rsi
  bool v59; // zf
  unsigned int v60; // edx
  size_t v61; // rsi
  unsigned int *v62; // rax
  _DWORD *v63; // rdi
  unsigned int v64; // r15d
  size_t v65; // rsi
  unsigned int *v66; // rax
  __int64 v67; // rdx
  __int64 v68; // rax
  _QWORD *v69; // rax
  __int64 *v71; // rbx
  unsigned __int64 v72; // r12
  __int64 v73; // rsi
  __int64 v74; // [rsp+0h] [rbp-F0h]
  __int64 v76; // [rsp+10h] [rbp-E0h]
  unsigned int v77; // [rsp+1Ch] [rbp-D4h]
  __int64 v78; // [rsp+20h] [rbp-D0h]
  __int64 v79; // [rsp+28h] [rbp-C8h]
  __int64 v80; // [rsp+30h] [rbp-C0h]
  __int64 v81; // [rsp+38h] [rbp-B8h]
  __int64 v82; // [rsp+40h] [rbp-B0h]
  unsigned int v83; // [rsp+48h] [rbp-A8h]
  unsigned int v84; // [rsp+4Ch] [rbp-A4h]
  __int64 v85; // [rsp+58h] [rbp-98h]
  int v86; // [rsp+58h] [rbp-98h]
  unsigned int v87; // [rsp+58h] [rbp-98h]
  _DWORD *v89; // [rsp+68h] [rbp-88h]
  __int64 v90; // [rsp+90h] [rbp-60h] BYREF
  __int64 v91[10]; // [rsp+A0h] [rbp-50h] BYREF

  v7 = *a2;
  v80 = a2[1];
  v76 = sub_186B270(0xF8u);
  sub_63D370(v76, v7);
  v11 = a2[3];
  if ( !v11 )
    return v76;
  v12 = *(unsigned int *)(v11 - 4);
  v78 = *(_QWORD *)(a1 + 24);
  if ( !(_DWORD)v12 )
    return v76;
  v82 = 0;
  v79 = 0;
  v89 = nullptr;
  v81 = 0;
  v74 = 8 * v12;
  v13 = nullptr;
  while ( 1 )
  {
    if ( v13 )
      *((_DWORD *)v13 - 1) = 0;
    v14 = *(_QWORD *)(v11 + v82);
    v15 = *(unsigned int *)(v14 + 68);
    v83 = v15;
    v77 = *(_DWORD *)(v14 + 56);
    if ( (_DWORD)v15 )
    {
      v16 = v14;
      v85 = v14 + 8 * v15;
      sub_5F82B0((int)&v90, a1, *(_QWORD *)(v14 + 80) & 0xFFFFFFFFFFFFFFF8LL, v8, v9, v10);
      v17 = v90;
      if ( v89 )
      {
        v18 = v14;
        goto LABEL_15;
      }
      v68 = sub_186B270(0x18u) + 8;
      v18 = v14;
      *(_QWORD *)(v68 - 8) = 2;
      v21 = (_QWORD *)v68;
      v89 = (_DWORD *)v68;
      v20 = 1;
      v8 = (__int64)v89;
      while ( 1 )
      {
        *v21 = v17;
        *(_DWORD *)(v8 - 4) = v20;
        v22 = (*(_QWORD *)(v18 + 80) & 7LL) == 1;
        if ( v13 )
        {
          v23 = *((_DWORD *)v13 - 1);
          if ( v23 == *((_DWORD *)v13 - 2) )
          {
            v31 = (3 * v23 + 1) >> 1;
            v32 = v31 + 8;
            if ( v23 + 8 >= (unsigned int)v32 || v23 >= v31 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v91, "Overflow encountered when expanding vector");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, v91);
              sub_233E40((__int64)v91);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v33 = (unsigned int *)sub_186B300(v13 - 8, v32);
            v34 = v33[1];
            v13 = (bool *)(v33 + 2);
            *v33 = v31;
            LODWORD(v33) = v34;
            v26 = &v13[v34];
            v25 = (_DWORD)v33 + 1;
          }
          else
          {
            v24 = v23;
            v25 = v23 + 1;
            v26 = &v13[v24];
          }
        }
        else
        {
          v69 = (_QWORD *)sub_186B270(0xAu);
          *v69 = 2;
          v13 = (bool *)(v69 + 1);
          v25 = 1;
          v26 = v13;
        }
        *v26 = v22;
        v16 += 8;
        *((_DWORD *)v13 - 1) = v25;
        if ( v16 == v85 )
          break;
        v18 = v16;
        sub_5F82B0((int)&v90, a1, *(_QWORD *)(v16 + 80) & 0xFFFFFFFFFFFFFFF8LL, v8, v9, v10);
        v17 = v90;
LABEL_15:
        v8 = (__int64)v89;
        v27 = *(v89 - 1);
        if ( v27 == *(v89 - 2) )
        {
          v28 = (3 * v27 + 1) >> 1;
          v29 = 8 * v28 + 8;
          if ( 8 * v27 + 8 >= (unsigned int)v29 || v27 >= v28 )
          {
            v6 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v91, "Overflow encountered when expanding vector");
            *v6 = (char *)off_1C63128;
            sub_2333C0(v6 + 1, v91);
            sub_233E40((__int64)v91);
            __cxa_throw(v6, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v84 = (3 * v27 + 1) >> 1;
          v30 = (unsigned int *)sub_186B300(v89 - 2, v29);
          v8 = (__int64)(v30 + 2);
          v89 = v30 + 2;
          *v30 = v84;
          LODWORD(v30) = v30[1];
          v21 = (_QWORD *)(v8 + 8LL * (unsigned int)v30);
          v20 = (_DWORD)v30 + 1;
        }
        else
        {
          v19 = v27;
          v20 = v27 + 1;
          v21 = &v89[2 * v19];
        }
      }
    }
    if ( v83 < v77 )
    {
      v35 = v14 + 8LL * v83;
      v36 = v14 + 8 * (v83 + (unsigned __int64)(v77 - 1 - v83)) + 8;
      v37 = *(_QWORD *)(v35 + 80) & 0xFFFFFFFFFFFFFFF8LL;
      if ( *(_QWORD *)(v35 + 80) > 7u )
        ++*(_DWORD *)(v37 + 8);
      if ( !v89 )
      {
        v38 = sub_186B270(0x18u) + 8;
        *(_QWORD *)(v38 - 8) = 2;
        v39 = (_QWORD *)v38;
        v89 = (_DWORD *)v38;
        v8 = v38;
        v40 = 1;
        goto LABEL_27;
      }
      while ( 1 )
      {
        v47 = *(v89 - 1);
        if ( v47 == *(v89 - 2) )
        {
          v60 = (3 * v47 + 1) >> 1;
          v61 = 8 * v60 + 8;
          if ( 8 * v47 + 8 >= (unsigned int)v61 || v47 >= v60 )
          {
            v4 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v91, "Overflow encountered when expanding vector");
            *v4 = (char *)off_1C63128;
            sub_2333C0(v4 + 1, v91);
            sub_233E40((__int64)v91);
            __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v87 = (3 * v47 + 1) >> 1;
          v62 = (unsigned int *)sub_186B300(v89 - 2, v61);
          v63 = v62 + 2;
          v89 = v62 + 2;
          v8 = (__int64)(v62 + 2);
          *v62 = v87;
          LODWORD(v62) = v62[1];
          v39 = &v63[2 * (unsigned int)v62];
          v40 = (_DWORD)v62 + 1;
LABEL_27:
          *v39 = v37;
          *(_DWORD *)(v8 - 4) = v40;
          if ( !v13 )
          {
LABEL_35:
            v48 = sub_186B270(0xAu);
            v35 += 8;
            *(_QWORD *)v48 = 2;
            v13 = (bool *)(v48 + 8);
            *(_BYTE *)(v48 + 8) = 0;
            *(_DWORD *)(v48 + 4) = 1;
            if ( v36 == v35 )
              break;
            goto LABEL_31;
          }
        }
        else
        {
          v8 = (__int64)v89;
          *(_QWORD *)&v89[2 * v47] = v37;
          *(v89 - 1) = v47 + 1;
          if ( !v13 )
            goto LABEL_35;
        }
        v41 = *((_DWORD *)v13 - 1);
        if ( v41 == *((_DWORD *)v13 - 2) )
        {
          v64 = (3 * v41 + 1) >> 1;
          v65 = v64 + 8;
          if ( v41 + 8 >= (unsigned int)v65 || v41 >= v64 )
          {
            v3 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v91, "Overflow encountered when expanding vector");
            *v3 = (char *)off_1C63128;
            sub_2333C0(v3 + 1, v91);
            sub_233E40((__int64)v91);
            __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v66 = (unsigned int *)sub_186B300(v13 - 8, v65);
          v67 = v66[1];
          v13 = (bool *)(v66 + 2);
          *v66 = v64;
          LODWORD(v66) = v67;
          v44 = &v13[v67];
          v43 = (_DWORD)v66 + 1;
        }
        else
        {
          v42 = v41;
          v43 = v41 + 1;
          v44 = &v13[v42];
        }
        v35 += 8;
        *v44 = 0;
        *((_DWORD *)v13 - 1) = v43;
        if ( v36 == v35 )
          break;
LABEL_31:
        v45 = *(_QWORD *)(v35 + 80);
        v37 = 0;
        if ( v45 > 7 )
        {
          v46 = v45 & 0xFFFFFFFFFFFFFFF8LL;
          ++*(_DWORD *)(v46 + 8);
          v37 = v46;
        }
      }
    }
    sub_5F82B0((int)v91, a1, *(_QWORD *)(v14 + 40), v8, v9, v10);
    v49 = v91[0];
    if ( v81 && (v50 = v91[1], v86 = *(_DWORD *)(v81 + 8), *(_DWORD *)(v81 + 8) = v86 - 1, v86 == 1) )
    {
      sub_15D7BC0(v50, v81);
      v51 = v89;
      v52 = v14 + 72;
      if ( v89 )
      {
LABEL_39:
        v53 = *(v51 - 1);
        v54 = (int)v51;
        goto LABEL_40;
      }
    }
    else
    {
      v51 = v89;
      v52 = v14 + 72;
      if ( v89 )
        goto LABEL_39;
    }
    v53 = 0;
    v54 = (int)v51;
LABEL_40:
    v55 = sub_62C680(v80, v49, v53, v54, (_DWORD)v13, v52, 1);
    if ( v55 )
      sub_62A000(v80, v55);
    if ( v79 )
      sub_62A410(v80, v79);
    sub_63DAD0(v76, v55, a3);
    v82 += 8;
    v8 = v74;
    if ( v82 == v74 )
      break;
    if ( v89 )
    {
      v56 = (__int64 *)v89;
      v57 = (unsigned __int64)&v89[2 * *(v89 - 1)];
      if ( (unsigned __int64)v89 < v57 )
      {
        do
        {
          while ( 1 )
          {
            v58 = *v56;
            if ( *v56 )
            {
              v59 = (*(_DWORD *)(v58 + 8))-- == 1;
              if ( v59 )
                break;
            }
            if ( (unsigned __int64)++v56 >= v57 )
              goto LABEL_52;
          }
          sub_15D7BC0(v78, v58);
          ++v56;
        }
        while ( (unsigned __int64)v56 < v57 );
      }
LABEL_52:
      *(v89 - 1) = 0;
    }
    v79 = v55;
    v81 = v49;
    v11 = a2[3];
  }
  if ( v13 )
    sub_186B220(v13 - 8);
  if ( v49 )
  {
    v59 = (*(_DWORD *)(v49 + 8))-- == 1;
    if ( v59 )
      sub_15D7BC0(v78, v49);
  }
  v71 = (__int64 *)v89;
  if ( v89 )
  {
    v72 = (unsigned __int64)&v89[2 * *(v89 - 1)];
    if ( (unsigned __int64)v89 < v72 )
    {
      do
      {
        v73 = *v71;
        if ( *v71 )
        {
          v59 = (*(_DWORD *)(v73 + 8))-- == 1;
          if ( v59 )
            sub_15D7BC0(v78, v73);
        }
        ++v71;
      }
      while ( (unsigned __int64)v71 < v72 );
    }
    sub_186B220(v89 - 2);
  }
  if ( v55 )
    sub_62A410(v80, v55);
  return v76;
}

