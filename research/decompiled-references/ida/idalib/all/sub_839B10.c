_BYTE *__fastcall sub_839B10(_BYTE *a1, unsigned __int64 a2)
{
  char v4; // bl
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rsi
  char v8; // bl
  _BYTE *v9; // rdi
  unsigned __int64 v10; // rdx
  char v11; // r13
  char v12; // r12
  unsigned __int64 v13; // rbp
  _BYTE *v14; // rax

  if ( !a2 )
    return a1;
  v4 = a2;
  v5 = a2 / 0xA;
  v6 = 5 * (a2 / 0xA);
  v7 = a2 / 0xA;
  v8 = v4 - 2 * v6;
  if ( a2 > 9 )
  {
    v10 = v5 / 0xA;
    v11 = v10;
    v12 = v7 - 10 * v10;
    if ( a2 > 0x63 )
    {
      v13 = v10 / 0xA;
      v14 = (_BYTE *)sub_839B10(a1, v10 / 0xA);
      a1 = v14 + 1;
      *v14 = v11 - 10 * v13 + 48;
    }
    *a1++ = v12 + 48;
  }
  v9 = a1 + 1;
  *(v9 - 1) = v8 + 48;
  return v9;
}
