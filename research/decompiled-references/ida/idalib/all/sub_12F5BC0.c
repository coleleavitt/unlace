__int64 __fastcall sub_12F5BC0(__m128i **a1)
{
  __m128i *v1; // rdi
  char v3[136]; // [rsp+0h] [rbp-88h] BYREF

  sub_1365750(v3);
  v1 = *a1;
  *(_QWORD *)v3 = off_2C437C8;
  sub_12F56A0(v1, v3);
  *(_QWORD *)v3 = &off_2C43730;
  return sub_13657A0(v3);
}
