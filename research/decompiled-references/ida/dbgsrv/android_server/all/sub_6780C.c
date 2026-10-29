/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6780C
// Address: 0x000000000006780C

//----- (000000000006780C) ----------------------------------------------------
__int64 sub_6780C()
{
  __int64 v1; // [xsp+0h] [xbp-20h]

  _ReadStatusReg(TPIDR_EL0);
  if ( (unsigned int)get_name_value() )
    return v1;
  else
    return -1;
}
// 67844: variable 'v1' is possibly undefined
