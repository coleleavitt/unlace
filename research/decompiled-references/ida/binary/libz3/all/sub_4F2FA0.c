__int64 __fastcall sub_4F2FA0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _QWORD *a5, _QWORD *a6)
{
  char **exception; // r15
  char **v7; // r15
  __int64 v12; // r15
  __int64 v13; // rax
  int v14; // r8d
  int v15; // r9d
  int v16; // edx
  _DWORD *v17; // rax
  __int64 v18; // rax
  unsigned int v19; // r14d
  int v20; // edx
  int v21; // r9d
  _QWORD *v22; // rdx
  int v23; // r13d
  __int64 v24; // rax
  _DWORD *v25; // rax
  __int64 v26; // rdx
  unsigned int v27; // r13d
  unsigned int v28; // eax
  __int64 v29; // rsi
  unsigned int v30; // ecx
  __int64 v31; // rdi
  unsigned int v32; // r8d
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rdx
  int *v36; // rax
  int *v37; // rdx
  int v38; // ecx
  __int64 v39; // rax
  __int64 v40; // r15
  _QWORD *v41; // rdx
  unsigned int v42; // eax
  __int64 v43; // rcx
  int v44; // eax
  __int64 *v45; // rcx
  __int64 v47; // rax
  __int64 v48; // rbx
  __int64 v49; // rdx
  unsigned int v50; // eax
  unsigned int v51; // r15d
  size_t v52; // rsi
  unsigned int *v53; // rax
  __int64 v54; // rax
  unsigned int v55; // r13d
  size_t v56; // rsi
  unsigned int *v57; // rax
  __int64 v58; // rcx
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // rax
  int v62; // eax
  __int64 v63; // rdi
  __int64 v64; // rdx
  _QWORD *v65; // rax
  _QWORD *v66; // rax
  void *v67; // [rsp+0h] [rbp-E0h]
  __int64 v68; // [rsp+10h] [rbp-D0h]
  int v69; // [rsp+1Ch] [rbp-C4h]
  __int64 v70; // [rsp+20h] [rbp-C0h]
  int v71[2]; // [rsp+28h] [rbp-B8h]
  int v72; // [rsp+28h] [rbp-B8h]
  __int64 v73; // [rsp+28h] [rbp-B8h]
  __int64 v75; // [rsp+48h] [rbp-98h]
  _QWORD *v76; // [rsp+48h] [rbp-98h]
  int v77; // [rsp+54h] [rbp-8Ch] BYREF
  int v78; // [rsp+58h] [rbp-88h] BYREF
  int v79; // [rsp+5Ch] [rbp-84h] BYREF
  int v80; // [rsp+60h] [rbp-80h] BYREF
  unsigned int v81; // [rsp+64h] [rbp-7Ch] BYREF
  __int64 v82; // [rsp+68h] [rbp-78h] BYREF
  int v83[4]; // [rsp+70h] [rbp-70h] BYREF
  __int64 v84; // [rsp+80h] [rbp-60h] BYREF
  __int64 v85; // [rsp+88h] [rbp-58h]
  int v86[2]; // [rsp+90h] [rbp-50h] BYREF
  char v87; // [rsp+98h] [rbp-48h]
  int v88; // [rsp+A0h] [rbp-40h] BYREF
  char v89; // [rsp+A8h] [rbp-38h]

  v12 = *(_QWORD *)(a1 + 8);
  v75 = a2;
  v13 = sub_4D6490(*(_QWORD *)(v12 + 24));
  *(_QWORD *)v86 = 0;
  *(_QWORD *)v71 = v13;
  sub_14B7810((int)v83, v13, (int)v86, (int)v86, v14, v15, v67);
  sub_18572D0(v86);
  v16 = *(_DWORD *)(v12 + 48);
  if ( !*(_WORD *)(a3 + 4)
    && (v17 = *(_DWORD **)(*(_QWORD *)(a3 + 16) + 24LL)) != nullptr
    && *v17 == v16
    && v17[1] == 37 )
  {
    v64 = a3;
    a3 = a2;
    v75 = v64;
  }
  else
  {
    if ( *(_WORD *)(a2 + 4) )
      goto LABEL_5;
    v17 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL);
    if ( !v17 || v16 != *v17 )
      goto LABEL_5;
  }
  if ( v17[1] == 37 )
  {
    v84 = 0;
    v85 = *(_QWORD *)v71;
    v59 = sub_15D1F10(v75);
    v72 = sub_4ED1A0(v12, v59) - 1;
    v60 = *(unsigned int *)(v75 + 24);
    if ( (_DWORD)v60 )
    {
      v68 = v75 + 8 * v60;
      while ( 1 )
      {
        v70 = *(_QWORD *)(v75 + 32);
        v61 = sub_15D1F10(v70);
        v62 = sub_4ED1A0(v12, v61);
        v87 = 0;
        v89 = 0;
        v86[0] = v72;
        v63 = *(_QWORD *)(v12 + 56);
        v82 = a3;
        v69 = v72 - v62;
        v88 = v72 - v62 + 1;
        v73 = sub_15DCAD0(v63, (int)&v82, 0);
        sub_15D0DF0(&v88);
        sub_15D0DF0(v86);
        if ( v73 )
          ++*(_DWORD *)(v73 + 8);
        sub_4EBFD0(v84, v85);
        v84 = v73;
        sub_14B9B80(v83, &v84);
        sub_4F2FA0(a1, v70, v84, a4, a5, a6);
        v75 += 8;
        if ( v75 == v68 )
          break;
        v72 = v69;
      }
    }
    sub_4EBFD0(v84, v85);
    return sub_14B63F0(v83);
  }
LABEL_5:
  if ( (unsigned __int8)sub_4ED250(a1, v75, &v79, &v77, &v81) && (unsigned __int8)sub_4ED250(a1, a3, &v80, &v78, &v84) )
  {
    v18 = *(_QWORD *)(a1 + 120);
    v19 = 0;
    v20 = *(_DWORD *)(v18 + 4LL * v81);
    v79 += v20;
    v21 = v20 + v77;
    v77 += v20;
    LODWORD(v18) = *(_DWORD *)(v18 + 4LL * (unsigned int)v84);
    v78 += v18;
    v80 += v18;
    do
    {
      v22 = (_QWORD *)*a6;
      v23 = v19 + v21;
      if ( *a6 )
      {
        v24 = *((unsigned int *)v22 - 1);
        if ( (_DWORD)v24 == *((_DWORD *)v22 - 2) )
        {
          v51 = (unsigned int)(3 * v24 + 1) >> 1;
          v52 = 4 * v51 + 8;
          if ( 4 * (int)v24 + 8 >= (unsigned int)v52 || (unsigned int)v24 >= v51 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0((__int64 *)v86, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v86);
            sub_233E40((__int64)v86);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v53 = (unsigned int *)sub_186B300(v22 - 1, v52);
          v22 = v53 + 2;
          *v53 = v51;
          v54 = v53[1];
          *a6 = v22;
          v25 = (_DWORD *)v22 + v54;
        }
        else
        {
          v25 = (_DWORD *)v22 + v24;
        }
      }
      else
      {
        v65 = (_QWORD *)sub_186B270(0x10u);
        v22 = v65 + 1;
        *v65 = 2;
        *a6 = v65 + 1;
        v25 = v65 + 1;
      }
      *v25 = v23;
      ++*((_DWORD *)v22 - 1);
      v21 = v77;
      v26 = a5[2];
      v27 = v19 + v78;
      v28 = v77 + v19;
      do
      {
        v29 = v28;
        v30 = v28;
        v28 = *(_DWORD *)(v26 + 4LL * v28);
      }
      while ( v30 != v28 );
      do
      {
        v31 = v27;
        v32 = v27;
        v27 = *(_DWORD *)(v26 + 4LL * v27);
      }
      while ( v32 != v27 );
      if ( v30 != v27 )
      {
        v33 = a5[3];
        if ( *(_DWORD *)(v33 + 4 * v31) >= *(_DWORD *)(v33 + 4 * v29) )
        {
          v27 = v28;
          v28 = v32;
        }
        *(_DWORD *)(v26 + 4LL * v27) = v28;
        v34 = 4LL * v28;
        *(_DWORD *)(v33 + v34) += *(_DWORD *)(v33 + 4LL * v27);
        v35 = a5[4];
        v36 = (int *)(v35 + v34);
        v37 = (int *)(v35 + 4LL * v27);
        v38 = *v37;
        *v37 = *v36;
        *v36 = v38;
        v76 = (_QWORD *)a5[1];
        v39 = sub_180C100(v76 + 2, 24);
        *(_QWORD *)(v39 + 8) = a5;
        v40 = v39;
        *(_QWORD *)v39 = off_1C4F500;
        *(_DWORD *)(v39 + 16) = v27;
        v41 = (_QWORD *)*v76;
        if ( *v76 )
        {
          v42 = *((_DWORD *)v41 - 1);
          if ( v42 == *((_DWORD *)v41 - 2) )
          {
            v55 = (3 * v42 + 1) >> 1;
            v56 = 8 * v55 + 8;
            if ( 8 * v42 + 8 >= (unsigned int)v56 || v42 >= v55 )
            {
              v7 = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0((__int64 *)v86, "Overflow encountered when expanding vector");
              *v7 = (char *)off_1C63128;
              sub_2333C0(v7 + 1, v86);
              sub_233E40((__int64)v86);
              __cxa_throw(v7, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v57 = (unsigned int *)sub_186B300(v41 - 1, v56);
            v58 = v57[1];
            v41 = v57 + 2;
            *v76 = v57 + 2;
            *v57 = v55;
            LODWORD(v57) = v58;
            v45 = &v41[v58];
            v44 = (_DWORD)v57 + 1;
          }
          else
          {
            v43 = v42;
            v44 = v42 + 1;
            v45 = &v41[v43];
          }
        }
        else
        {
          v66 = (_QWORD *)sub_186B270(0x18u);
          v41 = v66 + 1;
          *v66 = 2;
          v45 = v66 + 1;
          *v76 = v66 + 1;
          v44 = 1;
        }
        *v45 = v40;
        *((_DWORD *)v41 - 1) = v44;
        v21 = v77;
      }
      ++v19;
    }
    while ( v79 - v21 >= v19 );
    return sub_14B63F0(v83);
  }
  v47 = sub_15E1B70(v71[0]);
  v48 = v47;
  if ( v47 )
    ++*(_DWORD *)(v47 + 8);
  v49 = *(_QWORD *)(a4 + 8);
  if ( !v49 || (v50 = *(_DWORD *)(v49 - 4), v50 == *(_DWORD *)(v49 - 8)) )
  {
    sub_23A6F0((unsigned int **)(a4 + 8));
    v49 = *(_QWORD *)(a4 + 8);
    v50 = *(_DWORD *)(v49 - 4);
  }
  *(_QWORD *)(v49 + 8LL * v50) = v48;
  *(_DWORD *)(v49 - 4) = v50 + 1;
  return sub_14B63F0(v83);
}

