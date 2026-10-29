__int64 __fastcall sub_69A240(__int64 a1, unsigned int a2)
{
  unsigned int v3; // eax
  __int64 v4; // rdi
  unsigned int v5; // r13d
  char *v6; // rdi
  int v7; // ecx
  char *v8; // rdx
  unsigned int v9; // esi
  char *v10; // rax
  unsigned int v11; // ebp
  __int64 v12; // r12
  void *v13; // rcx
  __int64 result; // rax
  __int64 v15; // rax
  unsigned int v16; // ecx
  int v17; // edx
  __int64 v18; // rdx
  __int64 v20; // rdx
  __int64 v21; // rcx
  void (__fastcall ***v22)(void *); // rbp
  bool v23; // zf
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rdx
  unsigned int v28; // ebp
  _QWORD *v29; // rdx
  __int64 v30; // r12
  unsigned int v31; // ecx
  size_t v32; // rsi
  unsigned int v33; // r15d
  unsigned int *v34; // rax
  unsigned int v35; // eax
  __int64 v36; // r12
  _QWORD *v37; // rdi
  __int64 v38; // rdx
  __int64 v39; // rdx
  _QWORD *v40; // rdi
  unsigned int v41; // ebp
  __int64 v42; // r12
  unsigned int v43; // edx
  size_t v44; // rsi
  unsigned int v45; // r15d
  unsigned int *v46; // rax
  unsigned int v47; // eax
  __int64 v48; // r12
  __int64 v49; // rdx
  _QWORD *v50; // rdi
  unsigned __int64 v51; // rdx
  __int64 *v52; // r12
  __int64 v53; // rsi
  __int64 v54; // rdi
  unsigned __int64 v55; // r8
  __int64 *v56; // r12
  __int64 v57; // rsi
  __int64 v58; // rdi
  _QWORD *v59; // rax
  _QWORD *v60; // rax
  unsigned int v61; // esi
  char **exception; // rbp
  unsigned __int64 v63; // [rsp+8h] [rbp-60h]
  unsigned __int64 v64; // [rsp+8h] [rbp-60h]
  __int64 v65[11]; // [rsp+10h] [rbp-58h] BYREF

  v3 = *(_DWORD *)(a1 + 4548);
  v4 = *(_QWORD *)(a1 + 4528);
  if ( a2 <= v3 )
    v3 = a2;
  v5 = v3;
  if ( v4 )
    sub_FC1870(v4, v3);
  if ( *(_DWORD *)(a1 + 4740) || *(_DWORD *)(a1 + 4744) )
  {
    v6 = *(char **)(a1 + 4728);
    v7 = 0;
    v8 = &v6[8 * *(unsigned int *)(a1 + 4736)];
    v9 = *(_DWORD *)(a1 + 4736);
    v10 = v6;
    if ( v6 == v8 )
      goto LABEL_18;
    do
    {
      while ( *(_QWORD *)v10 )
      {
        *(_QWORD *)v10 = 0;
        v10 += 8;
        if ( v8 == v10 )
          goto LABEL_12;
      }
      v10 += 8;
      ++v7;
    }
    while ( v8 != v10 );
LABEL_12:
    if ( v9 <= 0x10 || 3 * v9 >= 4 * v7 )
      goto LABEL_18;
    if ( v6 )
    {
      sub_186B220(v6);
      v11 = *(_DWORD *)(a1 + 4736);
      *(_QWORD *)(a1 + 4728) = 0;
      v11 >>= 1;
      *(_DWORD *)(a1 + 4736) = v11;
      v12 = v11;
      v13 = (void *)sub_186B270(8LL * v11);
      if ( !v11 )
      {
LABEL_17:
        *(_QWORD *)(a1 + 4728) = v13;
LABEL_18:
        *(_QWORD *)(a1 + 4740) = 0;
        goto LABEL_19;
      }
    }
    else
    {
      *(_QWORD *)(a1 + 4728) = 0;
      v61 = v9 >> 1;
      v12 = v61;
      *(_DWORD *)(a1 + 4736) = v61;
      v13 = (void *)sub_186B270(8LL * v61);
    }
    v13 = memset(v13, 0, 8 * v12);
    goto LABEL_17;
  }
LABEL_19:
  sub_1623780(a1 + 4480, v5);
  sub_7868C0(a1 + 4376, v5);
  result = sub_11C78C0(a1 + 96, v5);
  *(_DWORD *)(a1 + 4548) -= v5;
  if ( v5 )
  {
    v15 = *(_QWORD *)(a1 + 4368);
    if ( v15 )
    {
      v16 = v5 - 1;
      do
      {
        v17 = *(_DWORD *)(v15 - 4);
        if ( !v17 )
          break;
        v18 = (unsigned int)(v17 - 1);
        *(_BYTE *)(a1 + 4360) = *(_BYTE *)(v15 + v18);
        *(_DWORD *)(v15 - 4) = v18;
      }
      while ( v16-- != 0 );
    }
    do
    {
      v20 = *(_QWORD *)(a1 + 4712);
      v21 = (unsigned int)(*(_DWORD *)(v20 - 4) - 1);
      v22 = *(void (__fastcall ****)(void *))(v20 + 8 * v21);
      *(_DWORD *)(v20 - 4) = v21;
      if ( v22 )
      {
        v23 = (*((_DWORD *)v22 + 2))-- == 1;
        if ( v23 )
        {
          (**v22)(v22);
          sub_186B220(v22);
        }
      }
      v24 = *(_QWORD *)(a1 + 4448);
      v25 = 0x3FFFFFFFCLL;
      if ( v24 )
        v25 = 4LL * (unsigned int)(*(_DWORD *)(v24 - 4) - 1);
      v26 = *(_QWORD *)(a1 + 4432);
      *(_DWORD *)(a1 + 4456) = *(_DWORD *)(v24 + v25);
      v27 = 0x3FFFFFFFCLL;
      if ( v26 )
        v27 = 4LL * (unsigned int)(*(_DWORD *)(v26 - 4) - 1);
      v28 = *(_DWORD *)(v26 + v27);
      v29 = *(_QWORD **)(a1 + 4408);
      if ( !v29 )
      {
LABEL_79:
        if ( v28 )
        {
          v30 = 0;
          v60 = (_QWORD *)sub_186B270(0x18u);
          v29 = v60 + 1;
          *v60 = 2;
          *(_QWORD *)(a1 + 4408) = v60 + 1;
LABEL_38:
          while ( 1 )
          {
            v35 = *((_DWORD *)v29 - 2);
            if ( v35 >= v28 )
              break;
            v31 = (3 * v35 + 1) >> 1;
            v32 = 8 * v31 + 8;
            v33 = v31;
            if ( 8 * v35 + 8 >= (unsigned int)v32 || v35 >= v31 )
            {
LABEL_82:
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_68CF80(v65, "Overflow encountered when expanding vector");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, v65);
              sub_233E40((__int64)v65);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v34 = (unsigned int *)sub_186B300(v29 - 1, v32);
            v29 = v34 + 2;
            *v34 = v33;
            *(_QWORD *)(a1 + 4408) = v34 + 2;
          }
          v36 = 8 * v30;
          *((_DWORD *)v29 - 1) = v28;
          v37 = &v29[(unsigned __int64)v36 / 8];
          v38 = 8LL * v28;
          if ( v36 != v38 )
            memset(v37, 0, v38 - v36);
        }
        v24 = *(_QWORD *)(a1 + 4448);
        v26 = *(_QWORD *)(a1 + 4432);
        goto LABEL_42;
      }
      v30 = *((unsigned int *)v29 - 1);
      if ( v28 < (unsigned int)v30 )
      {
        v55 = (unsigned __int64)&v29[v30];
        v56 = &v29[v28];
        if ( (unsigned __int64)v56 >= v55 )
          goto LABEL_76;
        do
        {
          while ( 1 )
          {
            v57 = *v56;
            if ( *v56 )
            {
              v58 = *(_QWORD *)(a1 + 4400);
              v23 = (*(_DWORD *)(v57 + 8))-- == 1;
              if ( v23 )
                break;
            }
            if ( (unsigned __int64)++v56 >= v55 )
              goto LABEL_73;
          }
          v64 = v55;
          ++v56;
          sub_15D7BC0(v58, v57);
          v55 = v64;
        }
        while ( (unsigned __int64)v56 < v64 );
LABEL_73:
        v29 = *(_QWORD **)(a1 + 4408);
        if ( !v29 )
          goto LABEL_79;
        v30 = *((unsigned int *)v29 - 1);
        if ( (unsigned int)v30 < v28 )
          goto LABEL_38;
      }
      else if ( (unsigned int)v30 < v28 )
      {
        goto LABEL_38;
      }
      v24 = *(_QWORD *)(a1 + 4448);
      v26 = *(_QWORD *)(a1 + 4432);
LABEL_76:
      *((_DWORD *)v29 - 1) = v28;
LABEL_42:
      --*(_DWORD *)(v26 - 4);
      v39 = 0x3FFFFFFFCLL;
      --*(_DWORD *)(v24 - 4);
      result = *(_QWORD *)(a1 + 4440);
      if ( result )
        v39 = 4LL * (unsigned int)(*(_DWORD *)(result - 4) - 1);
      v40 = *(_QWORD **)(a1 + 4424);
      v41 = *(_DWORD *)(result + v39);
      if ( !v40 )
        goto LABEL_77;
      v42 = *((unsigned int *)v40 - 1);
      if ( v41 < (unsigned int)v42 )
      {
        v51 = (unsigned __int64)&v40[v42];
        v52 = &v40[v41];
        if ( (unsigned __int64)v52 >= v51 )
          goto LABEL_66;
        do
        {
          while ( 1 )
          {
            v53 = *v52;
            if ( *v52 )
            {
              v54 = *(_QWORD *)(a1 + 4416);
              v23 = (*(_DWORD *)(v53 + 8))-- == 1;
              if ( v23 )
                break;
            }
            if ( (unsigned __int64)++v52 >= v51 )
              goto LABEL_63;
          }
          v63 = v51;
          ++v52;
          sub_15D7BC0(v54, v53);
          v51 = v63;
        }
        while ( (unsigned __int64)v52 < v63 );
LABEL_63:
        v40 = *(_QWORD **)(a1 + 4424);
        if ( !v40 )
        {
LABEL_77:
          if ( v41 )
          {
            v42 = 0;
            v59 = (_QWORD *)sub_186B270(0x18u);
            v40 = v59 + 1;
            *v59 = 2;
            *(_QWORD *)(a1 + 4424) = v59 + 1;
LABEL_51:
            while ( 1 )
            {
              v47 = *((_DWORD *)v40 - 2);
              if ( v47 >= v41 )
                break;
              v43 = (3 * v47 + 1) >> 1;
              v44 = 8 * v43 + 8;
              v45 = v43;
              if ( 8 * v47 + 8 >= (unsigned int)v44 || v47 >= v43 )
                goto LABEL_82;
              v46 = (unsigned int *)sub_186B300(v40 - 1, v44);
              v40 = v46 + 2;
              *v46 = v45;
              *(_QWORD *)(a1 + 4424) = v46 + 2;
            }
            v48 = 8 * v42;
            *((_DWORD *)v40 - 1) = v41;
            v49 = 8LL * v41;
            v50 = &v40[(unsigned __int64)v48 / 8];
            if ( v48 != v49 )
              memset(v50, 0, v49 - v48);
          }
          result = *(_QWORD *)(a1 + 4440);
          goto LABEL_55;
        }
        v42 = *((unsigned int *)v40 - 1);
        if ( (unsigned int)v42 < v41 )
          goto LABEL_51;
      }
      else if ( (unsigned int)v42 < v41 )
      {
        goto LABEL_51;
      }
      result = *(_QWORD *)(a1 + 4440);
LABEL_66:
      *((_DWORD *)v40 - 1) = v41;
LABEL_55:
      --*(_DWORD *)(result - 4);
      --v5;
    }
    while ( v5 );
  }
  return result;
}

