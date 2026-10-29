/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45B230
// Address: 0x000000000045B230

//----- (000000000045B230) ----------------------------------------------------
__int64 __fastcall sub_45B230(__int64 a1, unsigned int a2, char a3, __int64 a4, _QWORD *a5)
{
  unsigned int *v5; // rax
  unsigned __int32 v6; // eax
  __int64 v7; // rdx
  __int64 result; // rax

  v5 = (unsigned int *)(a1 + 8LL * a2);
  if ( a3 == 1 )
  {
    *a5 = _byteswap_ulong(*v5);
    v6 = _byteswap_ulong(v5[1]);
  }
  else
  {
    *a5 = *v5;
    v6 = v5[1];
  }
  v7 = (unsigned __int8)v6;
  result = v6 >> 8;
  a5[3] = 0;
  a5[1] = v7;
  a5[2] = (unsigned int)result;
  return result;
}
