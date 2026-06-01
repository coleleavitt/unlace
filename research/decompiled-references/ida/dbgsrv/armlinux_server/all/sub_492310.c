/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_492310
// Address: 0x0000000000492310

//----- (0000000000492310) ----------------------------------------------------
void __fastcall __noreturn sub_492310(char *s1, __int64 *a2)
{
  __int64 v2; // x6
  __int64 v3; // x7
  __int64 v5; // x0
  __int64 v6; // x1
  __int64 v7; // x5
  __int64 v8; // x2
  __int64 v9; // x3
  __int64 v10; // [xsp+10h] [xbp-20h] BYREF
  __int64 v11; // [xsp+18h] [xbp-18h]
  __int64 v12; // [xsp+20h] [xbp-10h]
  __int64 v13; // [xsp+28h] [xbp-8h]

  if ( s1 )
  {
    if ( callui )
    {
      v2 = *a2;
      v3 = a2[1];
      v5 = a2[2];
      v6 = a2[3];
      v10 = v2;
      v11 = v3;
      v12 = v5;
      v13 = v6;
      callui(24, 3, s1);
    }
    else
    {
      v7 = a2[1];
      v8 = a2[2];
      v9 = a2[3];
      v10 = *a2;
      v11 = v7;
      v12 = v8;
      v13 = v9;
      sub_49B710(s1, &v10);
      sub_490C98(10, stderr);
    }
  }
  ++errorexit;
  sub_4922C0(1);
}
// 522018: using guessed type __int64 (__fastcall *callui)(int, int, char *s1);
// 524518: using guessed type int errorexit;
