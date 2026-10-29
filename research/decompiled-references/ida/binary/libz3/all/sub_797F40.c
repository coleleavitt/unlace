__int64 __fastcall sub_797F40(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v5; // r12
  __int64 v6; // rax
  __int64 *v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // rax
  int v10; // edi
  unsigned int v11; // edx
  __int64 *v12; // rsi
  __int64 v13; // rdx
  __int64 *v14; // r8
  __int64 *i; // rax
  __int64 v16; // rdx
  _QWORD *v17; // rdx
  unsigned int v18; // eax
  __int64 v19; // rcx
  int v20; // eax
  __int64 *v21; // rcx
  __int64 v22; // rax
  int v23; // r9d
  __int64 *v24; // rbp
  size_t v25; // r15
  unsigned int v26; // r8d
  __int64 v27; // r13
  int v28; // ecx
  __int64 v29; // r8
  __int64 *v30; // rdi
  __int64 *v31; // rax
  __int64 *v32; // rsi
  __int64 v33; // rdx
  __int64 v35; // rax
  __int64 v36; // rax
  unsigned int v37; // r13d
  unsigned int v38; // ecx
  unsigned int *v39; // rax
  __int64 v40; // rcx
  __int64 *v41; // rax
  int v42; // ecx
  __int64 *v43; // r14
  __int64 *v44; // r9
  __int64 v45; // rax
  __int64 *v46; // rdx
  __int64 *v47; // rax
  _QWORD *v48; // rdx
  char **exception; // rbx
  int v50; // [rsp+0h] [rbp-78h]
  unsigned int v51; // [rsp+0h] [rbp-78h]
  int v52; // [rsp+8h] [rbp-70h]
  __int64 v53[11]; // [rsp+20h] [rbp-58h] BYREF

  v5 = sub_796F80((__int64)a1, a3);
  v6 = (*(__int64 (__fastcall **)(_QWORD *, __int64, __int64))(*a1 + 48LL))(a1, a2, a3);
  v7 = *(__int64 **)v5;
  v8 = v6;
  v9 = *(unsigned int *)(v5 + 8);
  v10 = *(_DWORD *)(v8 + 12);
  v11 = v9 - 1;
  v9 *= 8;
  v12 = (__int64 *)(*(_QWORD *)v5 + v9);
  v13 = 8LL * (v10 & v11);
  v14 = (__int64 *)(*(_QWORD *)v5 + v13);
  if ( v13 != v9 )
  {
    for ( i = (__int64 *)(*(_QWORD *)v5 + v13); v12 != i; ++i )
    {
      v16 = *i;
      if ( (unsigned __int64)*i > 1 )
      {
        if ( *(_DWORD *)(v16 + 12) == v10 && v8 == v16 )
          return v8;
      }
      else if ( !v16 )
      {
        goto LABEL_8;
      }
    }
  }
  for ( ; v14 != v7; ++v7 )
  {
    v35 = *v7;
    if ( (unsigned __int64)*v7 > 1 )
    {
      if ( *(_DWORD *)(v35 + 12) == v10 && v8 == v35 )
        return v8;
    }
    else if ( !v35 )
    {
      break;
    }
  }
LABEL_8:
  v17 = (_QWORD *)a1[7];
  ++*(_DWORD *)(v8 + 8);
  if ( v17 )
  {
    v18 = *((_DWORD *)v17 - 1);
    if ( v18 == *((_DWORD *)v17 - 2) )
    {
      v37 = (3 * v18 + 1) >> 1;
      v38 = 8 * v37 + 8;
      if ( 8 * v18 + 8 >= v38 || v18 >= v37 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v53, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v53);
        sub_233E40((__int64)v53);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v39 = (unsigned int *)sub_186B300(v17 - 1, v38);
      v40 = v39[1];
      v17 = v39 + 2;
      *v39 = v37;
      a1[7] = v39 + 2;
      LODWORD(v39) = v40;
      v21 = &v17[v40];
      v20 = (_DWORD)v39 + 1;
    }
    else
    {
      v19 = v18;
      v20 = v18 + 1;
      v21 = &v17[v19];
    }
  }
  else
  {
    v48 = (_QWORD *)sub_186B270(0x18u);
    *v48 = 2;
    v20 = 1;
    v17 = v48 + 1;
    a1[7] = v17;
    v21 = v17;
  }
  *v21 = v8;
  *((_DWORD *)v17 - 1) = v20;
  v22 = *(unsigned int *)(v5 + 8);
  v23 = *(_DWORD *)(v5 + 16);
  if ( 3 * (int)v22 < (unsigned int)(4 * (v23 + *(_DWORD *)(v5 + 12))) )
  {
    v50 = 2 * v22;
    v25 = 8LL * (unsigned int)(2 * v22);
    v41 = (__int64 *)sub_186B270(v25);
    v42 = v50;
    v24 = v41;
    if ( v50 )
    {
      memset(v41, 0, v25);
      v42 = v50;
    }
    v43 = *(__int64 **)v5;
    v26 = v42 - 1;
    v27 = (__int64)&v24[v25 / 8];
    v44 = (__int64 *)(*(_QWORD *)v5 + 8LL * *(unsigned int *)(v5 + 8));
    if ( *(__int64 **)v5 != v44 )
    {
      do
      {
        if ( (unsigned __int64)*v43 > 1 )
        {
          v45 = 8LL * (*(_DWORD *)(*v43 + 12) & v26);
          v46 = &v24[(unsigned __int64)v45 / 8];
          if ( v25 == v45 )
          {
LABEL_55:
            if ( v24 == v46 )
            {
LABEL_64:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v47 = v24;
            while ( *v47 )
            {
              if ( v46 == ++v47 )
                goto LABEL_64;
            }
          }
          else
          {
            v47 = &v24[(unsigned __int64)v45 / 8];
            while ( *v47 )
            {
              if ( (__int64 *)v27 == ++v47 )
                goto LABEL_55;
            }
          }
          *v47 = *v43;
        }
        ++v43;
      }
      while ( v44 != v43 );
      v44 = *(__int64 **)v5;
    }
    if ( v44 )
    {
      v52 = v42;
      v51 = v42 - 1;
      sub_186B220(v44);
      v42 = v52;
      v26 = v51;
    }
    *(_QWORD *)v5 = v24;
    v23 = 0;
    *(_DWORD *)(v5 + 8) = v42;
    *(_DWORD *)(v5 + 16) = 0;
  }
  else
  {
    v24 = *(__int64 **)v5;
    v25 = 8 * v22;
    v26 = v22 - 1;
    v27 = *(_QWORD *)v5 + 8 * v22;
  }
  v28 = *(_DWORD *)(v8 + 12);
  v29 = v28 & v26;
  v30 = &v24[v29];
  if ( 8 * v29 != v25 )
  {
    v31 = &v24[v29];
    v32 = nullptr;
    while ( 1 )
    {
      v33 = *v31;
      if ( (unsigned __int64)*v31 > 1 )
      {
        if ( *(_DWORD *)(v33 + 12) == v28 && v8 == v33 )
        {
          *v31 = v8;
          return v8;
        }
      }
      else
      {
        if ( !v33 )
        {
          if ( v32 )
            goto LABEL_22;
          v32 = v31;
          goto LABEL_23;
        }
        v32 = v31;
      }
      if ( ++v31 == (__int64 *)v27 )
        goto LABEL_36;
    }
  }
  v32 = nullptr;
  while ( 1 )
  {
LABEL_36:
    if ( v30 == v24 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    v36 = *v24;
    if ( (unsigned __int64)*v24 <= 1 )
      break;
    if ( *(_DWORD *)(v36 + 12) == v28 && v8 == v36 )
    {
      *v24 = v8;
      return v8;
    }
LABEL_35:
    ++v24;
  }
  if ( v36 )
  {
    v32 = v24;
    goto LABEL_35;
  }
  if ( v32 )
LABEL_22:
    *(_DWORD *)(v5 + 16) = v23 - 1;
  else
    v32 = v24;
LABEL_23:
  *v32 = v8;
  ++*(_DWORD *)(v5 + 12);
  return v8;
}

