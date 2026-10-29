_BOOL8 __fastcall sub_238C50(double a1)
{
  _BOOL8 result; // rax
  int v2; // ebx
  _QWORD v3[2]; // [rsp+0h] [rbp-58h] BYREF
  int v4; // [rsp+10h] [rbp-48h]
  __int64 v5; // [rsp+18h] [rbp-40h]
  unsigned __int64 v6; // [rsp+38h] [rbp-20h]

  v6 = __readfsqword(0x28u);
  result = 0;
  if ( !byte_8CC5F4 )
  {
    v3[0] = 0;
    v3[1] = 1210;
    v5 = xmmword_8CC810;
    v4 = dword_8CC428;
    v2 = sub_238AE0((double *)&qword_8CC2B0, (__int64)v3, a1);
    sub_238680((__int64)v3, (const char *)v3);
    return v2 > 0;
  }
  return result;
}
