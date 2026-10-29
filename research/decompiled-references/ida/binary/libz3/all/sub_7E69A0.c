__int64 __fastcall sub_7E69A0(__int64 a1, __int64 a2)
{
  char **v2; // rbp
  char **exception; // rbp
  _DWORD *v6; // rax
  bool v7; // zf
  _DWORD *(__fastcall *v8)(__int64); // rax
  __int64 v9; // rax
  _QWORD *v10; // rdi
  int v11; // r13d
  __int64 v12; // rax
  unsigned int v13; // r14d
  size_t v14; // rsi
  unsigned int *v15; // rax
  __int64 v16; // rax
  _QWORD *v17; // rdi
  unsigned int v18; // ebx
  _QWORD *v19; // rdx
  int v20; // eax
  _QWORD *v22; // rax
  unsigned int v23; // r13d
  size_t v24; // rsi
  unsigned int *v25; // rax
  __int64 v26; // rdx
  _QWORD *v27; // rax
  __int64 v28[9]; // [rsp+10h] [rbp-48h] BYREF

  if ( *(_DWORD *)(a1 + 104) )
  {
    do
    {
      while ( 1 )
      {
        v8 = *(_DWORD *(__fastcall **)(__int64))(*(_QWORD *)a1 + 512LL);
        if ( v8 == sub_7E64F0 )
          break;
        v8(a1);
        v7 = (*(_DWORD *)(a1 + 104))-- == 1;
        if ( v7 )
          goto LABEL_13;
      }
      v9 = *(_QWORD *)(a1 + 88);
      if ( v9 )
      {
        v10 = *(_QWORD **)(a1 + 96);
        v11 = *(_DWORD *)(v9 - 4);
        if ( v10 )
          goto LABEL_8;
      }
      else
      {
        v10 = *(_QWORD **)(a1 + 96);
        v11 = 0;
        if ( v10 )
        {
LABEL_8:
          v12 = *((unsigned int *)v10 - 1);
          if ( (_DWORD)v12 == *((_DWORD *)v10 - 2) )
          {
            v13 = (unsigned int)(3 * v12 + 1) >> 1;
            v14 = 4 * v13 + 8;
            if ( 4 * (int)v12 + 8 >= (unsigned int)v14 || (unsigned int)v12 >= v13 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v28, "Overflow encountered when expanding vector");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, v28);
              sub_233E40((__int64)v28);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v15 = (unsigned int *)sub_186B300(v10 - 1, v14);
            v10 = v15 + 2;
            *v15 = v13;
            v16 = v15[1];
            *(_QWORD *)(a1 + 96) = v10;
            v6 = (_DWORD *)v10 + v16;
          }
          else
          {
            v6 = (_DWORD *)v10 + v12;
          }
          goto LABEL_4;
        }
      }
      v22 = (_QWORD *)sub_186B270(0x10u);
      v10 = v22 + 1;
      *v22 = 2;
      *(_QWORD *)(a1 + 96) = v22 + 1;
      v6 = v22 + 1;
LABEL_4:
      *v6 = v11;
      ++*((_DWORD *)v10 - 1);
      v7 = (*(_DWORD *)(a1 + 104))-- == 1;
    }
    while ( !v7 );
  }
LABEL_13:
  v17 = *(_QWORD **)(a1 + 88);
  if ( v17 )
  {
    v18 = *((_DWORD *)v17 - 1);
    if ( v18 == *((_DWORD *)v17 - 2) )
    {
      v23 = (3 * v18 + 1) >> 1;
      v24 = 8 * v23 + 8;
      if ( 8 * v18 + 8 >= (unsigned int)v24 || v18 >= v23 )
      {
        v2 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v28, "Overflow encountered when expanding vector");
        *v2 = (char *)off_1C63128;
        sub_2333C0(v2 + 1, v28);
        sub_233E40((__int64)v28);
        __cxa_throw(v2, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v25 = (unsigned int *)sub_186B300(v17 - 1, v24);
      v26 = v25[1];
      v17 = v25 + 2;
      *v25 = v23;
      *(_QWORD *)(a1 + 88) = v25 + 2;
      LODWORD(v25) = v26;
      v19 = &v17[v26];
      v20 = (_DWORD)v25 + 1;
    }
    else
    {
      v19 = &v17[v18];
      v20 = v18 + 1;
    }
  }
  else
  {
    v18 = 0;
    v27 = (_QWORD *)sub_186B270(0x18u);
    v17 = v27 + 1;
    *v27 = 2;
    v20 = 1;
    *(_QWORD *)(a1 + 88) = v17;
    v19 = v17;
  }
  *v19 = a2;
  *((_DWORD *)v17 - 1) = v20;
  return v18;
}

