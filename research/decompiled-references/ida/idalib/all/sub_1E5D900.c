__int64 __fastcall sub_1E5D900(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 v4; // rbp
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  unsigned __int64 v8; // rax
  __int64 v9; // rax

  v2 = sub_F6AC00(*(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL));
  if ( !v2 )
    return 0;
  v3 = v2;
  v4 = sub_AA7570(*(_QWORD **)(*(_QWORD *)a1 + 248LL));
  while ( 1 )
  {
    v6 = *(_QWORD *)(v3 + 32);
    if ( v4 == v6 )
      break;
    v7 = *(_QWORD *)(v6 + 40);
    if ( (v7 & 7) == 0 )
    {
      v8 = v7 & 0xFFFFFFFFFFFFFFF8LL;
      if ( v8 )
      {
        v9 = *(_QWORD *)(v8 + 16);
        if ( *(_DWORD *)v9 == 7
          && *(_DWORD *)(v9 + 16) == 1818190198
          && *(_WORD *)(v9 + 20) == 29545
          && *(_BYTE *)(v9 + 22) == 116 )
        {
          break;
        }
      }
    }
    v5 = sub_F5DAC0(v3);
    v3 = sub_F6AC00(*(_QWORD *)(v5 & 0xFFFFFFFFFFFFFFF0LL));
    if ( !v3 )
      return 0;
  }
  return 1;
}
