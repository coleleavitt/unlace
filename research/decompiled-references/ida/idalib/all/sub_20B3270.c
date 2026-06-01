void __fastcall sub_20B3270(__int64 a1)
{
  unsigned __int8 v2; // dl
  int v3; // eax
  __int64 v4; // rbx
  __int64 v5; // rbp
  _QWORD *v6; // r11
  _QWORD *v7; // rsi
  _QWORD *v8; // r11
  __int64 v9; // rdi
  _DWORD *v10; // rbx
  __int64 v11; // rdi
  __int64 v12; // rdi

  v2 = *(_BYTE *)(a1 - 16);
  if ( (v2 & 2) != 0 )
    v3 = *(_DWORD *)(a1 - 24);
  else
    v3 = (*(_WORD *)(a1 - 16) >> 6) & 0xF;
  if ( v3 )
  {
    v4 = 0;
    v5 = 8LL * (unsigned int)(v3 - 1);
    while ( 1 )
    {
      if ( (v2 & 2) != 0 )
      {
        v6 = (_QWORD *)(v4 + *(_QWORD *)(a1 - 32));
        v7 = (_QWORD *)*v6;
        if ( *v6 )
          goto LABEL_6;
      }
      else
      {
        v6 = (_QWORD *)(v4 + a1 + -16 - 8LL * ((v2 >> 2) & 0xF));
        v7 = (_QWORD *)*v6;
        if ( *v6 )
        {
LABEL_6:
          sub_20A0850((__int64)v6, v7);
          *v8 = 0;
          if ( v4 == v5 )
            break;
          v2 = *(_BYTE *)(a1 - 16);
          goto LABEL_8;
        }
      }
      if ( v4 == v5 )
        break;
LABEL_8:
      v4 += 8;
    }
  }
  v9 = *(_QWORD *)(a1 + 8);
  if ( (v9 & 4) != 0 )
  {
    v10 = (_DWORD *)(v9 & 0xFFFFFFFFFFFFFFF8LL);
    v11 = (__int64)(v10 + 4);
    if ( v10[4] >> 1 )
    {
      sub_20A0EF0(v11);
      v12 = *(_QWORD *)(a1 + 8);
      if ( (v12 & 4) == 0 )
        BUG();
      v10 = (_DWORD *)(v12 & 0xFFFFFFFFFFFFFFF8LL);
      v11 = (v12 & 0xFFFFFFFFFFFFFFF8LL) + 16;
    }
    *(_QWORD *)(a1 + 8) = *(_QWORD *)v10 & 0xFFFFFFFFFFFFFFFBLL;
    sub_20A0EC0(v11);
    operator delete(v10, 0x78u);
  }
}
