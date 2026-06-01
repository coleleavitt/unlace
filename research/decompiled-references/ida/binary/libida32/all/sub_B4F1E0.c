__int64 __fastcall sub_B4F1E0(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // rax
  unsigned __int64 v3; // rdi
  char v4; // al
  unsigned int v5; // ebx
  unsigned __int8 v7; // al
  __int64 v8; // rax

  v1 = a1;
  v2 = *(_QWORD *)(a1 + 16);
  v3 = v2 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (v2 & 4) != 0 )
    v3 = *(_QWORD *)v3;
  v4 = *(_BYTE *)(v3 + 8) & 0x7F;
  if ( v4 == 62 )
    v4 = *(_BYTE *)(sub_B6AD60(v3) + 8) & 0x7F;
  v5 = 0;
  if ( ((v4 + 70) & 0x7Fu) > 3 )
    return v5;
  v7 = *(_BYTE *)(v1 + 28) & 0x7F;
  if ( (unsigned int)v7 - 53 <= 1 )
  {
    v1 = *(_QWORD *)(v1 + 64);
    v7 = *(_BYTE *)(v1 + 28) & 0x7F;
  }
  LOBYTE(v5) = v7 == 32 || ((v7 + 80) & 0x7Fu) <= 3;
  if ( (_BYTE)v5 )
    return v5;
  v8 = sub_B681F0(v1);
  if ( !v8 || (*(_BYTE *)(v8 + 28) & 0x7Fu) - 35 > 3 )
    return v5;
  else
    return (unsigned int)sub_B73CB0(v8) ^ 1;
}

