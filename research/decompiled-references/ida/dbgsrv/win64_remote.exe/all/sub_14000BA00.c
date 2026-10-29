/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14000BA00
// Address: 0x000000014000BA00

//----- (000000014000BA00) ----------------------------------------------------
void __fastcall sub_14000BA00(__int64 a1)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx
  void *v5; // rcx

  *(_QWORD *)a1 = off_140092C48;
  sub_14000E2B0(a1);
  v2 = *(void **)(a1 + 1320);
  if ( v2 )
  {
    *(_QWORD *)(a1 + 1328) = 0;
    j_free(v2);
    *(_QWORD *)(a1 + 1320) = 0;
    *(_QWORD *)(a1 + 1336) = 0;
  }
  sub_14000AF00(a1 + 1224);
  sub_14000ADD0(a1 + 1200);
  sub_140009770(a1 + 1088, a1 + 1088, *(_QWORD *)(*(_QWORD *)(a1 + 1088) + 8LL));
  j_j_free(*(void **)(a1 + 1088));
  sub_14000A6E0((void **)(a1 + 1072));
  v3 = *(void **)(a1 + 1024);
  if ( v3 )
  {
    *(_QWORD *)(a1 + 1032) = 0;
    j_free(v3);
    *(_QWORD *)(a1 + 1024) = 0;
    *(_QWORD *)(a1 + 1040) = 0;
  }
  sub_14000A740((void **)(a1 + 1008));
  sub_140009860(a1 + 992, a1 + 992, *(_QWORD *)(*(_QWORD *)(a1 + 992) + 8LL));
  j_j_free(*(void **)(a1 + 992));
  sub_140009860(a1 + 976, a1 + 976, *(_QWORD *)(*(_QWORD *)(a1 + 976) + 8LL));
  j_j_free(*(void **)(a1 + 976));
  sub_140009860(a1 + 960, a1 + 960, *(_QWORD *)(*(_QWORD *)(a1 + 960) + 8LL));
  j_j_free(*(void **)(a1 + 960));
  sub_140009860(a1 + 944, a1 + 944, *(_QWORD *)(*(_QWORD *)(a1 + 944) + 8LL));
  j_j_free(*(void **)(a1 + 944));
  sub_140009860(a1 + 928, a1 + 928, *(_QWORD *)(*(_QWORD *)(a1 + 928) + 8LL));
  j_j_free(*(void **)(a1 + 928));
  v4 = *(void **)(a1 + 856);
  if ( v4 )
  {
    *(_QWORD *)(a1 + 864) = 0;
    j_free(v4);
    *(_QWORD *)(a1 + 856) = 0;
    *(_QWORD *)(a1 + 872) = 0;
  }
  v5 = *(void **)(a1 + 808);
  if ( v5 )
  {
    *(_QWORD *)(a1 + 816) = 0;
    j_free(v5);
    *(_QWORD *)(a1 + 808) = 0;
    *(_QWORD *)(a1 + 824) = 0;
  }
  sub_14000B140(a1);
}
// 140092C48: using guessed type __int64 (__fastcall *off_140092C48[4])();
