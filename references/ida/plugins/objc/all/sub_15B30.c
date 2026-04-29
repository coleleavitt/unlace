char __fastcall sub_15B30(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // rdx
  char result; // al
  _QWORD v6[3]; // [rsp+0h] [rbp-18h] BYREF

  v3 = *a1;
  v4 = a1[75] + a3;
  v6[1] = __readfsqword(0x28u);
  v6[0] = 0;
  result = (*(__int64 (__fastcall **)(__int64 *, _QWORD *, __int64))(v3 + 136))(a1, v6, v4);
  if ( result )
    return get_strlit_contents() > 0;
  return result;
}
