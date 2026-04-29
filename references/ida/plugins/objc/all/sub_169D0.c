char __fastcall sub_169D0(__int64 *a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rax
  char result; // al
  _QWORD v5[3]; // [rsp+0h] [rbp-18h] BYREF

  v2 = a1[34];
  v5[1] = __readfsqword(0x28u);
  v3 = *a1;
  v5[0] = 0;
  result = (*(__int64 (__fastcall **)(__int64 *, _QWORD *, __int64))(v3 + 136))(a1, v5, a2 + v2);
  if ( result )
    return v5[0] != 0;
  return result;
}
