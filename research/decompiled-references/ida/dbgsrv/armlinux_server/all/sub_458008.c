/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_458008
// Address: 0x0000000000458008

//----- (0000000000458008) ----------------------------------------------------
__int64 __fastcall sub_458008(__int64 a1, __int64 a2, char a3)
{
  __int64 v5; // x0
  int v6; // w0
  char v8[8]; // [xsp+48h] [xbp-18h] BYREF
  __int64 v9; // [xsp+50h] [xbp-10h]
  __int64 v10; // [xsp+58h] [xbp-8h]

  sub_457F00(a1, a2, a3);
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v5 = *(_QWORD *)(a1 + 672);
          v8[0] = 1;
          v9 = 0;
          v6 = *(unsigned __int16 *)(v5 + 24);
          if ( v6 != 15933 )
            break;
          sub_457F00(a1, (__int64)v8, 1);
          sub_451EF0(a2, (__int64)v8);
        }
        if ( v6 != 15421 )
          break;
        sub_457F00(a1, (__int64)v8, 1);
        sub_451F40(a2, (__int64)v8);
      }
      if ( v6 != 60 )
        break;
      sub_457F00(a1, (__int64)v8, 1);
      sub_451F90(a2, (__int64)v8);
    }
    if ( v6 != 62 )
      break;
    sub_457F00(a1, (__int64)v8, 1);
    sub_451FE0(a2, (__int64)v8);
  }
  return v10 ^ _stack_chk_guard;
}
