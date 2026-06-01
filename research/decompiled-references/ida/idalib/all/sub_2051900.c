__int64 __fastcall sub_2051900(__int64 a1)
{
  __int64 v1; // rcx
  __int64 result; // rax
  int v3; // edx
  __int64 v4; // r8
  int v5; // edi
  unsigned int v6; // esi
  __int64 *v7; // rdx
  __int64 v8; // r9
  int v9; // edx
  int v10; // r10d
  __int64 v11; // r9

  v1 = *(_QWORD *)(a1 - 32);
  result = ***(_QWORD ***)(a1 + 8);
  v3 = *(_DWORD *)(result + 1624);
  v4 = *(_QWORD *)(result + 1608);
  if ( v3 )
  {
    v5 = v3 - 1;
    v6 = (v3 - 1) & (((unsigned int)v1 >> 9) ^ ((unsigned int)v1 >> 4));
    v7 = (__int64 *)(v4 + 16LL * v6);
    v8 = *v7;
    if ( v1 != *v7 )
    {
      v9 = 1;
      if ( v8 == -4096 )
        goto LABEL_4;
      while ( 1 )
      {
        v10 = v9 + 1;
        v6 = v5 & (v9 + v6);
        v7 = (__int64 *)(v4 + 16LL * v6);
        v11 = *v7;
        if ( v1 == *v7 )
          break;
        v9 = v10;
        if ( v11 == -4096 )
          goto LABEL_4;
      }
    }
    *v7 = -8192;
    --*(_DWORD *)(result + 1616);
    ++*(_DWORD *)(result + 1620);
  }
LABEL_4:
  *(_BYTE *)(v1 + 1) &= ~2u;
  return result;
}
