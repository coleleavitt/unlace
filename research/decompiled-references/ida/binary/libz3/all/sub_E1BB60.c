__m128i *__fastcall sub_E1BB60(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx

  v2 = sub_186B270(0x40u);
  *(_QWORD *)v2 = off_1C4CCD0;
  sub_180C5A0(v2 + 8, a2);
  *(_QWORD *)(v2 + 16) = 0;
  *(_QWORD *)v2 = &off_1C75D48;
  *(_OWORD *)(v2 + 24) = 0;
  *(_OWORD *)(v2 + 40) = 0;
  return sub_DF7FD0(a1, (void (***)())v2);
}

