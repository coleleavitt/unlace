__int64 __fastcall sub_5FB930(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  char v8; // dl
  __int64 result; // rax
  __int64 v10; // rax
  __int64 v11; // rbx
  _QWORD v12[5]; // [rsp+0h] [rbp-28h] BYREF

  v12[1] = __readfsqword(0x28u);
  v8 = sub_748330(v12, a1, a3, 32, 1023, 0);
  result = 3;
  if ( v8 )
  {
    v10 = a6 + 472;
    v11 = a6 + 456;
    if ( a4 )
      v11 = v10;
    *(_WORD *)(v11 + 10) = v12[0];
    return 0;
  }
  return result;
}
