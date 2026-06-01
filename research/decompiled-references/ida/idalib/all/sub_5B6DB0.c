__int64 __fastcall sub_5B6DB0(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rdi
  __int64 v5; // r12
  __int64 v6; // rax

  v3 = *(unsigned int *)(a1 + 68);
  if ( (_DWORD)v3 == -1 )
    sub_368890();
  v4 = *(_QWORD *)(a1 + 72);
  v5 = (a2 - v4) >> 4;
  if ( !a2 )
    v5 = 0;
  if ( (v3 & 0x1F) == 0 )
  {
    if ( 16LL * ((int)v3 + 32) < (unsigned __int64)((int)v3 + 32) || (v6 = qrealloc(v4), (v4 = v6) == 0) )
      sub_3BC000((int)"sp points");
    *(_QWORD *)(a1 + 72) = v6;
    v3 = *(unsigned int *)(a1 + 68);
  }
  memmove((void *)(v4 + 16 * v5 + 16), (const void *)(v4 + 16 * v5), 16 * (v3 - v5));
  ++*(_DWORD *)(a1 + 68);
  return v4 + 16 * v5;
}
