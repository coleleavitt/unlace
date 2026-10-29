__int64 __fastcall sub_A98C10(__int64 *a1, unsigned int *a2, unsigned int *a3, unsigned int a4, __int64 a5, __int64 a6)
{
  unsigned int **v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // rax
  unsigned int **v13; // r15
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rbx
  unsigned int v17; // eax
  __int64 *v18; // rdi
  unsigned int v19; // eax
  unsigned int v20; // r14d
  unsigned int v21; // r15d
  int v22; // r12d
  _QWORD *v23; // rax
  _QWORD *v24; // rbx
  unsigned int *j; // rax
  __int64 v26; // rax
  __int64 v27; // r12
  unsigned int v28; // eax
  __int64 i; // rax
  unsigned int v31; // ecx
  size_t v32; // rsi
  unsigned int *v33; // rax
  __int64 v34; // r15
  _DWORD *v35; // rax
  _BOOL8 v36; // rdx
  char **exception; // r12
  __int64 v38; // [rsp+0h] [rbp-78h]
  unsigned int v39; // [rsp+0h] [rbp-78h]
  unsigned int v40; // [rsp+14h] [rbp-64h]
  __int64 v41; // [rsp+18h] [rbp-60h]
  char *v42[11]; // [rsp+20h] [rbp-58h] BYREF

  v9 = (unsigned int **)(a2 + 8);
  v10 = *a1;
  v11 = *(_QWORD *)(*a1 + 16);
  v12 = 2LL * a2[6];
  v13 = (unsigned int **)&a2[v12 + 8];
  v14 = *(_QWORD *)(v11 + 8656);
  if ( v12 * 4 )
  {
    do
    {
      if ( v14 )
      {
        for ( i = **v9; (unsigned int)i < *(_DWORD *)(v14 - 4); i = **v9 )
        {
          if ( !*(_QWORD *)(v14 + 8 * i) )
            break;
          if ( v13 == ++v9 )
            goto LABEL_5;
        }
      }
      ++v9;
      sub_B6F780(v11);
      v10 = *a1;
      v11 = *(_QWORD *)(*a1 + 16);
      v14 = *(_QWORD *)(v11 + 8656);
    }
    while ( v13 != v9 );
  }
  if ( !v14 )
    goto LABEL_25;
LABEL_5:
  v15 = *a2;
  if ( (unsigned int)v15 >= *(_DWORD *)(v14 - 4) || (v16 = *(_QWORD *)(v14 + 8 * v15)) == 0 )
  {
LABEL_25:
    v18 = a1;
    goto LABEL_9;
  }
  v38 = v10;
  v17 = sub_B39350(*(_QWORD *)(v14 + 8 * v15), *(unsigned int *)(v10 + 8));
  v18 = a1;
  if ( v17 != -1 )
  {
    v10 = v38;
    v14 = *(_QWORD *)(v38 + 32);
    if ( *(_QWORD *)(v14 + 8LL * v17) == v16 )
    {
      sub_A72EC0(a1, a2, v14, v38, a5, a6);
      return sub_A83040(a1, a2);
    }
  }
LABEL_9:
  sub_A72EC0(v18, a2, v14, v10, a5, a6);
  v40 = sub_A83040(a1, a2);
  sub_A76B80(a1, a3);
  v19 = sub_A83040(a1, a3);
  v20 = v19;
  if ( a4 )
  {
    v41 = v19;
    v21 = sub_FF9FB0(a1[63], v19);
    v22 = 0;
    if ( v21 == -1 )
    {
      v24 = nullptr;
      goto LABEL_30;
    }
LABEL_11:
    v23 = (_QWORD *)sub_186B270(0x10u);
    v24 = v23 + 1;
    *v23 = 2;
    for ( j = (unsigned int *)(v23 + 1); ; j = &v33[v33[1] + 2] )
    {
      ++v22;
      *j = v21;
      ++*((_DWORD *)v24 - 1);
      if ( a4 == v22 )
        break;
      while ( 1 )
      {
        v21 = sub_FF9FB0(a1[63], v20);
        if ( v21 == -1 )
        {
LABEL_30:
          v34 = a1[63];
          v35 = *(_DWORD **)(sub_15D1F10(**(_QWORD **)(*(_QWORD *)(*a1 + 32) + 8 * v41)) + 24);
          v36 = 0;
          if ( v35 && *v35 == 5 )
            v36 = v35[1] == 1;
          v21 = sub_1006C00(v34, v20, v36);
          if ( !v24 )
            goto LABEL_11;
        }
        v26 = *((unsigned int *)v24 - 1);
        if ( (_DWORD)v26 == *((_DWORD *)v24 - 2) )
          break;
        ++v22;
        *((_DWORD *)v24 + v26) = v21;
        ++*((_DWORD *)v24 - 1);
        if ( a4 == v22 )
          goto LABEL_16;
      }
      v31 = (unsigned int)(3 * v26 + 1) >> 1;
      v32 = 4 * v31 + 8;
      if ( 4 * (int)v26 + 8 >= (unsigned int)v32 || (unsigned int)v26 >= v31 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_137C7A(v42);
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v42);
        sub_233E40((__int64)v42);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v39 = (unsigned int)(3 * v26 + 1) >> 1;
      v33 = (unsigned int *)sub_186B300(v24 - 1, v32);
      v24 = v33 + 2;
      *v33 = v39;
    }
LABEL_16:
    sub_A79FF0(a1);
    sub_100A620(a1[63]);
    v27 = a1[41];
    a4 = *((_DWORD *)v24 - 1);
  }
  else
  {
    v24 = nullptr;
    sub_A79FF0(a1);
    sub_100A620(a1[63]);
    v27 = a1[41];
  }
  v28 = sub_A7A1D0(a1, v40);
  sub_1021B50(v27, v28, a4, v24);
  if ( v24 )
    sub_186B220(v24 - 1);
  return v40;
}

