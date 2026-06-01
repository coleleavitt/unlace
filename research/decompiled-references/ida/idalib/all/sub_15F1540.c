unsigned __int64 __fastcall sub_15F1540(__int64 a1, char a2)
{
  __int64 v2; // rbp
  unsigned __int64 v3; // rbx
  unsigned __int64 v4; // rax
  __int64 v6; // rbx
  __int64 v7; // rax
  unsigned __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rdi
  unsigned __int64 v11; // rdi

  v2 = 0x4000000000000184LL;
  v3 = *(_QWORD *)(a1 + 544);
  while ( 1 )
  {
    v4 = *(_BYTE *)(v3 + 8) & 0x7F;
    if ( (unsigned __int8)v4 > 0x3Eu )
      return v3;
    if ( _bittest64(&v2, v4) )
    {
      v6 = *(_QWORD *)(sub_B8C1B0(v3) + 16);
      if ( (v6 & 4) == 0 )
        goto LABEL_6;
LABEL_18:
      v3 = *(_QWORD *)(v6 & 0xFFFFFFFFFFFFFFF8LL);
    }
    else
    {
      if ( a2 || (unsigned int)(unsigned __int8)v4 - 35 > 3 || (unsigned int)sub_B77890(v3 - 72) != 42 )
        return v3;
      v7 = *(_QWORD *)(sub_B8C1B0(v3) + 16);
      if ( (v7 & 4) != 0 )
        v8 = *(_QWORD *)(v7 & 0xFFFFFFFFFFFFFFF8LL);
      else
        v8 = v7 & 0xFFFFFFFFFFFFFFF8LL;
      if ( !v8 )
        BUG();
      v9 = *(_QWORD *)(v8 + 64);
      if ( !v9 || (*(_BYTE *)(v9 + 10) & 0x20) == 0 )
        return v3;
      v10 = *(_QWORD *)(sub_B8C1B0(v3) + 16);
      if ( (v10 & 4) != 0 )
        v11 = *(_QWORD *)(v10 & 0xFFFFFFFFFFFFFFF8LL);
      else
        v11 = v10 & 0xFFFFFFFFFFFFFFF8LL;
      v6 = *(_QWORD *)(sub_B8C1B0(v11) + 16);
      if ( (v6 & 4) != 0 )
        goto LABEL_18;
LABEL_6:
      v3 = v6 & 0xFFFFFFFFFFFFFFF8LL;
    }
  }
}
