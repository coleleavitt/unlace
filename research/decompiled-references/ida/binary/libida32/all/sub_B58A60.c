unsigned __int64 __fastcall sub_B58A60(__int64 a1, __int64 a2, const void *a3, unsigned __int64 a4)
{
  unsigned __int64 v6; // rbx
  __int64 v7; // rax
  unsigned __int64 v8; // rax
  unsigned __int64 result; // rax
  __int64 *v10; // rdi

  v6 = *(_QWORD *)(a1 + 56) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(a1 + 56) & 4) == 0 )
  {
    v7 = sub_B685F0(a1);
    v8 = sub_B57ED0((__int64 *)(v7 + 2352), 56, 3u);
    *(_OWORD *)(v8 + 24) = 0;
    *(_OWORD *)v8 = 0;
    *(_DWORD *)(v8 + 16) = 0;
    *(_QWORD *)(v8 + 40) = 0;
    *(_DWORD *)(v8 + 48) = 0;
    *(_QWORD *)(a1 + 56) = v8 | 4;
    *(_QWORD *)((v8 & 0xFFFFFFFFFFFFFFF8LL) + 32) = v6;
    v6 = *(_QWORD *)(a1 + 56) & 0xFFFFFFFFFFFFFFF8LL;
  }
  result = *(unsigned int *)(v6 + 16);
  if ( (_DWORD)result )
  {
    *(_QWORD *)(v6 + 24) = 0;
    *(_DWORD *)(v6 + 16) = 0;
  }
  if ( a4 )
  {
    v10 = (__int64 *)(a2 + 2352);
    if ( a4 <= 0xFFFFFFFFFFFFFFFLL )
    {
      result = sub_B57ED0(v10, 8 * a4, 3u);
      *(_DWORD *)(v6 + 16) = a4;
      *(_QWORD *)(v6 + 24) = result;
      return (unsigned __int64)memmove((void *)result, a3, 8 * a4);
    }
    result = sub_B57ED0(v10, -1, 3u);
    *(_DWORD *)(v6 + 16) = a4;
    *(_QWORD *)(v6 + 24) = result;
    if ( 8 * a4 )
      return (unsigned __int64)memmove((void *)result, a3, 8 * a4);
  }
  return result;
}

