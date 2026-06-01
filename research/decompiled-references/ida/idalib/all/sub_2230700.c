_QWORD *__fastcall sub_2230700(_QWORD *a1, size_t a2, const void ***a3)
{
  _QWORD v4[4]; // [rsp+8h] [rbp-20h] BYREF

  sub_2230400(v4, a2, a3, 0);
  if ( v4[0] )
  {
    memset(*(void **)(v4[0] + 8LL), 0, a2);
    *a1 = v4[0];
  }
  else
  {
    *a1 = 0;
  }
  return a1;
}
