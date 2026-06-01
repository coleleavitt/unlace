/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A27E4
// Address: 0x00000000000A27E4

//----- (00000000000A27E4) ----------------------------------------------------
__int64 __fastcall sub_A27E4(unsigned int *a1)
{
  __int64 result; // x0
  int v3; // w0
  int v4; // w8

  result = a1[184];
  if ( (result & 0x80000000) != 0 )
  {
    v3 = (*(__int64 (__fastcall **)(unsigned int *))(*(_QWORD *)a1 + 616LL))(a1);
    if ( v3 >= 16 )
      v4 = 16;
    else
      v4 = v3;
    result = v4 & (unsigned int)~(v4 >> 31);
    a1[184] = result;
  }
  return result;
}
