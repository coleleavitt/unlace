__int64 __fastcall sub_82D690(__int64 a1, unsigned int a2, const void **a3, __int64 *a4, __m128 *a5)
{
  char **exception; // rbx
  unsigned int v9; // r15d
  unsigned int *v10; // rdx
  int *v11; // rbx
  int *i; // r15
  __int64 v13; // rax
  unsigned int v14; // esi
  _QWORD *v16; // rax
  unsigned int v17; // ecx
  size_t v18; // rsi
  unsigned int v19; // r13d
  unsigned int *v20; // rax
  __int64 v21; // rax
  unsigned int *v22; // rcx
  __int64 v23; // rax
  int v24; // r14d
  int v25; // r14d
  _QWORD *v26; // rax
  __int64 v28[11]; // [rsp+20h] [rbp-58h] BYREF

  if ( *a3 )
    v9 = *((_DWORD *)*a3 - 1);
  else
    v9 = 0;
  if ( v9 < *(_DWORD *)(sub_7E4EB0(a1) + 280) && (!*a4 || !*(_DWORD *)(*a4 - 4)) )
  {
    v10 = *(unsigned int **)(a1 + 760);
    if ( v10 )
    {
      v11 = (int *)*a3;
      *(v10 - 1) = 0;
      if ( v11 )
      {
        for ( i = &v11[*(v11 - 1)]; v11 != i; ++*(v10 - 1) )
        {
          v23 = *(v10 - 1);
          v24 = *v11 ^ 1;
          v22 = &v10[v23];
          if ( (_DWORD)v23 == *(v10 - 2) )
          {
            v17 = (unsigned int)(3 * v23 + 1) >> 1;
            v18 = 4 * v17 + 8;
            v19 = v17;
            if ( 4 * (int)v23 + 8 >= (unsigned int)v18 || (unsigned int)v23 >= v17 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v28, "Overflow encountered when expanding vector");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, v28);
              sub_233E40((__int64)v28);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v20 = (unsigned int *)sub_186B300(v10 - 2, v18);
            v10 = v20 + 2;
            *v20 = v19;
            v21 = v20[1];
            *(_QWORD *)(a1 + 760) = v10;
            v22 = &v10[v21];
          }
LABEL_15:
          ++v11;
          *v22 = v24;
        }
      }
      v13 = *(v10 - 1);
      if ( (_DWORD)v13 != *(v10 - 2) )
        goto LABEL_10;
    }
    else
    {
      v11 = (int *)*a3;
      if ( v11 )
      {
        i = &v11[*(v11 - 1)];
        if ( i != v11 )
        {
          v25 = *v11;
          v26 = (_QWORD *)sub_186B270(0x10u);
          v10 = (unsigned int *)(v26 + 1);
          *v26 = 2;
          v24 = v25 ^ 1;
          *(_QWORD *)(a1 + 760) = v26 + 1;
          v22 = (unsigned int *)(v26 + 1);
          goto LABEL_15;
        }
      }
    }
    sub_692C60((unsigned int **)(a1 + 760));
    v10 = *(unsigned int **)(a1 + 760);
    v13 = *(v10 - 1);
LABEL_10:
    v10[v13] = a2;
    v14 = *(v10 - 1) + 1;
    *(v10 - 1) = v14;
    return sub_7E56B0(a1, v14, v10, a5, 1u);
  }
  v16 = sub_7E5B40(a1, a3, a4, a2, (__int64)a5);
  return sub_7CA4E0(*(_QWORD *)(a1 + 80), a2, (__int64)(v16 - 1));
}

