__int64 __fastcall sub_1F6A970(__int64 a1, __int64 a2)
{
  int v2; // eax
  __int64 v3; // r8
  int v4; // ecx
  unsigned int v5; // edx
  __int64 v6; // rdi
  __int64 result; // rax
  int i; // eax
  __int64 v9; // rdi

  v2 = *(_DWORD *)(a1 + 440);
  v3 = *(_QWORD *)(a1 + 424);
  if ( !v2 )
    return 0;
  v4 = v2 - 1;
  v5 = (v2 - 1) & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
  v6 = *(_QWORD *)(v3 + 16LL * v5);
  result = 1;
  if ( v6 != a2 )
  {
    result = 0;
    if ( v6 != -4096 )
    {
      for ( i = 1; ; ++i )
      {
        v5 = v4 & (i + v5);
        v9 = *(_QWORD *)(v3 + 16LL * v5);
        if ( a2 == v9 )
          break;
        if ( v9 == -4096 )
          return 0;
      }
      return 1;
    }
  }
  return result;
}
