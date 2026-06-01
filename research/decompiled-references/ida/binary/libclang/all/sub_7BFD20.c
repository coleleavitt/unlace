void __fastcall sub_7BFD20(unsigned __int64 a1, __int64 a2)
{
  char v3; // dl
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  _QWORD *v6; // rdi
  unsigned __int64 v7; // rdi
  unsigned __int8 v8; // al
  __int64 v9; // rdi
  __int64 v10; // r12
  unsigned __int64 v11; // rsi

  v3 = *(_BYTE *)(a1 + 58);
  v4 = a1;
  if ( (v3 & 0x40) != 0 )
  {
    v5 = *(_QWORD *)(a1 + 16);
    v6 = (_QWORD *)(v5 & 0xFFFFFFFFFFFFFFF8LL);
    if ( (v5 & 4) != 0 )
      v6 = (_QWORD *)*v6;
    if ( v6 )
      v6 -= 6;
    v4 = sub_7BDA60((__int64)v6, *(_QWORD *)(v4 + 40), (v3 & 2) != 0, 1);
  }
  if ( (*(_BYTE *)(v4 + 60) & 0x10) != 0 )
  {
    v7 = *(_QWORD *)(v4 + 16) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_QWORD *)(v4 + 16) & 4) != 0 )
    {
      v7 = *(_QWORD *)v7;
      v8 = *(_BYTE *)(v7 + 8) & 0x7F;
      if ( v8 == 17 )
        goto LABEL_11;
    }
    else
    {
      v8 = *(_BYTE *)(v7 + 8) & 0x7F;
      if ( v8 == 17 )
      {
LABEL_11:
        v9 = v7 - 48;
        goto LABEL_12;
      }
    }
    if ( (unsigned int)v8 - 19 <= 1 || v8 == 21 )
    {
      v10 = *(_QWORD *)(v7 + 40);
      if ( v10 )
      {
        v11 = sub_7BDA60(*(_QWORD *)(v7 + 40), *(_QWORD *)(v4 + 40), (*(_BYTE *)(v4 + 58) & 2) != 0, 1);
        if ( !v11 )
          v11 = v4;
        sub_7BF8C0(v10, v11, a2, 0);
      }
      return;
    }
    v9 = v7 - 48;
    if ( (unsigned int)v8 - 17 >= 5 )
      v9 = 0;
LABEL_12:
    sub_7BF8C0(v9, v4, a2, 0);
  }
}

