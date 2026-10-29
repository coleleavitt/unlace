__int64 *__fastcall sub_449660(__int64 a1, void *a2, int a3, __int64 a4, int a5, int a6)
{
  __int64 **v7; // rbp
  __int64 *result; // rax
  __int64 v9; // rcx

  if ( !a1 )
    return (__int64 *)sub_40FC10(a2, a3);
  v7 = *(__int64 ***)(a1 + 456);
  if ( !v7 )
    return (__int64 *)sub_40FC10(a2, a3);
  v9 = (*v7)[2];
  if ( (void *)(v9 + 8LL * (int)((16 - (unsigned __int64)(v9 & 0xF)) >> 3)) != a2 )
  {
    sub_47D740((unsigned int)"TclStackRealloc: incorrect ptr. Call out of sequence?", (_DWORD)a2, v9 & 0xF, v9, a5, a6);
    v7 = *(__int64 ***)(a1 + 456);
  }
  result = sub_449270(v7, (__int64 *)((unsigned __int64)(a3 + 7LL) >> 3), 1, v9, a5, a6);
  (*v7)[4] += 8LL * (int)((unsigned __int64)(a3 + 7LL) >> 3);
  return result;
}

