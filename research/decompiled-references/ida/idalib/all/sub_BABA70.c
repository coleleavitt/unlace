void __fastcall sub_BABA70(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rbx
  __int64 v7; // rax
  _QWORD *v8; // rdi
  unsigned __int64 v9; // rax
  unsigned __int8 v10; // dl
  __int64 v11; // rdi
  __int64 v12; // r12
  unsigned __int64 v13; // rax
  __int64 v14; // r8
  __int64 v15; // r9

  v6 = a1;
  if ( (*(_BYTE *)(a1 + 58) & 0x40) != 0 )
  {
    v7 = *(_QWORD *)(a1 + 16);
    v8 = (_QWORD *)(v7 & 0xFFFFFFFFFFFFFFF8LL);
    if ( (v7 & 4) != 0 )
      v8 = (_QWORD *)*v8;
    if ( v8 )
      v8 -= 6;
    v6 = sub_BAA9D0((__int64)v8, *(_QWORD *)(v6 + 40), (*(_BYTE *)(v6 + 58) & 2) != 0, 1, a5, a6);
  }
  if ( (*(_BYTE *)(v6 + 60) & 0x10) != 0 )
  {
    v9 = *(_QWORD *)(v6 + 16) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_QWORD *)(v6 + 16) & 4) != 0 )
    {
      v9 = *(_QWORD *)v9;
      v10 = *(_BYTE *)(v9 + 8) & 0x7F;
      if ( v10 == 19 )
        goto LABEL_11;
    }
    else
    {
      v10 = *(_BYTE *)(v9 + 8) & 0x7F;
      if ( v10 == 19 )
      {
LABEL_11:
        v11 = v9 - 48;
        goto LABEL_12;
      }
    }
    if ( (unsigned int)v10 - 21 <= 1 || v10 == 23 )
    {
      v11 = v9 - 48;
      if ( v9 != 48 )
      {
        v12 = *(_QWORD *)(v9 + 40);
        if ( v12 )
        {
          v13 = sub_BAA9D0(*(_QWORD *)(v9 + 40), *(_QWORD *)(v6 + 40), (*(_BYTE *)(v6 + 58) & 2) != 0, 1, a5, a6);
          if ( !v13 )
            v13 = v6;
          sub_BAB7D0(v12, v13, a2, 0, v14, v15);
        }
        return;
      }
    }
    else if ( (unsigned int)v10 - 19 <= 4 )
    {
      v11 = v9 - 48;
    }
    else
    {
      v11 = 0;
    }
LABEL_12:
    sub_BAB7D0(v11, v6, a2, 0, a5, a6);
  }
}
