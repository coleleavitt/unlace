/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47FD88
// Address: 0x000000000047FD88

//----- (000000000047FD88) ----------------------------------------------------
__int64 __fastcall sub_47FD88(unsigned __int64 a1)
{
  if ( a1 )
    return *((unsigned int *)qword_4DDD48 + ((0x3F79D71B4CB0A89LL * ((a1 - 1) ^ a1)) >> 58));
  else
    return 64;
}
// 4DDD48: using guessed type __int64 qword_4DDD48[32];
