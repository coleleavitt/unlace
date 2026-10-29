/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100023210
// Address: 0x0000000100023210

//----- (0000000100023210) ----------------------------------------------------
void __fastcall sub_100023210(__int64 a1)
{
  void *v2; // rdi
  void *v3; // rdi
  void *v4; // rdi
  void *v5; // rdi
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // r12
  void *v9; // rdi

  *(_QWORD *)a1 = off_1000A7150;
  sub_10000C7D0(a1 + 1208, *(_QWORD **)(a1 + 1216));
  v2 = *(void **)(a1 + 1184);
  if ( v2 )
  {
    *(_QWORD *)(a1 + 1192) = 0;
    qfree(v2);
    *(_QWORD *)(a1 + 1184) = 0;
    *(_QWORD *)(a1 + 1200) = 0;
  }
  sub_10000C790(a1 + 1160, *(_QWORD **)(a1 + 1168));
  sub_10000C700(a1 + 1136, *(_QWORD **)(a1 + 1144));
  v3 = *(void **)(a1 + 1112);
  if ( v3 )
  {
    *(_QWORD *)(a1 + 1120) = 0;
    qfree(v3);
    *(_QWORD *)(a1 + 1112) = 0;
    *(_QWORD *)(a1 + 1128) = 0;
  }
  v4 = *(void **)(a1 + 1088);
  if ( v4 )
  {
    *(_QWORD *)(a1 + 1096) = 0;
    qfree(v4);
    *(_QWORD *)(a1 + 1088) = 0;
    *(_QWORD *)(a1 + 1104) = 0;
  }
  sub_100009A50(a1 + 864);
  v5 = *(void **)(a1 + 824);
  if ( v5 )
  {
    v6 = *(_QWORD *)(a1 + 832);
    if ( v6 )
    {
      v7 = 8;
      do
      {
        v8 = *(_QWORD *)(a1 + 824);
        v9 = *(void **)(v8 + v7);
        if ( v9 )
        {
          *(_QWORD *)(v8 + v7 + 8) = 0;
          qfree(v9);
          *(_QWORD *)(v8 + v7) = 0;
          *(_QWORD *)(v8 + v7 + 16) = 0;
        }
        v7 += 32;
        --v6;
      }
      while ( v6 );
      v5 = *(void **)(a1 + 824);
    }
    *(_QWORD *)(a1 + 832) = 0;
    qfree(v5);
    *(_QWORD *)(a1 + 824) = 0;
    *(_QWORD *)(a1 + 840) = 0;
  }
  sub_100009B50(a1);
}
// 1000A7150: using guessed type __int64 (__fastcall *off_1000A7150[4])();
