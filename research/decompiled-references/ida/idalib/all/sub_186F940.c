void __fastcall sub_186F940(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdi
  _WORD **v6; // rbx
  _WORD *v7; // rsi
  __int16 v8; // ax
  _WORD **v9; // rdx
  _DWORD v10[7]; // [rsp+Ch] [rbp-1Ch] BYREF

  v5 = *(_QWORD *)(a2 + 16);
  v10[0] = 0;
  if ( sub_B98FE0(v5, v10, a3, a4) )
  {
    v6 = (_WORD **)(a2 + 40);
    if ( (*(_WORD *)a2 & 0x1FF) == 0x72 )
      v6 = (_WORD **)(a2 + 48);
    v7 = *v6;
    v8 = **v6 & 0x1FF;
    if ( v8 == 53 )
    {
      v9 = *((_WORD ***)v7 + 2);
      if ( (unsigned int)((__int64)(*((_QWORD *)v7 + 3) - (_QWORD)v9) >> 3) != 1 )
      {
LABEL_6:
        sub_186F530(a1, (__int64)v7, 0);
        return;
      }
      v7 = *v9;
      v8 = **v9 & 0x1FF;
    }
    if ( v8 == 79 && ((v7[1] >> 3) & 0x7F) == 5 )
      v7 = *((_WORD **)v7 + 2);
    goto LABEL_6;
  }
  sub_186F790(a1, a2);
}
