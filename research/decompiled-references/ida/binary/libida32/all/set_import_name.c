unsigned __int64 __fastcall set_import_name(int a1, unsigned int a2, __int64 a3)
{
  __int64 v4; // r12
  int v6; // [rsp+4h] [rbp-24h] BYREF
  unsigned __int64 v7; // [rsp+8h] [rbp-20h]

  v7 = __readfsqword(0x28u);
  v6 = a1;
  v4 = qword_2CA1698;
  sub_606C20((_QWORD *)(*(_QWORD *)(qword_2CA1698 + 1480) + 2248LL), a2);
  if ( a3 )
    sub_79B440(&v6, v4, a2, a3, 0, 339);
  else
    sub_79B4D0(&v6, v4, a2, 339);
  return v7 - __readfsqword(0x28u);
}

