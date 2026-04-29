__int64 __fastcall sub_39DEF0(__int64 *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 result; // rax
  __int64 v5; // rax
  _QWORD v6[7]; // [rsp+0h] [rbp-38h] BYREF

  v2 = *a1;
  v6[3] = __readfsqword(0x28u);
  v3 = (*(__int64 (__fastcall **)(__int64 *))(v2 + 56))(a1);
  result = 0;
  if ( v3 != -1 )
  {
    v5 = (*(__int64 (__fastcall **)(__int64 *))(*a1 + 64))(a1);
    v6[0] = v3;
    v6[1] = v5 + v3;
    rangeset_t_add(a2, v6);
    return 1;
  }
  return result;
}
