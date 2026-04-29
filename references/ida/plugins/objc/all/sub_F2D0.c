__int64 __fastcall sub_F2D0(__int64 *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 result; // rax
  _QWORD v4[5]; // [rsp+0h] [rbp-28h] BYREF

  v2 = *a1;
  v4[1] = __readfsqword(0x28u);
  v4[0] = 0;
  result = (*(__int64 (__fastcall **)(__int64 *, _QWORD *))(v2 + 448))(a1, v4);
  if ( (_BYTE)result )
    return (*(__int64 (__fastcall **)(__int64 *, __int64, _QWORD))(*a1 + 408))(a1, a2, v4[0]);
  return result;
}
