void __fastcall sub_CAEF20(_QWORD *a1)
{
  __int64 v2; // rsi
  _QWORD *v3; // rdi

  v2 = *((unsigned int *)a1 + 368);
  *a1 = &off_2C04B80;
  operator delete(a1[182], 16 * v2, 8);
  v3 = (_QWORD *)a1[172];
  if ( v3 != a1 + 174 )
    free(v3);
  operator delete(a1[163], 16LL * *((unsigned int *)a1 + 330), 8);
  operator delete(a1[160], 24LL * *((unsigned int *)a1 + 324), 8);
  sub_D898B0(a1);
  operator delete(a1, 0x5F8u);
}
