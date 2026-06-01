/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1400203A0
// Address: 0x00000001400203A0

//----- (00000001400203A0) ----------------------------------------------------
__int64 sub_1400203A0()
{
  struct _RTL_CRITICAL_SECTION *v0; // rbx
  FILE **v1; // rdi
  FILE **v2; // rsi

  v0 = (struct _RTL_CRITICAL_SECTION *)qword_1400CAFD8;
  sub_14005D6B0((struct _RTL_CRITICAL_SECTION *)qword_1400CAFD8);
  v1 = (FILE **)qword_1400CAFA8;
  v2 = (FILE **)((char *)qword_1400CAFA8 + 8 * qword_1400CAFB0);
  if ( qword_1400CAFA8 != v2 )
  {
    do
    {
      if ( *v1 )
        sub_1400643F0(*v1);
      ++v1;
    }
    while ( v1 != v2 );
  }
  qword_1400CAFB0 = 0;
  sub_14005D6D0(v0);
  return 0;
}
// 1400CAFB0: using guessed type __int64 qword_1400CAFB0;
