__int64 __fastcall sub_1F9AA0(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  unsigned int v3; // [rsp+4h] [rbp-14h] BYREF
  unsigned __int64 v4; // [rsp+8h] [rbp-10h]

  v4 = __readfsqword(0x28u);
  v3 = -1;
  result = 0xFFFFFFFFLL;
  if ( a2 )
  {
    sub_1E86E0(a1 + 624, 1, a2, a1, &v3);
    return v3;
  }
  return result;
}
