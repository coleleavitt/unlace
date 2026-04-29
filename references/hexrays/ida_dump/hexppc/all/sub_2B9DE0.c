__int64 __fastcall sub_2B9DE0(__int64 *a1, __int64 a2, int *a3)
{
  int v3; // ebp
  __int64 v4; // rbx
  __int64 v5; // rax

  v3 = *a3;
  v4 = operator new(0x50u);
  v5 = *a1;
  *(_QWORD *)v4 = &off_4CE0D0;
  *(_QWORD *)(v4 + 8) = a2;
  *(_QWORD *)(v4 + 16) = 0;
  *(_QWORD *)(v4 + 40) = v5;
  *(_QWORD *)(v4 + 48) = -1;
  *(_OWORD *)(v4 + 24) = 0;
  switch_dbctx(v3);
  *(_QWORD *)(v4 + 48) = sub_2B2400(*(_QWORD *)(v4 + 40), 0);
  sub_67E30((__int64 *)(v4 + 16), (__int64)"vd.nalt.%s<%a>", "funcargs", 0.0);
  *(_QWORD *)(v4 + 56) = 0;
  *(_QWORD *)v4 = &off_4CE300;
  *(_OWORD *)(v4 + 64) = 0;
  return v4;
}
