__int64 __fastcall sub_E13460(__int64 a1)
{
  __int64 v1; // rbx
  double v3[4]; // [rsp+8h] [rbp-20h] BYREF

  v1 = operator new(0x18u);
  *(_QWORD *)v1 = &off_2B21980;
  sub_A40BF0(a1, 0);
  *(_QWORD *)&v3[0] = a1;
  *(__m128 *)(v1 + 8) = _mm_loadh_ps(v3);
  return v1;
}

