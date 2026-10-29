unsigned __int64 __fastcall sub_1740220(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _WORD **a5,
        unsigned __int64 a6,
        __int64 a7,
        unsigned int a8,
        unsigned __int8 a9)
{
  __int64 v9; // r15
  __int64 v11; // rsi
  __int64 v12; // rsi
  __int64 v13; // rax

  if ( !a1[1] || (*(_BYTE *)(a2 + 28) & 0x7F) != 0x26 )
    return 0;
  v9 = *a1;
  v11 = *(_QWORD *)(sub_B8C1B0(a2 + 72) + 16);
  v12 = (v11 & 4) != 0 ? *(_QWORD *)(v11 & 0xFFFFFFFFFFFFFFF8LL) : v11 & 0xFFFFFFFFFFFFFFF8LL;
  if ( v12 )
    v12 -= 64;
  v13 = sub_183C640(v9, v12, a3, a4, a7);
  if ( v13 )
    return sub_173F990(a1, *(_QWORD *)(v13 + 48), *(_DWORD *)(v13 + 24), a5, a6, a8, a9);
  else
    return 0;
}
