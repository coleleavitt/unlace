unsigned __int64 __fastcall del_wide_value(int a1)
{
  int v1; // ebx
  _QWORD *v2; // rbp
  __int64 v3; // rsi
  int v5; // [rsp+4h] [rbp-24h] BYREF
  unsigned __int64 v6; // [rsp+8h] [rbp-20h]

  v6 = __readfsqword(0x28u);
  v1 = a1;
  v2 = *(_QWORD **)(qword_2CA1698 + 1480);
  if ( a1 != -1 )
    v1 = sub_614FB0(*v2, 29) + a1;
  v3 = *v2;
  v5 = v1;
  sub_79B4D0(&v5, v3, 0xFFFFFFFFLL, 65);
  return v6 - __readfsqword(0x28u);
}

