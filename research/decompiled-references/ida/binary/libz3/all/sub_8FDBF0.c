__int64 __fastcall sub_8FDBF0(__int64 a1, _QWORD *a2, __int64 *a3, __m128i a4, __m128 a5)
{
  char **exception; // rbp
  __int64 (__fastcall *v6)(__int64, unsigned __int8); // rax
  unsigned int v7; // eax
  int v8; // esi
  int v9; // eax
  __int64 v10; // rcx
  _QWORD *v11; // rdx
  unsigned int v12; // ebp
  __int64 v13; // rbx
  unsigned int v14; // eax
  __int64 v15; // rsi
  int v16; // eax
  unsigned int *v17; // rsi
  _QWORD *v18; // rbx
  _QWORD *i; // rbp
  __int64 v20; // r15
  _QWORD *v21; // rbx
  _QWORD *v22; // r14
  __int64 v23; // rbp
  __int64 v24; // r12
  __int64 *v25; // rbx
  unsigned __int64 v26; // rbp
  __int64 v27; // rsi
  bool v28; // zf
  __int64 result; // rax
  int v30; // edx
  _DWORD *v31; // rax
  __int64 v32; // r12
  __int64 j; // rbx
  unsigned int v34; // eax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  unsigned int v39; // eax
  __int64 *v40; // rbp
  unsigned int v41; // ebx
  unsigned __int64 v42; // r12
  __int64 v43; // rsi
  unsigned int v44; // r12d
  unsigned int v45; // ecx
  unsigned int *v46; // rax
  __int64 v47; // rcx
  __int64 v48; // rcx
  _DWORD *v49; // rcx
  _QWORD *v50; // rdx
  __int64 v51; // rax
  _QWORD *v52; // r14
  _QWORD *v53; // rbp
  __int64 v54; // [rsp+8h] [rbp-80h]
  char v57[8]; // [rsp+20h] [rbp-68h] BYREF
  __int64 *v58; // [rsp+28h] [rbp-60h]
  __int64 v59[11]; // [rsp+30h] [rbp-58h] BYREF

  if ( !(unsigned __int8)sub_8F7A60(a1, 1) )
    return 0;
  v6 = *(__int64 (__fastcall **)(__int64, unsigned __int8))(*(_QWORD *)a1 + 8LL);
  if ( v6 == sub_8E5130 )
  {
    if ( *(_BYTE *)(a1 + 176) || *(_QWORD *)(a1 + 8984) != qword_1C7EC50 || *(_BYTE *)(a1 + 2416) )
    {
      v7 = *(_DWORD *)(a1 + 184);
      if ( v7 > *(_DWORD *)(*(_QWORD *)(a1 + 112) + 476LL) )
        v7 = *(_DWORD *)(*(_QWORD *)(a1 + 112) + 476LL);
      *(_DWORD *)(a1 + 184) = v7;
    }
    else
    {
      sub_8E5080(a1, 0);
    }
  }
  else
  {
    v6(a1, 0);
  }
  *(_BYTE *)(a1 + 10440) = 0;
  while ( 1 )
  {
    v8 = *(_DWORD *)(a1 + 9464);
    v9 = *(_DWORD *)(a1 + 9468);
    if ( v9 != v8 )
      sub_8F7780(a1, v8 - v9);
    v58 = nullptr;
    v10 = a2[1];
    *(_QWORD *)v57 = *a2;
    if ( v10 )
    {
      v11 = nullptr;
      v12 = 0;
      do
      {
        if ( v12 >= *(_DWORD *)(v10 - 4) )
          break;
        v13 = *(_QWORD *)(v10 + 8LL * v12);
        if ( v13 )
          ++*(_DWORD *)(v13 + 8);
        if ( v11 )
        {
          v14 = *((_DWORD *)v11 - 1);
          if ( v14 == *((_DWORD *)v11 - 2) )
          {
            v44 = (3 * v14 + 1) >> 1;
            v45 = 8 * v44 + 8;
            if ( 8 * v14 + 8 >= v45 || v14 >= v44 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_8E4EB0(v59, "Overflow encountered when expanding vector");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, v59);
              sub_233E40((__int64)v59);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v46 = (unsigned int *)sub_186B300(v11 - 1, v45);
            v47 = v46[1];
            v11 = v46 + 2;
            *v46 = v44;
            v58 = (__int64 *)(v46 + 2);
            v17 = &v46[2 * v47 + 2];
            v16 = v47 + 1;
            v10 = a2[1];
          }
          else
          {
            v15 = v14;
            v16 = v14 + 1;
            v17 = (unsigned int *)&v11[v15];
          }
        }
        else
        {
          v50 = (_QWORD *)sub_186B270(0x18u);
          *v50 = 2;
          v16 = 1;
          v11 = v50 + 1;
          v58 = v11;
          v10 = a2[1];
          v17 = (unsigned int *)v11;
        }
        *(_QWORD *)v17 = v13;
        ++v12;
        *((_DWORD *)v11 - 1) = v16;
      }
      while ( v10 );
    }
    sub_8EA730(a1);
    v18 = *(_QWORD **)(a1 + 8688);
    if ( v18 )
    {
      for ( i = &v18[*((unsigned int *)v18 - 1)]; i != v18; ++v18 )
        (*(void (__fastcall **)(_QWORD, char *))(*(_QWORD *)*v18 + 120LL))(*v18, v57);
    }
    v20 = *a3;
    if ( *a3 )
    {
      v54 = v20 + 16LL * *(unsigned int *)(v20 - 4);
      if ( v54 != v20 )
        break;
    }
LABEL_49:
    sub_8F5580(a1, (__int64)v57, a4, a5);
    v32 = *a3;
    if ( *a3 )
    {
      for ( j = v32 + 16LL * *(unsigned int *)(v32 - 4); j != v32; v32 += 16 )
        sub_8EEC80(a1, v32);
    }
    v34 = sub_8FD390(a1);
    v39 = sub_8F82B0(a1, v34, v35, v36, v37, v38);
    v40 = v58;
    v41 = v39;
    if ( v58 )
    {
      v42 = (unsigned __int64)&v58[*((unsigned int *)v58 - 1)];
      if ( (unsigned __int64)v58 >= v42 )
        goto LABEL_60;
      do
      {
        while ( 1 )
        {
          v43 = *v40;
          if ( *v40 )
          {
            v28 = (*(_DWORD *)(v43 + 8))-- == 1;
            if ( v28 )
              break;
          }
          if ( (unsigned __int64)++v40 >= v42 )
            goto LABEL_59;
        }
        sub_15D7BC0(*(_QWORD *)v57, v43);
        ++v40;
      }
      while ( (unsigned __int64)v40 < v42 );
LABEL_59:
      v40 = v58;
      if ( v58 )
LABEL_60:
        sub_186B220(v40 - 1);
    }
    if ( v41 != -1
      || (v51 = *(_QWORD *)(a1 + 9376)) == 0
      || !*(_DWORD *)(v51 - 4)
      || (v52 = *(_QWORD **)(a1 + 8688)) == nullptr
      || (v53 = &v52[*((unsigned int *)v52 - 1)], v52 == v53) )
    {
LABEL_62:
      result = sub_8EC600(a1, v41);
      goto LABEL_63;
    }
    while ( !(*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v52 + 136LL))(*v52, a1 + 9368) )
    {
      if ( v53 == ++v52 )
        goto LABEL_62;
    }
  }
  while ( 1 )
  {
    v21 = *(_QWORD **)(v20 + 8);
    if ( v21 )
    {
      v22 = &v21[*((unsigned int *)v21 - 1)];
      if ( v21 != v22 )
        break;
    }
LABEL_48:
    v20 += 16;
    if ( v20 == v54 )
      goto LABEL_49;
  }
  while ( 1 )
  {
    v23 = *v21;
    v24 = *(_QWORD *)(a1 + 104);
    if ( !(unsigned __int8)sub_15D2CB0(v24, *v21) || *(_WORD *)(v23 + 4) )
      break;
    v30 = *(_DWORD *)(v23 + 24);
    v31 = *(_DWORD **)(*(_QWORD *)(v23 + 16) + 24LL);
    if ( !v30 )
    {
      if ( !v31 || *v31 == -1 )
        goto LABEL_47;
      if ( !*v31 && v31[1] != 8 )
        goto LABEL_72;
      goto LABEL_43;
    }
    if ( v31 )
    {
      if ( !*v31 )
      {
        if ( v31[1] == 8 && v30 == 1 )
        {
          v48 = *(_QWORD *)(v23 + 32);
          if ( !*(_WORD *)(v48 + 4) && !*(_DWORD *)(v48 + 24) )
          {
            v49 = *(_DWORD **)(*(_QWORD *)(v48 + 16) + 24LL);
            if ( !v49 || *v49 == -1 )
              goto LABEL_47;
          }
        }
LABEL_72:
        if ( v23 == *(_QWORD *)(v24 + 856) || v23 == *(_QWORD *)(v24 + 864) )
          goto LABEL_47;
LABEL_45:
        if ( !*v31 || v30 )
          break;
        goto LABEL_47;
      }
LABEL_43:
      if ( v23 == *(_QWORD *)(v24 + 856) || v23 == *(_QWORD *)(v24 + 864) )
        goto LABEL_47;
      goto LABEL_45;
    }
    if ( v23 != *(_QWORD *)(v24 + 856) && v23 != *(_QWORD *)(v24 + 864) )
      break;
LABEL_47:
    if ( v22 == ++v21 )
      goto LABEL_48;
  }
  sub_1875640("an assumption must be a propositional variable or the negation of one", (char)v57);
  v25 = v58;
  if ( v58 )
  {
    v26 = (unsigned __int64)&v58[*((unsigned int *)v58 - 1)];
    if ( (unsigned __int64)v58 >= v26 )
      goto LABEL_37;
    do
    {
      while ( 1 )
      {
        v27 = *v25;
        if ( *v25 )
        {
          v28 = (*(_DWORD *)(v27 + 8))-- == 1;
          if ( v28 )
            break;
        }
        if ( (unsigned __int64)++v25 >= v26 )
          goto LABEL_36;
      }
      sub_15D7BC0(*(_QWORD *)v57, v27);
      ++v25;
    }
    while ( (unsigned __int64)v25 < v26 );
LABEL_36:
    v25 = v58;
    if ( v58 )
LABEL_37:
      sub_186B220(v25 - 1);
  }
  result = 0;
LABEL_63:
  if ( !*(_BYTE *)(a1 + 10440) )
    *(_DWORD *)(a1 + 10308) = 3;
  return result;
}

