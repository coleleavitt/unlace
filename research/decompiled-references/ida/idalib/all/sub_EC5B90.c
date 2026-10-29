__int64 __fastcall sub_EC5B90(__int64 **a1, __int64 a2)
{
  __int64 *v2; // rax
  __int64 v3; // rdi
  int v4; // eax
  int v5; // ecx
  unsigned int v6; // edx
  __int64 *v7; // rax
  __int64 v8; // r8
  __int64 result; // rax
  int v10; // eax
  int v11; // r9d
  __int64 v12; // r8

  v2 = *a1;
  v3 = **a1;
  v4 = *((_DWORD *)v2 + 4);
  if ( !v4 )
    return 0;
  v5 = v4 - 1;
  v6 = (v4 - 1) & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
  v7 = (__int64 *)(v3 + 16LL * v6);
  v8 = *v7;
  if ( a2 == *v7 )
    return v7[1];
  result = 0;
  if ( v8 != -4096 )
  {
    v10 = 1;
    while ( 1 )
    {
      v11 = v10 + 1;
      v6 = v5 & (v10 + v6);
      v7 = (__int64 *)(v3 + 16LL * v6);
      v12 = *v7;
      if ( a2 == *v7 )
        break;
      v10 = v11;
      if ( v12 == -4096 )
        return 0;
    }
    return v7[1];
  }
  return result;
}
