__int64 __fastcall sub_7B6A90(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  unsigned __int64 v4; // rdx
  char v5; // al
  unsigned __int64 v6; // rbp
  __int64 v7; // rax

  v4 = *(_QWORD *)(a1 + 16) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(a1 + 16) & 4) != 0 )
    v4 = *(_QWORD *)v4;
  v5 = *(_BYTE *)(v4 + 8) & 0x7F;
  if ( v5 == 17 || (a4 = 0, v5 == 18) )
  {
    v6 = *(_QWORD *)(v4 - 8) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_QWORD *)(v4 - 8) & 7) != 0 )
      v6 = 0;
    v7 = *(_QWORD *)(a2 + 1480);
    if ( !v7 )
    {
      v7 = sub_600210(*(_QWORD *)(a2 + 17344), "NSObject", 8u);
      *(_QWORD *)(a2 + 1480) = v7;
    }
    LOBYTE(a4) = v6 == v7;
  }
  return a4;
}

