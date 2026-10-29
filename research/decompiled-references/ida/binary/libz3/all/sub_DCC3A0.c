void __fastcall sub_DCC3A0(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rbp
  __int64 v4; // rax
  __int64 v5; // r15
  __int64 v6; // r12
  __int64 v7; // rdi
  __int64 v8; // rax
  __int64 v9; // rbp
  int *v10; // rbx
  int *v11; // r13
  __int64 v12; // r12
  __int64 v13; // rcx
  _QWORD *v15; // rdx
  unsigned int v16; // eax
  __int64 v17; // rsi
  int v18; // eax
  _QWORD *v19; // rsi
  int v20; // edx
  int v21; // ecx
  int v22; // r8d
  int v23; // r9d
  unsigned __int64 *v24; // rdi
  size_t v25; // r12
  unsigned __int64 v26; // rax
  _BYTE *v27; // rdi
  char **v28; // r12
  int v29; // edx
  int v30; // ecx
  int v31; // r8d
  int v32; // r9d
  unsigned __int64 *v33; // rdi
  size_t v34; // r12
  unsigned __int64 v35; // rax
  _BYTE *v36; // rdi
  char **exception; // r12
  unsigned int v38; // r8d
  size_t v39; // rsi
  unsigned int *v40; // rax
  __int64 v41; // rsi
  __int64 v42; // rbp
  _QWORD *v43; // rax
  char **v44; // rbx
  int v45[2]; // [rsp+0h] [rbp-138h]
  int v46[2]; // [rsp+0h] [rbp-138h]
  int v47[2]; // [rsp+0h] [rbp-138h]
  int v48[2]; // [rsp+0h] [rbp-138h]
  int v49[2]; // [rsp+0h] [rbp-138h]
  void *v50; // [rsp+8h] [rbp-130h]
  unsigned int v51; // [rsp+Ch] [rbp-12Ch]
  int v52[2]; // [rsp+10h] [rbp-128h] BYREF
  __int64 v53; // [rsp+18h] [rbp-120h] BYREF
  unsigned __int64 *v54; // [rsp+20h] [rbp-118h] BYREF
  size_t v55; // [rsp+28h] [rbp-110h]
  unsigned __int64 v56; // [rsp+30h] [rbp-108h] BYREF
  int v57; // [rsp+38h] [rbp-100h]
  void *src; // [rsp+40h] [rbp-F8h] BYREF
  size_t n; // [rsp+48h] [rbp-F0h]
  int v60; // [rsp+50h] [rbp-E8h]
  int v61; // [rsp+58h] [rbp-E0h]
  int v62[2]; // [rsp+60h] [rbp-D8h] BYREF
  void *ptr; // [rsp+68h] [rbp-D0h]
  int v64[2]; // [rsp+70h] [rbp-C8h]
  int v65; // [rsp+78h] [rbp-C0h] BYREF
  int v66; // [rsp+80h] [rbp-B8h]
  int v67; // [rsp+88h] [rbp-B0h]
  int v68; // [rsp+90h] [rbp-A8h]
  int v69; // [rsp+98h] [rbp-A0h]
  int v70; // [rsp+A0h] [rbp-98h]
  void *v71; // [rsp+A8h] [rbp-90h]
  int v72; // [rsp+B0h] [rbp-88h]
  __int64 v73; // [rsp+B8h] [rbp-80h]

  v2 = *((unsigned int *)a1 + 356);
  if ( (_DWORD)v2 != 9 )
  {
    sub_DC0980(a1);
    v2 = *((unsigned int *)a1 + 356);
  }
  *(_QWORD *)v45 = *(_QWORD *)((char *)a1 + 36);
  *(_QWORD *)v52 = a1[6];
  sub_DBF580(v2, (__int64)"unexpected token used as datatype name");
  if ( *((_DWORD *)a1 + 356) != 9 )
    sub_DC0980(a1);
  sub_DCADA0((__int64)(a1 + 193));
  LODWORD(ptr) = 0;
  *(_QWORD *)v62 = *(_QWORD *)v52;
  sub_DCB4E0((__int64)(a1 + 193), (__int64)v62);
  sub_DCADA0((__int64)(a1 + 190));
  v3 = *a1;
  v4 = *(_QWORD *)(*a1 + 312LL);
  if ( v4 )
  {
    v5 = *(_QWORD *)(*a1 + 312LL);
  }
  else
  {
    sub_DFBCB0(*a1);
    v5 = *(_QWORD *)(v3 + 312);
    v42 = *a1;
    v4 = *(_QWORD *)(*a1 + 312LL);
    if ( !v4 )
    {
      sub_DFBCB0(*a1);
      v4 = *(_QWORD *)(v42 + 312);
    }
  }
  *(_QWORD *)v62 = v4;
  ptr = &v65;
  *(_QWORD *)v64 = 0x1000000000LL;
  sub_DCB870(a1, (__int64)v52, (__int64)v62);
  v6 = *a1;
  v7 = *(_QWORD *)(*a1 + 312LL);
  if ( !v7 )
  {
    sub_DFBCB0(*a1);
    v7 = *(_QWORD *)(v6 + 312);
  }
  v8 = sub_DE4160(v7, *((unsigned int *)a1 + 383), v52, (unsigned int)v64[0], ptr);
  v9 = v8;
  if ( v8 )
    ++*(_DWORD *)(v8 + 16);
  v53 = 0;
  if ( (unsigned __int8)sub_DDFF60(v8, &v53) )
  {
    sub_DBF430((__int64 *)&v54, "invalid datatype declaration, unknown sort '");
    sub_180CE20(
      (int)&src,
      (int)&v53,
      v29,
      v30,
      v31,
      v32,
      v45[0],
      v50,
      v52[0],
      v53,
      (int)v54,
      v55,
      v56,
      v57,
      (int)src,
      n,
      v60,
      v61,
      v62[0],
      (int)ptr,
      v64[0],
      v65,
      v66,
      v67,
      v68,
      v69,
      v70,
      v71,
      v72,
      v73);
    if ( 0x7FFFFFFFFFFFFFFFLL - v55 >= n )
    {
      v33 = v54;
      v34 = n + v55;
      if ( v54 == &v56 )
        v35 = 15;
      else
        v35 = v56;
      if ( v35 < v34 )
      {
        sub_23A830(&v54, v55, 0, (char *)src, n);
        v33 = v54;
      }
      else if ( n )
      {
        v36 = (char *)v54 + v55;
        if ( n == 1 )
          *v36 = *(_BYTE *)src;
        else
          memcpy(v36, src, n);
        v33 = v54;
      }
      v55 = v34;
      *((_BYTE *)v33 + v34) = 0;
      sub_233E40((__int64)&src);
      sub_2B3190((__int64)&v54, "'");
      exception = (char **)__cxa_allocate_exception(0x30u);
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, &v54);
      *exception = (char *)off_1C64218;
      exception[5] = *(char **)v47;
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'cmd_exception, (void (*)(void *))sub_3053E0);
    }
    std::__throw_length_error("basic_string::append");
  }
  v53 = 0;
  if ( (unsigned __int8)sub_DDFFC0(v9, &v53) )
  {
    sub_DBF430((__int64 *)&v54, "invalid datatype declaration, repeated accessor identifier '");
    sub_180CE20(
      (int)&src,
      (int)&v53,
      v20,
      v21,
      v22,
      v23,
      v45[0],
      v50,
      v52[0],
      v53,
      (int)v54,
      v55,
      v56,
      v57,
      (int)src,
      n,
      v60,
      v61,
      v62[0],
      (int)ptr,
      v64[0],
      v65,
      v66,
      v67,
      v68,
      v69,
      v70,
      v71,
      v72,
      v73);
    if ( 0x7FFFFFFFFFFFFFFFLL - v55 >= n )
    {
      v24 = v54;
      v25 = n + v55;
      if ( v54 == &v56 )
        v26 = 15;
      else
        v26 = v56;
      if ( v26 < v25 )
      {
        sub_23A830(&v54, v55, 0, (char *)src, n);
        v24 = v54;
      }
      else if ( n )
      {
        v27 = (char *)v54 + v55;
        if ( n == 1 )
          *v27 = *(_BYTE *)src;
        else
          memcpy(v27, src, n);
        v24 = v54;
      }
      v55 = v25;
      *((_BYTE *)v24 + v25) = 0;
      sub_233E40((__int64)&src);
      sub_2B3190((__int64)&v54, "'");
      v28 = (char **)__cxa_allocate_exception(0x30u);
      *v28 = (char *)off_1C63128;
      sub_2333C0(v28 + 1, &v54);
      *v28 = (char *)off_1C64218;
      v28[5] = *(char **)v46;
      __cxa_throw(v28, (struct type_info *)&`typeinfo for'cmd_exception, (void (*)(void *))sub_3053E0);
    }
    std::__throw_length_error("basic_string::append");
  }
  if ( !*(_QWORD *)(*a1 + 312LL) )
    sub_DFBCB0(*a1);
  sub_DE4A10(v9);
  sub_DBF590(*((unsigned int *)a1 + 356), (__int64)"invalid end of datatype declaration, ')' expected");
  if ( *(_BYTE *)(*a1 + 258LL) )
    sub_DBF4C0((_QWORD *)*a1);
  if ( *((_DWORD *)a1 + 356) != 9 )
    sub_DC0980(a1);
  v10 = (int *)ptr;
  v11 = (int *)((char *)ptr + 8 * (unsigned int)v64[0]);
  if ( ptr < v11 )
  {
    do
    {
      v12 = *(_QWORD *)v10;
      if ( *(_QWORD *)v10 )
      {
        v13 = *(_QWORD *)v62;
        if ( (*(_DWORD *)(v12 + 16))-- == 1 )
        {
          v15 = *(_QWORD **)(v13 + 80);
          if ( v15 )
          {
            v16 = *((_DWORD *)v15 - 1);
            if ( v16 == *((_DWORD *)v15 - 2) )
            {
              v38 = (3 * v16 + 1) >> 1;
              v39 = 8 * v38 + 8;
              if ( 8 * v16 + 8 >= (unsigned int)v39 || v16 >= v38 )
              {
                v44 = (char **)__cxa_allocate_exception(0x28u);
                sub_DBF430((__int64 *)&src, "Overflow encountered when expanding vector");
                *v44 = (char *)off_1C63128;
                sub_2333C0(v44 + 1, &src);
                sub_233E40((__int64)&src);
                __cxa_throw(v44, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
              v51 = (3 * v16 + 1) >> 1;
              *(_QWORD *)v48 = v13;
              v40 = (unsigned int *)sub_186B300(v15 - 1, v39);
              v13 = *(_QWORD *)v48;
              v41 = v40[1];
              v15 = v40 + 2;
              *(_QWORD *)(*(_QWORD *)v48 + 80LL) = v40 + 2;
              *v40 = v51;
              LODWORD(v40) = v41;
              v19 = &v15[v41];
              v18 = (_DWORD)v40 + 1;
            }
            else
            {
              v17 = v16;
              v18 = v16 + 1;
              v19 = &v15[v17];
            }
          }
          else
          {
            *(_QWORD *)v49 = v13;
            v43 = (_QWORD *)sub_186B270(0x18u);
            v13 = *(_QWORD *)v49;
            v15 = v43 + 1;
            *v43 = 2;
            v18 = 1;
            *(_QWORD *)(*(_QWORD *)v49 + 80LL) = v15;
            v19 = v15;
          }
          *v19 = v12;
          *((_DWORD *)v15 - 1) = v18;
        }
        sub_DE3700(v13);
      }
      v10 += 2;
    }
    while ( v10 < v11 );
    v10 = (int *)ptr;
  }
  if ( v10 != &v65 && v10 )
    sub_186B220(v10);
  sub_DC2790(v5, v9);
}

