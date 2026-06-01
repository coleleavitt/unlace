__int64 __fastcall sub_59CC20(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v4; // rdi
  __int64 v5; // rbp
  __int64 v6; // rax

  v2 = *(unsigned int *)(a1 + 40);
  if ( (_DWORD)v2 == -1 )
    sub_365330();
  v4 = *(_QWORD *)(a1 + 48);
  v5 = (a2 - v4) >> 3;
  if ( !a2 )
    v5 = 0;
  if ( (v2 & 0x1F) == 0 )
  {
    if ( 8LL * ((int)v2 + 32) < (unsigned __int64)((int)v2 + 32) || (v6 = qrealloc(v4), (v4 = v6) == 0) )
      sub_3B74D0((int)"sp points");
    *(_QWORD *)(a1 + 48) = v6;
    v2 = *(unsigned int *)(a1 + 40);
  }
  memmove((void *)(v4 + 8 * v5 + 8), (const void *)(v4 + 8 * v5), 8 * (v2 - v5));
  ++*(_DWORD *)(a1 + 40);
  return v4 + 8 * v5;
}

