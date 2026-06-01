void __fastcall sub_2365C0(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // r13
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rax
  int v7; // r14d
  __int64 v8; // rcx
  __int64 v9; // r12
  __int64 v10; // rsi
  __int64 v11; // rbx
  __int64 v12; // rdi
  __int64 v13; // rax
  int v14; // r13d
  _QWORD *v15; // rdi
  __int64 v16; // rax
  _DWORD *v17; // rax
  int v18; // r13d
  __int64 v19; // rax
  __int64 v20; // rax
  int v21; // r15d
  __int64 v22; // rax
  _QWORD *v23; // rbx
  _QWORD *v24; // r12
  __int64 v25; // rsi
  __int64 v26; // rdi
  unsigned int v28; // r14d
  size_t v29; // rsi
  unsigned int *v30; // rax
  __int64 v31; // rax
  _QWORD *v32; // rax
  char **exception; // rbx
  __int64 v34; // rdx
  __int64 v35[11]; // [rsp+0h] [rbp-58h] BYREF

  if ( *(_QWORD *)(a1 + 328) )
  {
    v2 = *(_QWORD *)(a1 + 128);
    if ( v2 )
    {
      v3 = (unsigned int)(*(_DWORD *)(v2 - 4) - 1);
      v4 = 4 * v3;
    }
    else
    {
      v4 = 0x3FFFFFFFCLL;
      LODWORD(v3) = -1;
    }
    v5 = *(unsigned int *)(v2 + v4);
    v6 = *(_QWORD *)(a1 + 120);
    v7 = v5;
    v8 = 8 * v5;
    v9 = v6 + v8;
    if ( v6 )
    {
      v10 = 8LL * *(unsigned int *)(v6 - 4);
      v11 = v6 + v10;
      if ( v8 == v10 )
      {
LABEL_8:
        *(_DWORD *)(v6 - 4) = v7;
LABEL_9:
        if ( v2 )
          *(_DWORD *)(v2 - 4) = v3;
        sub_180C2E0(a1 + 136);
        sub_180C250(a1 + 136);
        v13 = *(_QWORD *)(a1 + 120);
        if ( v13 )
          v14 = *(_DWORD *)(v13 - 4);
        else
          v14 = 0;
        v15 = *(_QWORD **)(a1 + 128);
        if ( v15 )
        {
          v16 = *((unsigned int *)v15 - 1);
          if ( (_DWORD)v16 == *((_DWORD *)v15 - 2) )
          {
            v28 = (unsigned int)(3 * v16 + 1) >> 1;
            v29 = 4 * v28 + 8;
            if ( 4 * (int)v16 + 8 >= (unsigned int)v29 || (unsigned int)v16 >= v28 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_A3E10(v35, "Overflow encountered when expanding vector", v34);
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, v35);
              sub_233E40((__int64)v35);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v30 = (unsigned int *)sub_186B300(v15 - 1, v29);
            v15 = v30 + 2;
            *v30 = v28;
            v31 = v30[1];
            *(_QWORD *)(a1 + 128) = v15;
            v17 = (_DWORD *)v15 + v31;
          }
          else
          {
            v17 = (_DWORD *)v15 + v16;
          }
        }
        else
        {
          v32 = (_QWORD *)sub_186B270(0x10u);
          v15 = v32 + 1;
          *v32 = 2;
          *(_QWORD *)(a1 + 128) = v32 + 1;
          v17 = v32 + 1;
        }
        *v17 = v14;
        ++*((_DWORD *)v15 - 1);
        v18 = *(_DWORD *)(a1 + 24);
        v19 = sub_180C100(a1 + 136, 24);
        *(_DWORD *)(v19 + 16) = v18;
        *(_QWORD *)v19 = &off_1C4C070;
        *(_QWORD *)(v19 + 8) = a1 + 24;
        v35[0] = v19;
        sub_22FEE0((_QWORD *)(a1 + 120), v35);
        v20 = *(_QWORD *)(a1 + 112);
        if ( v20 )
          v21 = *(_DWORD *)(v20 - 4);
        else
          v21 = 0;
        v22 = sub_180C100(a1 + 136, 24);
        *(_QWORD *)v22 = off_1C4C048;
        *(_DWORD *)(v22 + 8) = v21;
        *(_QWORD *)(v22 + 16) = a1 + 16;
        v35[0] = v22;
        sub_22FEE0((_QWORD *)(a1 + 120), v35);
        goto LABEL_19;
      }
    }
    else
    {
      v11 = 0;
      if ( !v8 )
        goto LABEL_9;
    }
    do
    {
      v12 = *(_QWORD *)(v11 - 8);
      v11 -= 8;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    }
    while ( v9 != v11 );
    v6 = *(_QWORD *)(a1 + 120);
    v2 = *(_QWORD *)(a1 + 128);
    if ( !v6 )
      goto LABEL_9;
    goto LABEL_8;
  }
LABEL_19:
  v23 = *(_QWORD **)(a1 + 320);
  if ( v23 )
  {
    v24 = &v23[*((unsigned int *)v23 - 1)];
    if ( v23 >= v24 )
      goto LABEL_27;
    do
    {
      while ( 1 )
      {
        v25 = *v23;
        if ( *v23 )
        {
          v26 = *(_QWORD *)(a1 + 312);
          if ( (*(_DWORD *)(v25 + 8))-- == 1 )
            break;
        }
        if ( ++v23 >= v24 )
          goto LABEL_26;
      }
      sub_15D7BC0(v26, v25);
      ++v23;
    }
    while ( v23 < v24 );
LABEL_26:
    v23 = *(_QWORD **)(a1 + 320);
    if ( v23 )
LABEL_27:
      *((_DWORD *)v23 - 1) = 0;
  }
}

