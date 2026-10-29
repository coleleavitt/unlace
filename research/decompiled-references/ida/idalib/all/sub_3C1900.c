__int64 __fastcall sub_3C1900(
        _QWORD *a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 (__fastcall **a4)(_QWORD, __int128 *, __int64),
        __int64 (__fastcall **a5)(_QWORD, __int128 *, __int64))
{
  unsigned __int64 v5; // rsi
  __int64 (__fastcall **v7[7])(_QWORD, __int128 *, __int64); // [rsp+0h] [rbp-38h] BYREF

  v7[5] = (__int64 (__fastcall **)(_QWORD, __int128 *, __int64))__readfsqword(0x28u);
  v5 = a2 + 1;
  if ( v5
    && (v7[1] = (__int64 (__fastcall **)(_QWORD, __int128 *, __int64))a1,
        v7[0] = (__int64 (__fastcall **)(_QWORD, __int128 *, __int64))&off_2B26118,
        v7[2] = a4,
        v7[3] = a5,
        v5 < a3) )
  {
    return sub_3B81B0(a1, v5, a3, 0, v7);
  }
  else
  {
    return -1;
  }
}
