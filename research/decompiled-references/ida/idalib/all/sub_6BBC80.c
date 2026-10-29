unsigned __int64 __fastcall sub_6BBC80(__int64 *a1, __int64 a2, __int64 a3, char a4)
{
  unsigned __int64 v6; // rax
  __int64 v7; // rsi
  char v9; // [rsp+Fh] [rbp-29h] BYREF
  unsigned __int64 v10; // [rsp+10h] [rbp-28h] BYREF
  unsigned __int64 v11; // [rsp+18h] [rbp-20h]

  v11 = __readfsqword(0x28u);
  v6 = sub_3BDD60(a1, a2);
  v7 = *a1;
  v10 = v6;
  if ( a4 )
  {
    v9 = 1;
    sub_7BE7C0(&v10, v7, a3, &v9, 1, 65);
  }
  else
  {
    sub_7BE850(&v10, v7, a3, 4161);
  }
  return v11 - __readfsqword(0x28u);
}
