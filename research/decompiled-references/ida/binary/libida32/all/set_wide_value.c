unsigned __int64 __fastcall set_wide_value(int a1, __int64 a2)
{
  int v2; // ebx
  _QWORD *v3; // rbp
  __int64 v4; // rsi
  int v6; // [rsp+Ch] [rbp-2Ch] BYREF
  __int64 v7; // [rsp+10h] [rbp-28h] BYREF
  unsigned __int64 v8; // [rsp+18h] [rbp-20h]

  v8 = __readfsqword(0x28u);
  v2 = a1;
  v7 = a2 + 1;
  v3 = *(_QWORD **)(qword_2CA1698 + 1480);
  if ( a1 != -1 )
    v2 = sub_614FB0(*v3, 29) + a1;
  v4 = *v3;
  v6 = v2;
  sub_79B440(&v6, v4, 0xFFFFFFFFLL, &v7, 8, 65);
  return v8 - __readfsqword(0x28u);
}

