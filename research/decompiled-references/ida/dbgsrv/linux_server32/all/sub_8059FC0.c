/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8059FC0
// Address: 0x08059FC0

//----- (08059FC0) --------------------------------------------------------
int sub_8059FC0()
{
  int result; // eax

  if ( !(unsigned __int8)sub_80D2000("IDA_USE_LIBTHREAD_DB", nullptr) )
  {
    if ( dword_811D384 == -1 )
    {
      sub_80582E0();
      result = 2;
      if ( dword_811D384 == 1 )
        goto LABEL_6;
    }
    else
    {
      result = 2;
      if ( dword_811D384 == 1 )
      {
LABEL_6:
        dword_811E5FC = result;
        return result;
      }
    }
  }
  if ( byte_811E5E0 )
  {
LABEL_5:
    result = 3;
    goto LABEL_6;
  }
  if ( td_init() == TD_OK )
  {
    byte_811E5E0 = 1;
    goto LABEL_5;
  }
  sub_8058290();
  if ( byte_811E5E0 )
    goto LABEL_5;
  dword_811E5FC = 1;
  return 1;
}
// 811D384: using guessed type int dword_811D384;
// 811E5E0: using guessed type char byte_811E5E0;
// 811E5FC: using guessed type int dword_811E5FC;
