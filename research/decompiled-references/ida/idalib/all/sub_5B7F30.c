void __fastcall sub_5B7F30(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int64 that; // r12
  unsigned int v4; // ebx
  __int64 flags; // rbp
  __int64 v6; // rsi

  if ( a1 < a2 )
  {
    that = a1;
    do
    {
      v4 = 0;
      flags = get_flags_ex(that, 0);
      do
      {
        while ( !(unsigned __int8)is_stkvar(flags, v4) )
        {
          if ( ++v4 == 8 )
            goto LABEL_7;
        }
        v6 = v4++;
        clr_op_type(that, v6);
      }
      while ( v4 != 8 );
LABEL_7:
      that = next_that(that, a2, sub_5B60E0, 0);
    }
    while ( that < a2 );
  }
}
