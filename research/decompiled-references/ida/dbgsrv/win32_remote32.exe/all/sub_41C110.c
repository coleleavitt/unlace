/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_41C110
// Address: 0x0041C110

//----- (0041C110) --------------------------------------------------------
int __usercall sub_41C110@<eax>(int a1@<ebx>, int a2@<edi>, __m128i a3@<xmm0>, int a4, ...)
{
  int *v4; // eax
  int *v6; // [esp-10h] [ebp-14h]
  va_list va; // [esp+Ch] [ebp+8h] BYREF

  va_start(va, a4);
  v6 = sub_46953A(1);
  v4 = sub_41C0F0();
  return sub_46B544(a1, a2, a3, *v4, v4[1], (int)v6, a4, 0, (int)va);
}
