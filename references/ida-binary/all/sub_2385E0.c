__int64 __fastcall sub_2385E0(const char *a1, __int64 a2, __int64 a3)
{
  int v3; // eax
  __int64 v4; // rdi
  __int64 result; // rax
  int v6; // [rsp+4h] [rbp-14h] BYREF
  unsigned __int64 v7; // [rsp+8h] [rbp-10h]

  v7 = __readfsqword(0x28u);
  if ( !(_QWORD)xmmword_8CC398 )
    return 4294967294LL;
  if ( !a1 )
    return 4294967294LL;
  v6 = 0;
  v3 = sub_2383E0(a1, (__int64)&v6, a3);
  if ( v3 < 0 )
    return 4294967294LL;
  if ( v3 >= (unsigned __int64)xmmword_8CC398 )
    return 4294967294LL;
  v4 = qword_8CC390 + 56LL * v3;
  if ( !v4 )
    return 4294967294LL;
  result = *(unsigned int *)(v4 + 40);
  if ( (_DWORD)result == -1 )
    return ~(unsigned __int8)sub_235DE0(v4);
  return result;
}
