__int64 __fastcall sub_3BC980(
        _QWORD *a1,
        int a2,
        unsigned int a3,
        __int64 (__fastcall **a4)(_QWORD, _QWORD *, __int64),
        __int64 (__fastcall **a5)(_QWORD, _QWORD *, __int64))
{
  unsigned int v5; // esi
  __int64 (__fastcall **v7[7])(_QWORD, _QWORD *, __int64); // [rsp+0h] [rbp-38h] BYREF

  v7[5] = (__int64 (__fastcall **)(_QWORD, _QWORD *, __int64))__readfsqword(0x28u);
  v5 = a2 + 1;
  if ( v5
    && (v7[1] = (__int64 (__fastcall **)(_QWORD, _QWORD *, __int64))a1,
        v7[0] = (__int64 (__fastcall **)(_QWORD, _QWORD *, __int64))&off_2AFCFD8,
        v7[2] = a4,
        v7[3] = a5,
        v5 < a3) )
  {
    return sub_3B3AD0(a1, v5, a3, 0, v7);
  }
  else
  {
    return 0xFFFFFFFFLL;
  }
}

