/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4C468
// Address: 0x0004C468

//----- (0004C468) --------------------------------------------------------
unsigned __int8 *__fastcall sub_4C468(unsigned __int8 *result, unsigned __int8 *a2)
{
  unsigned __int64 v2; // r6
  unsigned __int64 v3; // r4
  bool v4; // cf
  int v5; // r3

  v2 = *((_QWORD *)result + 1);
  v3 = *((_QWORD *)a2 + 1);
  if ( *result )
  {
    *((_DWORD *)result + 2) = v2 < v3;
    *((_DWORD *)result + 3) = 0;
    *result = 0;
  }
  else if ( *a2 )
  {
    v4 = HIDWORD(v2) >= HIDWORD(v3);
    *((_DWORD *)result + 3) = *result;
    if ( HIDWORD(v2) == HIDWORD(v3) )
      v4 = (unsigned int)v2 >= (unsigned int)v3;
    v5 = !v4;
    *((_DWORD *)result + 2) = v5;
    *result = 0;
  }
  else
  {
    *((_DWORD *)result + 3) = *a2;
    *((_DWORD *)result + 2) = (__int64)v2 < (__int64)v3;
    *result = 0;
  }
  return result;
}
