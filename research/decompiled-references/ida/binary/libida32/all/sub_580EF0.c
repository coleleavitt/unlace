__int64 __fastcall sub_580EF0(_QWORD *a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebp
  int v5; // eax
  __int64 v6; // r13
  int v7; // eax
  _QWORD *v9; // r15
  __int64 v10; // r14
  char v11; // al
  __int64 v12; // rsi
  __int64 v13; // rbx
  __int64 v14[9]; // [rsp+10h] [rbp-48h] BYREF

  v3 = a2;
  v14[1] = __readfsqword(0x28u);
  v5 = sub_3B8DF0((__int64)a1, a2);
  if ( (unsigned __int64)v5 <= 0x3F )
    a3 &= ~(-1LL << v5);
  if ( (unsigned __int8)sub_3BB2F0((__int64)a1, a2) )
  {
    sub_3BA160(a1, v14, a2);
    v6 = v14[0];
    if ( a3 == v14[0] )
      return 0;
  }
  else
  {
    v6 = -1;
  }
  v7 = sub_3C9340(*(_QWORD *)(*a1 + 1480LL), (unsigned int)a2, a3, 3);
  if ( !v7 )
    return 0;
  if ( (v7 & 1) != 0 )
  {
    v9 = a1 + 289;
    v10 = (unsigned int)sub_3B90A0(a1, a2);
    v11 = sub_79B3A0(a1 + 289, *a1, v10, 4176);
    v12 = *a1;
    if ( v11 )
    {
      if ( (unsigned int)sub_79B3A0(a1 + 289, v12, (unsigned int)v10, 65) == a3 )
      {
        v13 = *a1;
        sub_79B4D0(v9, *a1, (unsigned int)v10, 4176);
        sub_79B4D0(v9, v13, (unsigned int)v10, 65);
      }
    }
    else
    {
      LOBYTE(v14[0]) = 1;
      sub_79B440(v9, v12, (unsigned int)v10, v14, 1, 80);
      LODWORD(v14[0]) = v6;
      sub_79B440(v9, v12, (unsigned int)v10, v14, 4, 65);
    }
  }
  sub_396090(0x35u, v3, v6);
  return 1;
}

