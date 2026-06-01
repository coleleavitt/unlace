__int64 __fastcall sub_1714190(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  char v6; // al
  __int64 v7; // rax
  unsigned __int64 v8; // rax

  v6 = *(_BYTE *)(a1 + 28) & 0x7F;
  if ( v6 == 20 )
  {
    v7 = *(_QWORD *)(a1 + 120);
    if ( !v7 )
    {
      sub_A794E0((__int64 *)(*(_QWORD *)(a1 + 96) + 88LL), *(_QWORD *)(a1 + 96), a3, a4, a5, a6);
      v7 = *(_QWORD *)(a1 + 120);
    }
  }
  else
  {
    if ( v6 != 19 )
      return a1;
    v7 = *(_QWORD *)(a1 + 104);
    if ( !v7 )
    {
      sub_A79820((__int64 *)(*(_QWORD *)(a1 + 96) + 88LL), *(_QWORD *)(a1 + 96), a3, a4, a5, a6);
      v7 = *(_QWORD *)(a1 + 104);
    }
  }
  v8 = v7 & 0xFFFFFFFFFFFFFFF8LL;
  if ( !v8 )
    return a1;
  return *(_QWORD *)v8;
}
