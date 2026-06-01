__int64 __fastcall sub_5D4B70(
        __int64 a1,
        __int64 a2,
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
        int a13,
        int a14,
        __int64 a15)
{
  __int64 result; // rax
  __int64 v16; // rbx
  __int64 v17; // r12
  signed int v18; // r13d
  __int64 v19; // rbp

  switch_dbctx(*(int *)(a1 + 8));
  result = get_func(a2);
  if ( result )
  {
    v16 = result;
    if ( *(__int64 *)(result + 16) >= 0 )
    {
      v17 = *(_QWORD *)(a1 + 32);
      v18 = *(_DWORD *)(a1 + 12);
      v19 = switch_dbctx(*(int *)(v17 + 4LL * v18 + 16));
      sub_459560(v17, 3u, v18, 0xFFFFFFFF, v16);
      return sub_5D4180(*(_QWORD *)(v19 + 1672), a7, a8, a9, a10, a11, a12, a13, a14, a15);
    }
  }
  return result;
}
