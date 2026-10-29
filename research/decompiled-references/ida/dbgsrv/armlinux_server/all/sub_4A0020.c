/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4A0020
// Address: 0x00000000004A0020

//----- (00000000004A0020) ----------------------------------------------------
__int64 __fastcall sub_4A0020(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // x1
  __int64 v4; // x3
  __int64 *v5; // x19
  __int64 v6; // x2
  __int64 *v7; // x4
  __int64 result; // x0
  __int64 v9; // x0

  if ( a2 <= 0xC )
  {
    result = *((unsigned __int8 *)qword_4E1998 + a2);
    *(_QWORD *)(a1 + 8) = vcvtpd_u64_f64((long double)*((unsigned __int8 *)qword_4E1998 + a2) * *(float *)a1);
  }
  else
  {
    v3 = a2 + 1;
    v4 = 297;
    v5 = &std::__detail::__prime_list[6];
    while ( 1 )
    {
      v6 = v4 >> 1;
      v7 = &v5[v4 >> 1];
      if ( v3 <= *v7 )
        break;
      v9 = v4 >> 1;
      v6 = v4;
LABEL_11:
      v5 = v7 + 1;
      v4 = v6 - v9 - 1;
      if ( v4 <= 0 )
        goto LABEL_8;
    }
    while ( 1 )
    {
      v9 = v6 >> 1;
      if ( !v6 )
        break;
      v7 = &v5[v9];
      if ( v3 > *v7 )
        goto LABEL_11;
      v6 >>= 1;
    }
LABEL_8:
    if ( v5 == &qword_4E1560[133] )
      *(_QWORD *)(a1 + 8) = -1;
    else
      *(_QWORD *)(a1 + 8) = vcvtpd_u64_f64((long double)(unsigned __int64)*v5 * *(float *)a1);
    return *v5;
  }
  return result;
}
// 4E1010: using guessed type __int64 std::__detail::__prime_list[169];
// 4E1560: using guessed type __int64[135];
// 4E1998: using guessed type __int64 qword_4E1998[2];
