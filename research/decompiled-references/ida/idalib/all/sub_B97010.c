__int64 __fastcall sub_B97010(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rax
  __int64 v3; // rdi
  unsigned __int64 v4; // rax
  __int64 v5; // rax
  int v6; // edx
  __int64 result; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  bool v10; // zf
  __int64 v11; // rdx
  __int64 v12; // rsi
  __int64 v13; // rdi

  v1 = *(_QWORD *)(a1 + 128);
  if ( !v1 || (*(_BYTE *)(v1 + 10) & 0x20) == 0 || (*(_BYTE *)(v1 + 104) & 4) == 0 )
    return 0;
  v2 = sub_B95EB0(a1);
  v3 = v2;
  if ( v2 && (*(_BYTE *)(v2 + 28) & 0x7F) == 0x47 )
    v3 = *(_QWORD *)(v2 + 48);
  v4 = sub_B77A30(v3);
  if ( !v4 )
    return 0;
  v5 = *(_QWORD *)(v4 + 56);
  if ( !v5 )
    return 0;
  v6 = *(_DWORD *)(v5 + 20);
  result = v5 + 24;
  v8 = 8LL * (v6 & 0x1FFFFFFF);
  v9 = v8 >> 3;
  v10 = v8 == 0;
  v11 = result;
  if ( !v10 )
  {
    do
    {
      while ( 1 )
      {
        v12 = v9 >> 1;
        v13 = v11 + 8 * (v9 >> 1);
        if ( (*(_BYTE *)(*(_QWORD *)v13 + 29LL) & 2) != 0 )
          break;
        v11 = v13 + 8;
        v9 = v9 - v12 - 1;
        if ( v9 <= 0 )
          return result;
      }
      v9 >>= 1;
    }
    while ( v12 );
  }
  return result;
}
