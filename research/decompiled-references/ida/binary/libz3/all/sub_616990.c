void *__fastcall sub_616990(
        __int64 a1,
        __int64 a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7,
        double a8,
        double a9)
{
  void *v10; // r12
  double v11; // xmm4_8
  double v12; // xmm5_8
  char v13; // dl
  char v14; // al
  __int64 v15; // rbp
  double v16; // xmm4_8
  double v17; // xmm5_8
  void *v18; // rdi

  if ( !(unsigned __int8)sub_1859630(
                           **(_QWORD **)(*(_QWORD *)(a1 + 32) + 32LL),
                           "xform.subsumption_checker",
                           *(_QWORD *)(*(_QWORD *)(a1 + 32) + 32LL) + 8LL,
                           1) )
    return nullptr;
  *(_BYTE *)(a1 + 128) = 0;
  sub_613C60(a1, a2);
  sub_614FC0(a1);
  sub_614E70(a1, a2);
  *(_BYTE *)(a1 + 128) = 0;
  v10 = (void *)sub_186B270(0xF8u);
  sub_63D370(v10, *(_QWORD *)(a1 + 32));
  v13 = sub_6159D0(a1, a2, (__int64)v10, a3, a4, a5, a6, v11, v12, a9);
  v14 = *(_BYTE *)(a1 + 128);
  if ( v13 )
    goto LABEL_5;
  if ( v14 )
  {
    do
    {
      *(_BYTE *)(a1 + 128) = 0;
      v15 = sub_186B270(0xF8u);
      sub_63D370(v15, *(_QWORD *)(a1 + 32));
      sub_6159D0(a1, (__int64)v10, v15, a3, a4, a5, a6, v16, v17, a9);
      sub_63D960(v10);
      v18 = v10;
      v10 = (void *)v15;
      sub_186B220(v18);
      v14 = *(_BYTE *)(a1 + 128);
LABEL_5:
      ;
    }
    while ( v14 );
    return v10;
  }
  else
  {
    sub_63D960(v10);
    sub_186B220(v10);
    return nullptr;
  }
}

