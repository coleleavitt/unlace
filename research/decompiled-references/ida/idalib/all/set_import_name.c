unsigned __int64 __fastcall set_import_name(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v4; // r12
  __int64 v6; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v7; // [rsp+8h] [rbp-20h]

  v7 = __readfsqword(0x28u);
  v6 = a1;
  v4 = qword_2CCB598;
  sub_622EE0((_QWORD *)(*(_QWORD *)(qword_2CCB598 + 1672) + 2336LL), a2);
  if ( a3 )
    sub_7BE7C0(&v6, v4, a2, a3, 0, 339);
  else
    sub_7BE850(&v6, v4, a2, 339);
  return v7 - __readfsqword(0x28u);
}
