void __fastcall sub_3BA50(int a1, __int64 *a2)
{
  const char *v3; // rsi
  __int64 v4; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v5; // [rsp+8h] [rbp-30h]
  unsigned __int64 v6; // [rsp+18h] [rbp-20h]

  v6 = __readfsqword(0x28u);
  if ( a1 )
  {
    if ( a1 == 1 )
    {
      v3 = (const char *)a2[2];
      sub_3B5B0((__int64)&v4, (__int64)v3);
      if ( v5 > 1 )
      {
        v3 = (const char *)&v4;
        sub_1E330(*(_QWORD *)(a2[2] + 48), &v4);
      }
      sub_3AD00(a2[2]);
      if ( v4 )
      {
        v5 = 0;
        qfree(v4, v3);
      }
    }
  }
  else if ( a2 )
  {
    operator delete(a2, 0x18u);
  }
}
