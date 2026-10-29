__int64 __fastcall sub_BAE900(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v7; // rdx
  __int64 v8; // rax
  unsigned __int64 v9; // rax
  char v10; // al
  char v11; // al

  while ( 1 )
  {
    v8 = *(_QWORD *)(a1 + 120);
    if ( !v8 )
    {
      a2 = *(_QWORD *)(a1 + 96);
      sub_A794E0((__int64 *)(a2 + 88), a2, a3, a4, a5, a6);
      v8 = *(_QWORD *)(a1 + 120);
    }
    v9 = v8 & 0xFFFFFFFFFFFFFFF8LL;
    v7 = v9;
    if ( v9 )
    {
      if ( *(_QWORD *)v9 == a1 )
      {
        v10 = *(_BYTE *)(v9 + 72);
        if ( (v10 & 1) != 0 )
        {
          sub_BA8900(a1);
          v7 = *(_QWORD *)(a1 + 120) & 0xFFFFFFFFFFFFFFF8LL;
          v10 = *(_BYTE *)(v7 + 72);
        }
        if ( (v10 & 4) != 0 )
          break;
      }
    }
    v11 = (*(_BYTE *)(v7 + 72) >> 3) & 3;
    if ( v11 == 1 || !v11 && sub_BAE5D0(a1, a2) )
    {
      a1 = sub_BAB630(a1, a2, v7, a4, a5, a6);
      if ( a1 )
        continue;
    }
    return 0;
  }
  return a1;
}
