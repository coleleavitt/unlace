__int64 __fastcall sub_261100(__int64 a1, __int64 a2, __int64 a3, signed int a4)
{
  const char *v6; // rsi
  __int64 v7; // rbp
  const char *v9; // [rsp+0h] [rbp-38h] BYREF
  __int128 v10; // [rsp+8h] [rbp-30h]
  unsigned __int64 v11; // [rsp+18h] [rbp-20h]

  v11 = __readfsqword(0x28u);
  v9 = nullptr;
  v10 = 0;
  sub_260DA0((__int64 *)&v9, a1, a4, 0.0);
  v6 = s1;
  if ( (_QWORD)v10 )
    v6 = v9;
  v7 = qstpncpy(a2, v6, a3) - a2;
  if ( v9 )
  {
    *(_QWORD *)&v10 = 0;
    qfree(v9);
  }
  return v7;
}
