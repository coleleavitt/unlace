__int64 __fastcall sub_5FBCD0(__int64 a1, __int64 a2, __int64 a3)
{
  char v4; // bl
  char v5; // dl
  __int64 result; // rax
  _BYTE v7[8]; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v8; // [rsp+8h] [rbp-20h]

  v8 = __readfsqword(0x28u);
  v4 = getinf(38);
  v5 = sub_748330(v7, a1, a3, 0, 4, 0);
  result = 3;
  if ( v5 )
  {
    setinf(38, v7[0] | v4 & 0xFCu);
    return 0;
  }
  return result;
}
