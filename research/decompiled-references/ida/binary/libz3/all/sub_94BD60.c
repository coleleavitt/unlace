__int64 __fastcall sub_94BD60(__int64 a1, __int64 a2, int a3, __int64 a4, __int64 *a5, int a6)
{
  char **exception; // rbx
  __int64 v9; // rsi
  __int64 v10; // rdi
  bool v11; // zf
  void *v12; // rbp
  __int64 v16; // rsi
  _DWORD *v17; // rax
  int v18; // eax
  void *v20; // rax
  __int64 v21; // rdx
  int v22; // eax
  _QWORD *v23; // r13
  unsigned int v24; // ebx
  __int64 v25; // rcx
  unsigned int v26; // edx
  __int64 v27; // rax
  __int64 *v28; // rax
  __int64 v29; // rdi
  int v30; // r8d
  int v31; // r9d
  __int64 v32; // rsi
  void *v33; // rdi
  __int64 *v34; // rbx
  unsigned __int64 v35; // rbp
  __int64 v36; // rsi
  int v37; // ecx
  int v38; // r8d
  int v39; // r9d
  __int64 v40; // rdi
  __int64 v41; // rax
  __int64 v42; // rbp
  __int64 v43; // rsi
  __int64 v44; // rdi
  void *v45; // rbp
  unsigned int v46; // r8d
  size_t v47; // rsi
  unsigned int *v48; // rax
  __int64 v49; // rax
  int v50; // edx
  _QWORD *v51; // rax
  __int64 v52; // rax
  __int64 v53; // rbx
  __int64 v54; // rsi
  __int64 v55; // rdi
  void *v56; // [rsp+0h] [rbp-C8h]
  int v57; // [rsp+8h] [rbp-C0h]
  __int64 *v58; // [rsp+10h] [rbp-B8h]
  int v59; // [rsp+10h] [rbp-B8h]
  void *v60; // [rsp+10h] [rbp-B8h]
  int v61[2]; // [rsp+18h] [rbp-B0h]
  __int64 v62; // [rsp+20h] [rbp-A8h]
  int v63; // [rsp+28h] [rbp-A0h]
  unsigned int v64; // [rsp+2Ch] [rbp-9Ch]
  int v65; // [rsp+30h] [rbp-98h]
  __int64 v66; // [rsp+38h] [rbp-90h]
  __int64 v67; // [rsp+40h] [rbp-88h] BYREF
  void *ptr; // [rsp+48h] [rbp-80h]
  _QWORD v69[2]; // [rsp+50h] [rbp-78h] BYREF
  _QWORD v70[2]; // [rsp+60h] [rbp-68h] BYREF
  __int64 v71[2]; // [rsp+70h] [rbp-58h] BYREF
  int v72; // [rsp+80h] [rbp-48h] BYREF
  char v73; // [rsp+84h] [rbp-44h]
  __int64 v74; // [rsp+88h] [rbp-40h]

  v69[0] = 0;
  v69[1] = 0;
  v70[0] = 1;
  v70[1] = 0;
  if ( !a3 )
  {
    if ( a2 )
      ++*(_DWORD *)(a2 + 8);
    v9 = *a5;
    if ( !*a5 )
      goto LABEL_6;
    v10 = a5[1];
    v11 = (*(_DWORD *)(v9 + 8))-- == 1;
    if ( !v11 )
      goto LABEL_6;
LABEL_13:
    sub_15D7BC0(v10, v9);
LABEL_6:
    *a5 = a2;
    goto LABEL_7;
  }
  if ( !*(_WORD *)(a2 + 4)
    && (v16 = *(_QWORD *)(a2 + 16), (v17 = *(_DWORD **)(v16 + 24)) != nullptr)
    && *v17 == 5
    && ((v18 = v17[1], v18 == 6) || v18 == 9) )
  {
    v20 = *(void **)a1;
    v21 = *(unsigned int *)(a2 + 24);
    v67 = 0;
    *(_QWORD *)v61 = v20;
    ptr = v20;
    if ( (_DWORD)v21 )
    {
      v22 = a3 - 1;
      v23 = nullptr;
      v24 = 0;
      v57 = v22;
      v58 = &v67;
      do
      {
        sub_94BD60(
          a1,
          *(_QWORD *)(a2 + 8LL * v24 + 32),
          v57,
          a4,
          (int)v58,
          a6,
          v56,
          v57,
          (__int64)v58,
          v61[0],
          v62,
          v63,
          v65,
          v66,
          v67,
          (char)ptr);
        v25 = v67;
        if ( v67 )
          ++*(_DWORD *)(v67 + 8);
        if ( v23 )
        {
          v26 = *((_DWORD *)v23 - 1);
          if ( v26 == *((_DWORD *)v23 - 2) )
          {
            v46 = (3 * v26 + 1) >> 1;
            v47 = 8 * v46 + 8;
            if ( 8 * v26 + 8 >= (unsigned int)v47 || v26 >= v46 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v71, "Overflow encountered when expanding vector");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, v71);
              sub_233E40((__int64)v71);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v64 = (3 * v26 + 1) >> 1;
            v62 = v25;
            v48 = (unsigned int *)sub_186B300(v23 - 1, v47);
            v23 = v48 + 2;
            v25 = v62;
            *v48 = v64;
            v49 = v48[1];
            v50 = v49;
            v28 = &v23[v49];
            v21 = (unsigned int)(v50 + 1);
          }
          else
          {
            v27 = v26;
            v21 = v26 + 1;
            v28 = &v23[v27];
          }
        }
        else
        {
          v62 = v25;
          v51 = (_QWORD *)sub_186B270(0x18u);
          v23 = v51 + 1;
          v25 = v62;
          v21 = 1;
          *v51 = 2;
          v28 = v51 + 1;
        }
        *v28 = v25;
        ++v24;
        *((_DWORD *)v23 - 1) = v21;
      }
      while ( v24 < *(_DWORD *)(a2 + 24) );
      v16 = *(_QWORD *)(a2 + 16);
      v29 = a1 + 32;
    }
    else
    {
      v29 = a1 + 32;
      v23 = nullptr;
    }
    v59 = v21;
    if ( (unsigned int)sub_15067A0(v29, v16, v21, v23, a5) == 5 )
    {
      v52 = sub_15DC610(
              *(_QWORD *)(a1 + 32),
              v16,
              v59,
              (int)v23,
              v30,
              v31,
              (int)v56,
              v16,
              v59,
              v61[0],
              v62,
              v63,
              v65,
              v66,
              v67,
              ptr);
      v53 = v52;
      if ( v52 )
        ++*(_DWORD *)(v52 + 8);
      v54 = *a5;
      if ( *a5 )
      {
        v55 = a5[1];
        v11 = (*(_DWORD *)(v54 + 8))-- == 1;
        if ( v11 )
          sub_15D7BC0(v55, v54);
      }
      *a5 = v53;
    }
    v32 = v67;
    if ( v67 )
    {
      v33 = ptr;
      v11 = (*(_DWORD *)(v67 + 8))-- == 1;
      if ( v11 )
        sub_15D7BC0(v33, v32);
    }
    if ( v23 )
    {
      v34 = v23;
      v35 = (unsigned __int64)&v23[*((unsigned int *)v23 - 1)];
      if ( (unsigned __int64)v23 < v35 )
      {
        do
        {
          v36 = *v34;
          if ( *v34 )
          {
            v11 = (*(_DWORD *)(v36 + 8))-- == 1;
            if ( v11 )
              sub_15D7BC0(*(_QWORD *)v61, v36);
          }
          ++v34;
        }
        while ( (unsigned __int64)v34 < v35 );
      }
      sub_186B220(v23 - 1);
    }
  }
  else
  {
    if ( !(unsigned __int8)sub_1666AE0(a1 + 16, a2, v69, &v67) || !(_BYTE)v67 )
    {
      v9 = *a5;
      ++*(_DWORD *)(a2 + 8);
      if ( !v9 )
        goto LABEL_6;
      v10 = a5[1];
      v11 = (*(_DWORD *)(v9 + 8))-- == 1;
      if ( !v11 )
        goto LABEL_6;
      goto LABEL_13;
    }
    BYTE4(v71[0]) &= 0xFCu;
    v73 &= 0xFCu;
    LODWORD(v71[0]) = 0;
    v71[1] = 0;
    v72 = 1;
    v74 = 0;
    v60 = qword_1C7F2C0;
    sub_1832AB0(qword_1C7F2C0, v69, a4, v71);
    sub_182CBA0(v60, &v72);
    v40 = *(_QWORD *)(a1 + 24);
    v73 &= ~1u;
    v72 = 1;
    if ( !v40 )
    {
      sub_16669E0(a1 + 16);
      v40 = *(_QWORD *)(a1 + 24);
    }
    v41 = sub_166A700(v40, (unsigned int)v71, 1, v37, v38, v39);
    v42 = v41;
    if ( v41 )
      ++*(_DWORD *)(v41 + 8);
    v43 = *a5;
    if ( *a5 )
    {
      v44 = a5[1];
      v11 = (*(_DWORD *)(v43 + 8))-- == 1;
      if ( v11 )
        sub_15D7BC0(v44, v43);
    }
    *a5 = v42;
    v45 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v71);
    sub_182CBA0(v45, &v72);
  }
LABEL_7:
  v12 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v69);
  return sub_182CBA0(v12, v70);
}

