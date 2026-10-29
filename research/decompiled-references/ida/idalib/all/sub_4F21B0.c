unsigned __int64 __fastcall sub_4F21B0(_QWORD *a1, unsigned __int8 a2, __int64 a3, __int64 a4)
{
  int v6; // r12d
  unsigned __int64 v8; // rax
  __int64 v9; // rsi
  unsigned __int64 v10; // r13
  __int64 v12; // [rsp+18h] [rbp-450h] BYREF
  _BYTE v13[1032]; // [rsp+20h] [rbp-448h] BYREF
  unsigned __int64 v14; // [rsp+428h] [rbp-40h]

  v6 = a2;
  v14 = __readfsqword(0x28u);
  v8 = sub_3BDD60(a1, a3);
  v9 = *a1;
  v10 = v8;
  v12 = 1;
  sub_7BE7C0(&a1[a2 + 327], v9, v8, &v12, 8, 65);
  if ( a4 )
    sub_7BE7C0(&a1[a2 + 327], *a1, v10, a4, 0, 83);
  if ( !*((_BYTE *)&off_2B2D4C0 + 24 * v6 + 16) )
  {
    sub_50C8D0(a1, v13, 1024, a3);
    if ( a2 != 8 )
      sub_368890();
    if ( (debug & 0x2000) != 0 )
      sub_3879F0();
  }
  return v14 - __readfsqword(0x28u);
}
