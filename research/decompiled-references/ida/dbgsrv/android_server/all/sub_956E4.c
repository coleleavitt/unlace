/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_956E4
// Address: 0x00000000000956E4

//----- (00000000000956E4) ----------------------------------------------------
unsigned __int64 __fastcall sub_956E4(__int64 a1, unsigned int a2, char a3, int a4, _QWORD *a5)
{
  __int64 *v5; // x20
  __int64 v6; // x0
  unsigned __int64 result; // x0
  unsigned __int64 v9; // x8

  v5 = (__int64 *)(a1 + 16LL * a2);
  v6 = *v5;
  if ( a3 == 1 )
  {
    *a5 = swap64(v6);
    result = swap64(v5[1]);
LABEL_6:
    a5[1] = (unsigned int)result;
    v9 = HIDWORD(result);
    goto LABEL_7;
  }
  *a5 = v6;
  result = v5[1];
  if ( a3 != 2 || a4 != 8 )
    goto LABEL_6;
  a5[1] = HIBYTE(result);
  v9 = (unsigned int)result;
LABEL_7:
  a5[2] = v9;
  a5[3] = 0;
  return result;
}
