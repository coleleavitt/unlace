void __fastcall sub_19F5E80(_QWORD *a1)
{
  __int64 v1; // rsi
  _QWORD *v3; // rdi

  v1 = *((unsigned int *)a1 + 30);
  *a1 = off_2C60DD0;
  operator delete(a1[13], 16 * v1, 8);
  v3 = (_QWORD *)a1[3];
  if ( v3 != a1 + 5 )
    free(v3);
  operator delete(a1, 0x90u);
}
