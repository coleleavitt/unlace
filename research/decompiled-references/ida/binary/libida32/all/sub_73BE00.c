__int64 __fastcall sub_73BE00(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rbx
  unsigned int v7; // eax
  unsigned int v8; // [rsp+0h] [rbp-28h] BYREF
  int v9; // [rsp+4h] [rbp-24h] BYREF
  unsigned __int64 v10; // [rsp+8h] [rbp-20h]

  v10 = __readfsqword(0x28u);
  v8 = 0;
  if ( (unsigned __int8)(*qword_2CAA5C0 - 49) > 8u
    || (v5 = (unsigned int)sub_74E4D0(a1, a2, a3, a4, a5), (int)qword_2CAA5B8 - (int)qword_2CAA5C0 < (unsigned int)v5) )
  {
    sub_74E200(a1, a2, a3, a4);
  }
  if ( (unsigned int)v5 > 0xB )
  {
    if ( !(unsigned __int8)sub_74EBF0(78) )
    {
      qword_2CAA5C0 += v5;
      v7 = sub_7525F0();
      DWORD1(xmmword_2CA2E80) |= 0x2000000u;
      return v7;
    }
    if ( (_BYTE)qword_2CA2EA0 )
    {
      if ( *(_DWORD *)qword_2CAA5C0 == 1701994335
        && *((_DWORD *)qword_2CAA5C0 + 1) == 1818321767
        && *((_DWORD *)qword_2CAA5C0 + 2) == 1600074604 )
      {
        DWORD1(xmmword_2CA2E80) |= 0xEu;
        qword_2CAA5C0 += 11;
        if ( (dword_2CAA5CC & 0x120) == 0 )
        {
          v9 = sub_74E340(13);
          sub_7506B0(&v8, &v9);
        }
      }
    }
  }
  sub_74EA60(&v8);
  return v8;
}

