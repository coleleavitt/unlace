__int64 __fastcall sub_3C19F0(
        __int64 (__fastcall **a1)(_QWORD, __int128 *, __int64),
        unsigned __int64 a2,
        unsigned __int64 a3,
        __int64 (__fastcall **a4)(_QWORD, __int128 *, __int64),
        __int64 (__fastcall **a5)(_QWORD, __int128 *, __int64))
{
  __int64 result; // rax
  __int64 (__fastcall **v6[7])(_QWORD, __int128 *, __int64); // [rsp+0h] [rbp-38h] BYREF

  v6[5] = (__int64 (__fastcall **)(_QWORD, __int128 *, __int64))__readfsqword(0x28u);
  v6[0] = (__int64 (__fastcall **)(_QWORD, __int128 *, __int64))off_2B26130;
  result = -1;
  v6[1] = a1;
  v6[2] = a4;
  v6[3] = a5;
  if ( a3 < a2 )
    return sub_3B8720(a1, a3, a2, 0, v6);
  return result;
}
