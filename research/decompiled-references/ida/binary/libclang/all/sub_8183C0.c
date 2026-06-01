__int64 __fastcall sub_8183C0(unsigned __int64 a1)
{
  unsigned __int64 v1; // rax
  unsigned int v2; // ecx
  __int64 v3; // rdx
  unsigned __int64 v4; // rsi

  v1 = sub_80F310(a1);
  if ( (*(_WORD *)v1 & 0x1FF) == 0x48 )
  {
    v3 = *(_QWORD *)(v1 + 16);
    if ( (*(_BYTE *)(v3 + 28) & 0x7F) == 0x2B )
    {
      v4 = *(_QWORD *)(v3 + 16) & 0xFFFFFFFFFFFFFFF8LL;
      if ( (*(_QWORD *)(v3 + 16) & 4) != 0 )
      {
        v4 = *(_QWORD *)v4;
        v2 = 0;
        if ( (*(_BYTE *)(v4 + 8) & 0x7F) != 0x10 )
          return v2;
        goto LABEL_5;
      }
      v2 = 0;
      if ( (*(_BYTE *)(v4 + 8) & 0x7F) == 0x10 )
LABEL_5:
        LOBYTE(v2) = *(_QWORD *)(v4 + 72) == v3;
    }
  }
  return v2;
}

