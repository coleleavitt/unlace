__int64 __fastcall sub_5FB840(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  char v7; // dl
  __int64 result; // rax
  _QWORD v9[3]; // [rsp+0h] [rbp-18h] BYREF

  v9[1] = __readfsqword(0x28u);
  v7 = sub_748330(v9, a1, a3, 0, 0x7FFFFFFF, 0);
  result = 3;
  if ( v7 )
  {
    *(_QWORD *)(a6 + 416) = v9[0];
    return 0;
  }
  return result;
}
