unsigned __int64 __fastcall sub_4E2B40(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v3; // r15
  unsigned __int64 v4; // rax
  __int64 v5; // rax
  __int64 *v6; // r12
  unsigned int v7; // r14d
  __int64 v10; // [rsp+18h] [rbp-70h] BYREF
  __m128i v11; // [rsp+20h] [rbp-68h] BYREF
  char v12; // [rsp+38h] [rbp-50h]
  unsigned __int64 v13; // [rsp+48h] [rbp-40h]

  v3 = 8;
  v13 = __readfsqword(0x28u);
  v10 = ea2node(a2);
  while ( 1 )
  {
    v4 = sub_7BEBF0(&v10, a1, v3, 83);
    v3 = v4;
    if ( v4 > 0x24 )
      return v13 - __readfsqword(0x28u);
    if ( v4 - 27 <= 5 )
    {
      v3 = 32;
    }
    else if ( v4 - 15 <= 5 )
    {
      v3 = 20;
    }
    else
    {
      v5 = (unsigned int)(v4 - 9);
      if ( (unsigned int)v5 > 0x1B )
      {
        v6 = *(__int64 **)(a1 + 1672);
        v11.m128i_i64[1] = 0;
        if ( (unsigned __int8)sub_4E21C0(v6, &v11, a2, -1) && (v12 & 0x40) == 0 )
        {
          LOBYTE(v7) = -1;
LABEL_8:
          if ( (unsigned __int64)(v11.m128i_i64[1] - 1) <= 0xFFFFFFFFFFFFFFFDLL )
          {
            v11.m128i_i64[1] = *(_QWORD *)(v6[3] + 16) & (a3 + v11.m128i_i64[1]);
            sub_4E22A0(v6, a2, v7, (__int64)&v11);
          }
          goto LABEL_10;
        }
      }
      else
      {
        v6 = *(__int64 **)(a1 + 1672);
        v11.m128i_i64[1] = 0;
        v7 = dword_23AE060[v5];
        if ( (unsigned __int8)sub_4E21C0(v6, &v11, a2, v7) && (v12 & 0x40) == 0 )
          goto LABEL_8;
LABEL_10:
        if ( v3 == 36 )
          return v13 - __readfsqword(0x28u);
      }
    }
  }
}
