__int64 __fastcall sub_3F75A0(_QWORD *a1, __int64 a2, char a3, unsigned __int64 a4, __int64 a5, __int64 a6)
{
  _QWORD *v11; // rdi
  unsigned __int64 v13; // rax
  __int64 v15; // rsi
  __int64 v16; // rsi
  _QWORD v17[9]; // [rsp+0h] [rbp-48h] BYREF

  v11 = (_QWORD *)a1[8];
  v17[1] = __readfsqword(0x28u);
  v13 = sub_3BDE50(v11, a2);
  if ( v13 < a1[9] || v13 >= a1[10] || a4 > 1 || a3 != 65 || a6 != 1 )
    return 0;
  if ( a2 != a1[4] )
  {
    v15 = a1[3];
    v17[0] = a2;
    if ( sub_7BF130(v17, v15, a1 + 5) <= 0 )
      a1[6] = 0;
    a1[4] = a2;
  }
  if ( !(unsigned __int8)sub_6B9820(a1 + 5) )
    return 0;
  v16 = a1[3];
  v17[0] = a2;
  sub_7BE7C0(v17, v16, a4, a5, 1, 65);
  return 1;
}
