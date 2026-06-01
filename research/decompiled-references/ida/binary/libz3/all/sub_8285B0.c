__int64 __fastcall sub_8285B0(_QWORD *a1, __int64 a2, __int64 a3, __int64 *a4)
{
  char **exception; // rbp
  __int64 v7; // r13
  __int64 v8; // rax
  _DWORD *v9; // r15
  __int64 *v10; // r12
  __int64 v11; // rax
  __int64 v12; // rdi
  __int64 *v13; // r15
  __int64 v14; // rbx
  __int64 v15; // rsi
  bool v16; // zf
  _QWORD *v17; // rbx
  _QWORD *v18; // r15
  __int64 v19; // rsi
  __int64 v20; // rdi
  __int64 *v21; // rcx
  unsigned int v22; // r15d
  __int64 v23; // rbx
  __int64 v24; // rax
  unsigned int v25; // edx
  __int64 v26; // rsi
  __int64 v27; // rdi
  unsigned __int64 v28; // r14
  __int64 v29; // r13
  __int64 *v30; // rbx
  __int64 v31; // rsi
  __int64 *v32; // rbx
  unsigned __int64 v33; // r12
  __int64 v34; // rsi
  unsigned int v35; // ecx
  size_t v36; // rsi
  unsigned int v37; // r13d
  unsigned int *v38; // rax
  _QWORD *v39; // rdx
  __int64 v40; // rsi
  _QWORD *v41; // rsi
  int v42; // eax
  _QWORD *v43; // rax
  __int64 v44; // r15
  __int64 v45; // [rsp+20h] [rbp-88h] BYREF
  __int64 *v46; // [rsp+28h] [rbp-80h]
  __int64 v47; // [rsp+30h] [rbp-78h] BYREF
  __int64 *v48; // [rsp+38h] [rbp-70h]
  _QWORD v49[2]; // [rsp+40h] [rbp-68h] BYREF
  __int64 v50[11]; // [rsp+50h] [rbp-58h] BYREF

  if ( !*(_WORD *)(a2 + 4)
    && *(_QWORD *)(*(_QWORD *)(a2 + 16) + 16LL) == a1[2]
    && (v7 = *(_QWORD *)(a1[1] + 848LL), v7 == sub_15D1F10(a2)) )
  {
    (*(void (__fastcall **)(__int64 *, _QWORD *, __int64))(*a1 + 24LL))(&v45, a1, a2);
    v8 = *v46;
    if ( *(_WORD *)(*v46 + 4)
      || (v9 = *(_DWORD **)(*(_QWORD *)(v8 + 16) + 24LL)) == nullptr
      || *v9
      || v9[1] != 8
      || *(_DWORD *)(v8 + 24) != 1
      || (v44 = *(_QWORD *)(v8 + 32), *(_WORD *)(v44 + 4) != 2)
      || *(_DWORD *)(v44 + 16) )
    {
      sub_1872CE0("");
      sub_1873130(114, 48);
    }
    sub_828440(&v47, (__int64)a1, a2);
    v10 = v48;
    sub_157C750(v49, a1[1], v44, v48);
    v11 = sub_15E1A70(a1[1]);
    v12 = v45;
    v13 = v46;
    v14 = v11;
    if ( v11 )
      ++*(_DWORD *)(v11 + 8);
    v15 = *v13;
    if ( *v13 )
    {
      v16 = (*(_DWORD *)(v15 + 8))-- == 1;
      if ( v16 )
        sub_15D7BC0(v12, v15);
    }
    *v13 = v14;
    v17 = (_QWORD *)a4[1];
    if ( v17 )
    {
      v18 = &v17[*((unsigned int *)v17 - 1)];
      if ( v17 >= v18 )
        goto LABEL_23;
      do
      {
        while ( 1 )
        {
          v19 = *v17;
          if ( *v17 )
          {
            v20 = *a4;
            v16 = (*(_DWORD *)(v19 + 8))-- == 1;
            if ( v16 )
              break;
          }
          if ( ++v17 >= v18 )
            goto LABEL_22;
        }
        sub_15D7BC0(v20, v19);
        ++v17;
      }
      while ( v17 < v18 );
LABEL_22:
      v17 = (_QWORD *)a4[1];
      if ( v17 )
LABEL_23:
        *((_DWORD *)v17 - 1) = 0;
    }
    v21 = v46;
    if ( !v46 )
LABEL_64:
      BUG();
    v22 = 0;
    while ( v22 < *((_DWORD *)v21 - 1) )
    {
      while ( 1 )
      {
        v23 = v21[v22];
        if ( v23 )
          ++*(_DWORD *)(v23 + 8);
        v24 = a4[1];
        if ( !v24 )
        {
          v43 = (_QWORD *)sub_186B270(0x18u);
          v39 = v43 + 1;
          *v43 = 2;
          v21 = v46;
          v42 = 1;
          a4[1] = (__int64)v39;
          v41 = v39;
          goto LABEL_55;
        }
        v25 = *(_DWORD *)(v24 - 4);
        if ( v25 == *(_DWORD *)(v24 - 8) )
          break;
        ++v22;
        *(_QWORD *)(v24 + 8LL * v25) = v23;
        *(_DWORD *)(v24 - 4) = v25 + 1;
        if ( v22 >= *((_DWORD *)v21 - 1) )
          goto LABEL_32;
      }
      v35 = (3 * v25 + 1) >> 1;
      v36 = 8 * v35 + 8;
      v37 = v35;
      if ( 8 * v25 + 8 >= (unsigned int)v36 || v25 >= v35 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v50, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v50);
        sub_233E40((__int64)v50);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v38 = (unsigned int *)sub_186B300((void *)(v24 - 8), v36);
      v39 = v38 + 2;
      v40 = v38[1];
      v21 = v46;
      *v38 = v37;
      a4[1] = (__int64)(v38 + 2);
      LODWORD(v38) = v40;
      v41 = &v39[v40];
      v42 = (_DWORD)v38 + 1;
LABEL_55:
      *v41 = v23;
      ++v22;
      *((_DWORD *)v39 - 1) = v42;
      if ( !v21 )
        goto LABEL_64;
    }
LABEL_32:
    v26 = v49[0];
    v27 = v49[1];
    LOBYTE(a4) = v21[1] == v49[0];
    if ( v49[0] )
    {
      v16 = (*(_DWORD *)(v49[0] + 8LL))-- == 1;
      if ( v16 )
        sub_15D7BC0(v27, v26);
    }
    if ( v10 )
    {
      v28 = (unsigned __int64)&v10[*((unsigned int *)v10 - 1)];
      if ( (unsigned __int64)v10 < v28 )
      {
        v29 = v47;
        v30 = v10;
        do
        {
          while ( 1 )
          {
            v31 = *v30;
            if ( *v30 )
            {
              v16 = (*(_DWORD *)(v31 + 8))-- == 1;
              if ( v16 )
                break;
            }
            if ( (unsigned __int64)++v30 >= v28 )
              goto LABEL_42;
          }
          ++v30;
          sub_15D7BC0(v29, v31);
        }
        while ( (unsigned __int64)v30 < v28 );
      }
LABEL_42:
      sub_186B220(v10 - 1);
    }
    v32 = v46;
    if ( v46 )
    {
      v33 = (unsigned __int64)&v46[*((unsigned int *)v46 - 1)];
      if ( (unsigned __int64)v46 >= v33 )
        goto LABEL_51;
      do
      {
        while ( 1 )
        {
          v34 = *v32;
          if ( *v32 )
          {
            v16 = (*(_DWORD *)(v34 + 8))-- == 1;
            if ( v16 )
              break;
          }
          if ( (unsigned __int64)++v32 >= v33 )
            goto LABEL_50;
        }
        sub_15D7BC0(v45, v34);
        ++v32;
      }
      while ( (unsigned __int64)v32 < v33 );
LABEL_50:
      v32 = v46;
      if ( v46 )
LABEL_51:
        sub_186B220(v32 - 1);
    }
  }
  else
  {
    LODWORD(a4) = 0;
  }
  return (unsigned int)a4;
}

