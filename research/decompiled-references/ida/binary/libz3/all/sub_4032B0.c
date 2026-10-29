__int64 __fastcall sub_4032B0(__int64 a1, __int64 a2, void ***a3)
{
  char **exception; // r12
  void **v7; // rbx
  void **v8; // r15
  _QWORD *v9; // rbp
  __int64 v11; // rdi
  __int64 v12; // rbx
  __int64 i; // r14
  _DWORD *v14; // rbp
  void **v15; // rcx
  unsigned int v16; // eax
  __int64 v17; // rsi
  int v18; // eax
  void **v19; // rsi
  unsigned int v21; // r8d
  size_t v22; // rsi
  unsigned int *v23; // rax
  __int64 v24; // rsi
  _QWORD *v25; // rax
  unsigned __int8 v26; // [rsp+Bh] [rbp-5Dh]
  unsigned int v27; // [rsp+Ch] [rbp-5Ch]
  __int64 v28[11]; // [rsp+10h] [rbp-58h] BYREF

  v7 = *a3;
  if ( *a3 )
  {
    v8 = &v7[*((unsigned int *)v7 - 1)];
    if ( v7 >= v8 )
      goto LABEL_11;
    do
    {
      while ( 1 )
      {
        v9 = *v7;
        if ( *v7 )
        {
          if ( (*(_DWORD *)v9)-- == 1 )
            break;
        }
        if ( ++v7 >= v8 )
          goto LABEL_10;
      }
      sub_3FCDD0(v9[6], v9[7]);
      sub_41D1C0(v9 + 5);
      v11 = v9[3];
      if ( v11 )
        sub_186B220((void *)(v11 - 8));
      ++v7;
      sub_3FCDF0(v9[1], v9[2]);
      sub_186B220(v9);
    }
    while ( v7 < v8 );
LABEL_10:
    v7 = *a3;
    if ( *a3 )
LABEL_11:
      *((_DWORD *)v7 - 1) = 0;
  }
  v26 = sub_13608A0(a2 + 128);
  sub_1360B80(a2 + 128, 0);
  v12 = *(_QWORD *)(a1 + 216);
  if ( v12 )
  {
    for ( i = v12 + 8LL * *(unsigned int *)(v12 - 4); i != v12; *((_DWORD *)v15 - 1) = v18 )
    {
      while ( 1 )
      {
        v14 = *(_DWORD **)v12;
        if ( (unsigned __int8)sub_13742D0(a2, *(_QWORD *)(*(_QWORD *)v12 + 48LL)) )
          break;
        v12 += 8;
        if ( i == v12 )
          return sub_1360B80(a2 + 128, v26);
      }
      v15 = *a3;
      ++*v14;
      if ( v15 )
      {
        v16 = *((_DWORD *)v15 - 1);
        if ( v16 == *((_DWORD *)v15 - 2) )
        {
          v21 = (3 * v16 + 1) >> 1;
          v22 = 8 * v21 + 8;
          if ( 8 * v16 + 8 >= (unsigned int)v22 || v16 >= v21 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_3FCFD0(v28, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v28);
            sub_233E40((__int64)v28);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v27 = (3 * v16 + 1) >> 1;
          v23 = (unsigned int *)sub_186B300(v15 - 1, v22);
          v24 = v23[1];
          v15 = (void **)(v23 + 2);
          *a3 = (void **)(v23 + 2);
          *v23 = v27;
          LODWORD(v23) = v24;
          v19 = &v15[v24];
          v18 = (_DWORD)v23 + 1;
        }
        else
        {
          v17 = v16;
          v18 = v16 + 1;
          v19 = &v15[v17];
        }
      }
      else
      {
        v25 = (_QWORD *)sub_186B270(0x18u);
        v15 = (void **)(v25 + 1);
        *v25 = 2;
        v18 = 1;
        *a3 = v15;
        v19 = v15;
      }
      v12 += 8;
      *v19 = v14;
    }
  }
  return sub_1360B80(a2 + 128, v26);
}

