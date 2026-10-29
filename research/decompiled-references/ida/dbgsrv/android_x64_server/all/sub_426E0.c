/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_426E0
// Address: 0x00000000000426E0

//----- (00000000000426E0) ----------------------------------------------------
void __fastcall sub_426E0(__int64 a1)
{
  void *v2; // rdi
  void *v3; // rdi
  void *v4; // rdi

  *(_QWORD *)a1 = off_146DF0;
  v2 = *(void **)(a1 + 1104);
  if ( v2 )
  {
    *(_QWORD *)(a1 + 1112) = 0;
    qfree(v2);
    *(_QWORD *)(a1 + 1104) = 0;
    *(_QWORD *)(a1 + 1120) = 0;
  }
  v3 = *(void **)(a1 + 1080);
  if ( v3 )
  {
    *(_QWORD *)(a1 + 1088) = 0;
    qfree(v3);
    *(_QWORD *)(a1 + 1080) = 0;
    *(_QWORD *)(a1 + 1096) = 0;
  }
  v4 = *(void **)(a1 + 1056);
  if ( v4 )
  {
    *(_QWORD *)(a1 + 1064) = 0;
    qfree(v4);
    *(_QWORD *)(a1 + 1056) = 0;
    *(_QWORD *)(a1 + 1072) = 0;
  }
  sub_38490((char **)(a1 + 1032));
}
// 146DF0: using guessed type __int64 (__fastcall *off_146DF0[2])();
