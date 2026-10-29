/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14001FB30
// Address: 0x000000014001FB30

//----- (000000014001FB30) ----------------------------------------------------
__int64 __fastcall sub_14001FB30(__int64 a1)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  unsigned __int64 v3; // rdi
  __int64 i; // rax

  v2 = (struct _RTL_CRITICAL_SECTION *)qword_1400CAFD8;
  sub_14005D6B0((struct _RTL_CRITICAL_SECTION *)qword_1400CAFD8);
  v3 = *(_QWORD *)(a1 + 8);
  if ( v3 )
  {
    if ( v3 < qword_1400CAFB0 )
    {
      sub_1400643F0(*((FILE **)qword_1400CAFA8 + v3));
      *((_QWORD *)qword_1400CAFA8 + v3) = 0;
      for ( i = qword_1400CAFB0; i; qword_1400CAFB0 = --i )
      {
        if ( *((_QWORD *)qword_1400CAFA8 + i - 1) )
          break;
        if ( !i )
          break;
      }
    }
  }
  sub_14005D6D0(v2);
  return 0;
}
// 1400CAFB0: using guessed type __int64 qword_1400CAFB0;
