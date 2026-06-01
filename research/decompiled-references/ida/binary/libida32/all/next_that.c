__int64 __fastcall next_that(
        int a1,
        unsigned int a2,
        __int64 (__fastcall **a3)(_QWORD, _QWORD *, __int64),
        __int64 (__fastcall **a4)(_QWORD, _QWORD *, __int64))
{
  unsigned int v4; // edi
  _QWORD *v5; // rax
  __int64 (__fastcall **v7[7])(_QWORD, _QWORD *, __int64); // [rsp+0h] [rbp-38h] BYREF

  v7[5] = (__int64 (__fastcall **)(_QWORD, _QWORD *, __int64))__readfsqword(0x28u);
  v4 = a1 + 1;
  if ( v4
    && (v7[2] = a3,
        v7[0] = (__int64 (__fastcall **)(_QWORD, _QWORD *, __int64))&off_2AFCFD8,
        v7[3] = a4,
        v5 = *(_QWORD **)(qword_2CA1698 + 1480),
        v7[1] = (__int64 (__fastcall **)(_QWORD, _QWORD *, __int64))v5,
        v4 < a2) )
  {
    return sub_3B3AD0(v5, v4, a2, 0, v7);
  }
  else
  {
    return 0xFFFFFFFFLL;
  }
}

