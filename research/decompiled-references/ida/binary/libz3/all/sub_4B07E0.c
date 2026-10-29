__int64 __fastcall sub_4B07E0(_QWORD *a1, __int64 a2, __int64 a3)
{
  char **exception; // rbp
  __int64 v5; // rbx
  __int64 v6; // r15
  __int64 v7; // rax
  _QWORD *v8; // rbp
  __int64 v9; // rax
  _DWORD *v10; // rax
  _QWORD *v11; // rdx
  unsigned int v12; // eax
  __int64 v13; // rcx
  int v14; // eax
  _QWORD *v15; // rcx
  int v16; // edx
  __int64 v17; // rax
  unsigned int v19; // esi
  size_t v20; // rdi
  __int64 v21; // rax
  __int64 v22; // rdi
  _DWORD *v23; // r14
  __int64 v24; // rcx
  unsigned __int64 v25; // rax
  __int64 v26; // rcx
  unsigned int v27; // ebp
  size_t v28; // rsi
  unsigned int *v29; // rax
  __int64 v30; // rcx
  _QWORD *v31; // rax
  _QWORD *v32; // rax
  unsigned int v33; // [rsp+Ch] [rbp-6Ch]
  __int64 v34[11]; // [rsp+20h] [rbp-58h] BYREF

  v5 = a1[5];
  v6 = *(unsigned int *)(a2 + 16);
  v7 = 24 * v6 + *(_QWORD *)(v5 + 8);
  if ( *(_DWORD *)(v7 + 16) != *(_DWORD *)(v5 + 24) )
  {
    v8 = *(_QWORD **)(v5 + 32);
    if ( v8 )
    {
      v9 = *((unsigned int *)v8 - 1);
      if ( (_DWORD)v9 == *((_DWORD *)v8 - 2) )
      {
        v19 = (unsigned int)(3 * v9 + 1) >> 1;
        v20 = 8 * v19 + 8;
        if ( 8 * (int)v9 + 8 >= (unsigned int)v20 || (unsigned int)v9 >= v19 )
          goto LABEL_25;
        v33 = (unsigned int)(3 * v9 + 1) >> 1;
        v21 = sub_186B270(v20);
        v22 = *(_QWORD *)(v5 + 32);
        v23 = (_DWORD *)v21;
        v8 = (_QWORD *)(v21 + 8);
        if ( v22 )
        {
          v24 = *(unsigned int *)(v22 - 4);
          *(_DWORD *)(v21 + 4) = v24;
          v25 = 0;
          v26 = 8 * v24;
          if ( v26 )
          {
            do
            {
              *(_QWORD *)&v23[v25 / 4 + 2] = *(_QWORD *)(v22 + v25);
              v25 += 8LL;
            }
            while ( v26 != v25 );
          }
          sub_186B220((void *)(v22 - 8));
          v10 = &v8[v23[1]];
        }
        else
        {
          *(_DWORD *)(v21 + 4) = 0;
          v10 = (_DWORD *)(v21 + 8);
        }
        *(_QWORD *)(v5 + 32) = v8;
        *v23 = v33;
      }
      else
      {
        v10 = &v8[v9];
      }
    }
    else
    {
      v32 = (_QWORD *)sub_186B270(0x18u);
      v8 = v32 + 1;
      *v32 = 2;
      *(_QWORD *)(v5 + 32) = v32 + 1;
      v10 = v32 + 1;
    }
    *v10 = v6;
    v10[1] = 0;
    ++*((_DWORD *)v8 - 1);
    if ( a3 )
      ++*(_DWORD *)(a3 + 8);
    v11 = *(_QWORD **)(v5 + 48);
    if ( !v11 )
    {
      v31 = (_QWORD *)sub_186B270(0x18u);
      v11 = v31 + 1;
      *v31 = 2;
      v14 = 1;
      *(_QWORD *)(v5 + 48) = v11;
      v15 = v11;
      goto LABEL_10;
    }
    v12 = *((_DWORD *)v11 - 1);
    if ( v12 != *((_DWORD *)v11 - 2) )
    {
      v13 = v12;
      v14 = v12 + 1;
      v15 = &v11[v13];
LABEL_10:
      *v15 = a3;
      *((_DWORD *)v11 - 1) = v14;
      v16 = *(_DWORD *)(v5 + 24);
      v17 = 24 * v6 + *(_QWORD *)(v5 + 8);
      *(_QWORD *)v17 = a3;
      *(_DWORD *)(v17 + 8) = 1;
      *(_DWORD *)(v17 + 16) = v16;
      *(_DWORD *)(v5 + 120) = 2;
      return 1;
    }
    v27 = (3 * v12 + 1) >> 1;
    v28 = 8 * v27 + 8;
    if ( 8 * v12 + 8 < (unsigned int)v28 && v12 < v27 )
    {
      v29 = (unsigned int *)sub_186B300(v11 - 1, v28);
      v30 = v29[1];
      v11 = v29 + 2;
      *(_QWORD *)(v5 + 48) = v29 + 2;
      *v29 = v27;
      LODWORD(v29) = v30;
      v15 = &v11[v30];
      v14 = (_DWORD)v29 + 1;
      goto LABEL_10;
    }
LABEL_25:
    exception = (char **)__cxa_allocate_exception(0x28u);
    sub_24ABB0(v34, "Overflow encountered when expanding vector");
    *exception = (char *)off_1C63128;
    sub_2333C0(exception + 1, v34);
    sub_233E40((__int64)v34);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
  }
  return sub_15D2760(*a1, *(_QWORD *)v7, a3);
}

