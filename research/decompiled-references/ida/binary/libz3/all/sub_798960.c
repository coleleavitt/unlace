__int64 __fastcall sub_798960(_QWORD *a1, __int64 a2, __int64 a3, _BYTE *a4)
{
  __int64 v7; // r12
  __int64 v8; // rax
  __int64 *v9; // rcx
  __int64 v10; // rbp
  __int64 v11; // rax
  int v12; // edi
  unsigned int v13; // edx
  __int64 *v14; // rsi
  __int64 v15; // rdx
  __int64 *v16; // r8
  __int64 *i; // rax
  __int64 v18; // rdx
  _QWORD *v19; // rdx
  unsigned int v20; // eax
  __int64 v21; // rcx
  int v22; // eax
  __int64 *v23; // rcx
  __int64 v24; // rdx
  __int64 *v25; // r13
  __int64 v26; // r8
  unsigned int v27; // r9d
  __int64 v28; // r14
  int v29; // ecx
  __int64 v30; // r9
  __int64 *v31; // rdi
  __int64 *v32; // rax
  __int64 *v33; // rsi
  __int64 v34; // rdx
  __int64 v36; // rax
  __int64 v37; // rax
  unsigned int v38; // r14d
  unsigned int v39; // ecx
  unsigned int *v40; // rax
  __int64 v41; // rcx
  __int64 *v42; // rax
  int v43; // ecx
  __int64 *v44; // r15
  __int64 *v45; // r10
  __int64 v46; // rax
  __int64 *v47; // rdx
  __int64 *v48; // rax
  _QWORD *v49; // rdx
  char **exception; // rbx
  __int64 n; // [rsp+0h] [rbp-88h]
  unsigned int na; // [rsp+0h] [rbp-88h]
  int v53; // [rsp+8h] [rbp-80h]
  __int64 v54; // [rsp+8h] [rbp-80h]
  int v55; // [rsp+10h] [rbp-78h]
  __int64 v56[11]; // [rsp+30h] [rbp-58h] BYREF

  v7 = sub_796F80((__int64)a1, a3);
  v8 = (*(__int64 (__fastcall **)(_QWORD *, __int64, __int64))(*a1 + 48LL))(a1, a2, a3);
  v9 = *(__int64 **)v7;
  *a4 = 0;
  v10 = v8;
  v11 = *(unsigned int *)(v7 + 8);
  v12 = *(_DWORD *)(v10 + 12);
  v13 = v11 - 1;
  v11 *= 8;
  v14 = (__int64 *)((char *)v9 + v11);
  v15 = 8LL * (v12 & v13);
  v16 = &v9[(unsigned __int64)v15 / 8];
  if ( v15 != v11 )
  {
    for ( i = &v9[(unsigned __int64)v15 / 8]; v14 != i; ++i )
    {
      v18 = *i;
      if ( (unsigned __int64)*i > 1 )
      {
        if ( *(_DWORD *)(v18 + 12) == v12 && v10 == v18 )
          return v10;
      }
      else if ( !v18 )
      {
        goto LABEL_8;
      }
    }
  }
  for ( ; v16 != v9; ++v9 )
  {
    v36 = *v9;
    if ( (unsigned __int64)*v9 > 1 )
    {
      if ( *(_DWORD *)(v36 + 12) == v12 && v10 == v36 )
        return v10;
    }
    else if ( !v36 )
    {
      break;
    }
  }
LABEL_8:
  v19 = (_QWORD *)a1[7];
  ++*(_DWORD *)(v10 + 8);
  if ( v19 )
  {
    v20 = *((_DWORD *)v19 - 1);
    if ( v20 == *((_DWORD *)v19 - 2) )
    {
      v38 = (3 * v20 + 1) >> 1;
      v39 = 8 * v38 + 8;
      if ( 8 * v20 + 8 >= v39 || v20 >= v38 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v56, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v56);
        sub_233E40((__int64)v56);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v40 = (unsigned int *)sub_186B300(v19 - 1, v39);
      v41 = v40[1];
      v19 = v40 + 2;
      *v40 = v38;
      a1[7] = v40 + 2;
      LODWORD(v40) = v41;
      v23 = &v19[v41];
      v22 = (_DWORD)v40 + 1;
    }
    else
    {
      v21 = v20;
      v22 = v20 + 1;
      v23 = &v19[v21];
    }
  }
  else
  {
    v49 = (_QWORD *)sub_186B270(0x18u);
    *v49 = 2;
    v22 = 1;
    v19 = v49 + 1;
    a1[7] = v19;
    v23 = v19;
  }
  *v23 = v10;
  *((_DWORD *)v19 - 1) = v22;
  v24 = *(unsigned int *)(v7 + 8);
  if ( 3 * (int)v24 < (unsigned int)(4 * (*(_DWORD *)(v7 + 12) + *(_DWORD *)(v7 + 16))) )
  {
    v53 = 2 * v24;
    n = 8LL * (unsigned int)(2 * v24);
    v42 = (__int64 *)sub_186B270(n);
    v43 = v53;
    v26 = n;
    v25 = v42;
    if ( v53 )
    {
      memset(v42, 0, n);
      v26 = n;
      v43 = v53;
    }
    v44 = *(__int64 **)v7;
    v27 = v43 - 1;
    v28 = (__int64)v25 + v26;
    v45 = (__int64 *)(*(_QWORD *)v7 + 8LL * *(unsigned int *)(v7 + 8));
    if ( *(__int64 **)v7 != v45 )
    {
      do
      {
        if ( (unsigned __int64)*v44 > 1 )
        {
          v46 = 8LL * (*(_DWORD *)(*v44 + 12) & v27);
          v47 = &v25[(unsigned __int64)v46 / 8];
          if ( v26 == v46 )
          {
LABEL_53:
            if ( v25 == v47 )
            {
LABEL_65:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v48 = v25;
            while ( *v48 )
            {
              if ( v47 == ++v48 )
                goto LABEL_65;
            }
          }
          else
          {
            v48 = &v25[(unsigned __int64)v46 / 8];
            while ( *v48 )
            {
              if ( (__int64 *)v28 == ++v48 )
                goto LABEL_53;
            }
          }
          *v48 = *v44;
        }
        ++v44;
      }
      while ( v45 != v44 );
      v45 = *(__int64 **)v7;
    }
    if ( v45 )
    {
      v55 = v43;
      v54 = v26;
      na = v43 - 1;
      sub_186B220(v45);
      v43 = v55;
      v26 = v54;
      v27 = na;
    }
    *(_QWORD *)v7 = v25;
    *(_DWORD *)(v7 + 8) = v43;
    *(_DWORD *)(v7 + 16) = 0;
  }
  else
  {
    v25 = *(__int64 **)v7;
    v26 = 8 * v24;
    v27 = v24 - 1;
    v28 = *(_QWORD *)v7 + 8 * v24;
  }
  v29 = *(_DWORD *)(v10 + 12);
  v30 = v29 & v27;
  v31 = &v25[v30];
  if ( 8 * v30 != v26 )
  {
    v32 = &v25[v30];
    v33 = nullptr;
    while ( 1 )
    {
      v34 = *v32;
      if ( (unsigned __int64)*v32 > 1 )
      {
        if ( *(_DWORD *)(v34 + 12) == v29 && v10 == v34 )
        {
          *v32 = v10;
          goto LABEL_22;
        }
      }
      else
      {
        if ( !v34 )
        {
          if ( v33 )
            goto LABEL_63;
          v33 = v32;
          goto LABEL_64;
        }
        v33 = v32;
      }
      if ( ++v32 == (__int64 *)v28 )
        goto LABEL_35;
    }
  }
  v33 = nullptr;
  while ( 1 )
  {
LABEL_35:
    if ( v31 == v25 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    v37 = *v25;
    if ( (unsigned __int64)*v25 <= 1 )
      break;
    if ( *(_DWORD *)(v37 + 12) == v29 && v10 == v37 )
    {
      *v25 = v10;
      goto LABEL_22;
    }
LABEL_34:
    ++v25;
  }
  if ( v37 )
  {
    v33 = v25;
    goto LABEL_34;
  }
  if ( v33 )
LABEL_63:
    --*(_DWORD *)(v7 + 16);
  else
    v33 = v25;
LABEL_64:
  *v33 = v10;
  ++*(_DWORD *)(v7 + 12);
LABEL_22:
  *a4 = 1;
  return v10;
}

