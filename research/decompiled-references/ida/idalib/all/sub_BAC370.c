_BOOL8 __fastcall sub_BAC370(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rdx
  _BOOL8 result; // rax
  unsigned __int64 v8; // rdx
  char v9; // al

  v6 = *(_QWORD *)(a1 + 120);
  if ( !v6 )
  {
    sub_A794E0((__int64 *)(*(_QWORD *)(a1 + 96) + 88LL), *(_QWORD *)(a1 + 96), 0, a4, a5, a6);
    v6 = *(_QWORD *)(a1 + 120);
  }
  result = 0;
  v8 = v6 & 0xFFFFFFFFFFFFFFF8LL;
  if ( v8 && a1 == *(_QWORD *)v8 )
  {
    v9 = *(_BYTE *)(v8 + 72);
    if ( (v9 & 1) != 0 )
    {
      sub_BA8900(a1);
      v9 = *(_BYTE *)((*(_QWORD *)(a1 + 120) & 0xFFFFFFFFFFFFFFF8LL) + 72);
    }
    return (v9 & 4) != 0;
  }
  return result;
}
