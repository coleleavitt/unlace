__int64 __fastcall sub_C88D0(const char *a1)
{
  int v1; // eax
  __int64 v2; // rdi
  __int64 result; // rax
  int v4; // [rsp+4h] [rbp-14h] BYREF
  unsigned __int64 v5; // [rsp+8h] [rbp-10h]

  v5 = __readfsqword(0x28u);
  if ( !(_QWORD)xmmword_251378 )
    return 4294967294LL;
  if ( !a1 )
    return 4294967294LL;
  v4 = 0;
  v1 = sub_C86D0(a1, (__int64)&v4);
  if ( v1 < 0 )
    return 4294967294LL;
  if ( v1 >= (unsigned __int64)xmmword_251378 )
    return 4294967294LL;
  v2 = qword_251370 + 56LL * v1;
  if ( !v2 )
    return 4294967294LL;
  result = *(unsigned int *)(v2 + 40);
  if ( (_DWORD)result == -1 )
    return ~(unsigned __int8)sub_C5E50(v2);
  return result;
}

