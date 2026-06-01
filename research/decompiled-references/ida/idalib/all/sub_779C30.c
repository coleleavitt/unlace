__int64 __fastcall sub_779C30(_QWORD *a1, unsigned __int64 a2, char a3, unsigned __int8 a4)
{
  __int64 result; // rax
  __int64 v6; // r13
  void (*v7)(void); // rax

  result = 2;
  if ( a2 < a1[7] )
  {
    if ( a3 )
    {
      v6 = a1[6] + 176 * a2;
      if ( (*(_BYTE *)(v6 + 168) & 4) == 0 )
      {
        result = 9;
        if ( (*(_BYTE *)(a1[5] + 8LL) & 4) == 0 )
          return result;
        v7 = *(void (**)(void))(*a1 + 168LL);
        if ( v7 != nullsub_240 )
          v7();
        sub_774E40(v6);
        if ( !a4 )
        {
          sub_39ADA0(0x5Au, a1[4], a2, 1);
          sub_774BB0((__int64)a1, 90, a2, 1);
        }
      }
    }
    else
    {
      sub_777F00(a1, a2, 4, 0, a4);
    }
    return 0;
  }
  return result;
}
