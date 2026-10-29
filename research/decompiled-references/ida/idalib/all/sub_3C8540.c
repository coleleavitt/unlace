unsigned __int64 __fastcall sub_3C8540(__int64 *a1, __int64 a2, int a3, __int64 *a4, int a5)
{
  __int64 v6; // r13
  unsigned __int64 v9; // rax
  __int64 v10; // rsi
  __int64 *v11; // r13
  __int64 v12; // rdx
  unsigned __int64 v14; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v15; // [rsp+8h] [rbp-30h]

  v6 = a5;
  v15 = __readfsqword(0x28u);
  v9 = -1;
  if ( a2 != -1 )
    v9 = sub_3B9DC0(a1, a2);
  v10 = *a1;
  v14 = v9;
  sub_7BE850(&v14, v10, a3, 83);
  if ( (int)v6 > 0 )
  {
    v11 = &a4[v6];
    do
    {
      v12 = *a4++;
      sub_411F00(a1, a2, v12);
    }
    while ( a4 != v11 );
  }
  return v15 - __readfsqword(0x28u);
}
