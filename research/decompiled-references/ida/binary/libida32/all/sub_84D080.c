_BYTE *__fastcall sub_84D080(unsigned int *a1)
{
  char *v1; // rax
  char *v2; // rax

  sub_847570(a1, 5, 0);
  sub_849F80(a1, 0x42u, 1, 0, 1, 0, 0x7Fu, 10);
  if ( !*a1 )
  {
    a1[36] = 0;
    v1 = sub_844340((__int64)a1, 0x11u, 127, 3, 1, 0);
    if ( v1 )
      v1[1] |= 0x38u;
  }
  sub_84CDF0((__int64)a1, 32, 4, 5);
  if ( !*a1 )
  {
    a1[36] = 0;
    v2 = sub_844340((__int64)a1, 0x11u, 127, 123, 1, 0);
    if ( v2 )
      v2[1] |= 0x38u;
  }
  sub_84CDF0((__int64)a1, 582, 4, 0);
  return sub_8455A0(a1, 5);
}

