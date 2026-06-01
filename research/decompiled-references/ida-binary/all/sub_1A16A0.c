__int64 __fastcall message_box_request_t__::vfunc_1(_QWORD *a1, const char *a2)
{
  __int64 v3; // rdi
  __int64 v4; // rdi
  __int64 v5; // rdi
  __int64 v6; // rdi
  __int64 v7; // rdi
  __int64 v8; // rdi

  *a1 = message_box_request_t___vtable;
  v3 = a1[15];
  if ( v3 )
  {
    a1[16] = 0;
    qfree(v3, a2);
  }
  v4 = a1[12];
  if ( v4 )
  {
    a1[13] = 0;
    qfree(v4, a2);
  }
  v5 = a1[9];
  if ( v5 )
  {
    a1[10] = 0;
    qfree(v5, a2);
  }
  v6 = a1[6];
  if ( v6 )
  {
    a1[7] = 0;
    qfree(v6, a2);
  }
  v7 = a1[3];
  if ( v7 )
  {
    a1[4] = 0;
    qfree(v7, a2);
  }
  v8 = a1[2];
  *a1 = &off_86FF78;
  return qsem_free(v8);
}
