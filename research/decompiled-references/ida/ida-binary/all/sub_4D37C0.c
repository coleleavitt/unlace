__int64 __fastcall sub_4D37C0(
        __int64 a1,
        const char *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        int a8,
        int a9,
        __int64 a10,
        __int64 a11,
        int a12,
        __int64 a13)
{
  __int64 v13; // rdx
  size_t v15; // rax
  size_t v16; // r14
  size_t v17; // r13
  const char *v18; // rsi
  __int64 v19; // rdx
  int v20; // edx
  int v21; // ecx
  int v22; // r8d
  int v23; // r9d
  void (__fastcall ***v25)(void *); // r12
  void (__fastcall *v26)(void *); // rdx
  void (__fastcall *v27)(void *); // rax
  char *v28; // [rsp+0h] [rbp-48h] BYREF
  __int128 v29; // [rsp+8h] [rbp-40h]
  unsigned __int64 v30; // [rsp+18h] [rbp-30h]

  v13 = *(_QWORD *)(a1 + 72);
  v30 = __readfsqword(0x28u);
  if ( v13 )
  {
    if ( (*(_DWORD *)(v13 + 8))-- == 1 )
    {
      v25 = *(void (__fastcall ****)(void *))(a1 + 72);
      v26 = **v25;
      if ( v26 == refcnted_regex_t__::vfunc_0 )
      {
        if ( v25 )
        {
          v27 = (*v25)[2];
          if ( (char *)v27 == (char *)refcnted_regex_t__::vfunc_2 )
          {
            *v25 = (void (__fastcall **)(void *))&refcnted_regex_t___vtable;
            qregfree(v25 + 2);
            operator delete(v25, 0x30u);
          }
          else
          {
            v27(*(void **)(a1 + 72));
          }
        }
      }
      else
      {
        v26(*(void **)(a1 + 72));
      }
    }
  }
  *(_QWORD *)(a1 + 72) = 0;
  v28 = nullptr;
  v29 = 0;
  if ( a2
    && (v15 = strlen(a2),
        v16 = v15 + 1,
        v17 = v15,
        v28 = (char *)qvector_reserve(&v28, 0, v15 + 1, 1),
        *(_QWORD *)&v29 = v16,
        memmove(v28, a2, v17),
        v28[v17] = 0,
        (_QWORD)v29) )
  {
    v18 = v28;
    v19 = v29 - 1;
  }
  else
  {
    v19 = 0;
    v18 = &s1;
  }
  sub_4D8FE0(a1 + 40, v18, v19);
  if ( v28 )
  {
    *(_QWORD *)&v29 = 0;
    qfree(v28, v18);
  }
  if ( (*(_DWORD *)a1 & 3u) - 1 > 1 )
    return 1;
  else
    return sub_4DA280(a1, (_DWORD)v18, v20, v21, v22, v23, a7, a8, a9, a10, a11, a12, a13);
}
