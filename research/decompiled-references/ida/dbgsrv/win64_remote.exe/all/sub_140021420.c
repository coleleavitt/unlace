/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140021420
// Address: 0x0000000140021420

//----- (0000000140021420) ----------------------------------------------------
void __fastcall sub_140021420(__int64 a1)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  __int64 v3; // rax
  bool v4; // zf
  void *v5; // rcx
  void *v6; // rcx

  if ( *(_BYTE *)(a1 + 145) )
  {
    v2 = (struct _RTL_CRITICAL_SECTION *)qword_1400CAFD8;
    sub_14005D6B0((struct _RTL_CRITICAL_SECTION *)qword_1400CAFD8);
    v3 = *(_QWORD *)(a1 + 8);
    v4 = (*(_DWORD *)(v3 + 120))-- == 1;
    if ( v4 && off_1400C6078 )
      off_1400C6078();
    sub_14005D6D0(v2);
  }
  *(_DWORD *)a1 = 0;
  *(_QWORD *)(a1 + 128) = 0;
  *(_QWORD *)(a1 + 136) = 0;
  v5 = *(void **)(a1 + 72);
  if ( v5 )
  {
    *(_QWORD *)(a1 + 80) = 0;
    j_free(v5);
    *(_QWORD *)(a1 + 72) = 0;
    *(_QWORD *)(a1 + 88) = 0;
  }
  v6 = *(void **)(a1 + 48);
  if ( v6 )
  {
    *(_QWORD *)(a1 + 56) = 0;
    j_free(v6);
    *(_QWORD *)(a1 + 48) = 0;
    *(_QWORD *)(a1 + 64) = 0;
  }
  sub_1400213B0(a1 + 24);
}
// 1400C6078: using guessed type __int64 (*off_1400C6078)();
