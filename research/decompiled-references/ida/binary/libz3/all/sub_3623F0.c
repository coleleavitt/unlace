void __fastcall sub_3623F0(__int64 a1, __int64 *a2)
{
  char **exception; // rbp
  unsigned int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rdi
  int v8; // r9d
  int v9; // r8d
  int v10; // esi
  __int64 v11; // rcx
  __int64 *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r10
  std::ios_base *v15; // rax
  int v16; // esi
  __int64 v17; // rax
  __int64 v18; // rdi
  __int64 *v19; // r15
  __int64 v20; // rdx
  __int64 v21; // rcx
  unsigned __int64 v22; // r13
  bool v23; // r14
  __int64 v24; // rsi
  __int64 v25; // rdi
  bool v26; // zf
  _QWORD *v27; // r14
  _QWORD *v28; // r13
  __int64 v29; // rsi
  __int64 v30; // rdi
  __int64 v31; // rax
  __int64 v32; // rdi
  _QWORD *v33; // r14
  unsigned int i; // r13d
  __int64 v35; // r15
  __int64 v36; // rax
  unsigned int v37; // edx
  _QWORD *v38; // r15
  __int64 v39; // rsi
  int v40; // r9d
  int v41; // r8d
  int v42; // esi
  __int64 v43; // rcx
  __int64 *v44; // rax
  __int64 v45; // rdx
  __int64 v46; // r10
  unsigned int v47; // r14d
  size_t v48; // rsi
  unsigned int *v49; // rax
  _QWORD *v50; // rdx
  __int64 v51; // rsi
  _QWORD *v52; // rsi
  int v53; // eax
  _QWORD *v54; // rax
  unsigned int v55; // [rsp+Ch] [rbp-9Ch]
  __int64 v56; // [rsp+20h] [rbp-88h] BYREF
  _QWORD *v57; // [rsp+28h] [rbp-80h]
  __int64 v58; // [rsp+30h] [rbp-78h]
  char *v59; // [rsp+38h] [rbp-70h]
  char v60; // [rsp+40h] [rbp-68h]
  unsigned int v61; // [rsp+44h] [rbp-64h]
  __int64 v62; // [rsp+50h] [rbp-58h] BYREF
  __int64 *v63; // [rsp+58h] [rbp-50h]

  v5 = *(_DWORD *)(a1 + 100);
  v6 = *(unsigned int *)(a1 + 96);
  v58 = a1;
  v55 = v5;
  v61 = v5;
  v59 = "max_conflicts";
  v60 = 1;
  v62 = 0;
  sub_1862370(&v62, "max_conflicts", v6);
  (*(void (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(a1 + 8) + 88LL))(*(_QWORD *)(a1 + 8), &v62);
  sub_18572D0(&v62);
  v7 = a2[1];
  if ( v7 )
  {
    v8 = *(_DWORD *)(v7 - 4);
    v9 = v8 - 1;
    if ( v8 - 1 > 0 )
    {
      v10 = *(_DWORD *)(a1 + 24);
      v11 = v9;
      do
      {
        v10 = 214013 * v10 + 2531011;
        v12 = (__int64 *)(v7 + 8LL * ((HIWORD(v10) & 0x7FFF) % ((int)v11 + 1)));
        v13 = *(_QWORD *)(v7 + 8 * v11);
        v14 = *v12;
        *(_QWORD *)(v7 + 8 * v11--) = *v12;
        *v12 = v13;
      }
      while ( (int)v11 > 0 );
      *(_DWORD *)(a1 + 24) = v10;
      *(_QWORD *)(v7 + 8 * (v9 - (__int64)(v8 - 2))) = v14;
      *v12 = v13;
    }
  }
  v15 = *(std::ios_base **)(a1 + 8);
  v16 = 0;
  if ( v7 )
    goto LABEL_50;
  while ( (unsigned int)sub_E60CB0(v15, v16, v7) == -1 )
  {
    v17 = *(_QWORD *)a1;
    v18 = *(_QWORD *)(a1 + 8);
    v63 = nullptr;
    v62 = v17;
    (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v18 + 24LL))(v18, &v62);
    v19 = v63;
    v20 = a2[1];
    if ( v63 )
    {
      v21 = *((unsigned int *)v63 - 1);
      v22 = (unsigned __int64)&v63[v21];
      if ( !v20 )
      {
        if ( (unsigned __int64)v63 < v22 )
        {
          v23 = 0;
          goto LABEL_13;
        }
        sub_186B220(v63 - 1);
        break;
      }
      v23 = (unsigned int)v21 < *(_DWORD *)(v20 - 4);
      if ( (unsigned __int64)v63 >= v22 )
      {
LABEL_17:
        sub_186B220(v19 - 1);
        goto LABEL_18;
      }
      do
      {
LABEL_13:
        while ( 1 )
        {
          v24 = *v19;
          if ( *v19 )
          {
            v25 = v62;
            v26 = (*(_DWORD *)(v24 + 8))-- == 1;
            if ( v26 )
              break;
          }
          if ( (unsigned __int64)++v19 >= v22 )
            goto LABEL_16;
        }
        sub_15D7BC0(v25, v24);
        ++v19;
      }
      while ( (unsigned __int64)v19 < v22 );
LABEL_16:
      v19 = v63;
      if ( v63 )
        goto LABEL_17;
    }
    else
    {
      if ( !v20 )
        break;
      v23 = *(_DWORD *)(v20 - 4) != 0;
    }
LABEL_18:
    if ( !v23 )
      break;
    v27 = (_QWORD *)a2[1];
    if ( v27 )
    {
      v28 = &v27[*((unsigned int *)v27 - 1)];
      if ( v27 >= v28 )
        goto LABEL_27;
      do
      {
        while ( 1 )
        {
          v29 = *v27;
          if ( *v27 )
          {
            v30 = *a2;
            v26 = (*(_DWORD *)(v29 + 8))-- == 1;
            if ( v26 )
              break;
          }
          if ( ++v27 >= v28 )
            goto LABEL_26;
        }
        sub_15D7BC0(v30, v29);
        ++v27;
      }
      while ( v27 < v28 );
LABEL_26:
      v27 = (_QWORD *)a2[1];
      if ( v27 )
LABEL_27:
        *((_DWORD *)v27 - 1) = 0;
    }
    v31 = *(_QWORD *)a1;
    v32 = *(_QWORD *)(a1 + 8);
    v57 = nullptr;
    v56 = v31;
    (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v32 + 24LL))(v32, &v56);
    v33 = v57;
    if ( v57 )
    {
      for ( i = 0; i < *((_DWORD *)v33 - 1); ++i )
      {
        while ( 1 )
        {
          v35 = v33[i];
          if ( v35 )
            ++*(_DWORD *)(v35 + 8);
          v36 = a2[1];
          if ( !v36 )
          {
            v54 = (_QWORD *)sub_186B270(0x18u);
            v50 = v54 + 1;
            *v54 = 2;
            v33 = v57;
            v53 = 1;
            a2[1] = (__int64)v50;
            v52 = v50;
            goto LABEL_54;
          }
          v37 = *(_DWORD *)(v36 - 4);
          if ( v37 == *(_DWORD *)(v36 - 8) )
            break;
          ++i;
          *(_QWORD *)(v36 + 8LL * v37) = v35;
          *(_DWORD *)(v36 - 4) = v37 + 1;
          if ( i >= *((_DWORD *)v33 - 1) )
            goto LABEL_36;
        }
        v47 = (3 * v37 + 1) >> 1;
        v48 = 8 * v47 + 8;
        if ( 8 * v37 + 8 >= (unsigned int)v48 || v37 >= v47 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(&v62, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, &v62);
          sub_233E40((__int64)&v62);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v49 = (unsigned int *)sub_186B300((void *)(v36 - 8), v48);
        v50 = v49 + 2;
        v51 = v49[1];
        *v49 = v47;
        a2[1] = (__int64)(v49 + 2);
        v33 = v57;
        LODWORD(v49) = v51;
        v52 = &v50[v51];
        v53 = (_DWORD)v49 + 1;
LABEL_54:
        *v52 = v35;
        *((_DWORD *)v50 - 1) = v53;
        if ( !v33 )
          goto LABEL_44;
      }
LABEL_36:
      v38 = &v33[*((unsigned int *)v33 - 1)];
      if ( v33 >= v38 )
        goto LABEL_43;
      do
      {
        while ( 1 )
        {
          v39 = *v33;
          if ( *v33 )
          {
            v26 = (*(_DWORD *)(v39 + 8))-- == 1;
            if ( v26 )
              break;
          }
          if ( ++v33 >= v38 )
            goto LABEL_42;
        }
        sub_15D7BC0(v56, v39);
        ++v33;
      }
      while ( v33 < v38 );
LABEL_42:
      v33 = v57;
      if ( v57 )
LABEL_43:
        sub_186B220(v33 - 1);
    }
LABEL_44:
    v7 = a2[1];
    if ( v7 )
    {
      v40 = *(_DWORD *)(v7 - 4);
      v41 = v40 - 1;
      if ( v40 - 1 > 0 )
      {
        v42 = *(_DWORD *)(a1 + 24);
        v43 = v41;
        do
        {
          v42 = 214013 * v42 + 2531011;
          v44 = (__int64 *)(v7 + 8LL * ((HIWORD(v42) & 0x7FFF) % ((int)v43 + 1)));
          v45 = *(_QWORD *)(v7 + 8 * v43);
          v46 = *v44;
          *(_QWORD *)(v7 + 8 * v43--) = *v44;
          *v44 = v45;
        }
        while ( (int)v43 > 0 );
        *(_DWORD *)(a1 + 24) = v42;
        *(_QWORD *)(v7 + 8 * (v41 - (__int64)(v40 - 2))) = v46;
        *v44 = v45;
      }
      v15 = *(std::ios_base **)(a1 + 8);
LABEL_50:
      v16 = *(_DWORD *)(v7 - 4);
    }
    else
    {
      v15 = *(std::ios_base **)(a1 + 8);
      v16 = 0;
    }
  }
  v62 = 0;
  sub_1862370(&v62, "max_conflicts", v55);
  (*(void (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(a1 + 8) + 88LL))(*(_QWORD *)(a1 + 8), &v62);
  sub_18572D0(&v62);
}

