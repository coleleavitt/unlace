unsigned __int64 __fastcall sub_B58970(__int64 a1, __int64 a2, const void *a3, unsigned __int64 a4)
{
  unsigned __int64 v6; // rbx
  __int64 v7; // rax
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rbx
  unsigned __int64 result; // rax
  __int64 *v11; // rdi

  v6 = *(_QWORD *)(a1 + 120);
  if ( (v6 & 4) == 0 )
  {
    v7 = sub_B685F0(a1);
    v8 = sub_B57ED0((__int64 *)(v7 + 2352), 32, 3u);
    *(_OWORD *)v8 = 0;
    *(_DWORD *)(v8 + 16) = 0;
    *(_QWORD *)(v8 + 24) = 0;
    v8 |= 4u;
    *(_QWORD *)(a1 + 120) = v8;
    v6 = v8;
  }
  v9 = v6 & 0xFFFFFFFFFFFFFFF8LL;
  result = *(unsigned int *)(v9 + 16);
  if ( (_DWORD)result )
  {
    *(_QWORD *)(v9 + 24) = 0;
    *(_DWORD *)(v9 + 16) = 0;
  }
  if ( a4 )
  {
    v11 = (__int64 *)(a2 + 2352);
    if ( a4 <= 0xFFFFFFFFFFFFFFFLL )
    {
      result = sub_B57ED0(v11, 8 * a4, 3u);
      *(_DWORD *)(v9 + 16) = a4;
      *(_QWORD *)(v9 + 24) = result;
      return (unsigned __int64)memmove((void *)result, a3, 8 * a4);
    }
    result = sub_B57ED0(v11, -1, 3u);
    *(_DWORD *)(v9 + 16) = a4;
    *(_QWORD *)(v9 + 24) = result;
    if ( 8 * a4 )
      return (unsigned __int64)memmove((void *)result, a3, 8 * a4);
  }
  return result;
}

