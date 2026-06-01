__int64 *__fastcall sub_7DB590(__int64 *a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rax
  unsigned int v5; // esi
  __int64 *v6; // rcx
  __int64 v7; // rdi
  int v9; // ecx
  int v10; // r10d

  v2 = *((unsigned int *)a1 + 4);
  v3 = *a1;
  if ( (_DWORD)v2 )
  {
    v5 = (v2 - 1) & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
    v6 = (__int64 *)(v3 + 16LL * v5);
    v7 = *v6;
    if ( *v6 == a2 )
      return v6;
    v9 = 1;
    while ( v7 != -4096 )
    {
      v10 = v9 + 1;
      v5 = (v2 - 1) & (v9 + v5);
      v6 = (__int64 *)(v3 + 16LL * v5);
      v7 = *v6;
      if ( *v6 == a2 )
        return v6;
      v9 = v10;
    }
  }
  return (__int64 *)(16 * v2 + v3);
}

