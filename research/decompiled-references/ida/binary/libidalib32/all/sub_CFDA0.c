__int64 __fastcall sub_CFDA0(int a1)
{
  int v2; // eax
  _DWORD *v3; // rdi
  char v4[40]; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v5; // [rsp+28h] [rbp-20h]

  v5 = __readfsqword(0x28u);
  qsnprintf();
  if ( (unsigned __int8)sub_BFF50(a1, v4) )
  {
    v2 = xmmword_2512E8;
    v3 = qword_2515B0;
    if ( qword_2515B0 )
    {
      *(_QWORD *)qword_2515B0 = qword_2512E0;
      v3[2] = v2;
      sub_CC780((__int64)v3, 24);
    }
    else
    {
      sub_9E0A0();
    }
  }
  return 0;
}

