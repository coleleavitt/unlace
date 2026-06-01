void __fastcall sub_1396ED0(_QWORD *a1)
{
  __int64 v1; // rsi

  v1 = *((unsigned int *)a1 + 20);
  *a1 = &off_2BB2570;
  operator delete(a1[8], 8 * v1, 4);
  operator delete(a1[5], 8LL * *((unsigned int *)a1 + 14), 4);
  operator delete(a1[2], 8LL * *((unsigned int *)a1 + 8), 4);
  operator delete(a1, 0x58u);
}
