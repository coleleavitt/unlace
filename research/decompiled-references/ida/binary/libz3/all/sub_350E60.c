void __fastcall sub_350E60(_QWORD *a1, _QWORD **a2, __int64 a3)
{
  _QWORD *v3; // r8
  __int64 *v5; // rax
  __int64 *v6; // r12
  unsigned __int64 v7; // rbp
  __int64 v8; // rsi
  __int64 v9; // rdi
  bool v10; // zf
  __int64 v11; // rcx
  __int64 v12; // r12
  __int64 *v13; // rdx
  __int64 *v14; // rbp
  __int64 *v15; // r13
  _QWORD *v16; // rax
  int v17; // eax
  __int64 *v18; // rcx
  unsigned int v19; // eax
  __int64 v20; // rdi
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // r14
  __int64 v24; // r13
  __int64 v25; // rbp
  __int64 v26; // rax
  __int64 v27; // r15
  __int64 v28; // rax
  __int64 v29; // r12
  __int64 v30; // rax
  __int64 v31; // r14
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // r13
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  unsigned int v39; // r14d
  size_t v40; // rsi
  unsigned int *v41; // rax
  __int64 v42; // rcx
  __int64 v43; // rax
  __int64 v44; // r12
  __int64 v45; // rax
  __int64 v46; // r14
  __int64 v47; // rax
  __int64 v48; // rcx
  __int64 v49; // rax
  char **exception; // rbp
  unsigned int v51; // [rsp+8h] [rbp-B0h]
  struct _Unwind_Exception *v52; // [rsp+8h] [rbp-B0h]
  __int64 v53; // [rsp+10h] [rbp-A8h]
  int exception_cleanup; // [rsp+10h] [rbp-A8h]
  int v55; // [rsp+18h] [rbp-A0h]
  __int64 v57; // [rsp+28h] [rbp-90h]
  __int64 v58; // [rsp+30h] [rbp-88h]
  int v60; // [rsp+4Ch] [rbp-6Ch]
  int v61; // [rsp+4Ch] [rbp-6Ch]
  __int64 v62; // [rsp+50h] [rbp-68h] BYREF
  __int64 v63; // [rsp+58h] [rbp-60h] BYREF
  __int64 v64[11]; // [rsp+60h] [rbp-58h] BYREF

  v3 = *a2;
  if ( !*a2 || !*((_DWORD *)v3 - 1) )
    return;
  v58 = a1[1];
  v5 = (__int64 *)a1[22];
  v6 = v5;
  if ( v5 )
  {
    v7 = (unsigned __int64)&v5[*((unsigned int *)v5 - 1)];
    if ( (unsigned __int64)v5 < v7 )
    {
      do
      {
        while ( 1 )
        {
          v8 = *v6;
          if ( *v6 )
          {
            v9 = a1[21];
            v10 = (*(_DWORD *)(v8 + 8))-- == 1;
            if ( v10 )
              break;
          }
          if ( (unsigned __int64)++v6 >= v7 )
            goto LABEL_10;
        }
        sub_15D7BC0(v9, v8);
        ++v6;
      }
      while ( (unsigned __int64)v6 < v7 );
LABEL_10:
      v5 = (__int64 *)a1[22];
      v3 = *a2;
      if ( v5 )
        *((_DWORD *)v5 - 1) = 0;
      if ( !v3 )
      {
        v22 = a1[1];
        v48 = *(_QWORD *)(v22 + 864);
        v53 = v48;
        if ( v48 )
          ++*(_DWORD *)(v48 + 8);
        goto LABEL_102;
      }
    }
    else
    {
      *((_DWORD *)v5 - 1) = 0;
    }
    v11 = *((unsigned int *)v3 - 1);
    if ( !(_DWORD)v11 )
    {
      v20 = a1[1];
      v49 = *(_QWORD *)(v20 + 864);
      v53 = v49;
      if ( v49 )
        ++*(_DWORD *)(v49 + 8);
LABEL_26:
      v23 = 0;
      v24 = 0;
      v25 = 0;
      v51 = 1;
      v57 = 0;
      if ( *((_DWORD *)v3 - 1) <= 1u )
      {
LABEL_65:
        LODWORD(v22) = v20;
      }
      else
      {
        while ( 1 )
        {
          v26 = sub_15E1B70(v20);
          v27 = v26;
          if ( v26 )
            ++*(_DWORD *)(v26 + 8);
          if ( v23 )
          {
            v10 = (*(_DWORD *)(v23 + 8))-- == 1;
            if ( v10 )
              sub_15D7BC0(v58, v23);
          }
          if ( v51 > 2 )
          {
            v43 = sub_300BE0(a1, "d");
            v44 = v43;
            if ( v43 )
              ++*(_DWORD *)(v43 + 8);
            if ( v53 )
            {
              v61 = *(_DWORD *)(v53 + 8);
              *(_DWORD *)(v53 + 8) = v61 - 1;
              if ( v61 == 1 )
                sub_15D7BC0(v58, v53);
            }
            v45 = sub_15E1B70(a1[1]);
            v46 = v45;
            if ( v45 )
              ++*(_DWORD *)(v45 + 8);
            if ( v25 )
            {
              v10 = (*(_DWORD *)(v25 + 8))-- == 1;
              if ( v10 )
                sub_15D7BC0(v58, v25);
            }
            sub_34AF90((__int64)a1, v44, v27);
            v47 = sub_2FF8B0((__int64)a1);
            sub_E5EBF0(v47, v46);
            v62 = v46;
            if ( v46 )
              ++*(_DWORD *)(v46 + 8);
            sub_349180(a1 + 26, &v62);
            v53 = v44;
            v25 = v46;
          }
          else if ( v27 != v53 )
          {
            if ( v53 )
            {
              v60 = *(_DWORD *)(v53 + 8);
              *(_DWORD *)(v53 + 8) = v60 - 1;
              if ( v60 == 1 )
                sub_15D7BC0(v58, v53);
            }
            v53 = 0;
            if ( v27 )
            {
              ++*(_DWORD *)(v27 + 8);
              v53 = v27;
            }
          }
          v28 = sub_300BE0(a1, "a");
          v29 = v28;
          if ( v28 )
            ++*(_DWORD *)(v28 + 8);
          if ( v24 )
          {
            v10 = (*(_DWORD *)(v24 + 8))-- == 1;
            if ( v10 )
              sub_15D7BC0(v58, v24);
          }
          v30 = sub_15E1B70(a1[1]);
          v31 = v30;
          if ( v30 )
            ++*(_DWORD *)(v30 + 8);
          if ( v25 )
          {
            v10 = (*(_DWORD *)(v25 + 8))-- == 1;
            if ( v10 )
              sub_15D7BC0(v58, v25);
          }
          v32 = sub_2FF8B0((__int64)a1);
          sub_E5EBF0(v32, v31);
          v63 = v31;
          if ( v31 )
            ++*(_DWORD *)(v31 + 8);
          sub_349180(a1 + 26, &v63);
          v33 = sub_15E1B70(a1[1]);
          v34 = v33;
          if ( v33 )
            ++*(_DWORD *)(v33 + 8);
          if ( v31 )
          {
            v10 = (*(_DWORD *)(v31 + 8))-- == 1;
            if ( v10 )
              sub_15D7BC0(v58, v31);
          }
          v35 = sub_2FF8B0((__int64)a1);
          sub_E5EBF0(v35, v34);
          v64[0] = v34;
          if ( v34 )
            ++*(_DWORD *)(v34 + 8);
          sub_349180(a1 + 26, v64);
          sub_34FB60((__int64)a1, v29, a3);
          v36 = sub_15E1B70(a1[1]);
          v25 = v36;
          if ( v36 )
            ++*(_DWORD *)(v36 + 8);
          if ( v34 )
          {
            v10 = (*(_DWORD *)(v34 + 8))-- == 1;
            if ( v10 )
              sub_15D7BC0(v58, v34);
          }
          sub_34AF90((__int64)a1, v29, v25);
          ++v51;
          v57 += 8;
          if ( !*a2 )
            break;
          v20 = a1[1];
          v23 = v27;
          v24 = v29;
          if ( v51 >= *((_DWORD *)*a2 - 1) )
            goto LABEL_65;
        }
        v22 = a1[1];
        v23 = v27;
        v24 = v29;
      }
      goto LABEL_66;
    }
  }
  else
  {
    v11 = *((unsigned int *)v3 - 1);
  }
  v12 = *v3;
  v13 = v5;
  v14 = v3;
  v15 = &v3[v11];
  if ( *v3 )
    ++*(_DWORD *)(v12 + 8);
  if ( v5 )
    goto LABEL_21;
  v16 = (_QWORD *)sub_186B270(0x18u);
  v13 = v16 + 1;
  *v16 = 2;
  v17 = 1;
  a1[22] = v13;
  v18 = v13;
  while ( 1 )
  {
    ++v14;
    *v18 = v12;
    *((_DWORD *)v13 - 1) = v17;
    if ( v14 == v15 )
      break;
    while ( 1 )
    {
      v12 = *v14;
      if ( *v14 )
        ++*(_DWORD *)(v12 + 8);
LABEL_21:
      v19 = *((_DWORD *)v13 - 1);
      if ( v19 == *((_DWORD *)v13 - 2) )
        break;
      ++v14;
      v13[v19] = v12;
      *((_DWORD *)v13 - 1) = v19 + 1;
      if ( v14 == v15 )
        goto LABEL_23;
    }
    v39 = (3 * v19 + 1) >> 1;
    v40 = 8 * v39 + 8;
    if ( 8 * v19 + 8 >= (unsigned int)v40 || v19 >= v39 )
    {
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0(v64, "Overflow encountered when expanding vector");
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, v64);
      sub_233E40((__int64)v64);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v41 = (unsigned int *)sub_186B300(v13 - 1, v40);
    v42 = v41[1];
    v13 = (__int64 *)(v41 + 2);
    *v41 = v39;
    a1[22] = v41 + 2;
    LODWORD(v41) = v42;
    v18 = &v13[v42];
    v17 = (_DWORD)v41 + 1;
  }
LABEL_23:
  v20 = a1[1];
  v21 = *(_QWORD *)(v20 + 864);
  v3 = *a2;
  LODWORD(v22) = v20;
  v53 = v21;
  if ( v21 )
    ++*(_DWORD *)(v21 + 8);
  if ( v3 )
    goto LABEL_26;
LABEL_102:
  v25 = 0;
  v23 = 0;
  v24 = 0;
LABEL_66:
  v37 = sub_15E1AF0(v22);
  v52 = (struct _Unwind_Exception *)v37;
  if ( v37 )
    ++*(_DWORD *)(v37 + 8);
  if ( v25 )
  {
    v10 = (*(_DWORD *)(v25 + 8))-- == 1;
    if ( v10 )
      sub_15D7BC0(v58, v25);
  }
  v38 = sub_2FF8B0((__int64)a1);
  sub_E5EBF0(v38, v52);
  if ( v53 )
  {
    v55 = *(_DWORD *)(v53 + 8);
    *(_DWORD *)(v53 + 8) = v55 - 1;
    if ( v55 == 1 )
      sub_15D7BC0(v58, v53);
  }
  if ( v23 )
  {
    v10 = (*(_DWORD *)(v23 + 8))-- == 1;
    if ( v10 )
      sub_15D7BC0(v58, v23);
  }
  if ( v24 )
  {
    v10 = (*(_DWORD *)(v24 + 8))-- == 1;
    if ( v10 )
      sub_15D7BC0(v58, v24);
  }
  if ( v52 )
  {
    exception_cleanup = (int)v52->exception_cleanup;
    LODWORD(v52->exception_cleanup) = exception_cleanup - 1;
    if ( exception_cleanup == 1 )
      sub_15D7BC0(v58, v52);
  }
}

