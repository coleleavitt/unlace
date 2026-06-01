__int64 __fastcall sub_5FBB70(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // dl
  __int64 result; // rax
  _QWORD v5[3]; // [rsp+0h] [rbp-18h] BYREF

  v5[1] = __readfsqword(0x28u);
  v3 = sub_748330(v5, a1, a3, 32, 1023, 0);
  result = 3;
  if ( v3 )
  {
    setinf(43, v5[0]);
    return 0;
  }
  return result;
}
