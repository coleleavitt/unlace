__int64 __fastcall op_stkvar(unsigned __int64 a1, unsigned int a2)
{
  __int64 *v2; // r12

  v2 = *(__int64 **)(qword_2CCB598 + 1672);
  if ( (~((unsigned __int16)sub_3BE900(v2, a1, 4) >> 8) & 6) != 0 || !sub_5CAA10(v2) )
    return 0;
  else
    return sub_3D57A0(v2, a1, 0xBBBBBB0BB00000LL, a2);
}
