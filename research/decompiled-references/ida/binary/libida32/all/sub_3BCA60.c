__int64 __fastcall sub_3BCA60(
        _QWORD *a1,
        unsigned int a2,
        unsigned int a3,
        __int64 (__fastcall **a4)(_QWORD, _QWORD *, __int64),
        __int64 (__fastcall **a5)(_QWORD, _QWORD *, __int64))
{
  __int64 result; // rax
  __int64 (__fastcall **v6[7])(_QWORD, _QWORD *, __int64); // [rsp+0h] [rbp-38h] BYREF

  v6[5] = (__int64 (__fastcall **)(_QWORD, _QWORD *, __int64))__readfsqword(0x28u);
  v6[0] = (__int64 (__fastcall **)(_QWORD, _QWORD *, __int64))off_2AFCFF0;
  result = 0xFFFFFFFFLL;
  v6[1] = (__int64 (__fastcall **)(_QWORD, _QWORD *, __int64))a1;
  v6[2] = a4;
  v6[3] = a5;
  if ( a3 < a2 )
    return sub_3B3FE0(a1, a3, a2, 0, v6);
  return result;
}

