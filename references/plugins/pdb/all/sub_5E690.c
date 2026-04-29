__int64 __fastcall sub_5E690(__int64 *a1)
{
  __int64 v1; // rax
  int v2; // edx
  __int64 result; // rax
  _QWORD v4[3]; // [rsp+0h] [rbp-18h] BYREF

  v1 = *a1;
  v4[1] = __readfsqword(0x28u);
  v2 = (*(__int64 (__fastcall **)(__int64 *, _QWORD *))(v1 + 248))(a1, v4);
  result = 0;
  if ( !v2 )
    return (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v4[0] + 304LL))(v4[0]);
  return result;
}
