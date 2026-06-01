__int64 __fastcall sub_238B50(double a1)
{
  int v1; // ebx
  __int64 v3; // [rsp+0h] [rbp-58h] BYREF
  __int64 v4; // [rsp+8h] [rbp-50h]
  int v5; // [rsp+10h] [rbp-48h]
  int v6; // [rsp+18h] [rbp-40h]
  unsigned __int64 v7; // [rsp+38h] [rbp-20h]

  v7 = __readfsqword(0x28u);
  v1 = 0;
  if ( !byte_8CC5F4 )
  {
    if ( !(unsigned __int8)sub_3843C0()
      || (*(_BYTE *)(dbg + 82) & 0x20) == 0
      || (v3 = 0,
          v4 = 1018,
          v5 = dword_8CC428,
          v6 = 6,
          v1 = sub_238AE0((double *)&qword_8CC2B0, (__int64)&v3, a1),
          sub_238680((__int64)&v3, (const char *)&v3),
          v1 <= 0) )
    {
      v3 = 0;
      v4 = 1024;
      v5 = dword_8CC428;
      v1 = sub_238AE0((double *)&qword_8CC2B0, (__int64)&v3, a1);
      sub_238680((__int64)&v3, (const char *)&v3);
    }
  }
  return (unsigned int)v1;
}
