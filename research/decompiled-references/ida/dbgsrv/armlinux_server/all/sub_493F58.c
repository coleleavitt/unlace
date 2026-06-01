/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_493F58
// Address: 0x0000000000493F58

//----- (0000000000493F58) ----------------------------------------------------
__int64 __fastcall sub_493F58(__int64 a1)
{
  __int64 *v1; // x19
  __int64 *v2; // x21
  __pid_t v3; // w0
  __pid_t v4; // w0
  __int64 v5; // x0
  __int64 v7; // x0
  int stat_loc; // [xsp+44h] [xbp-Ch] BYREF
  __int64 v9; // [xsp+48h] [xbp-8h]

  v2 = (__int64 *)(a1 + 24);
  v1 = *(__int64 **)(a1 + 24);
  if ( v1 != (__int64 *)(a1 + 24) )
  {
    do
    {
      if ( !*((_BYTE *)v1 + 40) )
      {
        v3 = *((_DWORD *)v1 + 4);
        if ( v3 != -1 )
        {
          v4 = waitpid(v3, &stat_loc, *((_DWORD *)v1 + 7) | 1);
          if ( v4 )
          {
            if ( v4 <= 0 )
            {
              if ( v4 == -1 && *__errno_location() == 10 )
                *((_BYTE *)v1 + 24) = 1;
            }
            else
            {
              *((_DWORD *)v1 + 5) = stat_loc;
            }
            v5 = v1[4];
            *((_BYTE *)v1 + 40) = 1;
            sub_493F08(v5);
          }
          else if ( *((_BYTE *)v1 + 41) )
          {
            v7 = v1[4];
            *((_BYTE *)v1 + 41) = 0;
            sub_493F08(v7);
          }
        }
      }
      v1 = (__int64 *)*v1;
    }
    while ( v1 != v2 );
  }
  return v9 ^ _stack_chk_guard;
}
