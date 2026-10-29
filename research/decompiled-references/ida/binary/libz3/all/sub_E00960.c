void __fastcall sub_E00960(__int64 a1, unsigned int a2)
{
  char **exception; // rbp
  _QWORD *v4; // rdx
  __int64 v5; // rbp
  __int64 v6; // r14
  __int64 v7; // r12
  __int64 v8; // r14
  _DWORD *v9; // rbp
  void (__fastcall *v10)(_DWORD *); // r15
  __int64 v11; // r15
  _QWORD *v13; // rdx
  unsigned int v14; // eax
  __int64 v15; // rcx
  int v16; // eax
  _QWORD *v17; // rcx
  unsigned int v18; // r12d
  size_t v19; // rsi
  unsigned int *v20; // rax
  unsigned int v21; // eax
  __int64 v22; // rbp
  _QWORD *v23; // rdi
  __int64 v24; // rdx
  unsigned int v25; // ecx
  size_t v26; // rsi
  unsigned int *v27; // rax
  _QWORD *v28; // rax
  _QWORD *v29; // rax
  unsigned int v30; // [rsp+Ch] [rbp-5Ch]
  __int64 v31[11]; // [rsp+10h] [rbp-58h] BYREF

  v4 = *(_QWORD **)(a1 + 744);
  if ( v4 )
  {
    v5 = *((unsigned int *)v4 - 1);
    v6 = (unsigned int)(v5 - 1);
    if ( a2 >= (unsigned int)v5 )
    {
LABEL_17:
      if ( (unsigned int)v5 < a2 )
        goto LABEL_22;
      *((_DWORD *)v4 - 1) = a2;
      return;
    }
    v7 = 8 * v6;
    v8 = 8 * (v6 - ((unsigned int)v5 - a2 - 1));
    while ( 1 )
    {
      v9 = (_DWORD *)v4[(unsigned __int64)v7 / 8];
      v10 = *(void (__fastcall **)(_DWORD *))(*(_QWORD *)v9 + 56LL);
      if ( !*(_QWORD *)(a1 + 312) )
        sub_DFBCB0(a1);
      v10(v9);
      v11 = *(_QWORD *)(a1 + 312);
      if ( !v11 )
      {
        sub_DFBCB0(a1);
        v11 = *(_QWORD *)(a1 + 312);
      }
      if ( v9[4]-- == 1 )
      {
        v13 = *(_QWORD **)(v11 + 80);
        if ( v13 )
        {
          v14 = *((_DWORD *)v13 - 1);
          if ( v14 == *((_DWORD *)v13 - 2) )
          {
            v25 = (3 * v14 + 1) >> 1;
            v26 = 8 * v25 + 8;
            if ( 8 * v14 + 8 >= (unsigned int)v26 || v14 >= v25 )
            {
LABEL_32:
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_DF63A0(v31, "Overflow encountered when expanding vector");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, v31);
              sub_233E40((__int64)v31);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v30 = (3 * v14 + 1) >> 1;
            v27 = (unsigned int *)sub_186B300(v13 - 1, v26);
            v13 = v27 + 2;
            *(_QWORD *)(v11 + 80) = v27 + 2;
            *v27 = v30;
            LODWORD(v27) = v27[1];
            v17 = &v13[(unsigned int)v27];
            v16 = (_DWORD)v27 + 1;
          }
          else
          {
            v15 = v14;
            v16 = v14 + 1;
            v17 = &v13[v15];
          }
        }
        else
        {
          v29 = (_QWORD *)sub_186B270(0x18u);
          v13 = v29 + 1;
          *v29 = 2;
          v16 = 1;
          *(_QWORD *)(v11 + 80) = v13;
          v17 = v13;
        }
        *v17 = v9;
        *((_DWORD *)v13 - 1) = v16;
      }
      sub_DE3700(v11);
      v4 = *(_QWORD **)(a1 + 744);
      if ( v7 == v8 )
        break;
      v7 -= 8;
    }
    if ( v4 )
    {
      v5 = *((unsigned int *)v4 - 1);
      goto LABEL_17;
    }
  }
  if ( a2 )
  {
    v5 = 0;
    v28 = (_QWORD *)sub_186B270(0x18u);
    v4 = v28 + 1;
    *v28 = 2;
    *(_QWORD *)(a1 + 744) = v28 + 1;
LABEL_22:
    while ( 1 )
    {
      v21 = *((_DWORD *)v4 - 2);
      if ( v21 >= a2 )
        break;
      v18 = (3 * v21 + 1) >> 1;
      v19 = 8 * v18 + 8;
      if ( 8 * v21 + 8 >= (unsigned int)v19 || v21 >= v18 )
        goto LABEL_32;
      v20 = (unsigned int *)sub_186B300(v4 - 1, v19);
      v4 = v20 + 2;
      *v20 = v18;
      *(_QWORD *)(a1 + 744) = v20 + 2;
    }
    v22 = 8 * v5;
    *((_DWORD *)v4 - 1) = a2;
    v23 = &v4[(unsigned __int64)v22 / 8];
    v24 = 8LL * a2;
    if ( v22 != v24 )
      memset(v23, 0, v24 - v22);
  }
}

