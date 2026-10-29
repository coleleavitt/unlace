__int64 __fastcall sub_644600(
        _BYTE *a1,
        const char *a2,
        __int64 a3,
        __int16 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  int v8; // ecx
  int v9; // r8d
  int v10; // r9d

  if ( a3 )
  {
    *(_WORD *)(*(_QWORD *)(*(_QWORD *)a1 + 1672LL) + 2824LL) = a4;
    a1[8] = (a4 & 0x80) != 0;
    if ( (a4 & 0x200) != 0 )
    {
      a1[8] = 0;
      sub_3792E0(6u, a2, a5, a6, a7, a8);
    }
    else
    {
      sub_3792E0(6u, a2, a5, a6, a7, a8);
      sub_5AAFD0(6, a2);
    }
    callui(25, (int)a2, (int)&callui, v8, v9, v10);
  }
  return 0;
}
