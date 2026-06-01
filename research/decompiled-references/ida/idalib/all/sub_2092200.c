void __fastcall sub_2092200(__int64 *a1, __int64 a2)
{
  __int64 v2; // rbx
  int v3; // eax
  __int64 v4; // rdi
  int v5; // edx
  unsigned int v6; // eax
  _QWORD *v7; // rbp
  _QWORD *v8; // rdi
  int i; // ecx

  v2 = *a1;
  v3 = *(_DWORD *)(*a1 + 2920);
  v4 = *(_QWORD *)(*a1 + 2904);
  if ( v3 )
  {
    v5 = v3 - 1;
    v6 = (v3 - 1) & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
    v7 = (_QWORD *)(v4 + 40LL * v6);
    if ( a2 != *v7 )
    {
      if ( *v7 == -4096 )
        return;
      for ( i = 1; ; ++i )
      {
        v6 = v5 & (i + v6);
        v7 = (_QWORD *)(v4 + 40LL * v6);
        if ( a2 == *v7 )
          break;
        if ( *v7 == -4096 )
          return;
      }
    }
    v8 = (_QWORD *)v7[1];
    if ( v8 != v7 + 3 )
      operator delete(v8);
    *v7 = -8192;
    --*(_DWORD *)(v2 + 2912);
    ++*(_DWORD *)(v2 + 2916);
  }
}
