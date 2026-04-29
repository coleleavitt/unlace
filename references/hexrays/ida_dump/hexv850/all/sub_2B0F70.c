__int64 __fastcall sub_2B0F70(_QWORD *a1, __int64 a2, __int64 *a3, double a4)
{
  __int64 v4; // rax
  __int64 v5; // r12
  __int64 v6; // rbp
  _QWORD v8[5]; // [rsp+0h] [rbp-28h] BYREF

  v4 = *a3;
  v8[1] = __readfsqword(0x28u);
  v8[0] = v4;
  v5 = a3[1] + v4;
  v6 = (*(__int64 (__fastcall **)(_QWORD *, __int64, _QWORD *, __int64))(*a1 + 16LL))(a1, a2, v8, v5);
  if ( !v6 )
    return 0;
  if ( v8[0] != v5 )
    sub_68620((__int64)"%a: ignored garbage at the end of the blob '%c'\n", a4, a1[1]);
  return v6;
}
