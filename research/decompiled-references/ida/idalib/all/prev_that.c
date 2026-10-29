__int64 __fastcall prev_that(
        unsigned __int64 a1,
        unsigned __int64 a2,
        __int64 (__fastcall **a3)(_QWORD, __int128 *, __int64),
        __int64 (__fastcall **a4)(_QWORD, __int128 *, __int64))
{
  __int64 (__fastcall **v4)(_QWORD, __int128 *, __int64); // r9
  __int64 result; // rax
  __int64 (__fastcall **v6[7])(_QWORD, __int128 *, __int64); // [rsp+0h] [rbp-38h] BYREF

  v6[5] = (__int64 (__fastcall **)(_QWORD, __int128 *, __int64))__readfsqword(0x28u);
  v6[2] = a3;
  v6[3] = a4;
  v4 = *(__int64 (__fastcall ***)(_QWORD, __int128 *, __int64))(qword_2CCB598 + 1672);
  v6[0] = (__int64 (__fastcall **)(_QWORD, __int128 *, __int64))off_2B26130;
  result = -1;
  v6[1] = v4;
  if ( a2 < a1 )
    return sub_3B8720(v4, a2, a1, 0, v6);
  return result;
}
