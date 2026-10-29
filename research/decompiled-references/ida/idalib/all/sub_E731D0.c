void __fastcall sub_E731D0(_QWORD *a1)
{
  __int64 v1; // rsi

  v1 = *((unsigned int *)a1 + 8);
  *a1 = &off_2B4B990;
  operator delete(a1[2], 16 * v1, 8);
  operator delete(a1, 0x38u);
}
