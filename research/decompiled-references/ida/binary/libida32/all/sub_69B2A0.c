unsigned __int64 __fastcall sub_69B2A0(__int64 *a1, int a2, unsigned int a3, char a4)
{
  int v6; // eax
  __int64 v7; // rsi
  char v9; // [rsp+3h] [rbp-25h] BYREF
  int v10; // [rsp+4h] [rbp-24h] BYREF
  unsigned __int64 v11; // [rsp+8h] [rbp-20h]

  v11 = __readfsqword(0x28u);
  v6 = sub_3B90A0(a1, a2);
  v7 = *a1;
  v10 = v6;
  if ( a4 )
  {
    v9 = 1;
    sub_79B440(&v10, v7, a3, &v9, 1, 65);
  }
  else
  {
    sub_79B4D0(&v10, v7, a3, 4161);
  }
  return v11 - __readfsqword(0x28u);
}

