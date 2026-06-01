__int64 __fastcall sub_A99000(__int64 *a1, unsigned int *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned int **v6; // r12
  __int64 v8; // r15
  __int64 v9; // rdi
  __int64 v10; // rax
  unsigned int **v11; // r14
  __int64 v12; // rdx
  unsigned int **v13; // rbx
  __int64 v14; // rax
  __int64 v15; // rbx
  unsigned int v16; // eax
  __int64 *v17; // rdi
  __int64 v18; // rax
  unsigned int **v19; // r14
  _DWORD *v20; // rbx
  __int64 i; // rax
  __int64 v22; // r15
  _DWORD *v23; // rax
  _BOOL8 v24; // rdx
  unsigned int v25; // r15d
  __int64 v26; // rax
  unsigned int *v27; // rax
  unsigned int *v28; // r13
  unsigned int v29; // r13d
  __int64 v30; // rax
  __int64 v31; // r12
  unsigned int v32; // r13d
  unsigned int v33; // eax
  unsigned int v35; // edx
  size_t v36; // rsi
  unsigned int *v37; // rax
  char **exception; // r12
  unsigned int v39; // [rsp+8h] [rbp-60h]
  unsigned int v40; // [rsp+Ch] [rbp-5Ch]
  char *v41[11]; // [rsp+10h] [rbp-58h] BYREF

  v6 = (unsigned int **)(a2 + 8);
  v8 = *a1;
  v9 = *(_QWORD *)(*a1 + 16);
  v10 = 2LL * a2[6];
  v11 = (unsigned int **)&a2[v10 + 8];
  v12 = *(_QWORD *)(v9 + 8656);
  if ( v10 * 4 )
  {
    v13 = (unsigned int **)(a2 + 8);
    do
    {
      if ( v12 )
      {
        for ( i = **v13; (unsigned int)i < *(_DWORD *)(v12 - 4); i = **v13 )
        {
          if ( !*(_QWORD *)(v12 + 8 * i) )
            break;
          if ( v11 == ++v13 )
            goto LABEL_6;
        }
      }
      ++v13;
      sub_B6F780(v9);
      v8 = *a1;
      v9 = *(_QWORD *)(*a1 + 16);
      v12 = *(_QWORD *)(v9 + 8656);
    }
    while ( v11 != v13 );
  }
  if ( !v12 )
    goto LABEL_36;
LABEL_6:
  v14 = *a2;
  if ( (unsigned int)v14 >= *(_DWORD *)(v12 - 4) || (v15 = *(_QWORD *)(v12 + 8 * v14)) == 0 )
  {
LABEL_36:
    v17 = a1;
    goto LABEL_10;
  }
  v16 = sub_B39350(*(_QWORD *)(v12 + 8 * v14), *(unsigned int *)(v8 + 8));
  v17 = a1;
  if ( v16 != -1 )
  {
    v12 = *(_QWORD *)(v8 + 32);
    if ( *(_QWORD *)(v12 + 8LL * v16) == v15 )
    {
      sub_A72EC0(a1, a2, v12, a4, a5, a6);
      return sub_A83040(a1, a2);
    }
  }
LABEL_10:
  sub_A72EC0(v17, a2, v12, a4, a5, a6);
  v40 = sub_A83040(a1, a2);
  v18 = a2[6];
  v19 = &v6[v18];
  if ( v18 * 8 )
  {
    v20 = nullptr;
    while ( 1 )
    {
      while ( 1 )
      {
        v28 = *v6;
        if ( !*((_WORD *)*v6 + 2) )
          sub_A76B80(a1, *v6);
        v29 = sub_A83040(a1, v28);
        v25 = sub_FF9FB0(a1[63], v29);
        if ( v25 != -1 )
          break;
        v22 = a1[63];
        v23 = *(_DWORD **)(sub_15D1F10(**(_QWORD **)(*(_QWORD *)(*a1 + 32) + 8LL * v29)) + 24);
        v24 = 0;
        if ( v23 && *v23 == 5 )
          v24 = v23[1] == 1;
        v25 = sub_1006C00(v22, v29, v24);
        if ( !v20 )
          goto LABEL_28;
LABEL_21:
        v26 = (unsigned int)*(v20 - 1);
        if ( (_DWORD)v26 == *(v20 - 2) )
        {
          v35 = (unsigned int)(3 * v26 + 1) >> 1;
          v36 = 4 * v35 + 8;
          if ( 4 * (int)v26 + 8 >= (unsigned int)v36 || (unsigned int)v26 >= v35 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_137C7A(v41);
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v41);
            sub_233E40((__int64)v41);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v39 = (unsigned int)(3 * v26 + 1) >> 1;
          v37 = (unsigned int *)sub_186B300(v20 - 2, v36);
          v20 = v37 + 2;
          *v37 = v39;
          v27 = &v37[v37[1] + 2];
        }
        else
        {
          v27 = &v20[v26];
        }
        ++v6;
        *v27 = v25;
        ++*(v20 - 1);
        if ( v19 == v6 )
        {
LABEL_29:
          sub_100A620(a1[63]);
          sub_A79FF0(a1);
          v31 = a1[41];
          v32 = *(v20 - 1);
          goto LABEL_30;
        }
      }
      if ( v20 )
        goto LABEL_21;
LABEL_28:
      ++v6;
      v30 = sub_186B270(0x10u);
      v20 = (_DWORD *)(v30 + 8);
      *(_QWORD *)v30 = 2;
      *(_DWORD *)(v30 + 8) = v25;
      ++*(_DWORD *)(v30 + 4);
      if ( v19 == v6 )
        goto LABEL_29;
    }
  }
  v20 = nullptr;
  v32 = 0;
  sub_100A620(a1[63]);
  sub_A79FF0(a1);
  v31 = a1[41];
LABEL_30:
  v33 = sub_A7A1D0(a1, v40);
  sub_1021B50(v31, v33, v32, v20);
  if ( v20 )
    sub_186B220(v20 - 2);
  return v40;
}

