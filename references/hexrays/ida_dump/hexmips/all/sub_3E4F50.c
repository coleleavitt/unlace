__int64 __fastcall sub_3E4F50(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx

  v2 = operator new(0x190u);
  sub_195270(v2, a2);
  *(_QWORD *)(v2 + 376) = -1;
  *(_QWORD *)v2 = &off_4CCA70;
  *(_QWORD *)(v2 + 384) = -1;
  *(_BYTE *)(v2 + 392) = 0;
  *(_OWORD *)(v2 + 360) = -1;
  return v2;
}
