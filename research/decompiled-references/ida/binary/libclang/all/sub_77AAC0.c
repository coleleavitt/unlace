__int64 __fastcall sub_77AAC0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // rdi
  char v7; // al
  unsigned int v8; // ebp
  unsigned __int8 v10; // dl
  __int64 v11; // rax

  v4 = a1;
  v5 = *(_QWORD *)(a1 + 16);
  v6 = v5 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (v5 & 4) != 0 )
    v6 = *(_QWORD *)v6;
  v7 = *(_BYTE *)(v6 + 8) & 0x7F;
  if ( v7 == 60 )
    v7 = *(_BYTE *)(sub_79C2A0(v6, a2, a3, a4) + 8) & 0x7F;
  v8 = 0;
  if ( ((v7 + 72) & 0x7Fu) > 3 )
    return v8;
  v10 = *(_BYTE *)(v4 + 28) & 0x7F;
  if ( (unsigned int)v10 - 51 <= 1 )
  {
    v4 = *(_QWORD *)(v4 + 64);
    v10 = *(_BYTE *)(v4 + 28) & 0x7F;
  }
  LOBYTE(v8) = v10 == 30 || ((v10 + 82) & 0x7Fu) <= 3;
  if ( (_BYTE)v8 )
    return v8;
  v11 = sub_7984D0(v4);
  if ( !v11 || (*(_BYTE *)(v11 + 28) & 0x7Fu) - 33 > 3 )
    return v8;
  else
    return (unsigned int)sub_7A4F00(v11) ^ 1;
}

