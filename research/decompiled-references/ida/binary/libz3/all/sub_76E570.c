__int64 __fastcall sub_76E570(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v4; // r15
  char i; // r14
  int v6; // eax
  __int64 v7; // r14
  bool v8; // zf
  __int64 v9; // rsi
  __int64 v10; // rdi
  __int64 v11; // r12
  _QWORD *v12; // rdx
  unsigned int v13; // eax
  __int64 v14; // rcx
  int v15; // eax
  _QWORD *v16; // rcx
  __int64 v17; // rsi
  __int64 v18; // rdi
  __int64 v19; // rax
  int v20; // edx
  unsigned int v21; // ebx
  _QWORD *v23; // rax
  unsigned int v24; // r13d
  size_t v25; // rsi
  unsigned int *v26; // rax
  __int64 v27; // rcx
  _QWORD *v28; // rdx
  unsigned int v29; // eax
  __int64 v30; // rcx
  int v31; // eax
  _QWORD *v32; // rcx
  unsigned int v33; // r12d
  size_t v34; // rsi
  unsigned int *v35; // rax
  __int64 v36; // rcx
  _QWORD *v37; // rax
  char **exception; // r12
  char **v39; // r12
  __int64 v40[11]; // [rsp+0h] [rbp-58h] BYREF

  v2 = a2;
  v4 = *(_QWORD *)(a1 + 8);
  if ( a2 )
    ++*(_DWORD *)(a2 + 8);
  for ( i = 0; ; i = 1 )
  {
    v6 = sub_76B2E0(*(_QWORD **)(a1 + 144), *(_QWORD **)(v2 + 16), 0, nullptr, (__int64 *)(a1 + 480), (int)a1 + 496);
    if ( v6 == 4 )
    {
      v11 = *(_QWORD *)(a1 + 480);
      goto LABEL_29;
    }
    if ( v6 == 5 )
    {
      ++*(_DWORD *)(v2 + 8);
      if ( !i )
      {
        v28 = *(_QWORD **)(a1 + 56);
        if ( v28 )
        {
          v29 = *((_DWORD *)v28 - 1);
          if ( v29 == *((_DWORD *)v28 - 2) )
          {
            v33 = (3 * v29 + 1) >> 1;
            v34 = 8 * v33 + 8;
            if ( 8 * v29 + 8 >= (unsigned int)v34 || v29 >= v33 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_76A180(v40, "Overflow encountered when expanding vector");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, v40);
              sub_233E40((__int64)v40);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v35 = (unsigned int *)sub_186B300(v28 - 1, v34);
            v36 = v35[1];
            v28 = v35 + 2;
            *v35 = v33;
            *(_QWORD *)(a1 + 56) = v35 + 2;
            LODWORD(v35) = v36;
            v32 = &v28[v36];
            v31 = (_DWORD)v35 + 1;
          }
          else
          {
            v30 = v29;
            v31 = v29 + 1;
            v32 = &v28[v30];
          }
        }
        else
        {
          v37 = (_QWORD *)sub_186B270(0x18u);
          v28 = v37 + 1;
          *v37 = 2;
          v31 = 1;
          *(_QWORD *)(a1 + 56) = v28;
          v32 = v28;
        }
        *v32 = v2;
        *((_DWORD *)v28 - 1) = v31;
        goto LABEL_24;
      }
      v9 = *(_QWORD *)(a1 + 480);
      if ( !v9 || (v10 = *(_QWORD *)(a1 + 488), v8 = *(_DWORD *)(v9 + 8) == 1, --*(_DWORD *)(v9 + 8), !v8) )
      {
        *(_QWORD *)(a1 + 480) = v2;
        v11 = v2;
        goto LABEL_15;
      }
      sub_15D7BC0(v10, v9);
      *(_QWORD *)(a1 + 480) = v2;
      v11 = v2;
LABEL_29:
      if ( !v11 )
      {
        v12 = *(_QWORD **)(a1 + 56);
        if ( v12 )
        {
LABEL_16:
          v13 = *((_DWORD *)v12 - 1);
          if ( v13 == *((_DWORD *)v12 - 2) )
          {
            v24 = (3 * v13 + 1) >> 1;
            v25 = 8 * v24 + 8;
            if ( 8 * v13 + 8 >= (unsigned int)v25 || v13 >= v24 )
            {
              v39 = (char **)__cxa_allocate_exception(0x28u);
              sub_76A180(v40, "Overflow encountered when expanding vector");
              *v39 = (char *)off_1C63128;
              sub_2333C0(v39 + 1, v40);
              sub_233E40((__int64)v40);
              __cxa_throw(v39, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v26 = (unsigned int *)sub_186B300(v12 - 1, v25);
            v27 = v26[1];
            v12 = v26 + 2;
            *v26 = v24;
            *(_QWORD *)(a1 + 56) = v26 + 2;
            LODWORD(v26) = v27;
            v16 = &v12[v27];
            v15 = (_DWORD)v26 + 1;
          }
          else
          {
            v14 = v13;
            v15 = v13 + 1;
            v16 = &v12[v14];
          }
          goto LABEL_18;
        }
LABEL_31:
        v23 = (_QWORD *)sub_186B270(0x18u);
        v12 = v23 + 1;
        *v23 = 2;
        v15 = 1;
        *(_QWORD *)(a1 + 56) = v12;
        v16 = v12;
LABEL_18:
        *v16 = v11;
        v17 = *(_QWORD *)(a1 + 480);
        *((_DWORD *)v12 - 1) = v15;
        if ( v17 )
        {
          v18 = *(_QWORD *)(a1 + 488);
          v8 = (*(_DWORD *)(v17 + 8))-- == 1;
          if ( v8 )
            sub_15D7BC0(v18, v17);
        }
        *(_QWORD *)(a1 + 480) = 0;
        v19 = *(_QWORD *)(a1 + 40);
        if ( v19 )
        {
          v20 = *(_DWORD *)(v19 - 4);
          if ( v20 )
            *(_BYTE *)(v19 + 16LL * (unsigned int)(v20 - 1) + 8) |= 2u;
        }
LABEL_24:
        v21 = 1;
        goto LABEL_25;
      }
LABEL_15:
      v12 = *(_QWORD **)(a1 + 56);
      ++*(_DWORD *)(v11 + 8);
      if ( v12 )
        goto LABEL_16;
      goto LABEL_31;
    }
    v7 = *(_QWORD *)(a1 + 480);
    if ( *(_WORD *)(v7 + 4) || *(_DWORD *)(v7 + 24) )
      break;
    ++*(_DWORD *)(v7 + 8);
    v8 = (*(_DWORD *)(v2 + 8))-- == 1;
    if ( v8 )
      sub_15D7BC0(v4, v2);
    v2 = v7;
  }
  v21 = 0;
LABEL_25:
  v8 = (*(_DWORD *)(v2 + 8))-- == 1;
  if ( v8 )
    sub_15D7BC0(v4, v2);
  return v21;
}

