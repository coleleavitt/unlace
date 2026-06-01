__int64 *__fastcall sub_D94690(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  char **exception; // r13
  __int64 v7; // r14
  __int64 v10; // r15
  _DWORD *v11; // rax
  int v12; // esi
  __int16 v13; // ax
  _QWORD *v14; // r13
  __int64 v15; // rax
  _QWORD *v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rcx
  unsigned int v19; // edx
  __int64 v20; // rax
  int v21; // edx
  _QWORD *v22; // rax
  __int64 v23; // rdi
  __int64 v24; // rax
  __int64 v25; // r12
  __int64 v26; // rsi
  __int64 v27; // rdi
  bool v28; // zf
  __int64 *v29; // r12
  unsigned __int64 v30; // r13
  __int64 v31; // rsi
  unsigned int v33; // r8d
  size_t v34; // rsi
  unsigned int *v35; // rax
  __int64 v36; // rax
  int v37; // edx
  int v38; // eax
  __int64 v39; // rsi
  __int64 v40; // rdi
  int v41; // r9d
  __int64 v42; // rsi
  __int64 v43; // rdi
  _QWORD *v44; // rax
  __int64 v45; // r12
  unsigned int v46; // r13d
  int v47; // edx
  int v48; // ecx
  int v49; // r8d
  int v50; // r9d
  unsigned int v51; // eax
  __int64 v52; // rax
  __int64 v53; // rbx
  __int64 v54; // rsi
  __int64 v55; // rdi
  int v56; // [rsp+0h] [rbp-B8h]
  int v57[2]; // [rsp+8h] [rbp-B0h]
  int v59; // [rsp+8h] [rbp-B0h]
  int v61[2]; // [rsp+18h] [rbp-A0h]
  int *v62; // [rsp+20h] [rbp-98h]
  char v63; // [rsp+28h] [rbp-90h]
  unsigned int v64; // [rsp+2Ch] [rbp-8Ch]
  int v65; // [rsp+30h] [rbp-88h]
  int v66; // [rsp+38h] [rbp-80h]
  void *v67; // [rsp+48h] [rbp-70h]
  int v68[2]; // [rsp+50h] [rbp-68h] BYREF
  __int64 v69; // [rsp+60h] [rbp-58h] BYREF
  __int64 v70; // [rsp+68h] [rbp-50h]

  v7 = a5;
  v10 = *(_QWORD *)(a2 + 8);
  v11 = *(_DWORD **)(a4 + 24);
  *a1 = 0;
  v12 = *(_DWORD *)(a2 + 32);
  a1[1] = v10;
  if ( v11 && v12 == *v11 )
  {
    v38 = v11[1];
    if ( v38 )
    {
      if ( v38 != 1 )
        goto LABEL_3;
      if ( a5 )
      {
        if ( !(unsigned __int8)sub_15C5420(*(_QWORD *)(a2 + 24), a5) )
        {
          sub_D90770(&v69, a2, a3, v7);
          v39 = *a1;
          *a1 = v69;
          if ( !v39 )
            return a1;
          v40 = v70;
          v28 = (*(_DWORD *)(v39 + 8))-- == 1;
          if ( !v28 )
            return a1;
          goto LABEL_35;
        }
        goto LABEL_38;
      }
      v52 = sub_15E1AF0(*(_QWORD *)(a2 + 16));
    }
    else
    {
      if ( a5 )
      {
        if ( !(unsigned __int8)sub_15C5180(*(_QWORD *)(a2 + 24), a5, a3, a4, a5, a6) )
        {
          sub_D900F0(&v69, a2, a3, a4, v7, v41);
          v39 = *a1;
          *a1 = v69;
          if ( !v39 )
            return a1;
          v40 = v70;
          v28 = (*(_DWORD *)(v39 + 8))-- == 1;
          if ( !v28 )
            return a1;
LABEL_35:
          sub_15D7BC0(v40, v39);
          return a1;
        }
LABEL_38:
        v42 = *a1;
        ++*(_DWORD *)(v7 + 8);
        if ( v42 )
        {
          v43 = a1[1];
          v28 = (*(_DWORD *)(v42 + 8))-- == 1;
          if ( v28 )
            sub_15D7BC0(v43, v42);
        }
        goto LABEL_41;
      }
      v45 = a2 + 16;
      v59 = a4;
      v46 = sub_15C5560(v45, a4);
      v51 = sub_15C5540(v45, v59, v47, v48, v49, v50);
      v52 = sub_15CC950(v45, v51, v46);
    }
    v53 = v52;
    if ( v52 )
      ++*(_DWORD *)(v52 + 8);
    v54 = *a1;
    if ( *a1 )
    {
      v55 = a1[1];
      v28 = (*(_DWORD *)(v54 + 8))-- == 1;
      if ( v28 )
        sub_15D7BC0(v55, v54);
    }
    *a1 = v53;
    return a1;
  }
LABEL_3:
  v13 = *(_WORD *)(a5 + 4);
  if ( v13 )
  {
    if ( v13 != 1 )
      return a1;
    ++*(_DWORD *)(a5 + 8);
LABEL_41:
    *a1 = v7;
    return a1;
  }
  v14 = (_QWORD *)(a5 + 32);
  v15 = 8LL * *(unsigned int *)(a5 + 24);
  *(_QWORD *)v61 = a5 + 32 + v15;
  if ( v15 )
  {
    v16 = nullptr;
    v62 = v68;
    do
    {
      *(_QWORD *)v57 = *v14;
      v17 = sub_15D1F10(*v14);
      sub_D94690(v68, a2, a3, v17, *(_QWORD *)v57);
      v18 = *(_QWORD *)v68;
      if ( v16 )
      {
        v19 = *((_DWORD *)v16 - 1);
        if ( v19 == *((_DWORD *)v16 - 2) )
        {
          v33 = (3 * v19 + 1) >> 1;
          v34 = 8 * v33 + 8;
          if ( 8 * v19 + 8 >= (unsigned int)v34 || v19 >= v33 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(&v69, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, &v69);
            sub_233E40((__int64)&v69);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v64 = (3 * v19 + 1) >> 1;
          *(_QWORD *)v57 = *(_QWORD *)v68;
          v35 = (unsigned int *)sub_186B300(v16 - 1, v34);
          LODWORD(a5) = v64;
          v16 = v35 + 2;
          v18 = *(_QWORD *)v57;
          *v35 = v64;
          v36 = v35[1];
          v37 = v36;
          v22 = &v16[v36];
          v21 = v37 + 1;
        }
        else
        {
          v20 = v19;
          v21 = v19 + 1;
          v22 = &v16[v20];
        }
      }
      else
      {
        *(_QWORD *)v57 = *(_QWORD *)v68;
        v44 = (_QWORD *)sub_186B270(0x18u);
        v16 = v44 + 1;
        v18 = *(_QWORD *)v57;
        v21 = 1;
        *v44 = 2;
        v22 = v44 + 1;
      }
      *v22 = v18;
      ++v14;
      *((_DWORD *)v16 - 1) = v21;
    }
    while ( *(_QWORD **)v61 != v14 );
    v23 = *(_QWORD *)(a2 + 8);
  }
  else
  {
    LODWORD(v23) = v10;
    v16 = nullptr;
    v21 = 0;
  }
  v24 = sub_15DC610(
          v23,
          *(_QWORD *)(v7 + 16),
          v21,
          (int)v16,
          a5,
          a6,
          v56,
          v57[0],
          a3,
          v61[0],
          (int)v62,
          v63,
          v65,
          v66,
          v10,
          v67);
  v25 = v24;
  if ( v24 )
    ++*(_DWORD *)(v24 + 8);
  v26 = *a1;
  if ( *a1 )
  {
    v27 = a1[1];
    v28 = (*(_DWORD *)(v26 + 8))-- == 1;
    if ( v28 )
      sub_15D7BC0(v27, v26);
  }
  *a1 = v25;
  if ( v16 )
  {
    v29 = v16;
    v30 = (unsigned __int64)&v16[*((unsigned int *)v16 - 1)];
    if ( (unsigned __int64)v16 < v30 )
    {
      do
      {
        while ( 1 )
        {
          v31 = *v29;
          if ( *v29 )
          {
            v28 = (*(_DWORD *)(v31 + 8))-- == 1;
            if ( v28 )
              break;
          }
          if ( (unsigned __int64)++v29 >= v30 )
            goto LABEL_23;
        }
        ++v29;
        sub_15D7BC0(v10, v31);
      }
      while ( (unsigned __int64)v29 < v30 );
    }
LABEL_23:
    sub_186B220(v16 - 1);
  }
  return a1;
}

