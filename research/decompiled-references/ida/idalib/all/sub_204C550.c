__int64 __fastcall sub_204C550(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rsi
  int v3; // ecx
  unsigned int v4; // edx
  __int64 *v5; // rax
  __int64 v6; // r8
  __int64 result; // rax
  int v8; // ecx
  int v9; // eax
  int v10; // r9d
  __int64 v11; // r8

  v1 = ***(_QWORD ***)(a1 + 8);
  if ( (*(_BYTE *)(v1 + 2944) & 1) != 0 )
  {
    v2 = v1 + 2952;
    v3 = 3;
  }
  else
  {
    v8 = *(_DWORD *)(v1 + 2960);
    v2 = *(_QWORD *)(v1 + 2952);
    if ( !v8 )
      return 0;
    v3 = v8 - 1;
  }
  v4 = v3 & (((unsigned int)a1 >> 9) ^ ((unsigned int)a1 >> 4));
  v5 = (__int64 *)(v2 + 16LL * v4);
  v6 = *v5;
  if ( a1 == *v5 )
    return v5[1];
  result = 0;
  if ( v6 != -4096 )
  {
    v9 = 1;
    while ( 1 )
    {
      v10 = v9 + 1;
      v4 = v3 & (v9 + v4);
      v5 = (__int64 *)(v2 + 16LL * v4);
      v11 = *v5;
      if ( a1 == *v5 )
        break;
      v9 = v10;
      if ( v11 == -4096 )
        return 0;
    }
    return v5[1];
  }
  return result;
}
