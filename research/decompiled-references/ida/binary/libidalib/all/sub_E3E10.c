unsigned __int64 __fastcall sub_E3E10(unsigned __int8 a1, double a2, double a3, __m128 a4)
{
  int v4; // edx
  int v5; // r13d
  __int64 v7; // [rsp+0h] [rbp-68h] BYREF
  __int64 v8; // [rsp+8h] [rbp-60h]
  int v9; // [rsp+10h] [rbp-58h]
  int v10; // [rsp+18h] [rbp-50h]
  unsigned __int64 v11; // [rsp+38h] [rbp-30h]

  v11 = __readfsqword(0x28u);
  if ( !byte_252750 )
  {
    v4 = *(unsigned __int16 *)(dbg + 82LL);
    if ( !_bittest(&v4, a1 + 3)
      || (v7 = 0,
          v9 = dword_252588,
          v8 = 1018,
          v10 = a1 + 4,
          v5 = sub_CA2A0((unsigned __int64 *)&qword_252410, (__int64)&v7),
          sub_C9E30((__int64)&v7),
          v5 <= 0) )
    {
      if ( (int)sub_E39E0(dword_252588, a1, a2, a3, a4) <= 0 )
      {
        v7 = 0;
        v9 = dword_252588;
        if ( a1 )
        {
          v8 = 1020;
        }
        else
        {
          v8 = 1018;
          v10 = 1;
        }
        sub_CA2A0((unsigned __int64 *)&qword_252410, (__int64)&v7);
        sub_C9E30((__int64)&v7);
      }
    }
  }
  return v11 - __readfsqword(0x28u);
}

