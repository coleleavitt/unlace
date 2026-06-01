unsigned __int64 __fastcall sub_BFD410(unsigned __int64 a1)
{
  unsigned __int64 v1; // rax
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rdx
  unsigned __int64 v6; // rsi
  __int64 v7; // rax

  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 47 )
    return *(_QWORD *)(a1 + 8);
  v1 = sub_BFBAE0(a1);
  if ( (*(_WORD *)v1 & 0x1FF) != 0x47 )
    return v3;
  v5 = *(_QWORD *)(v1 + 16);
  if ( (*(_BYTE *)(v5 + 28) & 0x7F) != 0x21 )
    return v3;
  v6 = *(_QWORD *)(v5 + 16) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(v5 + 16) & 4) != 0 )
    v6 = *(_QWORD *)v6;
  if ( !v6 )
    BUG();
  if ( (*(_BYTE *)(v6 + 10) & 1) == 0 )
    return v3;
  v7 = *(_QWORD *)(v6 - 16);
  if ( v7 )
    return v7 & 0xFFFFFFFFFFFFFFF0LL;
  else
    return sub_A7AA70(v4, v6 - 64, v5, v2, v3, v4);
}
