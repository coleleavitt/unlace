__int64 __fastcall sub_75C2C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rbx
  unsigned int v7; // eax
  unsigned int v8; // [rsp+0h] [rbp-28h] BYREF
  int v9; // [rsp+4h] [rbp-24h] BYREF
  unsigned __int64 v10; // [rsp+8h] [rbp-20h]

  v10 = __readfsqword(0x28u);
  v8 = 0;
  if ( (unsigned __int8)(*qword_2CD44C0 - 49) > 8u
    || (v5 = (unsigned int)sub_76E990(a1, a2, a3, a4, a5), (int)qword_2CD44B8 - (int)qword_2CD44C0 < (unsigned int)v5) )
  {
    sub_76E6C0(a1, a2, a3, a4);
  }
  if ( (unsigned int)v5 > 0xB )
  {
    if ( !(unsigned __int8)sub_76F0B0(78) )
    {
      qword_2CD44C0 += v5;
      v7 = sub_772AB0();
      DWORD1(xmmword_2CCCD80) |= 0x2000000u;
      return v7;
    }
    if ( (_BYTE)qword_2CCCDA0 )
    {
      if ( *(_DWORD *)qword_2CD44C0 == 1701994335
        && *((_DWORD *)qword_2CD44C0 + 1) == 1818321767
        && *((_DWORD *)qword_2CD44C0 + 2) == 1600074604 )
      {
        DWORD1(xmmword_2CCCD80) |= 0xEu;
        qword_2CD44C0 += 11;
        if ( (dword_2CD44CC & 0x120) == 0 )
        {
          v9 = sub_76E800(13);
          sub_770B70(&v8, &v9);
        }
      }
    }
  }
  sub_76EF20(&v8);
  return v8;
}
