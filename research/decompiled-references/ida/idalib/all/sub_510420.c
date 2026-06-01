__int64 __fastcall sub_510420(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 result; // rax
  _QWORD v4[3]; // [rsp+0h] [rbp-18h] BYREF

  v4[1] = __readfsqword(0x28u);
  v2 = sub_510290(a1, a2, (__int64 (__fastcall *)(unsigned __int64 *, __int64))sub_50CE90, (__int64)v4);
  result = 0;
  if ( v2 != -1 )
    return v4[0];
  return result;
}
