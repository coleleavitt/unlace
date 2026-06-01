/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100009920
// Address: 0x0000000100009920

//----- (0000000100009920) ----------------------------------------------------
char __fastcall sub_100009920(__int64 a1, unsigned int a2, double a3, double a4)
{
  void *v5; // rdi
  void *v6; // rdi
  char result; // al
  char v8; // r12
  unsigned int v9; // r15d

  sub_1000015C0((char **)(a1 + 376));
  sub_10000C700(a1 + 1136, *(_QWORD **)(a1 + 1144));
  *(_QWORD *)(a1 + 1136) = a1 + 1144;
  *(_OWORD *)(a1 + 1144) = 0;
  *(_QWORD *)(a1 + 1072) = -1;
  *(_QWORD *)(a1 + 1080) = 0;
  v5 = *(void **)(a1 + 1088);
  if ( v5 )
  {
    *(_QWORD *)(a1 + 1096) = 0;
    qfree(v5);
    *(_QWORD *)(a1 + 1088) = 0;
    *(_QWORD *)(a1 + 1104) = 0;
  }
  v6 = *(void **)(a1 + 1112);
  if ( v6 )
  {
    *(_QWORD *)(a1 + 1120) = 0;
    qfree(v6);
    *(_QWORD *)(a1 + 1112) = 0;
    *(_QWORD *)(a1 + 1128) = 0;
  }
  result = sub_100064120((_QWORD *)a1);
  if ( result )
  {
    v8 = result;
    v9 = sub_100006580(a1, 1);
    sub_100003D20(a1, 0.0);
    sub_100007470(a1, a2, v9);
    sub_100003FF0(a1, 0.0, a4);
    sub_100007940(a1, a2);
    return v8;
  }
  return result;
}
