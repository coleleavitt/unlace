/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4C408
// Address: 0x0004C408

//----- (0004C408) --------------------------------------------------------
unsigned __int8 *__fastcall sub_4C408(unsigned __int8 *result, unsigned __int8 *a2)
{
  unsigned __int64 v2; // r4
  unsigned __int64 v3; // r6
  bool v4; // cf
  int v5; // r3

  v2 = *((_QWORD *)result + 1);
  v3 = *((_QWORD *)a2 + 1);
  if ( *result )
  {
    *((_DWORD *)result + 2) = v3 >= v2;
    *((_DWORD *)result + 3) = 0;
    *result = 0;
  }
  else if ( *a2 )
  {
    v4 = HIDWORD(v3) >= HIDWORD(v2);
    *((_DWORD *)result + 3) = *result;
    if ( HIDWORD(v3) == HIDWORD(v2) )
      v4 = (unsigned int)v3 >= (unsigned int)v2;
    v5 = v4;
    *((_DWORD *)result + 2) = v5;
    *result = 0;
  }
  else
  {
    *((_DWORD *)result + 3) = *a2;
    *((_DWORD *)result + 2) = (__int64)v3 >= (__int64)v2;
    *result = 0;
  }
  return result;
}
