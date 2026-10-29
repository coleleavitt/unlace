__int64 __fastcall sub_2F0D00(__int64 a1)
{
  char **v1; // rbp
  char **exception; // rbp
  void **v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rdx
  unsigned int v6; // r14d
  void **v8; // r13
  void (__fastcall ***v9)(void *); // r12
  __int64 v11; // rcx
  unsigned int v12; // ebx
  unsigned int v13; // r13d
  unsigned __int64 *v14; // r14
  __int64 v15; // r14
  _QWORD *v16; // rdx
  unsigned int v17; // eax
  __int64 v18; // rsi
  int v19; // eax
  _QWORD *v20; // rsi
  _QWORD *v21; // rax
  __int64 v22; // rbx
  __int64 (__fastcall *v23)(__int64); // rax
  __int64 v24; // r15
  unsigned int v25; // eax
  __int64 v26; // rcx
  _QWORD *v27; // rdx
  unsigned int v28; // eax
  __int64 v29; // rsi
  int v30; // eax
  _QWORD *v31; // rsi
  unsigned int v32; // r15d
  size_t v33; // rsi
  unsigned int *v34; // rax
  __int64 v35; // rcx
  _QWORD *v36; // rax
  _DWORD *v37; // rbx
  unsigned int v38; // r8d
  size_t v39; // rsi
  unsigned int *v40; // rax
  __int64 v41; // rsi
  __int64 v42; // rdx
  _QWORD *v43; // rax
  __int64 v44; // [rsp+0h] [rbp-68h]
  __int64 v45; // [rsp+0h] [rbp-68h]
  unsigned int v46; // [rsp+Ch] [rbp-5Ch]
  __int64 v47[11]; // [rsp+10h] [rbp-58h] BYREF

  v3 = *(void ***)(a1 + 272);
  v4 = *(unsigned int *)(a1 + 280);
  if ( !v3 )
  {
    v42 = *(_QWORD *)(a1 + 608);
    if ( !v42 || (unsigned int)v4 >= *(_DWORD *)(v42 - 4) )
    {
      if ( (_DWORD)v4 != -1 )
        goto LABEL_6;
      *(_DWORD *)(a1 + 280) = 1;
      goto LABEL_16;
    }
LABEL_57:
    v6 = 0;
    sub_2EB6D0(*(void (****)(void))(a1 + 616));
    ++*(_DWORD *)(a1 + 280);
    *(_QWORD *)(a1 + 616) = 0;
    return v6;
  }
  if ( (unsigned int)v4 < *((_DWORD *)v3 - 1) )
  {
    v37 = v3[v4];
    if ( v37 )
      ++v37[4];
    sub_2EB6D0(*(void (****)(void))(a1 + 616));
    ++*(_DWORD *)(a1 + 280);
    *(_QWORD *)(a1 + 616) = v37;
    return 1;
  }
  v5 = *(_QWORD *)(a1 + 608);
  if ( v5 && (unsigned int)v4 < *(_DWORD *)(v5 - 4) )
    goto LABEL_57;
  if ( (_DWORD)v4 == -1 )
  {
    *(_DWORD *)(a1 + 280) = 1;
    v8 = &v3[*((unsigned int *)v3 - 1)];
    if ( v3 >= v8 )
      goto LABEL_15;
    do
    {
      while ( 1 )
      {
        v9 = (void (__fastcall ***)(void *))*v3;
        if ( *v3 )
        {
          if ( (*((_DWORD *)v9 + 4))-- == 1 )
            break;
        }
        if ( ++v3 >= v8 )
          goto LABEL_14;
      }
      ++v3;
      (**v9)(v9);
      sub_186B220(v9);
    }
    while ( v3 < v8 );
LABEL_14:
    v3 = *(void ***)(a1 + 272);
    if ( v3 )
LABEL_15:
      *((_DWORD *)v3 - 1) = 0;
LABEL_16:
    v6 = sub_335A80(a1 + 296);
    if ( v6 != 1 )
      return v6;
    v11 = *(_QWORD *)(a1 + 608);
    v12 = 0;
    v13 = 0;
    while ( v11 )
    {
      if ( v13 >= *(_DWORD *)(v11 - 4) )
        break;
      v14 = (unsigned __int64 *)(v11 + 104LL * v13);
      if ( *(_DWORD *)v14 == 2 )
      {
        v23 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 240LL);
        if ( v23 == sub_2EAF00 )
          v24 = *(_QWORD *)(a1 + 232);
        else
          v24 = v23(a1);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 192LL))(v24);
        v25 = sub_2EEAA0((_QWORD *)a1, v14, 0, 0);
        v26 = *(_QWORD *)(a1 + 616);
        v6 = v25;
        if ( v26 )
          ++*(_DWORD *)(v26 + 16);
        v27 = *(_QWORD **)(a1 + 272);
        if ( v27 )
        {
          v28 = *((_DWORD *)v27 - 1);
          if ( v28 == *((_DWORD *)v27 - 2) )
          {
            v38 = (3 * v28 + 1) >> 1;
            v39 = 8 * v38 + 8;
            if ( 8 * v28 + 8 >= (unsigned int)v39 || v28 >= v38 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_2EB560(v47, "Overflow encountered when expanding vector");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, v47);
              sub_233E40((__int64)v47);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v46 = (3 * v28 + 1) >> 1;
            v44 = v26;
            v40 = (unsigned int *)sub_186B300(v27 - 1, v39);
            v41 = v40[1];
            v27 = v40 + 2;
            *(_QWORD *)(a1 + 272) = v40 + 2;
            v26 = v44;
            *v40 = v46;
            LODWORD(v40) = v41;
            v31 = &v27[v41];
            v30 = (_DWORD)v40 + 1;
          }
          else
          {
            v29 = v28;
            v30 = v28 + 1;
            v31 = &v27[v29];
          }
        }
        else
        {
          v45 = v26;
          v43 = (_QWORD *)sub_186B270(0x18u);
          v27 = v43 + 1;
          *v43 = 2;
          v26 = v45;
          v30 = 1;
          *(_QWORD *)(a1 + 272) = v27;
          v31 = v27;
        }
        *v31 = v26;
        ++v13;
        *((_DWORD *)v27 - 1) = v30;
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v24 + 200LL))(v24, 1);
        if ( v6 == 1 )
        {
          v11 = *(_QWORD *)(a1 + 608);
          continue;
        }
        return v6;
      }
      v15 = *(_QWORD *)(*(_QWORD *)(a1 + 408) + 8LL * v12);
      if ( v15 || (v15 = *(_QWORD *)(a1 + 616)) != 0 )
      {
        v16 = *(_QWORD **)(a1 + 272);
        ++*(_DWORD *)(v15 + 16);
        if ( v16 )
          goto LABEL_23;
      }
      else
      {
        v16 = *(_QWORD **)(a1 + 272);
        if ( v16 )
        {
LABEL_23:
          v17 = *((_DWORD *)v16 - 1);
          if ( v17 == *((_DWORD *)v16 - 2) )
          {
            v32 = (3 * v17 + 1) >> 1;
            v33 = 8 * v32 + 8;
            if ( 8 * v17 + 8 >= (unsigned int)v33 || v17 >= v32 )
            {
              v1 = (char **)__cxa_allocate_exception(0x28u);
              sub_2EB560(v47, "Overflow encountered when expanding vector");
              *v1 = (char *)off_1C63128;
              sub_2333C0(v1 + 1, v47);
              sub_233E40((__int64)v47);
              __cxa_throw(v1, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v34 = (unsigned int *)sub_186B300(v16 - 1, v33);
            v35 = v34[1];
            v16 = v34 + 2;
            *v34 = v32;
            *(_QWORD *)(a1 + 272) = v34 + 2;
            LODWORD(v34) = v35;
            v20 = &v16[v35];
            v11 = *(_QWORD *)(a1 + 608);
            v19 = (_DWORD)v34 + 1;
          }
          else
          {
            v18 = v17;
            v19 = v17 + 1;
            v20 = &v16[v18];
          }
          goto LABEL_25;
        }
      }
      v36 = (_QWORD *)sub_186B270(0x18u);
      v11 = *(_QWORD *)(a1 + 608);
      v16 = v36 + 1;
      *v36 = 2;
      v19 = 1;
      *(_QWORD *)(a1 + 272) = v16;
      v20 = v16;
LABEL_25:
      *v20 = v15;
      ++v12;
      ++v13;
      *((_DWORD *)v16 - 1) = v19;
    }
    v21 = *(_QWORD **)(a1 + 272);
    if ( v21 && *((_DWORD *)v21 - 1) )
    {
      v22 = *v21;
      if ( *v21 )
        ++*(_DWORD *)(v22 + 16);
      sub_2EB6D0(*(void (****)(void))(a1 + 616));
      *(_QWORD *)(a1 + 616) = v22;
    }
    return 1;
  }
LABEL_6:
  *(_DWORD *)(a1 + 280) = -1;
  return (unsigned int)-1;
}

