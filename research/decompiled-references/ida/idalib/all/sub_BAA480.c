bool __fastcall sub_BAA480(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rdx
  bool result; // al
  char v4; // cl
  unsigned __int64 v5; // rbp
  __int64 v6; // rax

  v2 = *(_QWORD *)(a1 + 16) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(a1 + 16) & 4) != 0 )
    v2 = *(_QWORD *)v2;
  result = 0;
  v4 = *(_BYTE *)(v2 + 8) & 0x7F;
  if ( (v4 == 19 || v4 == 20) && v2 != 48 )
  {
    v5 = *(_QWORD *)(v2 - 8) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_QWORD *)(v2 - 8) & 7) != 0 )
      v5 = 0;
    v6 = *(_QWORD *)(a2 + 1552);
    if ( !v6 )
    {
      v6 = sub_6F3470(*(_QWORD *)(a2 + 17504), "NSObject", 8u);
      *(_QWORD *)(a2 + 1552) = v6;
    }
    return v6 == v5;
  }
  return result;
}
