__int64 __fastcall sub_B72720(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rsi
  int v4; // eax
  int v5; // ecx
  unsigned int v6; // edx
  __int64 *v7; // rax
  __int64 v8; // rdi
  __int64 result; // rax
  int v10; // eax
  int v11; // r8d
  __int64 v12; // rdi

  v2 = sub_B8C330(a1);
  v3 = *(_QWORD *)(v2 + 1728);
  v4 = *(_DWORD *)(v2 + 1744);
  if ( !v4 )
    return a1;
  v5 = v4 - 1;
  v6 = (v4 - 1) & (((unsigned int)a1 >> 9) ^ ((unsigned int)a1 >> 4));
  v7 = (__int64 *)(v3 + 16LL * v6);
  v8 = *v7;
  if ( a1 != *v7 )
  {
    result = a1;
    if ( v8 == -4096 )
      return result;
    v10 = 1;
    while ( 1 )
    {
      v11 = v10 + 1;
      v6 = v5 & (v10 + v6);
      v7 = (__int64 *)(v3 + 16LL * v6);
      v12 = *v7;
      if ( a1 == *v7 )
        break;
      v10 = v11;
      if ( v12 == -4096 )
        return a1;
    }
  }
  result = v7[1];
  if ( !result )
    return a1;
  return result;
}
