char *__fastcall sub_797540(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rax
  int v6; // edi
  char **v7; // rcx
  __int64 v8; // r12
  __int64 v9; // rax
  unsigned int v10; // edx
  char *v11; // rsi
  __int64 v12; // rdx
  char **v13; // r8
  char *result; // rax
  __int64 v15; // rdx
  _QWORD *v16; // rdx
  unsigned int v17; // eax
  __int64 v18; // rcx
  int v19; // eax
  _QWORD *v20; // rcx
  __int64 v21; // rax
  int v22; // r9d
  _QWORD *v23; // rbx
  size_t v24; // r15
  unsigned int v25; // r8d
  __int64 v26; // r13
  int v27; // ecx
  __int64 v28; // r8
  _QWORD *v29; // rdi
  char *v30; // rsi
  __int64 v31; // rdx
  unsigned int v32; // r13d
  unsigned int v33; // ecx
  unsigned int *v34; // rax
  __int64 v35; // rcx
  _QWORD *v36; // rax
  int v37; // ecx
  _QWORD *v38; // r14
  _QWORD *v39; // r9
  __int64 v40; // rax
  _QWORD *v41; // rdx
  _QWORD *v42; // rax
  _QWORD *v43; // rdx
  char **exception; // rbx
  int v45; // [rsp+0h] [rbp-78h]
  unsigned int v46; // [rsp+0h] [rbp-78h]
  int v47; // [rsp+8h] [rbp-70h]
  __int64 v48[11]; // [rsp+20h] [rbp-58h] BYREF

  v4 = sub_15D1F10(a2);
  v5 = sub_796F80(a1, v4);
  v6 = *(_DWORD *)(a2 + 12);
  v7 = *(char ***)v5;
  v8 = v5;
  v9 = *(unsigned int *)(v5 + 8);
  v10 = v9 - 1;
  v9 *= 8;
  v11 = (char *)v7 + v9;
  v12 = 8LL * (v6 & v10);
  v13 = &v7[(unsigned __int64)v12 / 8];
  if ( v12 != v9 )
  {
    for ( result = (char *)&v7[(unsigned __int64)v12 / 8]; v11 != result; result += 8 )
    {
      v15 = *(_QWORD *)result;
      if ( *(_QWORD *)result > 1u )
      {
        if ( *(_DWORD *)(v15 + 12) == v6 && v15 == a2 )
          return result;
      }
      else if ( !v15 )
      {
        goto LABEL_8;
      }
    }
  }
  for ( ; v13 != v7; ++v7 )
  {
    result = *v7;
    if ( (unsigned __int64)*v7 > 1 )
    {
      if ( *((_DWORD *)result + 3) == v6 && result == (char *)a2 )
        return result;
    }
    else if ( !result )
    {
      break;
    }
  }
LABEL_8:
  v16 = *(_QWORD **)(a1 + 56);
  ++*(_DWORD *)(a2 + 8);
  if ( v16 )
  {
    v17 = *((_DWORD *)v16 - 1);
    if ( v17 == *((_DWORD *)v16 - 2) )
    {
      v32 = (3 * v17 + 1) >> 1;
      v33 = 8 * v32 + 8;
      if ( 8 * v17 + 8 >= v33 || v17 >= v32 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v48, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v48);
        sub_233E40((__int64)v48);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v34 = (unsigned int *)sub_186B300(v16 - 1, v33);
      v35 = v34[1];
      v16 = v34 + 2;
      *v34 = v32;
      *(_QWORD *)(a1 + 56) = v34 + 2;
      LODWORD(v34) = v35;
      v20 = &v16[v35];
      v19 = (_DWORD)v34 + 1;
    }
    else
    {
      v18 = v17;
      v19 = v17 + 1;
      v20 = &v16[v18];
    }
  }
  else
  {
    v43 = (_QWORD *)sub_186B270(0x18u);
    *v43 = 2;
    v19 = 1;
    v16 = v43 + 1;
    *(_QWORD *)(a1 + 56) = v16;
    v20 = v16;
  }
  *v20 = a2;
  *((_DWORD *)v16 - 1) = v19;
  v21 = *(unsigned int *)(v8 + 8);
  v22 = *(_DWORD *)(v8 + 16);
  if ( 3 * (int)v21 < (unsigned int)(4 * (v22 + *(_DWORD *)(v8 + 12))) )
  {
    v45 = 2 * v21;
    v24 = 8LL * (unsigned int)(2 * v21);
    v36 = (_QWORD *)sub_186B270(v24);
    v37 = v45;
    v23 = v36;
    if ( v45 )
    {
      memset(v36, 0, v24);
      v37 = v45;
    }
    v38 = *(_QWORD **)v8;
    v25 = v37 - 1;
    v26 = (__int64)&v23[v24 / 8];
    v39 = (_QWORD *)(*(_QWORD *)v8 + 8LL * *(unsigned int *)(v8 + 8));
    if ( *(_QWORD **)v8 != v39 )
    {
      do
      {
        if ( *v38 > 1u )
        {
          v40 = 8LL * (*(_DWORD *)(*v38 + 12LL) & v25);
          v41 = &v23[(unsigned __int64)v40 / 8];
          if ( v24 == v40 )
          {
LABEL_55:
            if ( v23 == v41 )
            {
LABEL_65:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v42 = v23;
            while ( *v42 )
            {
              if ( v41 == ++v42 )
                goto LABEL_65;
            }
          }
          else
          {
            v42 = &v23[(unsigned __int64)v40 / 8];
            while ( *v42 )
            {
              if ( (_QWORD *)v26 == ++v42 )
                goto LABEL_55;
            }
          }
          *v42 = *v38;
        }
        ++v38;
      }
      while ( v39 != v38 );
      v39 = *(_QWORD **)v8;
    }
    if ( v39 )
    {
      v47 = v37;
      v46 = v37 - 1;
      sub_186B220(v39);
      v37 = v47;
      v25 = v46;
    }
    *(_QWORD *)v8 = v23;
    v22 = 0;
    *(_DWORD *)(v8 + 8) = v37;
    *(_DWORD *)(v8 + 16) = 0;
  }
  else
  {
    v23 = *(_QWORD **)v8;
    v24 = 8 * v21;
    v25 = v21 - 1;
    v26 = *(_QWORD *)v8 + 8 * v21;
  }
  v27 = *(_DWORD *)(a2 + 12);
  v28 = v27 & v25;
  v29 = &v23[v28];
  if ( 8 * v28 != v24 )
  {
    result = (char *)&v23[v28];
    v30 = nullptr;
    while ( 1 )
    {
      v31 = *(_QWORD *)result;
      if ( *(_QWORD *)result > 1u )
      {
        if ( *(_DWORD *)(v31 + 12) == v27 && v31 == a2 )
        {
          *(_QWORD *)result = a2;
          return result;
        }
      }
      else
      {
        if ( !v31 )
        {
          if ( v30 )
            goto LABEL_22;
          v30 = result;
          goto LABEL_23;
        }
        v30 = result;
      }
      result += 8;
      if ( result == (char *)v26 )
        goto LABEL_36;
    }
  }
  v30 = nullptr;
  while ( 1 )
  {
LABEL_36:
    if ( v29 == v23 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    result = (char *)*v23;
    if ( *v23 <= 1u )
      break;
    if ( *((_DWORD *)result + 3) == v27 && result == (char *)a2 )
    {
      *v23 = a2;
      return result;
    }
LABEL_35:
    ++v23;
  }
  if ( result )
  {
    v30 = (char *)v23;
    goto LABEL_35;
  }
  if ( v30 )
LABEL_22:
    *(_DWORD *)(v8 + 16) = v22 - 1;
  else
    v30 = (char *)v23;
LABEL_23:
  *(_QWORD *)v30 = a2;
  ++*(_DWORD *)(v8 + 12);
  return result;
}

