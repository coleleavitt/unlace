__int64 __fastcall sub_5B9A00(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        int a8,
        int a9,
        void *a10,
        __int64 a11,
        int a12,
        __int64 a13)
{
  __int64 result; // rax
  __int64 v14; // rbx
  __int64 v15; // r12
  signed int v16; // r13d
  __int64 v17; // rbp

  switch_dbctx(*(int *)(a1 + 8));
  result = get_func(a2);
  if ( result )
  {
    v14 = result;
    if ( *(__int64 *)(result + 8) >= 0 )
    {
      v15 = *(_QWORD *)(a1 + 32);
      v16 = *(_DWORD *)(a1 + 12);
      v17 = switch_dbctx(*(int *)(v15 + 4LL * v16 + 16));
      sub_445720(v15, 3u, v16, 0xFFFFFFFF, v14);
      return sub_5B9040(*(_QWORD *)(v17 + 1480), a7, a8, a9, a10, a11, a12, a13);
    }
  }
  return result;
}

