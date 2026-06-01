/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140055030
// Address: 0x0000000140055030

//----- (0000000140055030) ----------------------------------------------------
void __fastcall sub_140055030(__int64 a1)
{
  __int64 v2; // rdi
  char *v3; // rax
  void *v4; // rcx
  void *v5; // rcx

  v2 = *(_QWORD *)(a1 + 16);
  if ( v2 )
  {
    v3 = (char *)qword_1400CB5E8;
    if ( !qword_1400CB5E8 )
    {
      v3 = sub_1400571D0(2u);
      qword_1400CB5E8 = (__int64)v3;
    }
    ((void (__fastcall *)(__int64))v3)(v2);
    *(_QWORD *)(a1 + 16) = 0;
  }
  sub_14005D710(*(void **)(a1 + 32));
  *(_QWORD *)(a1 + 32) = 0;
  sub_14005D670(*(struct _RTL_CRITICAL_SECTION **)(a1 + 24));
  *(_QWORD *)(a1 + 24) = 0;
  v4 = *(void **)(a1 + 64);
  if ( v4 )
  {
    *(_QWORD *)(a1 + 72) = 0;
    j_free(v4);
    *(_QWORD *)(a1 + 64) = 0;
    *(_QWORD *)(a1 + 80) = 0;
  }
  v5 = *(void **)(a1 + 40);
  if ( v5 )
  {
    *(_QWORD *)(a1 + 48) = 0;
    j_free(v5);
    *(_QWORD *)(a1 + 40) = 0;
    *(_QWORD *)(a1 + 56) = 0;
  }
}
// 1400CB5E8: using guessed type __int64 qword_1400CB5E8;
