/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14002D440
// Address: 0x000000014002D440

//----- (000000014002D440) ----------------------------------------------------
__int64 __fastcall sub_14002D440(__int64 a1, const char *a2)
{
  struct _RTL_CRITICAL_SECTION *v5; // rbx
  __int64 v6; // rdi
  __int64 v7; // rsi
  const char *v8; // rcx
  __int64 v9; // rdi

  if ( !a2 )
    return 0;
  v5 = (struct _RTL_CRITICAL_SECTION *)qword_1400CAFD8;
  sub_14005D6B0((struct _RTL_CRITICAL_SECTION *)qword_1400CAFD8);
  v6 = *(_QWORD *)(a1 + 88);
  v7 = v6 + 56LL * *(_QWORD *)(a1 + 96);
  if ( v6 == v7 )
  {
LABEL_8:
    v9 = 0;
  }
  else
  {
    while ( 1 )
    {
      v8 = Str1;
      if ( *(_QWORD *)(v6 + 8) )
        v8 = *(const char **)v6;
      if ( !strcmp(v8, a2) )
        break;
      v6 += 56;
      if ( v6 == v7 )
        goto LABEL_8;
    }
    v9 = v6 + 24;
  }
  sub_14005D6D0(v5);
  return v9;
}
