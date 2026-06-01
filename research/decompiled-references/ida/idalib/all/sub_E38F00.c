void __fastcall sub_E38F00(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rsi

  *a1 = off_2C04DA8;
  operator delete(a1[19], 16LL * *((unsigned int *)a1 + 42), 8);
  operator delete(a1[16], 24LL * *((unsigned int *)a1 + 36), 8);
  v2 = a1[13];
  v3 = 16LL * *((unsigned int *)a1 + 30);
  *a1 = &off_2C04EC8;
  operator delete(v2, v3, 8);
  operator delete(a1[10], 16LL * *((unsigned int *)a1 + 24), 8);
  operator delete(a1[7], 16LL * *((unsigned int *)a1 + 18), 8);
  operator delete(a1[4], 16LL * *((unsigned int *)a1 + 12), 8);
  operator delete(a1, 0xC8u);
}
