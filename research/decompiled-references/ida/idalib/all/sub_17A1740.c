void __fastcall sub_17A1740(__int64 a1, __int64 a2, __int64 a3, __int64 a4, double a5)
{
  __int64 v6; // rdi
  _WORD **v7; // rbx
  _WORD *v8; // rsi
  __int16 v9; // ax
  _WORD **v10; // rdx
  _DWORD v11[7]; // [rsp+Ch] [rbp-1Ch] BYREF

  v6 = *(_QWORD *)(a2 + 16);
  v11[0] = 0;
  if ( sub_B98FE0(v6, v11, a3, a4) )
  {
    v7 = (_WORD **)(a2 + 40);
    if ( (*(_WORD *)a2 & 0x1FF) == 0x72 )
      v7 = (_WORD **)(a2 + 48);
    v8 = *v7;
    v9 = **v7 & 0x1FF;
    if ( v9 == 53 )
    {
      v10 = *((_WORD ***)v8 + 2);
      if ( (unsigned int)((__int64)(*((_QWORD *)v8 + 3) - (_QWORD)v10) >> 3) != 1 )
      {
LABEL_6:
        sub_17A14E0(a1, (__int64)v8, a5);
        return;
      }
      v8 = *v10;
      v9 = **v10 & 0x1FF;
    }
    if ( v9 == 79 && ((v8[1] >> 3) & 0x7F) == 5 )
      v8 = *((_WORD **)v8 + 2);
    goto LABEL_6;
  }
  sub_17A13F0(a1, a2);
}
