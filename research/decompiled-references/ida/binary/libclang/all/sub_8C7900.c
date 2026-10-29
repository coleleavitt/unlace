unsigned __int64 __fastcall sub_8C7900(_QWORD *a1, int a2, unsigned __int8 a3)
{
  int v4; // ecx
  __int64 v5; // rsi
  __int64 v6; // rax
  unsigned __int64 v7; // rbx
  __int64 v9; // rax
  int v10; // [rsp+Ch] [rbp-1Ch]

  v4 = a2;
  v5 = 8 * ((unsigned int)a3 + a2 + 2) + 24LL;
  v6 = a1[274];
  a1[284] += v5;
  v7 = (v6 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a1[275] >= v5 + v7 && v6 )
  {
    a1[274] = v5 + v7;
  }
  else
  {
    v10 = v4;
    v9 = sub_8C1090((__int64)(a1 + 274), v5, 3);
    v4 = v10;
    v7 = v9;
  }
  sub_80B210(v7, 0x5Eu, 1, v4, a3);
  return v7;
}

