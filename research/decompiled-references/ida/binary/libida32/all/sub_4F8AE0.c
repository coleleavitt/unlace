__int64 __fastcall sub_4F8AE0(__int64 a1, int a2)
{
  int v2; // edx
  __int64 result; // rax
  _QWORD v4[3]; // [rsp+0h] [rbp-18h] BYREF

  v4[1] = __readfsqword(0x28u);
  v2 = sub_4F8950(a1, a2, (__int64 (__fastcall *)(unsigned int *, __int64))sub_4F5780, (__int64)v4);
  result = 0;
  if ( v2 != -1 )
    return v4[0];
  return result;
}

