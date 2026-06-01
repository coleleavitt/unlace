__int64 __fastcall sub_77D6D0(__int64 a1)
{
  __int64 v1; // rcx
  __int64 v2; // r8
  unsigned int v4; // esi
  __int64 *v5; // rax
  __int64 v6; // rdi
  int v8; // eax
  int v9; // r10d
  __int64 v10; // rax

  v10 = sub_798D40(a1);
  v1 = *(unsigned int *)(v10 + 2088);
  v2 = *(_QWORD *)(v10 + 2072);
  if ( (_DWORD)v1 )
  {
    v4 = (v1 - 1) & (((unsigned int)a1 >> 9) ^ ((unsigned int)a1 >> 4));
    v5 = (__int64 *)(v2 + 16LL * v4);
    v6 = *v5;
    if ( a1 == *v5 )
      return *((unsigned int *)v5 + 2);
    v8 = 1;
    while ( v6 != -4096 )
    {
      v9 = v8 + 1;
      v4 = (v1 - 1) & (v8 + v4);
      v5 = (__int64 *)(v2 + 16LL * v4);
      v6 = *v5;
      if ( a1 == *v5 )
        return *((unsigned int *)v5 + 2);
      v8 = v9;
    }
  }
  return *(unsigned int *)(v2 + 16 * v1 + 8);
}

