/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14002D380
// Address: 0x000000014002D380

//----- (000000014002D380) ----------------------------------------------------
__int64 __fastcall sub_14002D380(__int64 a1, const char *a2)
{
  struct _RTL_CRITICAL_SECTION *v5; // rbx
  __int64 v6; // r15
  int v7; // edi
  unsigned __int64 v8; // rbp
  __int64 v9; // r12
  __int64 v10; // rsi
  const char *v11; // rcx

  if ( !a2 )
    return 0;
  v5 = (struct _RTL_CRITICAL_SECTION *)qword_1400CAFD8;
  sub_14005D6B0((struct _RTL_CRITICAL_SECTION *)qword_1400CAFD8);
  v6 = 0;
  v7 = 0;
  v8 = *(_QWORD *)(a1 + 72);
  if ( v8 )
  {
    v9 = *(_QWORD *)(a1 + 64);
    v10 = v9;
    while ( 1 )
    {
      v11 = Str1;
      if ( *(_QWORD *)(*(_QWORD *)v10 + 32LL) )
        v11 = *(const char **)(*(_QWORD *)v10 + 24LL);
      if ( !strcmp(v11, a2) )
        break;
      ++v7;
      v10 += 8;
      if ( v7 >= v8 )
        goto LABEL_11;
    }
    v6 = *(_QWORD *)(v9 + 8LL * v7);
  }
LABEL_11:
  sub_14005D6D0(v5);
  return v6;
}
