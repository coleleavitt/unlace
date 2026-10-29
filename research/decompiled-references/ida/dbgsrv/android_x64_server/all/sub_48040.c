/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_48040
// Address: 0x0000000000048040

//----- (0000000000048040) ----------------------------------------------------
void __fastcall sub_48040(__int64 a1)
{
  void *v2; // rdi
  void *v3; // rdi
  void *v4; // rdi
  void *v5; // rdi
  void *v6; // rdi
  void *v7; // rdi
  void *v8; // rdi
  void *v9; // rdi
  void *v10; // rdi
  void *v11; // rdi

  *(_QWORD *)a1 = off_146A50;
  *(_QWORD *)(a1 + 1216) = 0;
  *(_QWORD *)(a1 + 824) = 0;
  *(_QWORD *)(a1 + 1128) = 0;
  v2 = *(void **)(a1 + 1256);
  if ( v2 )
  {
    *(_QWORD *)(a1 + 1264) = 0;
    qfree(v2);
    *(_QWORD *)(a1 + 1256) = 0;
    *(_QWORD *)(a1 + 1272) = 0;
  }
  v3 = *(void **)(a1 + 1232);
  if ( v3 )
  {
    *(_QWORD *)(a1 + 1240) = 0;
    qfree(v3);
    *(_QWORD *)(a1 + 1232) = 0;
    *(_QWORD *)(a1 + 1248) = 0;
  }
  sub_488B0(a1 + 1192, *(_QWORD **)(a1 + 1200));
  v4 = *(void **)(a1 + 1152);
  if ( v4 )
  {
    *(_QWORD *)(a1 + 1160) = 0;
    qfree(v4);
    *(_QWORD *)(a1 + 1152) = 0;
    *(_QWORD *)(a1 + 1168) = 0;
  }
  v5 = *(void **)(a1 + 1104);
  if ( v5 )
  {
    *(_QWORD *)(a1 + 1112) = 0;
    qfree(v5);
    *(_QWORD *)(a1 + 1104) = 0;
    *(_QWORD *)(a1 + 1120) = 0;
  }
  v6 = *(void **)(a1 + 1080);
  if ( v6 )
  {
    *(_QWORD *)(a1 + 1088) = 0;
    qfree(v6);
    *(_QWORD *)(a1 + 1080) = 0;
    *(_QWORD *)(a1 + 1096) = 0;
  }
  v7 = *(void **)(a1 + 1056);
  if ( v7 )
  {
    *(_QWORD *)(a1 + 1064) = 0;
    qfree(v7);
    *(_QWORD *)(a1 + 1056) = 0;
    *(_QWORD *)(a1 + 1072) = 0;
  }
  sub_488F0(a1 + 1032, *(_QWORD **)(a1 + 1040));
  sub_48950(a1 + 1008, *(_QWORD **)(a1 + 1016));
  sub_488B0(a1 + 984, *(_QWORD **)(a1 + 992));
  v8 = *(void **)(a1 + 960);
  if ( v8 )
  {
    *(_QWORD *)(a1 + 968) = 0;
    qfree(v8);
    *(_QWORD *)(a1 + 960) = 0;
    *(_QWORD *)(a1 + 976) = 0;
  }
  v9 = *(void **)(a1 + 936);
  if ( v9 )
  {
    *(_QWORD *)(a1 + 944) = 0;
    qfree(v9);
    *(_QWORD *)(a1 + 936) = 0;
    *(_QWORD *)(a1 + 952) = 0;
  }
  v10 = *(void **)(a1 + 912);
  if ( v10 )
  {
    *(_QWORD *)(a1 + 920) = 0;
    qfree(v10);
    *(_QWORD *)(a1 + 912) = 0;
    *(_QWORD *)(a1 + 928) = 0;
  }
  v11 = *(void **)(a1 + 888);
  if ( v11 )
  {
    *(_QWORD *)(a1 + 896) = 0;
    qfree(v11);
    *(_QWORD *)(a1 + 888) = 0;
    *(_QWORD *)(a1 + 904) = 0;
  }
  sub_377A0(a1);
}
// 146A50: using guessed type __int64 (__fastcall *off_146A50[5])();
