__int64 *__fastcall sub_A86F20(__int64 *a1, _QWORD *a2)
{
  __int64 v4; // rax
  __int64 **v5; // r14
  __int64 **i; // rbx
  _DWORD *v7; // rax
  __int64 v8; // rax
  __int64 v9; // rdi
  __int64 v10; // r8
  __int64 v11; // rcx
  _DWORD *v12; // rdx
  __int16 v13; // dx
  _DWORD *v14; // rsi
  unsigned int *v15; // r8
  unsigned int *v16; // r15
  __int64 v17; // rbp
  char *v18; // rbx
  unsigned int v19; // eax
  __int64 v20; // rdx
  int v21; // eax
  char *v22; // rdx
  unsigned int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // r14
  __int64 v26; // rax
  __int64 v27; // r8
  char *v28; // r14
  __int64 v29; // r15
  __int64 j; // rcx
  signed __int64 v31; // r13
  char *v32; // rax
  char *v33; // rbp
  unsigned int v34; // r14d
  __int64 v35; // r13
  unsigned int v36; // ebp
  __int64 v37; // rax
  __int64 v38; // rdi
  char *v39; // rbx
  __int64 v40; // rsi
  bool v41; // zf
  char *v42; // rdx
  __int64 v43; // rax
  unsigned int v45; // ecx
  size_t v46; // rsi
  unsigned int *v47; // rax
  __int64 v48; // rdx
  __int64 v49; // rax
  char *v50; // rbp
  char *k; // rbx
  __int64 v52; // rsi
  __int64 v53; // rdi
  __int64 v54; // rax
  _DWORD *v55; // rax
  char **exception; // r13
  unsigned int *v57; // [rsp+0h] [rbp-68h]
  __int64 v58; // [rsp+0h] [rbp-68h]
  __int64 v59; // [rsp+8h] [rbp-60h]
  unsigned int v60; // [rsp+8h] [rbp-60h]
  char *v61[11]; // [rsp+10h] [rbp-58h] BYREF

  v4 = a2[1];
  v5 = (__int64 **)a2[107];
  a1[1] = 0;
  *a1 = v4;
  if ( v5 )
  {
    for ( i = &v5[2 * *((unsigned int *)v5 - 1)]; i != v5; v5 += 2 )
    {
      v9 = a2[2];
      v10 = *v5[1];
      v11 = **v5;
      if ( *(_WORD *)(v11 + 4) || (v12 = *(_DWORD **)(*(_QWORD *)(v11 + 16) + 24LL)) == nullptr || *v12 != 5 || v12[1] )
      {
        v13 = *(_WORD *)(v10 + 4);
        if ( (v13 || (v14 = *(_DWORD **)(*(_QWORD *)(v10 + 16) + 24LL)) == nullptr || *v14 != 5 || v14[1])
          && *(_DWORD *)v10 < *(_DWORD *)v11 )
        {
          v13 = *(_WORD *)(v11 + 4);
          v11 = *v5[1];
          v10 = **v5;
        }
      }
      else
      {
        v13 = 0;
        v11 = *v5[1];
        v10 = **v5;
      }
      if ( v11 == v10 )
      {
        v8 = *(_QWORD *)(v9 + 856);
      }
      else if ( *(_WORD *)(v11 + 4)
             || (v7 = *(_DWORD **)(*(_QWORD *)(v11 + 16) + 24LL)) == nullptr
             || *v7 != 5
             || v7[1]
             || v13
             || (v55 = *(_DWORD **)(*(_QWORD *)(v10 + 16) + 24LL)) == nullptr
             || *v55 != 5
             || v55[1] )
      {
        v8 = sub_15E1B70(v9);
      }
      else
      {
        v8 = *(_QWORD *)(v9 + 864);
      }
      v61[0] = (char *)v8;
      if ( v8 )
        ++*(_DWORD *)(v8 + 8);
      sub_A74DF0(a1 + 1, v61);
    }
  }
  v15 = (unsigned int *)a2[106];
  if ( v15 )
  {
    v16 = (unsigned int *)a2[106];
    v57 = &v15[*(v15 - 1)];
    if ( v57 != v15 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v23 = *v16;
          v24 = *(_QWORD *)(*a2 + 16LL);
          v25 = *(_QWORD *)(v24 + 104);
          if ( *v16 != HIDWORD(qword_1C7ECC0) )
            break;
          v17 = *(_QWORD *)(v25 + 856);
          if ( v17 )
            goto LABEL_27;
          v18 = (char *)a1[1];
          if ( !v18 )
            goto LABEL_35;
LABEL_29:
          v19 = *((_DWORD *)v18 - 1);
          if ( v19 == *((_DWORD *)v18 - 2) )
          {
            v45 = (3 * v19 + 1) >> 1;
            v46 = 8 * v45 + 8;
            if ( 8 * v19 + 8 >= (unsigned int)v46 || v19 >= v45 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_137C7A(v61);
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, v61);
              sub_233E40((__int64)v61);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v60 = (3 * v19 + 1) >> 1;
            v47 = (unsigned int *)sub_186B300(v18 - 8, v46);
            v48 = v47[1];
            v18 = (char *)(v47 + 2);
            a1[1] = (__int64)(v47 + 2);
            *v47 = v60;
            LODWORD(v47) = v48;
            v22 = &v18[8 * v48];
            v21 = (_DWORD)v47 + 1;
          }
          else
          {
            v20 = v19;
            v21 = v19 + 1;
            v22 = &v18[8 * v20];
          }
          *(_QWORD *)v22 = v17;
          ++v16;
          *((_DWORD *)v18 - 1) = v21;
          if ( v57 == v16 )
            goto LABEL_36;
        }
        if ( v23 == (_DWORD)qword_1C7ECC0 )
        {
          v17 = *(_QWORD *)(v25 + 864);
          if ( v17 )
            goto LABEL_27;
        }
        else
        {
          v17 = *(_QWORD *)(*(_QWORD *)(v24 + 8840) + 8LL * (v23 >> 1));
          if ( (v23 & 1) == 0 )
          {
            if ( !v17 )
              goto LABEL_28;
LABEL_27:
            ++*(_DWORD *)(v17 + 8);
            goto LABEL_28;
          }
          v49 = sub_15E1A70(v25);
          v17 = v49;
          if ( v49 )
            ++*(_DWORD *)(v49 + 8);
          sub_A72BE0(0, v25);
        }
LABEL_28:
        v18 = (char *)a1[1];
        if ( v18 )
          goto LABEL_29;
LABEL_35:
        v26 = sub_186B270(0x18u);
        v18 = (char *)(v26 + 8);
        *(_QWORD *)v26 = 2;
        ++v16;
        a1[1] = v26 + 8;
        *(_QWORD *)(v26 + 8) = v17;
        *(_DWORD *)(v26 + 4) = 1;
        if ( v57 == v16 )
          goto LABEL_36;
      }
    }
  }
  v18 = (char *)a1[1];
  if ( !v18 )
    return a1;
LABEL_36:
  v27 = 8LL * *((unsigned int *)v18 - 1);
  v28 = &v18[v27];
  if ( &v18[v27] == v18 )
    goto LABEL_42;
  v29 = ((v27 >> 3) + 1) >> 1;
  for ( j = v29; ; j = (v58 + 1) >> 1 )
  {
    v31 = 8 * j;
    v59 = v27;
    v58 = j;
    v32 = (char *)operator new(8 * j, (const std::nothrow_t *)&std::nothrow);
    v27 = v59;
    v33 = v32;
    if ( v32 )
      break;
    if ( v58 == 1 )
    {
      v31 = 0;
      sub_A79520(v18, (__int64)v28);
      goto LABEL_41;
    }
  }
  if ( v29 == v58 )
  {
    sub_A77CC0((__int64 *)v18, &v18[v31], v32);
    sub_A77CC0((__int64 *)&v18[v31], v28, v33);
    sub_A78000(v18, &v18[v31], v28, v31 >> 3, (v59 - v31) >> 3, v33);
  }
  else
  {
    sub_A78A30((__int64 *)v18, v28, v32, v58);
  }
LABEL_41:
  operator delete(v33, v31);
  v18 = (char *)a1[1];
  if ( v18 )
  {
LABEL_42:
    v34 = *((_DWORD *)v18 - 1);
    if ( !v34 )
    {
LABEL_66:
      v50 = &v18[8 * *((unsigned int *)v18 - 1)];
      for ( k = &v18[8 * v34]; k < v50; k += 8 )
      {
        while ( 1 )
        {
          v52 = *(_QWORD *)k;
          if ( *(_QWORD *)k )
          {
            v53 = *a1;
            v41 = (*(_DWORD *)(v52 + 8))-- == 1;
            if ( v41 )
              break;
          }
          k += 8;
          if ( k >= v50 )
            goto LABEL_72;
        }
        sub_15D7BC0(v53, v52);
      }
LABEL_72:
      v54 = a1[1];
      if ( v54 )
        *(_DWORD *)(v54 - 4) = v34;
      return a1;
    }
    v35 = *(_QWORD *)v18;
    v36 = 0;
    v34 = 0;
LABEL_44:
    v37 = v34;
    v38 = *a1;
    ++v34;
    v39 = &v18[8 * v37];
    if ( v35 )
      ++*(_DWORD *)(v35 + 8);
    v40 = *(_QWORD *)v39;
    if ( *(_QWORD *)v39 )
    {
      v41 = (*(_DWORD *)(v40 + 8))-- == 1;
      if ( v41 )
        sub_15D7BC0(v38, v40);
    }
    v42 = (char *)a1[1];
    *(_QWORD *)v39 = v35;
    v43 = v36++;
    v18 = v42;
    if ( v42 )
    {
      while ( v36 < *((_DWORD *)v42 - 1) )
      {
        v35 = *(_QWORD *)&v42[8 * v36];
        if ( *(_QWORD *)&v42[8 * v43] != v35 )
          goto LABEL_44;
        v43 = v36;
        v18 = v42;
        ++v36;
      }
      goto LABEL_66;
    }
  }
  return a1;
}

