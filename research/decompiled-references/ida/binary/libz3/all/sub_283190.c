_QWORD *__fastcall sub_283190(__int64 a1, __int64 a2, __int64 a3)
{
  char **exception; // rbp
  __int64 v6; // r12
  _QWORD *v7; // rbp
  __int64 *v8; // r12
  __int64 *v9; // r15
  __int64 v10; // r13
  _QWORD *v11; // rdx
  _QWORD *v12; // rax
  int v13; // eax
  _QWORD *v14; // rsi
  unsigned int v15; // eax
  _QWORD *v16; // r12
  _QWORD *v17; // r13
  _QWORD *v18; // rdx
  unsigned int v19; // r12d
  _QWORD *v20; // r12
  _QWORD *v21; // r13
  __int64 *v22; // rbx
  unsigned __int64 v23; // r12
  __int64 v24; // rsi
  __int64 v25; // rdi
  bool v26; // zf
  __int64 *v27; // rbx
  __int64 *v28; // r12
  __int64 v29; // rsi
  __int64 v30; // rdi
  __int64 *v31; // rbx
  unsigned __int64 v32; // r12
  __int64 v33; // rsi
  unsigned int v35; // r14d
  size_t v36; // rsi
  unsigned int *v37; // rax
  __int64 v38; // rsi
  __int64 v39[4]; // [rsp+30h] [rbp-438h] BYREF
  __int64 v40; // [rsp+50h] [rbp-418h] BYREF
  _QWORD *v41; // [rsp+58h] [rbp-410h]
  __int64 v42; // [rsp+60h] [rbp-408h]
  __int64 v43; // [rsp+68h] [rbp-400h]
  __int64 *v44; // [rsp+70h] [rbp-3F8h]
  __int64 v45; // [rsp+78h] [rbp-3F0h]
  _QWORD *v46; // [rsp+80h] [rbp-3E8h]
  _BYTE v47[760]; // [rsp+90h] [rbp-3D8h] BYREF
  _QWORD *v48; // [rsp+388h] [rbp-E0h]

  v6 = *(_QWORD *)(a1 + 232);
  v41 = nullptr;
  v40 = v6;
  v42 = 0;
  v43 = v6;
  v44 = nullptr;
  v45 = v6;
  v46 = nullptr;
  sub_E059D0(v47, 0, v6, &qword_18D6CD0);
  sub_393530(&v40, v47);
  v47[273] = 1;
  v39[0] = 0;
  LOBYTE(a3) = sub_DC0650(v47, a3, 0, v39, 0);
  sub_18572D0(v39);
  if ( (_BYTE)a3 )
  {
    v7 = (_QWORD *)sub_186B270(0x28u);
    sub_2518F0((__int64)v7, a1);
    v7[3] = v6;
    *v7 = &off_1C4CA20;
    v7[4] = 0;
    sub_24FBE0(a1, (__int64)v7);
    v8 = v44;
    if ( v44 )
    {
      v9 = &v44[*((unsigned int *)v44 - 1)];
      if ( v9 != v44 )
      {
        v10 = *v44;
        v11 = (_QWORD *)v7[4];
        if ( *v44 )
          ++*(_DWORD *)(v10 + 8);
        if ( v11 )
          goto LABEL_11;
        v12 = (_QWORD *)sub_186B270(0x18u);
        v11 = v12 + 1;
        *v12 = 2;
        v13 = 1;
        v7[4] = v11;
        v14 = v11;
        while ( 1 )
        {
          ++v8;
          *v14 = v10;
          *((_DWORD *)v11 - 1) = v13;
          if ( v9 == v8 )
            break;
          while ( 1 )
          {
            v10 = *v8;
            if ( *v8 )
              ++*(_DWORD *)(v10 + 8);
LABEL_11:
            v15 = *((_DWORD *)v11 - 1);
            if ( v15 == *((_DWORD *)v11 - 2) )
              break;
            ++v8;
            v11[v15] = v10;
            *((_DWORD *)v11 - 1) = v15 + 1;
            if ( v9 == v8 )
              goto LABEL_13;
          }
          v35 = (3 * v15 + 1) >> 1;
          v36 = 8 * v35 + 8;
          if ( 8 * v15 + 8 >= (unsigned int)v36 || v15 >= v35 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v39, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v39);
            sub_233E40((__int64)v39);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v37 = (unsigned int *)sub_186B300(v11 - 1, v36);
          v38 = v37[1];
          v11 = v37 + 2;
          *v37 = v35;
          v7[4] = v37 + 2;
          LODWORD(v37) = v38;
          v14 = &v11[v38];
          v13 = (_DWORD)v37 + 1;
        }
      }
    }
LABEL_13:
    v16 = v46;
    if ( v46 )
    {
      v17 = &v46[*((unsigned int *)v46 - 1)];
      if ( v46 != v17 )
      {
        do
          sub_6511B0(*(_QWORD *)(a2 + 24) + 48LL, *v16++, 1);
        while ( v17 != v16 );
      }
    }
    v18 = v41;
    if ( v41 )
    {
      v19 = 0;
      do
      {
        if ( v19 >= *((_DWORD *)v18 - 1) )
          break;
        sub_64ECB0(*(_QWORD *)(a2 + 24) + 48LL, v18[v19], v42 + 8LL * v19, 0xFFFFFFFFLL);
        v18 = v41;
        ++v19;
      }
      while ( v41 );
    }
    v20 = v48;
    if ( v48 )
    {
      v21 = &v48[*((unsigned int *)v48 - 1)];
      if ( v21 != v48 )
      {
        do
          sub_64F1A0(*(_QWORD *)(a2 + 24) + 48LL, *v20++);
        while ( v21 != v20 );
      }
    }
  }
  else
  {
    sub_24EA30(a1, 4u, nullptr);
    v7 = nullptr;
  }
  sub_E0AF10(v47);
  v22 = v46;
  if ( v46 )
  {
    v23 = (unsigned __int64)&v46[*((unsigned int *)v46 - 1)];
    if ( (unsigned __int64)v46 >= v23 )
      goto LABEL_31;
    do
    {
      while ( 1 )
      {
        v24 = *v22;
        if ( *v22 )
        {
          v25 = v45;
          v26 = (*(_DWORD *)(v24 + 8))-- == 1;
          if ( v26 )
            break;
        }
        if ( (unsigned __int64)++v22 >= v23 )
          goto LABEL_30;
      }
      sub_15D7BC0(v25, v24);
      ++v22;
    }
    while ( (unsigned __int64)v22 < v23 );
LABEL_30:
    v22 = v46;
    if ( v46 )
LABEL_31:
      sub_186B220(v22 - 1);
  }
  v27 = v44;
  if ( v44 )
  {
    v28 = &v44[*((unsigned int *)v44 - 1)];
    if ( v44 >= v28 )
      goto LABEL_40;
    do
    {
      while ( 1 )
      {
        v29 = *v27;
        if ( *v27 )
        {
          v30 = v43;
          v26 = (*(_DWORD *)(v29 + 8))-- == 1;
          if ( v26 )
            break;
        }
        if ( ++v27 >= v28 )
          goto LABEL_39;
      }
      sub_15D7BC0(v30, v29);
      ++v27;
    }
    while ( v27 < v28 );
LABEL_39:
    v27 = v44;
    if ( v44 )
LABEL_40:
      sub_186B220(v27 - 1);
  }
  if ( v42 )
    sub_186B220((void *)(v42 - 8));
  v31 = v41;
  if ( v41 )
  {
    v32 = (unsigned __int64)&v41[*((unsigned int *)v41 - 1)];
    if ( (unsigned __int64)v41 >= v32 )
      goto LABEL_51;
    do
    {
      while ( 1 )
      {
        v33 = *v31;
        if ( *v31 )
        {
          v26 = (*(_DWORD *)(v33 + 8))-- == 1;
          if ( v26 )
            break;
        }
        if ( (unsigned __int64)++v31 >= v32 )
          goto LABEL_50;
      }
      sub_15D7BC0(v40, v33);
      ++v31;
    }
    while ( (unsigned __int64)v31 < v32 );
LABEL_50:
    v31 = v41;
    if ( v41 )
LABEL_51:
      sub_186B220(v31 - 1);
  }
  return v7;
}

