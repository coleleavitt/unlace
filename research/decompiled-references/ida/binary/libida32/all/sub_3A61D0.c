__int64 __fastcall sub_3A61D0(__int64 a1, int a2)
{
  char v2; // dl
  __int64 result; // rax
  _QWORD v4[3]; // [rsp+0h] [rbp-18h] BYREF

  v4[1] = __readfsqword(0x28u);
  v4[0] = 0;
  v2 = sub_3A60E0((__int64)v4, a2);
  result = 0;
  if ( v2 )
    return v4[0];
  return result;
}

