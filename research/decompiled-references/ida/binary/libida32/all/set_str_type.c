unsigned __int64 __fastcall set_str_type(int a1, int a2)
{
  int v2; // ebx
  _QWORD *v3; // rbp
  __int64 v4; // rsi
  int v6; // [rsp+0h] [rbp-28h] BYREF
  int v7; // [rsp+4h] [rbp-24h] BYREF
  unsigned __int64 v8; // [rsp+8h] [rbp-20h]

  v8 = __readfsqword(0x28u);
  v2 = a1;
  v6 = a2 + 1;
  v3 = *(_QWORD **)(qword_2CA1698 + 1480);
  if ( a1 != -1 )
    v2 = sub_614FB0(*v3, 29) + a1;
  v4 = *v3;
  v7 = v2;
  sub_79B440(&v7, v4, 16, &v6, 4, 65);
  return v8 - __readfsqword(0x28u);
}

