/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A640C
// Address: 0x00000000000A640C

//----- (00000000000A640C) ----------------------------------------------------
pthread_mutex_t *__usercall sub_A640C@<X0>(char a1@<W0>, pthread_mutex_t *a2@<X8>)
{
  int v3; // [xsp+0h] [xbp-20h] BYREF
  char v4; // [xsp+4h] [xbp-1Ch]
  __int64 v5; // [xsp+8h] [xbp-18h]

  v5 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v4 = a1;
  v3 = 0;
  return sub_4A0EC(a2, &v3, 5u);
}
