unsigned __int64 __fastcall sub_E3000(unsigned __int8 a1)
{
  int v1; // edx
  int v2; // r13d
  __int64 v4; // [rsp+0h] [rbp-68h] BYREF
  __int64 v5; // [rsp+8h] [rbp-60h]
  int v6; // [rsp+10h] [rbp-58h]
  int v7; // [rsp+18h] [rbp-50h]
  unsigned __int64 v8; // [rsp+38h] [rbp-30h]

  v8 = __readfsqword(0x28u);
  if ( !byte_2515A8 )
  {
    v1 = *(unsigned __int16 *)(dbg + 82LL);
    if ( !_bittest(&v1, a1 + 3)
      || (v4 = 0,
          v6 = dword_251408,
          v5 = 1018,
          v7 = a1 + 4,
          v2 = sub_C8DE0((unsigned __int64 *)&qword_2512A0, (__int64)&v4),
          sub_C8970((__int64)&v4),
          v2 <= 0) )
    {
      if ( (int)sub_E2200(dword_251408, a1) <= 0 )
      {
        v4 = 0;
        v6 = dword_251408;
        if ( a1 )
        {
          v5 = 1020;
        }
        else
        {
          v5 = 1018;
          v7 = 1;
        }
        sub_C8DE0((unsigned __int64 *)&qword_2512A0, (__int64)&v4);
        sub_C8970((__int64)&v4);
      }
    }
  }
  return v8 - __readfsqword(0x28u);
}

