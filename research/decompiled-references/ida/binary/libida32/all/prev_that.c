__int64 __fastcall prev_that(
        unsigned int a1,
        unsigned int a2,
        __int64 (__fastcall **a3)(_QWORD, _QWORD *, __int64),
        __int64 (__fastcall **a4)(_QWORD, _QWORD *, __int64))
{
  _QWORD *v4; // r9
  __int64 result; // rax
  __int64 (__fastcall **v6[7])(_QWORD, _QWORD *, __int64); // [rsp+0h] [rbp-38h] BYREF

  v6[5] = (__int64 (__fastcall **)(_QWORD, _QWORD *, __int64))__readfsqword(0x28u);
  v6[2] = a3;
  v6[3] = a4;
  v4 = *(_QWORD **)(qword_2CA1698 + 1480);
  v6[0] = (__int64 (__fastcall **)(_QWORD, _QWORD *, __int64))off_2AFCFF0;
  result = 0xFFFFFFFFLL;
  v6[1] = (__int64 (__fastcall **)(_QWORD, _QWORD *, __int64))v4;
  if ( a2 < a1 )
    return sub_3B3FE0(v4, a2, a1, 0, v6);
  return result;
}

