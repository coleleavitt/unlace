unsigned __int64 __fastcall sub_7A5860(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rax
  __int16 v7; // ax
  char v9; // al
  __int64 v10; // [rsp+10h] [rbp-28h] BYREF
  __int64 v11; // [rsp+18h] [rbp-20h]
  unsigned __int64 v12; // [rsp+28h] [rbp-10h]

  v12 = __readfsqword(0x28u);
  if ( (_BYTE)a3 )
    sub_7A5550(a1, a2, a3, a4, a5, a6);
  v10 = 1;
  v6 = *(_QWORD *)(a1 + 560);
  v11 = 0;
  v7 = *(_WORD *)(v6 + 24);
  switch ( v7 )
  {
    case '-':
      sub_7A5860(a1, &v10, 1);
      *(_QWORD *)(a2 + 8) = -v11;
      v9 = v10;
      goto LABEL_10;
    case '+':
      sub_7A5860(a1, &v10, 1);
      *(_QWORD *)(a2 + 8) = v11;
      v9 = v10;
      goto LABEL_10;
    case '!':
      sub_7A5860(a1, &v10, 1);
      *(_QWORD *)(a2 + 8) = v11 == 0;
      v9 = v10;
      goto LABEL_10;
    case '~':
      sub_7A5860(a1, &v10, 1);
      *(_QWORD *)(a2 + 8) = ~v11;
      v9 = v10;
LABEL_10:
      *(_BYTE *)a2 = v9;
      return v12 - __readfsqword(0x28u);
  }
  sub_7A56C0(a1, a2, a3, a4, a5, a6);
  return v12 - __readfsqword(0x28u);
}
