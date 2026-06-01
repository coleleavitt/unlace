__int64 __fastcall sub_5CCFA0(__int64 (__fastcall **a1)(_QWORD, __int128 *, __int64), unsigned __int64 *a2)
{
  __int64 result; // rax
  unsigned __int64 v3; // rdx

  result = 0;
  if ( a2 )
  {
    v3 = a2[2];
    if ( (v3 & 0x400) != 0 )
    {
      BYTE1(v3) &= ~4u;
      a2[2] = v3;
      sub_5C77B0((__int64)a1, a2, 0);
      if ( (sub_631AD0(*a1, 10) & 0x2000) != 0 )
        sub_5CCCE0(a1, (__int64)a2);
      return 1;
    }
  }
  return result;
}
