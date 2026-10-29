__m128i *__fastcall sub_E1AE50(__int64 a1)
{
  __int64 v1; // rbx

  v1 = sub_186B270(0x48u);
  *(_QWORD *)v1 = off_1C4CCD0;
  sub_180C5A0(v1 + 8, "eval");
  *(_QWORD *)(v1 + 16) = 0;
  *(_QWORD *)v1 = &off_1C75C00;
  *(_QWORD *)(v1 + 64) = 0;
  *(_OWORD *)(v1 + 24) = 0;
  *(_OWORD *)(v1 + 40) = 0;
  return sub_DF7FD0(a1, (void (***)())v1);
}

