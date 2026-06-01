__int64 __fastcall sub_5DFCB0(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // dl
  __int64 result; // rax
  int v5; // [rsp+4h] [rbp-14h] BYREF
  unsigned __int64 v6; // [rsp+8h] [rbp-10h]

  v6 = __readfsqword(0x28u);
  v3 = sub_728190(&v5, a1, a3, 32, 1023);
  result = 3;
  if ( v3 )
  {
    setinf(43, v5);
    return 0;
  }
  return result;
}

