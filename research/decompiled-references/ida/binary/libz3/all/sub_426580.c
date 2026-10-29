void __fastcall sub_426580(__int64 a1, _QWORD *a2, char a3)
{
  char **exception; // r12
  char **v4; // r13
  char **v5; // r13
  _QWORD *v7; // r12
  _QWORD *v8; // rax
  _QWORD *v9; // rcx
  unsigned int v10; // r14d
  unsigned int v11; // edx
  _DWORD *v12; // rbp
  __int64 v13; // rsi
  __int64 v14; // rax
  unsigned int v15; // ecx
  size_t v16; // rsi
  unsigned int v17; // r13d
  unsigned int *v18; // rax
  __int64 v19; // rax
  int v20; // edx
  _QWORD *v21; // rax
  __int64 v22; // rdx
  _QWORD *v23; // r12
  int v24; // eax
  _QWORD **v25; // rbx
  _QWORD **v26; // r13
  _QWORD *v27; // r15
  __int64 v28; // rdi
  _QWORD *v29; // r14
  __int64 v31; // rdx
  _QWORD *v32; // r13
  unsigned int v33; // eax
  __int64 v34; // rdx
  int v35; // eax
  _QWORD *v36; // rdx
  __int64 v37; // rcx
  unsigned int v38; // r15d
  _QWORD *v39; // r9
  unsigned int v40; // eax
  unsigned int v41; // ecx
  size_t v42; // rsi
  unsigned int *v43; // rax
  unsigned int v44; // r15d
  size_t v45; // rsi
  unsigned int *v46; // rax
  __int64 v47; // rdx
  _QWORD *v48; // rbp
  __int64 v49; // rax
  _QWORD *v50; // rax
  _QWORD *v52; // [rsp+8h] [rbp-80h]
  unsigned int v53; // [rsp+14h] [rbp-74h]
  __int64 v54[11]; // [rsp+30h] [rbp-58h] BYREF

  v7 = (_QWORD *)a2[2];
  if ( !v7 )
  {
    v48 = (_QWORD *)a2[3];
    if ( !v48 )
      return;
    v49 = a2[4];
    if ( !v49 )
      return;
    if ( a2 == v48 )
    {
      *(_QWORD *)(a1 + 16) = 0;
      *(_OWORD *)(a2 + 3) = 0;
      return;
    }
    v48[4] = v49;
    *(_QWORD *)(v49 + 24) = v48;
    if ( a2 != *(_QWORD **)(a1 + 16) )
    {
      *(_OWORD *)(a2 + 3) = 0;
      return;
    }
    v12 = nullptr;
LABEL_53:
    *(_QWORD *)(a1 + 16) = a2[3];
    *(_OWORD *)(a2 + 3) = 0;
    goto LABEL_16;
  }
  if ( *((_DWORD *)v7 - 1) )
  {
    v8 = (_QWORD *)(sub_186B270(0x18u) + 8);
    v9 = (_QWORD *)a2[2];
    v10 = 0;
    v11 = 1;
    *(v8 - 1) = 2;
    v12 = v8;
    while ( 1 )
    {
      v13 = *v7;
      ++v10;
      v7 = v9;
      *v8 = v13;
      *(v12 - 1) = v11;
      if ( !v9 || v10 >= *((_DWORD *)v9 - 1) )
        break;
      v7 = &v9[v10];
      if ( v11 == *(v12 - 2) )
      {
        v15 = (3 * v11 + 1) >> 1;
        v16 = 8 * v15 + 8;
        v17 = v15;
        if ( 8 * v11 + 8 >= (unsigned int)v16 || v11 >= v15 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v54, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v54);
          sub_233E40((__int64)v54);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v18 = (unsigned int *)sub_186B300(v12 - 2, v16);
        v12 = v18 + 2;
        *v18 = v17;
        v19 = v18[1];
        v9 = (_QWORD *)a2[2];
        v20 = v19;
        v8 = &v12[2 * v19];
        v11 = v20 + 1;
      }
      else
      {
        v14 = v11++;
        v8 = &v12[2 * v14];
      }
    }
    v21 = (_QWORD *)a2[3];
    if ( v21 )
    {
      v22 = a2[4];
      if ( v22 )
      {
        if ( a2 != v21 )
          goto LABEL_14;
        *(_QWORD *)(a1 + 16) = 0;
        *(_OWORD *)(a2 + 3) = 0;
      }
    }
LABEL_16:
    if ( !v7 )
      goto LABEL_18;
    goto LABEL_17;
  }
  v21 = (_QWORD *)a2[3];
  if ( v21 )
  {
    v22 = a2[4];
    if ( v22 )
    {
      v12 = nullptr;
      if ( a2 != v21 )
      {
LABEL_14:
        v21[4] = v22;
        *(_QWORD *)(v22 + 24) = v21;
        if ( a2 != *(_QWORD **)(a1 + 16) )
        {
          *(_OWORD *)(a2 + 3) = 0;
          goto LABEL_16;
        }
        goto LABEL_53;
      }
      *(_QWORD *)(a1 + 16) = 0;
      *(_OWORD *)(a2 + 3) = 0;
    }
  }
  v12 = nullptr;
LABEL_17:
  *((_DWORD *)v7 - 1) = 0;
LABEL_18:
  v23 = nullptr;
  if ( v12 )
  {
    while ( 1 )
    {
      v24 = *(v12 - 1);
      if ( !v24 )
        break;
      v31 = (unsigned int)(v24 - 1);
      v32 = *(_QWORD **)&v12[2 * v31];
      *(v12 - 1) = v31;
      if ( v23 )
      {
        v33 = *((_DWORD *)v23 - 1);
        if ( v33 == *((_DWORD *)v23 - 2) )
        {
          v44 = (3 * v33 + 1) >> 1;
          v45 = 8 * v44 + 8;
          if ( 8 * v33 + 8 >= (unsigned int)v45 || v33 >= v44 )
          {
            v5 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v54, "Overflow encountered when expanding vector");
            *v5 = (char *)off_1C63128;
            sub_2333C0(v5 + 1, v54);
            sub_233E40((__int64)v54);
            __cxa_throw(v5, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v46 = (unsigned int *)sub_186B300(v23 - 1, v45);
          v47 = v46[1];
          v23 = v46 + 2;
          *v46 = v44;
          LODWORD(v46) = v47;
          v36 = &v23[v47];
          v35 = (_DWORD)v46 + 1;
        }
        else
        {
          v34 = v33;
          v35 = v33 + 1;
          v36 = &v23[v34];
        }
      }
      else
      {
        v50 = (_QWORD *)sub_186B270(0x18u);
        v23 = v50 + 1;
        *v50 = 2;
        v35 = 1;
        v36 = v23;
      }
      v37 = v32[2];
      *v36 = v32;
      *((_DWORD *)v23 - 1) = v35;
      if ( v37 )
      {
        v38 = 0;
        do
        {
          if ( v38 >= *(_DWORD *)(v37 - 4) )
            break;
          v39 = (_QWORD *)(v37 + 8LL * v38);
          v40 = *(v12 - 1);
          if ( v40 == *(v12 - 2) )
          {
            v41 = (3 * v40 + 1) >> 1;
            v42 = 8 * v41 + 8;
            if ( 8 * v40 + 8 >= (unsigned int)v42 || v40 >= v41 )
            {
              v4 = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v54, "Overflow encountered when expanding vector");
              *v4 = (char *)off_1C63128;
              sub_2333C0(v4 + 1, v54);
              sub_233E40((__int64)v54);
              __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v53 = (3 * v40 + 1) >> 1;
            v52 = v39;
            v43 = (unsigned int *)sub_186B300(v12 - 2, v42);
            v12 = v43 + 2;
            v39 = v52;
            *v43 = v53;
            v40 = v43[1];
            v37 = v32[2];
          }
          ++v38;
          *(_QWORD *)&v12[2 * v40] = *v39;
          *(v12 - 1) = v40 + 1;
        }
        while ( v37 );
      }
      sub_425630(a1, v32, a3);
    }
    if ( v23 )
    {
      v25 = (_QWORD **)v23;
      v26 = (_QWORD **)&v23[*((unsigned int *)v23 - 1)];
      if ( v26 != v23 )
      {
        do
        {
          v27 = *v25;
          if ( *v25 )
          {
            v28 = v27[2];
            if ( v28 )
              sub_186B220((void *)(v28 - 8));
            v29 = (_QWORD *)*v27;
            if ( *v27 )
            {
              if ( (*(_DWORD *)v29)-- == 1 )
              {
                sub_41CB00(v29);
                sub_186B220(v29);
              }
            }
            sub_186B220(v27);
          }
          ++v25;
        }
        while ( v26 != v25 );
      }
      sub_186B220(v23 - 1);
    }
    sub_186B220(v12 - 2);
  }
}

