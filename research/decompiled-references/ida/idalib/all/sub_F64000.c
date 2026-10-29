void __fastcall sub_F64000(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rax
  __int64 v7; // rbp
  char v8; // dl
  int v9; // ecx
  char v10; // al

  if ( (*(_BYTE *)(a1 + 17) & 0x20) == 0 )
  {
    v6 = *(_QWORD *)(a1 + 8);
    if ( v6 == (a1 & 0xFFFFFFFFFFFFFFF0LL) )
    {
      sub_F63CC0(a1, a2, a1 & 0xFFFFFFFFFFFFFFF0LL, a4, a5, a6);
    }
    else
    {
      v7 = *(_QWORD *)(v6 & 0xFFFFFFFFFFFFFFF0LL);
      sub_F64000(v7);
      v8 = *(_BYTE *)(a1 + 17) | 0x20;
      *(_BYTE *)(a1 + 17) = v8;
      v9 = (*(_DWORD *)(v7 + 16) >> 14) & 7;
      *(_BYTE *)(a1 + 17) = ((_BYTE)v9 << 6) | v8 & 0x3F;
      v10 = ((unsigned __int8)v9 >> 2) | *(_BYTE *)(a1 + 18) & 0xFE;
      *(_BYTE *)(a1 + 18) = v10;
      *(_BYTE *)(a1 + 18) = *(_BYTE *)(v7 + 18) & 2 | v10 & 0xFD;
    }
  }
}
