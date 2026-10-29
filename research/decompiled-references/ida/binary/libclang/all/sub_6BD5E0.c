__int64 __fastcall sub_6BD5E0(__int64 a1, __int64 a2)
{
  int v2; // eax
  __int64 v3; // r8
  int v5; // esi
  unsigned int v6; // ecx
  __int64 *v7; // rax
  __int64 v8; // rdi
  int v10; // eax
  int v11; // r9d

  v2 = *(_DWORD *)(a1 + 1864);
  v3 = *(_QWORD *)(a1 + 1848);
  if ( v2 )
  {
    v5 = v2 - 1;
    v6 = (v2 - 1) & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
    v7 = (__int64 *)(v3 + 16LL * v6);
    v8 = *v7;
    if ( a2 == *v7 )
      return v7[1];
    v10 = 1;
    while ( v8 != -4096 )
    {
      v11 = v10 + 1;
      v6 = v5 & (v10 + v6);
      v7 = (__int64 *)(v3 + 16LL * v6);
      v8 = *v7;
      if ( a2 == *v7 )
        return v7[1];
      v10 = v11;
    }
  }
  return 0;
}

