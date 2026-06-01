unsigned __int64 __fastcall sub_80FA10(unsigned __int64 a1)
{
  unsigned __int64 v1; // rax
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // rdx
  unsigned __int64 v5; // rsi
  __int64 v6; // rcx

  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 46 )
    return *(_QWORD *)(a1 + 8);
  v1 = sub_80F310(a1);
  if ( (*(_WORD *)v1 & 0x1FF) == 0x48 )
  {
    v4 = *(_QWORD *)(v1 + 16);
    if ( (*(_BYTE *)(v4 + 28) & 0x7F) == 0x1F )
    {
      v5 = *(_QWORD *)(v4 + 16) & 0xFFFFFFFFFFFFFFF8LL;
      if ( (*(_QWORD *)(v4 + 16) & 4) != 0 )
        v5 = *(_QWORD *)v5;
      if ( !v5 )
        BUG();
      if ( (*(_BYTE *)(v5 + 10) & 1) != 0 )
      {
        v6 = *(_QWORD *)(v5 - 16);
        if ( v6 )
          return v6 & 0xFFFFFFFFFFFFFFF0LL;
        else
          return sub_6E8D60(v3, v5 - 64);
      }
    }
  }
  return v2;
}

