void __fastcall sub_E78D70(_QWORD *a1)
{
  _QWORD *v2; // rdi
  __int64 v3; // rdi
  __int64 v4; // rsi

  *a1 = off_2C05018;
  v2 = (_QWORD *)a1[31];
  if ( v2 != a1 + 34 )
    free(v2);
  operator delete(a1[28], 24LL * *((unsigned int *)a1 + 60), 8);
  operator delete(a1[25], 24LL * *((unsigned int *)a1 + 54), 8);
  operator delete(a1[22], 16LL * *((unsigned int *)a1 + 48), 8);
  operator delete(a1[19], 16LL * *((unsigned int *)a1 + 42), 8);
  operator delete(a1[16], 24LL * *((unsigned int *)a1 + 36), 8);
  v3 = a1[13];
  v4 = 16LL * *((unsigned int *)a1 + 30);
  *a1 = &off_2C04EC8;
  operator delete(v3, v4, 8);
  operator delete(a1[10], 16LL * *((unsigned int *)a1 + 24), 8);
  operator delete(a1[7], 16LL * *((unsigned int *)a1 + 18), 8);
  operator delete(a1[4], 16LL * *((unsigned int *)a1 + 12), 8);
  operator delete(a1, 0x120u);
}
