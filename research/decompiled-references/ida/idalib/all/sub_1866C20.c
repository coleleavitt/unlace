void __fastcall sub_1866C20(__int64 a1, __int64 a2)
{
  char v2; // al
  unsigned __int64 v3; // rdx
  __int64 v4; // rdx
  __int64 v5; // rsi
  double v6[2]; // [rsp+0h] [rbp-28h] BYREF
  __int128 v7; // [rsp+10h] [rbp-18h] BYREF

  v2 = *(_BYTE *)(a2 + 83);
  if ( (v2 & 8) == 0 && ((*(_BYTE *)(a2 + 128) & 1) != 0 || *(_QWORD *)(a2 + 128)) || (v2 & 0x40) != 0 )
  {
    v3 = *(_QWORD *)(a2 + 56) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_QWORD *)(a2 + 56) & 4) != 0 )
    {
      v3 = *(_QWORD *)(v3 + 32);
      if ( !v3 )
        return;
    }
    else if ( !v3 )
    {
      return;
    }
    v4 = v3 + 8;
    *(_QWORD *)&v6[0] = a2;
    v5 = *(_QWORD *)(v4 - 8);
    *(_QWORD *)&v6[1] = a1;
    sub_1866A00(&v7, v5, v4, 0xFFFFFFFF, _mm_loadh_ps(v6));
  }
}
