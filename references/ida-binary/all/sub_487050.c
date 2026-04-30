void __fastcall folder_data_t__::vfunc_4(_QWORD *a1, const char *a2)
{
  __int64 v3; // rdi
  __int64 v4; // rdi

  v3 = a1[1];
  if ( v3 )
  {
    a1[2] = 0;
    qfree(v3, a2);
    a1[1] = 0;
    a1[3] = 0;
  }
  v4 = a1[4];
  if ( v4 )
  {
    a1[5] = 0;
    qfree(v4, a2);
    a1[4] = 0;
    a1[6] = 0;
  }
  a1[10] = 0;
}
