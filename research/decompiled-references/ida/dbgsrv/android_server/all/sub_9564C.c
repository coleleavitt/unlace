/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_9564C
// Address: 0x000000000009564C

//----- (000000000009564C) ----------------------------------------------------
unsigned __int64 __fastcall sub_9564C(__int64 a1, unsigned int a2, char a3, int a4, _QWORD *a5)
{
  __int64 *v5; // x21
  __int64 v6; // x0
  unsigned __int64 v9; // x0
  unsigned __int64 result; // x0

  v5 = (__int64 *)(a1 + 24LL * a2);
  v6 = *v5;
  if ( a3 == 1 )
  {
    *a5 = swap64(v6);
    v9 = swap64(v5[1]);
  }
  else
  {
    *a5 = v6;
    v9 = v5[1];
    if ( a3 == 2 && a4 == 8 )
    {
      a5[1] = HIBYTE(v9);
      a5[2] = (unsigned int)v9;
      result = v5[2];
      goto LABEL_8;
    }
  }
  a5[1] = (unsigned int)v9;
  a5[2] = HIDWORD(v9);
  result = v5[2];
  if ( a3 == 1 )
    result = swap64(result);
LABEL_8:
  a5[3] = result;
  return result;
}
