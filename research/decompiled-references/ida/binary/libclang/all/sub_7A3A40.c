__int64 __fastcall sub_7A3A40(__int64 a1)
{
  __int64 v1; // rax
  __int64 v3; // rax
  __int64 v4; // rdi

  v1 = *(_QWORD *)(a1 + 128);
  if ( !v1 || (*(_BYTE *)(v1 + 10) & 0x20) == 0 )
    BUG();
  v3 = sub_7A2060(a1);
  if ( (*(_BYTE *)(v3 + 28) & 0x7F) == 0x45 )
    v3 = *(_QWORD *)(v3 + 48);
  v4 = *(_QWORD *)(*(_QWORD *)(v3 + 48) & 0xFFFFFFFFFFFFFFF0LL);
  if ( (unsigned int)*(unsigned __int8 *)(v4 + 16) - 25 > 1 )
    v4 = sub_B0D320(v4);
  return sub_7A3790(a1, (*(_WORD *)(v4 + 18) >> 3) & 0x1F);
}

