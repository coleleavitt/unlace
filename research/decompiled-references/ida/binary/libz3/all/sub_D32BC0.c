__int64 __fastcall sub_D32BC0(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v4; // r14
  char i; // r13
  __int64 v6; // rsi
  __int64 v7; // r15
  __int64 v8; // r9
  __int64 v9; // rdi
  bool v10; // zf
  int v11; // eax
  __int64 v12; // r13
  __int64 v13; // rsi
  __int64 v14; // rdi
  __int64 v15; // r12
  _QWORD *v16; // rdx
  unsigned int v17; // eax
  __int64 v18; // rcx
  int v19; // eax
  _QWORD *v20; // rcx
  __int64 v21; // rsi
  __int64 v22; // rdi
  __int64 v23; // rax
  int v24; // edx
  unsigned int v25; // ebx
  _QWORD *v27; // rax
  unsigned int v28; // r13d
  size_t v29; // rsi
  unsigned int *v30; // rax
  __int64 v31; // rcx
  _QWORD *v32; // rdx
  unsigned int v33; // eax
  __int64 v34; // rcx
  int v35; // eax
  _QWORD *v36; // rcx
  unsigned int v37; // r12d
  size_t v38; // rsi
  unsigned int *v39; // rax
  __int64 v40; // rcx
  _QWORD *v41; // rax
  char **exception; // r12
  char **v43; // r12
  __int64 v44; // [rsp+8h] [rbp-70h]
  __int64 v45[11]; // [rsp+20h] [rbp-58h] BYREF

  v2 = a2;
  v4 = a1[1];
  if ( a2 )
    ++*(_DWORD *)(a2 + 8);
  for ( i = 0; ; i = 1 )
  {
    v6 = a1[62];
    v7 = a1[18];
    v8 = *(_QWORD *)(v2 + 16);
    if ( v6 )
    {
      v9 = a1[63];
      v10 = (*(_DWORD *)(v6 + 8))-- == 1;
      if ( v10 )
      {
        v44 = v8;
        sub_15D7BC0(v9, v6);
        v8 = v44;
      }
    }
    a1[62] = 0;
    v11 = sub_1447860(v7 + 24, v8, 0, 0, a1 + 60);
    if ( v11 == 4 )
    {
      v15 = a1[60];
      goto LABEL_32;
    }
    if ( v11 == 5 )
    {
      ++*(_DWORD *)(v2 + 8);
      if ( !i )
      {
        v32 = (_QWORD *)a1[7];
        if ( v32 )
        {
          v33 = *((_DWORD *)v32 - 1);
          if ( v33 == *((_DWORD *)v32 - 2) )
          {
            v37 = (3 * v33 + 1) >> 1;
            v38 = 8 * v37 + 8;
            if ( 8 * v33 + 8 >= (unsigned int)v38 || v33 >= v37 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v45, "Overflow encountered when expanding vector");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, v45);
              sub_233E40((__int64)v45);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v39 = (unsigned int *)sub_186B300(v32 - 1, v38);
            v40 = v39[1];
            v32 = v39 + 2;
            *v39 = v37;
            a1[7] = v39 + 2;
            LODWORD(v39) = v40;
            v36 = &v32[v40];
            v35 = (_DWORD)v39 + 1;
          }
          else
          {
            v34 = v33;
            v35 = v33 + 1;
            v36 = &v32[v34];
          }
        }
        else
        {
          v41 = (_QWORD *)sub_186B270(0x18u);
          v32 = v41 + 1;
          *v41 = 2;
          v35 = 1;
          a1[7] = v32;
          v36 = v32;
        }
        *v36 = v2;
        *((_DWORD *)v32 - 1) = v35;
        goto LABEL_27;
      }
      v13 = a1[60];
      if ( !v13 || (v14 = a1[61], v10 = *(_DWORD *)(v13 + 8) == 1, --*(_DWORD *)(v13 + 8), !v10) )
      {
        a1[60] = v2;
        v15 = v2;
        goto LABEL_18;
      }
      sub_15D7BC0(v14, v13);
      a1[60] = v2;
      v15 = v2;
LABEL_32:
      if ( !v15 )
      {
        v16 = (_QWORD *)a1[7];
        if ( v16 )
        {
LABEL_19:
          v17 = *((_DWORD *)v16 - 1);
          if ( v17 == *((_DWORD *)v16 - 2) )
          {
            v28 = (3 * v17 + 1) >> 1;
            v29 = 8 * v28 + 8;
            if ( 8 * v17 + 8 >= (unsigned int)v29 || v17 >= v28 )
            {
              v43 = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v45, "Overflow encountered when expanding vector");
              *v43 = (char *)off_1C63128;
              sub_2333C0(v43 + 1, v45);
              sub_233E40((__int64)v45);
              __cxa_throw(v43, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v30 = (unsigned int *)sub_186B300(v16 - 1, v29);
            v31 = v30[1];
            v16 = v30 + 2;
            *v30 = v28;
            a1[7] = v30 + 2;
            LODWORD(v30) = v31;
            v20 = &v16[v31];
            v19 = (_DWORD)v30 + 1;
          }
          else
          {
            v18 = v17;
            v19 = v17 + 1;
            v20 = &v16[v18];
          }
          goto LABEL_21;
        }
LABEL_34:
        v27 = (_QWORD *)sub_186B270(0x18u);
        v16 = v27 + 1;
        *v27 = 2;
        v19 = 1;
        a1[7] = v16;
        v20 = v16;
LABEL_21:
        *v20 = v15;
        v21 = a1[60];
        *((_DWORD *)v16 - 1) = v19;
        if ( v21 )
        {
          v22 = a1[61];
          v10 = (*(_DWORD *)(v21 + 8))-- == 1;
          if ( v10 )
            sub_15D7BC0(v22, v21);
        }
        a1[60] = 0;
        v23 = a1[5];
        if ( v23 )
        {
          v24 = *(_DWORD *)(v23 - 4);
          if ( v24 )
            *(_BYTE *)(v23 + 16LL * (unsigned int)(v24 - 1) + 8) |= 2u;
        }
LABEL_27:
        v25 = 1;
        goto LABEL_28;
      }
LABEL_18:
      v16 = (_QWORD *)a1[7];
      ++*(_DWORD *)(v15 + 8);
      if ( v16 )
        goto LABEL_19;
      goto LABEL_34;
    }
    v12 = a1[60];
    if ( *(_WORD *)(v12 + 4) || *(_DWORD *)(v12 + 24) )
      break;
    ++*(_DWORD *)(v12 + 8);
    v10 = (*(_DWORD *)(v2 + 8))-- == 1;
    if ( v10 )
      sub_15D7BC0(v4, v2);
    v2 = v12;
  }
  v25 = 0;
LABEL_28:
  v10 = (*(_DWORD *)(v2 + 8))-- == 1;
  if ( v10 )
    sub_15D7BC0(v4, v2);
  return v25;
}

