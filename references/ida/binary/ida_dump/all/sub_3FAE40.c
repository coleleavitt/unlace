__int64 __fastcall sub_3FAE40(__int64 a1, int a2, char a3, double a4, __m128 a5)
{
  __int64 v6; // [rsp+0h] [rbp-28h] BYREF
  int v7; // [rsp+8h] [rbp-20h]
  unsigned int v8; // [rsp+Ch] [rbp-1Ch]
  char v9; // [rsp+10h] [rbp-18h]
  unsigned __int64 v10; // [rsp+18h] [rbp-10h]

  v10 = __readfsqword(0x28u);
  v6 = a1;
  v7 = a2;
  v8 = -1;
  v9 = 0;
  sub_3FA580((int *)&v6, 1, a3, a4);
  if ( !v9 && !(unsigned __int8)sub_3FACB0((__int64)&v6, a4, a5) )
    sub_3EB430(a4);
  return v8;
}
