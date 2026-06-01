_BYTE *__fastcall sub_839CE0(_BYTE *a1, unsigned __int64 a2, unsigned __int64 a3)
{
  __int128 v5; // rax
  _BYTE *v6; // r11
  __int128 v7; // rax
  _BYTE *v8; // r11
  unsigned __int64 v9; // rax
  __int64 v10; // r11
  _BYTE *v11; // rax
  char v12; // [rsp+5h] [rbp-13h] BYREF
  char v13; // [rsp+6h] [rbp-12h] BYREF
  char v14; // [rsp+7h] [rbp-11h] BYREF
  unsigned __int64 v15; // [rsp+8h] [rbp-10h]

  v15 = __readfsqword(0x28u);
  if ( a3 | a2 )
  {
    *(_QWORD *)&v5 = sub_839860(&v12, a2, a3, 8u);
    if ( v5 != 0 )
    {
      *(_QWORD *)&v7 = sub_839860(&v13, v5, *((unsigned __int64 *)&v5 + 1), 8u);
      if ( v7 != 0 )
      {
        v9 = sub_839860(&v14, v7, *((unsigned __int64 *)&v7 + 1), 8u);
        v11 = (_BYTE *)sub_839CE0(v10, v9);
        v8 = v11 + 1;
        *v11 = v14 + 48;
      }
      v6 = v8 + 1;
      *(v6 - 1) = v13 + 48;
    }
    a1 = v6 + 1;
    *(a1 - 1) = v12 + 48;
  }
  return a1;
}
