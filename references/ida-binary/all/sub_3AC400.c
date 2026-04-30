double __fastcall sub_3AC400(_QWORD *a1, const char *a2)
{
  double v2; // xmm0_8
  double v3; // xmm0_8

  v2 = qfree(*a1, a2);
  *a1 = 0;
  v3 = qfree(a1[1], a2, v2);
  a1[1] = 0;
  return qfree(a1[2], a2, v3);
}
