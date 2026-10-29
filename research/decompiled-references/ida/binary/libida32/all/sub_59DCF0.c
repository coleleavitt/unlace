void __fastcall sub_59DCF0(unsigned int a1, unsigned int a2)
{
  unsigned int that; // r12d
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
      that = next_that(that, a2, sub_59BF20, 0);
    }
    while ( that < a2 );
  }
}

