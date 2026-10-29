__int64 __fastcall sub_3BCE60(__int64 a1, int a2, unsigned int a3)
{
  unsigned int v3; // ebp
  unsigned int v4; // edx
  unsigned int v5; // eax
  __int64 (__fastcall **v7[11])(_QWORD, _QWORD *, __int64); // [rsp+0h] [rbp-58h] BYREF

  v7[5] = (__int64 (__fastcall **)(_QWORD, _QWORD *, __int64))__readfsqword(0x28u);
  v3 = 0;
  if ( a3 > 1 )
  {
    v3 = *(unsigned __int8 *)(a1 + 2233);
    v4 = a2 + a3;
    v5 = a2 + 1;
    if ( (_BYTE)v3 )
    {
      HIDWORD(v7[0]) = v4;
      LODWORD(v7[0]) = a2 + 1;
      if ( !sub_3FC340(a1 + 1808, v7, sub_3B3540, 0) )
        LOBYTE(v3) = sub_3FC340(a1 + 2016, v7, sub_3B3540, 0) != 0;
    }
    else if ( a2 != -1 )
    {
      v7[1] = (__int64 (__fastcall **)(_QWORD, _QWORD *, __int64))a1;
      v7[0] = (__int64 (__fastcall **)(_QWORD, _QWORD *, __int64))&off_2AFCFD8;
      v7[2] = (__int64 (__fastcall **)(_QWORD, _QWORD *, __int64))sub_3B3460;
      v7[3] = nullptr;
      if ( v5 < v4 )
        LOBYTE(v3) = (unsigned int)sub_3B3AD0((_QWORD *)a1, v5, v4, 0, v7) != -1;
    }
  }
  return v3;
}

